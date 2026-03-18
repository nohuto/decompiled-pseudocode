/*
 * XREFs of CmpSearchForOpenSubKeys @ 0x1406A2128
 * Callers:
 *     CmpFreezeHive @ 0x1406A20B0 (CmpFreezeHive.c)
 *     NtQueryOpenSubKeys @ 0x14086AAB0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14086ACD0 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1408819A4 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1406A3680 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDumpKeyBodyList @ 0x140871440 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchForOpenSubKeys(__int64 a1, int a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(); // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0;
  v8 = a1;
  v9[0] = 0LL;
  v9[1] = a3;
  if ( a2 )
  {
    v5 = (unsigned int)(a2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
        __fastfail(5u);
      v6 = CmpSearchAndTagNoDelayCloseWorker;
    }
    else
    {
      v6 = CmpSearchAndRehashWorker;
    }
  }
  else
  {
    v3 = 1;
    v6 = CmpSearchAndCountWorker;
    CmpDumpKeyBodyList(a1, v9);
  }
  LOBYTE(v5) = v3;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), __int64 *))CmpEnumerateAllOpenSubKeys)(
    a1,
    v5,
    v6,
    &v8);
  return LODWORD(v9[0]);
}

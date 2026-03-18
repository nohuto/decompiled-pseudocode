/*
 * XREFs of NtUserCalcMenuBar @ 0x1C005E250
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcMenuBar @ 0x1C005E394 (xxxCalcMenuBar.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int128 *v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF
  __int128 v21; // [rsp+48h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-10h]

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  v13 = 0;
  if ( v11 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    *((_QWORD *)&v21 + 1) = v11;
    HMLockObject(v11);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v14 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v14 = (__int128 *)MmUserProbeAddress;
        v15 = *v14;
      }
      else
      {
        v15 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
      }
      v20 = v15;
      v13 = xxxCalcMenuBar(v11, a2, a3, a4, (__int64)&v20);
    }
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12);
  return v13;
}

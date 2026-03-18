/*
 * XREFs of NtUserCalcMenuBar @ 0x1C00FB1C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxCalcMenuBar @ 0x1C00FB304 (xxxCalcMenuBar.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
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
  v10 = ValidateHwnd(a1);
  v11 = 0;
  if ( v10 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v10;
    HMLockObject(v10);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL, v12, v13);
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
        v15 = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
      }
      v20 = v15;
      v11 = xxxCalcMenuBar(v10, a2, a3, a4, (__int64)&v20);
    }
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}

/*
 * XREFs of NtUserScrollWindowEx @ 0x1C0069400
 * Callers:
 *     <none>
 * Callees:
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        __int64 a6,
        ULONG64 a7,
        int a8)
{
  __int128 *v10; // rsi
  _OWORD *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagWND *v14; // rbx
  __int64 v15; // r8
  ULONG64 v16; // rdx
  ULONG64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int128 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h]
  __int128 v23; // [rsp+90h] [rbp-78h]
  __int128 v24; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-58h] BYREF

  v10 = (__int128 *)a5;
  v11 = (_OWORD *)a7;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v14 = (struct tagWND *)ValidateHwnd(a1);
  if ( v14 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    *((_QWORD *)&v21 + 1) = v14;
    HMLockObject(v14);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v23 = *a4;
    }
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v10 = (__int128 *)MmUserProbeAddress;
      v24 = *v10;
      v10 = &v24;
    }
    v18 = xxxScrollWindowEx(v14, (__int64)v10, a6, (unsigned __int64)&v25 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v17 = MmUserProbeAddress;
      v16 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v11 = (_OWORD *)MmUserProbeAddress;
      *v11 = v25;
    }
    ThreadUnlock1(v17, v16, v19);
  }
  else
  {
    v18 = 0;
  }
  UserSessionSwitchLeaveCrit(v13, v12, v15);
  return v18;
}

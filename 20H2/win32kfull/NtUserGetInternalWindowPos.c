/*
 * XREFs of NtUserGetInternalWindowPos @ 0x1C01FA140
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetInternalWindowPos(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // ebx
  _OWORD *v9; // rax
  _QWORD *v10; // rdx
  _OWORD v12[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v12, 0, 44);
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    if ( a2 )
    {
      v9 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = *v9;
    }
    if ( a3 )
    {
      v10 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = *v10;
    }
    LODWORD(v12[0]) = 44;
    GetWindowPlacement(v7, (__int64)v12, 0);
    v8 = DWORD2(v12[0]);
    if ( a2 )
      *a2 = *(_OWORD *)((char *)&v12[1] + 12);
    if ( a3 )
      *a3 = *(_QWORD *)((char *)v12 + 12);
  }
  else
  {
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}

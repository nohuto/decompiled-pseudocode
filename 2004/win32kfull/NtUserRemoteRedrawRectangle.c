/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C02019A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C021EFCC (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF

  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    *(_QWORD *)&v17 = __PAIR64__(a2, a1);
    *((_QWORD *)&v17 + 1) = __PAIR64__(a4, a3);
    RemoteRedrawRectangle(&v17);
    v15 = 0;
  }
  else
  {
    v15 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v12, v13);
  return v15;
}

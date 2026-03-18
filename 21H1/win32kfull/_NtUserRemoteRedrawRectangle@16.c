/*
 * XREFs of _NtUserRemoteRedrawRectangle@16 @ 0x168257
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _RemoteRedrawRectangle@4 @ 0x1814F1 (_RemoteRedrawRectangle@4.c)
 */

int __stdcall NtUserRemoteRedrawRectangle(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v6; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+14h] [ebp-Ch]
  int v9; // [esp+18h] [ebp-8h]

  v6 = 0;
  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    v8 = a3;
    v6 = a1;
    v9 = a4;
    v7 = a2;
    RemoteRedrawRectangle(&v6);
  }
  else
  {
    v4 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}

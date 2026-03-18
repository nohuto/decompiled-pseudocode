/*
 * XREFs of __ChangeWindowMessageFilter@8 @ 0x7FB78
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     ?ValidateChangeMessageFilter@@YGHPAUtagPROCESSINFO@@I@Z @ 0x7FFEC (-ValidateChangeMessageFilter@@YGHPAUtagPROCESSINFO@@I@Z.c)
 *     ?AddMessageToFilter@@YGHPAPAPAXIPAH@Z @ 0x80026 (-AddMessageToFilter@@YGHPAPAPAXIPAH@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z @ 0xE6A5C (-RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x181012 (-MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

int __stdcall _ChangeWindowMessageFilter(int a1, int a2)
{
  int v2; // esi
  BOOL v3; // edi
  const wchar_t *v6; // eax
  const wchar_t *v7; // eax
  struct tagPROCESSINFO *v8; // [esp+0h] [ebp-284h]
  unsigned int v9; // [esp+0h] [ebp-284h]
  struct tagMSGSQM_PROCESSSQMINFO *v10; // [esp+4h] [ebp-280h]
  int *v11; // [esp+4h] [ebp-280h]
  void **v12[2]; // [esp+Ch] [ebp-278h] BYREF
  _DWORD v13[11]; // [esp+14h] [ebp-270h] BYREF
  _DWORD v14[16]; // [esp+40h] [ebp-244h] BYREF
  _BYTE v15[512]; // [esp+80h] [ebp-204h] BYREF

  v2 = 0;
  v12[0] = 0;
  v3 = 0;
  v12[1] = (void **)PsGetCurrentProcessWin32Process();
  if ( gfWinMsgSQMIsOptedIn )
  {
    memset(v13, 0, sizeof(v13));
    MsgSQMPopulateProcessSQMInfo(v8, v10);
    if ( (unsigned __int16)a1 >= 0xC000u )
      v3 = UserGetAtomName((unsigned __int16)a1, v15, 255) != 0;
    v6 = (const wchar_t *)v13;
    if ( !LOWORD(v13[0]) )
      v6 = L"(null)";
    v14[1] = v6;
    v14[3] = v13[8];
    v14[5] = v13[9];
    v14[7] = v13[10];
    v14[13] = a2;
    v7 = (const wchar_t *)v15;
    v14[0] = 2;
    v14[2] = 1;
    v14[4] = 1;
    v14[6] = 1;
    v14[9] = 1;
    v14[8] = 1;
    v14[11] = a1;
    v14[10] = 1;
    v14[12] = 1;
    if ( !v3 )
      v7 = L"(null)";
    if ( !*v7 )
      v7 = L"(null)";
    v14[15] = v7;
    v14[14] = 2;
    WinSqmAddToStream(_gSqmSession, 6265, 8, v14);
  }
  if ( !(unsigned __int8)Enforced() )
    return 1;
  if ( ValidateChangeMessageFilter(v8, (unsigned int)v10) )
  {
    if ( a2 == 1 )
      return AddMessageToFilter(0, v9, v11);
    if ( a2 != 2 )
    {
      UserSetLastError(87);
      return v2;
    }
    v2 = RemoveMessageFromFilter(v12, v9, v11);
    if ( !v2 || !v12[0] )
      return v2;
    UserSetLastError(87);
    return 0;
  }
  return 0;
}

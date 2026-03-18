/*
 * XREFs of __ChangeWindowMessageFilterEx@16 @ 0x7FD26
 * Callers:
 *     _NtUserChangeWindowMessageFilterEx@16 @ 0x7FC14 (_NtUserChangeWindowMessageFilterEx@16.c)
 * Callees:
 *     ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE (-VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z.c)
 *     _FreeWindowMessageFilter@4 @ 0x71856 (_FreeWindowMessageFilter@4.c)
 *     ?GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z @ 0x7FF2A (-GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z.c)
 *     ?ValidateChangeMessageFilter@@YGHPAUtagPROCESSINFO@@I@Z @ 0x7FFEC (-ValidateChangeMessageFilter@@YGHPAUtagPROCESSINFO@@I@Z.c)
 *     ?AddMessageToFilter@@YGHPAPAPAXIPAH@Z @ 0x80026 (-AddMessageToFilter@@YGHPAPAPAXIPAH@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     ?VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z @ 0x9B3CC (-VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z @ 0x9C710 (-IsMessageAllowedByFilterEx@@YGHPBQAXIPAPAPAX1@Z.c)
 *     ?RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z @ 0xE6A5C (-RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x181012 (-MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

int __fastcall _ChangeWindowMessageFilterEx(int a1, int a2, int a3, int a4)
{
  BOOL v6; // esi
  const wchar_t *v8; // eax
  const wchar_t *v9; // eax
  struct tagPROCESSINFO *v10; // [esp+0h] [ebp-290h]
  struct tagWND *v11; // [esp+0h] [ebp-290h]
  unsigned int v12; // [esp+0h] [ebp-290h]
  void ***v13; // [esp+0h] [ebp-290h]
  unsigned int v14; // [esp+0h] [ebp-290h]
  struct tagMSGSQM_PROCESSSQMINFO *v15; // [esp+4h] [ebp-28Ch]
  int *v16; // [esp+4h] [ebp-28Ch]
  void ***v17; // [esp+4h] [ebp-28Ch]
  void **v18; // [esp+18h] [ebp-278h] BYREF
  int v19; // [esp+1Ch] [ebp-274h]
  _DWORD v20[11]; // [esp+20h] [ebp-270h] BYREF
  _DWORD v21[16]; // [esp+4Ch] [ebp-244h] BYREF
  _BYTE v22[512]; // [esp+8Ch] [ebp-204h] BYREF

  v19 = 0;
  v18 = 0;
  PsGetCurrentProcessWin32Process();
  *(_DWORD *)(a4 + 4) = 0;
  v6 = 0;
  if ( gfWinMsgSQMIsOptedIn )
  {
    memset(v20, 0, sizeof(v20));
    MsgSQMPopulateProcessSQMInfo(v10, v15);
    if ( (unsigned __int16)a2 >= 0xC000u )
      v6 = UserGetAtomName((unsigned __int16)a2, v22, 255) != 0;
    v8 = (const wchar_t *)v20;
    if ( !LOWORD(v20[0]) )
      v8 = L"(null)";
    v21[1] = v8;
    v21[3] = v20[8];
    v21[5] = v20[9];
    v21[7] = v20[10];
    v21[13] = a3;
    v9 = (const wchar_t *)v22;
    v21[0] = 2;
    v21[2] = 1;
    v21[4] = 1;
    v21[6] = 1;
    v21[9] = 0;
    v21[8] = 1;
    v21[11] = a2;
    v21[10] = 1;
    v21[12] = 1;
    if ( !v6 )
      v9 = L"(null)";
    if ( !*v9 )
      v9 = L"(null)";
    v21[15] = v9;
    v21[14] = 2;
    WinSqmAddToStream(_gSqmSession, 6265, 8, v21);
  }
  if ( !(unsigned __int8)Enforced() )
    return 1;
  if ( !ValidateChangeMessageFilter(v10, (unsigned int)v15) )
    return 0;
  if ( !a3 )
  {
    FreeWindowMessageFilter(a1);
    return 1;
  }
  GetWindowMessageFilter(v11);
  if ( a3 == 1 )
  {
    v19 = AddMessageToFilter(&v18, v12, v16);
    if ( v19 )
    {
      if ( v18 )
        *(_DWORD *)(a4 + 4) = 1;
    }
  }
  else if ( a3 == 2 )
  {
    v19 = RemoveMessageFromFilter(&v18, v12, v16);
    if ( v19 )
    {
      if ( IsMessageAllowedByFilterEx(0, 0, v13, v17) || IsMessageAlwaysAllowedAcrossIL(v14) )
      {
        *(_DWORD *)(a4 + 4) = 3;
      }
      else if ( v18 )
      {
        *(_DWORD *)(a4 + 4) = 2;
      }
    }
  }
  return v19;
}

/*
 * XREFs of ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0 (-HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0xB550A (-HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z @ 0xC8F5A (-HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z.c)
 *     _lambda_52fdf85b089c14a0a285e54336b65a14_::operator() @ 0xF1AE2 (_lambda_52fdf85b089c14a0a285e54336b65a14_--operator().c)
 *     ?HKAddChildHotkey@@YG_NPAUtagTHREADINFO@@PAUtagHOTKEY@@PAUtagWND@@HG@Z @ 0x155D4E (-HKAddChildHotkey@@YG_NPAUtagTHREADINFO@@PAUtagHOTKEY@@PAUtagWND@@HG@Z.c)
 * Callees:
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge NotifyHotKeyRegistrationChanged(
        int *a1@<ecx>,
        struct tagHOTKEY *const a2,
        struct tagCHILDHOTKEY *const a3,
        bool a4)
{
  int *v5; // edx
  int v6; // ecx
  __int16 v7; // ax
  int v8; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-18h] BYREF
  HANDLE ThreadId; // [esp+14h] [ebp-10h]
  __int16 v11; // [esp+18h] [ebp-Ch]
  char v12; // [esp+1Ah] [ebp-Ah]
  char v13; // [esp+1Bh] [ebp-9h]

  if ( !a1[1] && (!IsPseudoPwnd((void *)a1[2]) || !v6) )
  {
    v7 = *((_WORD *)a1 + 7);
    if ( (v7 & 0x9C00) == 0 )
    {
      v13 = 0;
      if ( v5 )
      {
        v8 = *v5;
      }
      else
      {
        if ( (v7 & 0x300) != 0 )
          return;
        v8 = *a1;
      }
      v9[1] = *(_DWORD *)(*(_DWORD *)(v8 + 232) + 32);
      if ( v8 )
        ThreadId = PsGetThreadId(*(PETHREAD *)v8);
      else
        ThreadId = 0;
      v9[0] = (unsigned __int8)a2;
      v11 = *((_WORD *)a1 + 6);
      v12 = *((_BYTE *)a1 + 16);
      SendMessageTo(15, v9, 16);
    }
  }
}

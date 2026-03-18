/*
 * XREFs of ?HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0xB550A
 * Callers:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 *     ??$IsHotkeyQueryMatch@PAUtagCHILDHOTKEY@@@@YG_NPAUtagCHILDHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x155CB4 (--$IsHotkeyQueryMatch@PAUtagCHILDHOTKEY@@@@YG_NPAUtagCHILDHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@H.c)
 */

char __thiscall HKRemoveMatchingChildHotkeys(_DWORD *this, int a2, int a3, int a4)
{
  char v4; // bl
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // eax
  struct tagCHILDHOTKEY *v10; // [esp+0h] [ebp-1Ch]
  bool v11; // [esp+4h] [ebp-18h]
  _DWORD *v12; // [esp+10h] [ebp-Ch]

  v4 = 0;
  v5 = this + 7;
  v6 = (_DWORD *)this[7];
  if ( v6 != this + 7 )
  {
    do
    {
      v12 = (_DWORD *)*v6;
      if ( (unsigned __int8)IsHotkeyQueryMatch<tagCHILDHOTKEY *>(a2, a3, a4) )
      {
        NotifyHotKeyRegistrationChanged(0, v10, v11);
        HMAssignmentUnlock(v6 - 3);
        v7 = (_DWORD *)*v6;
        if ( *(_DWORD **)(*v6 + 4) != v6 || (v8 = (_DWORD *)v6[1], (_DWORD *)*v8 != v6) )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = v8;
        Win32FreePool(v6 - 4);
        v4 = 1;
      }
      v6 = v12;
    }
    while ( v12 != v5 );
  }
  return v4;
}

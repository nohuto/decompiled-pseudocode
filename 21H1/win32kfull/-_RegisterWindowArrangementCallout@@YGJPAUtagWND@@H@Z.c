/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0
 * Callers:
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsIAMThread@4 @ 0xAC466 (_IsIAMThread@4.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     __UnregisterHotKey@8 @ 0xCA2CC (__UnregisterHotKey@8.c)
 *     ?IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E8A (-IsManagementWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z.c)
 *     ?Registered@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E98 (-Registered@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z.c)
 *     ?SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z @ 0xF4EA4 (-SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z.c)
 */

int __stdcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  struct tagHOTKEY *v5; // ecx
  int v7; // [esp-4h] [ebp-14h]
  ShellWindowManagement *v8; // [esp+0h] [ebp-10h]
  ShellWindowManagement *v9; // [esp+0h] [ebp-10h]
  ShellWindowManagement *v10; // [esp+0h] [ebp-10h]
  const struct tagDESKTOP *v11; // [esp+4h] [ebp-Ch]
  struct tagWND *v12; // [esp+4h] [ebp-Ch]
  struct tagDESKTOP *v13; // [esp+4h] [ebp-Ch]
  struct tagWND *v14; // [esp+8h] [ebp-8h]

  v2 = *(_DWORD *)(_gptiCurrent + 248);
  if ( (*(_BYTE *)(PsGetCurrentProcessWin32Process() + 8) & 0x88) != 0 || !IAMThreadAccessGranted(_gptiCurrent) )
    goto LABEL_18;
  if ( !a2 )
  {
    if ( !ShellWindowManagement::Registered(v8, v11) )
      return 1;
    if ( ShellWindowManagement::IsManagementWindow(v9, v12) && *(_DWORD *)(*(_DWORD *)(v2 + 200) + 8) == _gptiCurrent )
    {
      _UnregisterHotKey(v5, (struct tagHOTKEY *)0xF060);
      ShellWindowManagement::SetWindow(v10, v13, v14);
      return 1;
    }
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(v2 + 200) )
  {
    if ( *((_DWORD *)a1 + 2) == _gptiCurrent )
    {
      if ( IsShellProcess(*(_DWORD **)(_gptiCurrent + 232)) )
      {
        LOBYTE(v4) = IsIAMThread(_gptiCurrent);
        if ( v4 )
        {
          if ( IsMessageOnlyWindow((int)a1) && (*(_DWORD *)(*((_DWORD *)a1 + 5) + 184) & 0xF) == 2 )
          {
            ShellWindowManagement::SetWindow(v8, v11, v14);
            _RegisterHotKey(*(struct tagTHREADINFO **)(v2 + 200), 0, (struct tagTHREADINFO *)0xF060, 0x7001u, 0x73u);
            return 1;
          }
          v7 = 87;
LABEL_19:
          v3 = v7;
          goto LABEL_20;
        }
      }
    }
LABEL_18:
    v7 = 5;
    goto LABEL_19;
  }
  v3 = 1242;
LABEL_20:
  UserSetLastError((struct _NT_TIB *)v3);
  return 0;
}

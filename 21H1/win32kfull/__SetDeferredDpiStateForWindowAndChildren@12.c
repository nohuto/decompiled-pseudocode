/*
 * XREFs of __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48
 * Callers:
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52 (_xxxRestoreWindowFromDeferredStateIfNeeded@8.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _NtUserDeferWindowDpiChanges@4 @ 0xCC608 (_NtUserDeferWindowDpiChanges@4.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall _SetDeferredDpiStateForWindowAndChildren(int a1, int a2, int a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v15; // [esp+Ch] [ebp-10h]
  _DWORD *v16; // [esp+10h] [ebp-Ch]
  __int16 v17; // [esp+14h] [ebp-8h]

  v4 = 0;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 20);
  if ( a2 == (*(_WORD *)(v6 + 182) != 0) || (*(_BYTE *)(a1 + 176) & 1) != 0 && !a3 )
    return 0;
  v17 = a2 ? *(_WORD *)(v6 + 180) : 0;
  v7 = BuildHwndList(a1, 1, 0);
  v8 = v7;
  v15 = v7;
  if ( !v7 )
    return 0;
  v16 = (_DWORD *)(v7 + 16);
  v9 = *(_DWORD *)(v7 + 16);
  if ( v9 != 1 )
  {
    do
    {
      LOBYTE(v8) = 1;
      v10 = HMValidateHandleNoSecure(v9, v8);
      v11 = v10;
      if ( v10 && ((*(_BYTE *)(v10 + 176) & 1) == 0 || a3 && !a2) )
      {
        *(_WORD *)(*(_DWORD *)(v10 + 20) + 182) = v17;
        v12 = *(_DWORD **)(v10 + 172);
        if ( a2 )
        {
          if ( v12 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v13 = *(_DWORD **)(a1 + 168);
          *(_DWORD *)(v11 + 172) = v13;
          ++*v13;
        }
        else if ( v12 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(), (v12 = *(_DWORD **)(v11 + 172)) != 0) )
        {
          --*v12;
          if ( !**(_DWORD **)(v11 + 172) )
            Win32FreePool(*(_DWORD *)(v11 + 172));
          *(_DWORD *)(v11 + 172) = 0;
        }
      }
      v9 = *++v16;
    }
    while ( *v16 != 1 );
    v5 = a2;
    v8 = v15;
  }
  if ( a3 )
  {
    if ( v5 )
      v4 = 1;
  }
  *(_DWORD *)(a1 + 176) = v4 | *(_DWORD *)(a1 + 176) & 0xFFFFFFFE;
  FreeHwndList(v8);
  return 1;
}

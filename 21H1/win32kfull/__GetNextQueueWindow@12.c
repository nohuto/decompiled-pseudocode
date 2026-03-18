/*
 * XREFs of __GetNextQueueWindow@12 @ 0x15D1B0
 * Callers:
 *     _xxxSwitchToThisWindow@8 @ 0x11FBE (_xxxSwitchToThisWindow@8.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _IsWindowUnderActiveLockScreen@4 @ 0x26C7A (_IsWindowUnderActiveLockScreen@4.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     ?GetWindowWorker@@YGPAUtagWND@@PAU1@IH@Z @ 0x1B6E6A (-GetWindowWorker@@YGPAUtagWND@@PAU1@IH@Z.c)
 */

struct tagWND *__fastcall _GetNextQueueWindow(int a1, int a2, int a3)
{
  int LastTopMostWindow; // eax
  int TopLevelWindow; // esi
  struct tagWND *TopLevelHostForComponent; // eax
  int v6; // eax
  struct tagWND *v7; // ecx
  struct tagWND *v8; // edi
  int v9; // ebx
  struct tagWND *WindowWorker; // esi
  char *v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v16; // [esp+0h] [ebp-24h]
  int v17; // [esp+4h] [ebp-20h]
  ULONG_PTR v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch]
  int v21; // [esp+20h] [ebp-4h]

  v19 = 0;
  LastTopMostWindow = a1;
  if ( a1 || (LastTopMostWindow = GetLastTopMostWindow(0)) != 0 )
  {
    v18 = gspwndAltTab;
    TopLevelWindow = _GetTopLevelWindow(LastTopMostWindow);
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
    v6 = _GetTopLevelWindow((int)TopLevelHostForComponent);
    if ( v6 )
      TopLevelWindow = v6;
    v8 = (struct tagWND *)TopLevelWindow;
    v21 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v9 = *(_DWORD *)(TopLevelWindow + 56);
      if ( !v9 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
        TopLevelWindow = *(_DWORD *)(v9 + 60);
        v8 = (struct tagWND *)TopLevelWindow;
        v21 = TopLevelWindow;
      }
      if ( TopLevelWindow )
      {
        while ( 1 )
        {
          WindowWorker = GetWindowWorker(v7, v16, v17);
          if ( !WindowWorker )
          {
            WindowWorker = *(struct tagWND **)(v9 + 60);
            if ( a2 )
              WindowWorker = GetWindowWorker(v7, v16, v17);
            if ( v19 )
              break;
            v19 = 1;
            if ( !WindowWorker )
              break;
          }
          if ( WindowWorker == v8 )
            break;
          if ( WindowWorker != (struct tagWND *)v18 )
          {
            v11 = (char *)*((_DWORD *)WindowWorker + 5);
            if ( v11[16] >= 0
              && (v11[19] & 8) == 0
              && !IsWindowUnderActiveLockScreen(WindowWorker)
              && (v11[23] & 0x10) != 0
              && !GetWindowCloakState(v7) )
            {
              v12 = *((_DWORD *)WindowWorker + 27);
              if ( !v12
                || (*(_BYTE *)(*(_DWORD *)(v12 + 20) + 23) & 8) == 0
                && (!a3
                 || (v13 = *((_DWORD *)WindowWorker + 5), (*(_BYTE *)(v13 + 16) & 8) == 0)
                 && (*(_BYTE *)(v13 + 12) & 0x20) == 0) )
              {
                v14 = *((_DWORD *)WindowWorker + 16);
                v7 = WindowWorker;
                while ( v14 )
                {
                  v7 = (struct tagWND *)v14;
                  v14 = *(_DWORD *)(v14 + 64);
                }
                if ( WindowWorker == *((struct tagWND **)v7 + 27) )
                  return WindowWorker;
              }
            }
            v8 = (struct tagWND *)v21;
          }
        }
      }
    }
  }
  return 0;
}

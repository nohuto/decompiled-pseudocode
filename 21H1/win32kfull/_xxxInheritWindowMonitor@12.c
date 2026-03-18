/*
 * XREFs of _xxxInheritWindowMonitor@12 @ 0x26E0E
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _NtUserInheritWindowMonitor@8 @ 0x165362 (_NtUserInheritWindowMonitor@8.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 *     ?HasMaximizedState@@YG_NPAUtagWND@@@Z @ 0x171595 (-HasMaximizedState@@YG_NPAUtagWND@@@Z.c)
 */

int __fastcall xxxInheritWindowMonitor(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v8; // edi
  int TopLevelWindow; // edx
  int v10; // edi
  int NewMonitor; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // edx
  int v16; // esi
  PKTHREAD v17; // eax
  int v18; // eax
  int v19; // ecx
  int *v20; // ecx
  int v21; // edx
  struct tagWND *v22; // [esp+0h] [ebp-38h]
  _DWORD *v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  int v25; // [esp+18h] [ebp-20h]
  int v26; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h]
  _DWORD v29[4]; // [esp+28h] [ebp-10h] BYREF

  v23 = a2;
  v24 = 1;
  v4 = a1[5];
  v5 = (_DWORD *)(v4 + 52);
  v6 = *(_DWORD *)(v4 + 164);
  v29[0] = *v5++;
  v29[1] = *v5++;
  v29[2] = *v5;
  v29[3] = v5[1];
  v8 = ValidateHmonitorNoRip(v6);
  v25 = v8;
  TopLevelWindow = _GetTopLevelWindow(v23);
  v23 = (_DWORD *)TopLevelWindow;
  if ( v8 )
    v10 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 20) + 52);
  else
    v10 = 0;
  if ( a3 )
  {
    if ( a2 )
      v24 = InternalSetProp(*a2, 1);
    else
      InternalRemoveProp(1);
    TopLevelWindow = (int)v23;
  }
  v28 = 0;
  if ( (a1 != a2 ? (unsigned int)a2 : 0) == 0
    || TopLevelWindow && (*(_BYTE *)(*(_DWORD *)(TopLevelWindow + 20) + 12) & 0x20) != 0
    || (v16 = ValidateHmonitorNoRip(*(_DWORD *)(*(a1 != a2 ? a2 + 5 : (_DWORD *)20) + 164))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0, v29);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v26 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v26;
    v27 = NewMonitor;
    HMLockObject(NewMonitor);
    v14 = *(unsigned __int16 *)(*(_DWORD *)(NewMonitor + 20) + 52);
    if ( (_WORD)v14 != (_WORD)v10 )
      xxxAppAdjustDpiCandidateRect(a1, v14, a1[5] + 52, v29);
  }
  else
  {
    v17 = KeGetCurrentThread();
    v18 = W32GetThreadWin32Thread(v17);
    v26 = *(_DWORD *)(v18 + 228);
    *(_DWORD *)(v18 + 228) = &v26;
    v27 = v16;
    HMLockObject(v16);
    if ( !HasMaximizedState(v22) )
    {
      v19 = a1[5];
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 2 && (*(_DWORD *)(a1[2] + 352) & 0x2000000) == 0 )
      {
        if ( v25 )
        {
          v20 = (int *)(v19 + 52);
          v23 = (_DWORD *)*v20;
          v25 = v20[1];
          v21 = *(unsigned __int16 *)(*(_DWORD *)(v16 + 20) + 52);
          if ( (_WORD)v21 != (_WORD)v10 && !xxxAppAdjustDpiCandidateRect(a1, v21, v20, v29) )
            ScaleDPIRect(
              v29,
              (int *)(a1[5] + 52),
              *(_WORD *)(*(_DWORD *)(v16 + 20) + 52),
              v10,
              (int)v23,
              v25,
              (int)v23,
              v25);
        }
      }
    }
  }
  v23 = 0;
  if ( ThreadUnlock1() && UpdateMonitorForWindowAndChildren(&v23, 0) )
    xxxNotifyMonitorChanged(a1, v29, v23, v10);
  return v24;
}

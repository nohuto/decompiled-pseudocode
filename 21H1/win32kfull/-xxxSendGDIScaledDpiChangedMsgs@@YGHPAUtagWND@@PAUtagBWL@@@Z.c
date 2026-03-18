/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z @ 0x150504
 * Callers:
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YGHPAUHWND__@@@Z @ 0x150481 (-xxxSendGDIScaledDpiChangedMessage@@YGHPAUHWND__@@@Z.c)
 */

int __fastcall xxxSendGDIScaledDpiChangedMsgs(int a1, int a2)
{
  int v3; // edi
  int v5; // ecx
  int v6; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v9; // eax
  PKTHREAD v10; // eax
  void **i; // ebx
  int v12; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v12 = 0;
  v6 = *(_DWORD *)(v5 + 144);
  if ( (v6 & 0x4000000) == 0 )
    return 0;
  *(_DWORD *)(v5 + 144) = v6 & 0xFBFFFFFF;
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    v9 = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(v9) + 248) )
    {
      v10 = KeGetCurrentThread();
      if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v10) + 248) + 4) + 32) & 1) != 0
        && (*(_DWORD *)(*(_DWORD *)(a1 + 20) + 184) & 0x4000000F) == 0x40000000 )
      {
        if ( _IsTopLevelWindow((_DWORD *)a1) )
        {
          if ( a2 || (v12 = 1, (a2 = BuildHwndList(a1, 1, 0)) != 0) )
          {
            v3 = xxxSendGDIScaledDpiChangedMessage(*(void **)a1);
            for ( i = (void **)(a2 + 20); (unsigned int)i < *(_DWORD *)(a2 + 4); ++i )
              v3 |= xxxSendGDIScaledDpiChangedMessage(*i);
            if ( v12 )
              FreeHwndList((struct tagBWL *)a2);
          }
        }
      }
    }
  }
  return v3;
}

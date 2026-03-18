/*
 * XREFs of ?MNCheckScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagMONITOR@@@Z @ 0x196697
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 */

int __fastcall MNCheckScroll(int **a1, int **a2, int a3)
{
  unsigned int v4; // esi
  int ProcessDpiMetrics; // eax
  int v6; // edx
  unsigned int v7; // esi
  int v8; // ecx
  unsigned int v9; // esi
  int v10; // ecx
  int i; // edx
  int v12; // eax
  bool v13; // zf
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  int v18; // eax
  int **v20; // [esp-8h] [ebp-2Ch] BYREF
  int **v21; // [esp-4h] [ebp-28h]
  int v22; // [esp+10h] [ebp-14h]
  int v23; // [esp+14h] [ebp-10h]
  int v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+1Ch] [ebp-8h]

  v22 = 0;
  v21 = a1;
  v20 = a1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v20, **a1);
  MNGetPopupBoundsRect(0, v20, v21);
  v4 = v25 - v23;
  if ( *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 32) && *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 32) < v4 )
    v4 = *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 32);
  if ( *(_DWORD *)(**a2 + 56)
    && *(_DWORD *)(**(_DWORD **)(**a2 + 56) + 44) == *(_DWORD *)(**a2 + 36)
    && *(_DWORD *)(**a2 + 40) + 6 > v4 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      ProcessDpiMetrics = GetProcessDpiMetrics();
    else
      ProcessDpiMetrics = Get96DpiMetrics();
    v6 = 0;
    v7 = -6 - 2 * *(_DWORD *)(ProcessDpiMetrics + 24) + v4;
    v8 = *(_DWORD *)(**a2 + 56);
    if ( *(int *)(*(_DWORD *)(**a2 + 20) + 24) > 0 )
    {
      do
      {
        if ( *(_DWORD *)(*(_DWORD *)v8 + 40) > v7 )
          break;
        ++v6;
        v8 += 80;
      }
      while ( v6 < *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) );
      if ( v6 )
        v8 -= 80;
    }
    v9 = 0;
    *(_DWORD *)(**a2 + 40) = *(_DWORD *)(*(_DWORD *)v8 + 40);
    v10 = *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) - 1;
    for ( i = *(_DWORD *)(**a2 + 56) + 80 * v10; v10 >= 0; --v10 )
    {
      v9 += *(_DWORD *)(*(_DWORD *)i + 48);
      if ( v9 > *(_DWORD *)(**a2 + 40) )
        break;
      i -= 80;
    }
    if ( v10 != *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) - 1 )
      ++v10;
    *(_DWORD *)(**a2 + 76) = v10;
    if ( *(_DWORD *)(**a2 + 72) > v10 )
      *(_DWORD *)(**a2 + 72) = v10;
    v12 = **a2;
    if ( *(_DWORD *)(v12 + 72) == v10 )
    {
      *(_DWORD *)(v12 + 80) |= 3u;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 72) == 0;
      v14 = **a2;
      v15 = *(_DWORD *)(v14 + 80);
      if ( v13 )
        v16 = v15 & 0xFFFFFFFC | 2;
      else
        v16 = v15 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v14 + 80) = v16;
    }
    v17 = **a2;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v18 = GetProcessDpiMetrics();
    else
      v18 = Get96DpiMetrics();
    return *(_DWORD *)(v17 + 40) + 2 * *(_DWORD *)(v18 + 24);
  }
  else
  {
    *(_DWORD *)(**a2 + 80) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 72) = 0;
    *(_DWORD *)(**a2 + 76) = 0;
    return *(_DWORD *)(**a2 + 40);
  }
}

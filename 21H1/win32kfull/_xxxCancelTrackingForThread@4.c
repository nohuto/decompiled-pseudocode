/*
 * XREFs of _xxxCancelTrackingForThread@4 @ 0x17668C
 * Callers:
 *     _xxxCancelTracking@0 @ 0x17842 (_xxxCancelTracking@0.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _IsInsideMenuLoop@4 @ 0xACC66 (_IsInsideMenuLoop@4.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 */

void __stdcall xxxCancelTrackingForThread(int a1)
{
  int v1; // edi
  unsigned int v2; // eax
  int v3; // eax

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 368);
    if ( v1 )
    {
      v2 = *(_DWORD *)(v1 + 184);
      if ( (v2 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0);
        v2 = *(_DWORD *)(v1 + 184) & 0xF7FFFFFF;
      }
      *(_DWORD *)(v1 + 184) = v2 | 8;
      if ( (*(_BYTE *)(a1 + 264) & 0x10) != 0 )
      {
        bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
        if ( (*(_BYTE *)(v1 + 184) & 0x20) == 0 )
          xxxDrawDragRectEx(v1, 0, 2, v1 + 12);
      }
      *(_DWORD *)(a1 + 264) &= ~0x10u;
      if ( *(_DWORD *)(a1 + 236) )
        SetWakeBit(a1, 2);
      if ( IsInsideMenuLoop((_DWORD *)a1) )
      {
        v3 = *(_DWORD *)(a1 + 368);
        if ( v3 )
          _PostMessage(*(_DWORD *)(v3 + 8), 31, 0, 0);
      }
      xxxCapture((_DWORD *)a1, 0, 0);
    }
  }
}

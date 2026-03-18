/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C0210FC0
 * Callers:
 *     xxxCancelTracking @ 0x1C00BF350 (xxxCancelTracking.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     IsInsideMenuLoop @ 0x1C01164B8 (IsInsideMenuLoop.c)
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 672);
    if ( v1 )
    {
      v3 = *(_DWORD *)(v1 + 196);
      if ( (v3 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v3 = *(_DWORD *)(v1 + 196) & 0xF7FFFFFF;
      }
      *(_DWORD *)(v1 + 196) = v3 | 8;
      if ( (*(_DWORD *)(a1 + 488) & 0x10) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
          xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
      }
      *(_DWORD *)(a1 + 488) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 432) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v4 = *(_QWORD *)(a1 + 672);
        if ( v4 )
          PostMessage(*(_QWORD *)(v4 + 16), 31, 0, 0);
      }
      xxxCapture(a1, 0LL, 0);
    }
  }
}

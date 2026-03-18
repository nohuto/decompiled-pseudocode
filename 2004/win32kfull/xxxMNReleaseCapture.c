/*
 * XREFs of xxxMNReleaseCapture @ 0x1C023B4CC
 * Callers:
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C024B45C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 8);
    if ( (v1 & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = v1 & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
      xxxReleaseCapture();
      if ( gpqForeground )
      {
        v2 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v2 )
        {
          if ( *(_QWORD *)(v2 + 16) == gptiCurrent )
            xxxWindowEvent(0x80000005, (struct tagWND *)v2, 0, 1u, 0x21u);
        }
      }
    }
  }
}

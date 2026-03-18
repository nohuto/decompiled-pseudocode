/*
 * XREFs of _xxxMNReleaseCapture@4 @ 0x19A19C
 * Callers:
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 */

void __thiscall xxxMNReleaseCapture(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  if ( this )
  {
    v1 = this[1];
    if ( (v1 & 0x40000) != 0 )
    {
      this[1] = v1 & 0xFFFBFFFF;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= ~0x100000u;
      xxxReleaseCapture();
      if ( _gpqForeground )
      {
        v2 = *(_DWORD *)(_gpqForeground + 60);
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 8) == _gptiCurrent )
            xxxWindowEvent(0x80000005, (struct tagEVENTHOOK *)v2, 0, (struct tagWND *)1, 33);
        }
      }
    }
  }
}

/*
 * XREFs of _xxxDesktopsRecalcAndBroadcastDisplayChange@16 @ 0xB0710
 * Callers:
 *     _xxxDeferredDesktopRotation@0 @ 0x1815B6 (_xxxDeferredDesktopRotation@0.c)
 * Callees:
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _xxxDesktopsRecalc@8 @ 0xB0468 (_xxxDesktopsRecalc@8.c)
 *     _xxxBroadcastDisplaySettingsChange@12 @ 0xB2668 (_xxxBroadcastDisplaySettingsChange@12.c)
 */

int __stdcall xxxDesktopsRecalcAndBroadcastDisplayChange(int a1, int a2, unsigned __int16 a3, int a4)
{
  int i; // esi

  if ( a2 )
  {
    xxxDesktopsRecalc(*(_DWORD *)(a1 + 20), a2);
  }
  else
  {
    for ( i = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12) + 60); i; i = *(_DWORD *)(i + 48) )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 13) & 8) != 0 )
        SelectWindowRgn(i, (HRGN)2, 0);
    }
  }
  return xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(_gpsi + 6240) != a3, a4);
}

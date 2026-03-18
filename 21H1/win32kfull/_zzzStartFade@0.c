/*
 * XREFs of _zzzStartFade@0 @ 0x153F74
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 *     _zzzShowFade@0 @ 0x153F22 (_zzzShowFade@0.c)
 */

int __stdcall zzzStartFade()
{
  int v0; // edi
  unsigned int v1; // ebx
  int v2; // ecx
  int v3; // esi
  unsigned int v4; // edx

  GreSetDCOwnerEx(_gfade[1], 0, 0, 1);
  GreSetBitmapOwner(_gfade[2], 0);
  zzzShowFade();
  v0 = MEMORY[0xFFDF0004];
  v1 = (40 * (int)_gfade[7] + 255) / 0xFFu;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v3 = MEMORY[0xFFDF0324];
    v4 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v3 = MEMORY[0xFFDF0324];
        v4 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v0 = MEMORY[0xFFDF0004];
      v1 = (40 * (int)_gfade[7] + 255) / 0xFFu;
    }
    v2 = v0 * (v3 << 8) + (((unsigned int)v0 * (unsigned __int64)v4) >> 24);
  }
  else
  {
    v2 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  _gfade[8] = (HDEV)(v2 - v1);
  return _SetSystemTimer(
           _gTermIO[1],
           (char *)0xFFF6,
           ((unsigned int)_gfade[9] & 0x80) != 0 ? 50 : 10,
           (int)xxxSystemTimerProc,
           1);
}

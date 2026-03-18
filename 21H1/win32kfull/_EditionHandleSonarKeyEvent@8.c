/*
 * XREFs of _EditionHandleSonarKeyEvent@8 @ 0xAB072
 * Callers:
 *     <none>
 * Callees:
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 */

char __stdcall EditionHandleSonarKeyEvent(int a1, char a2)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a1 + 2);
  if ( (v2 & 0x4000) == 0 )
  {
    if ( v2 >= 0 )
    {
      if ( ((unsigned __int16)_gpdwCPUserPreferencesMask & 0x4000) != 0 && _gfade[36] < 0 )
      {
        StopFade();
        giSonarRadius = -1;
      }
      LOBYTE(v2) = a2;
      if ( gbLastVkForSonar != a2 )
        gbLastVkForSonar = a2;
    }
    else
    {
      if ( a2 == 17 && gbLastVkForSonar == 17 && ((unsigned __int16)_gpdwCPUserPreferencesMask & 0x4000) != 0 )
        zzzStartSonar();
      LOBYTE(v2) = (_BYTE)_gpdwCPUserPreferencesMask;
      if ( ((unsigned __int16)_gpdwCPUserPreferencesMask & 0x4000) != 0 && gbLastVkForSonar )
        gbLastVkForSonar = 0;
    }
  }
  return v2;
}

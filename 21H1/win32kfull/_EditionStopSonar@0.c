/*
 * XREFs of _EditionStopSonar@0 @ 0xD4D1E
 * Callers:
 *     <none>
 * Callees:
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 */

void *__stdcall EditionStopSonar()
{
  void *result; // eax

  result = _gpdwCPUserPreferencesMask;
  if ( ((unsigned __int16)_gpdwCPUserPreferencesMask & 0x4000) != 0 )
  {
    result = *(void **)_gfade;
    if ( _gfade[36] < 0 )
    {
      EnterCrit(0, 1);
      if ( ((unsigned __int16)_gpdwCPUserPreferencesMask & 0x4000) != 0 && _gfade[36] < 0 )
      {
        StopFade();
        giSonarRadius = -1;
        if ( ((unsigned __int16)_gpdwCPUserPreferencesMask & 0x4000) != 0 )
        {
          if ( gbLastVkForSonar )
            gbLastVkForSonar = 0;
        }
      }
      return (void *)UserSessionSwitchLeaveCrit();
    }
  }
  return result;
}

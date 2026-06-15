/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C7534
 * Callers:
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x18006E2AC (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 *     s_apmSetVolumeGroupGainForId @ 0x1800F8E60 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x18006B56C (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}

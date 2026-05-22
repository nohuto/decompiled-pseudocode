/*
 * XREFs of ?SnapChannelToNearest@NearestColor@@CANNN@Z @ 0x1800A8F68
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800A8B30 (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800A8CA4 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 * Callees:
 *     <none>
 */

double __fastcall NearestColor::SnapChannelToNearest(double a1, double a2)
{
  double v2; // xmm0_8

  if ( a2 <= 0.0 )
    v2 = 0.0;
  else
    v2 = a1 / a2;
  return (double)(int)(v2 + 0.5) * a2;
}

/*
 * XREFs of KiSelectActiveTimerTable @ 0x14028BA20
 * Callers:
 *     KiRetireDpcList @ 0x14028A670 (KiRetireDpcList.c)
 *     KiTimerExpiration @ 0x140388B90 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14039E370 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140997B90 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiSerializeTimerExpiration )
    return a1 + 14656;
  if ( !a2 || *(_BYTE *)(a1 + 33) )
    return KiProcessorBlock[0] + 14656;
  return result;
}

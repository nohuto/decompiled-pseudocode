/*
 * XREFs of KiSelectActiveTimerTable @ 0x140247A60
 * Callers:
 *     KiRetireDpcList @ 0x1402466B0 (KiRetireDpcList.c)
 *     KiTimerExpiration @ 0x1403892F0 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14039DFB0 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140994B90 (KiCalibrateTimeAdjustment.c)
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

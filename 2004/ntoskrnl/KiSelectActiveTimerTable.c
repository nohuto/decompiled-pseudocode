/*
 * XREFs of KiSelectActiveTimerTable @ 0x140338FF4
 * Callers:
 *     KiRetireDpcList @ 0x140299420 (KiRetireDpcList.c)
 *     KiTimerExpiration @ 0x1403869F0 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14039B220 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
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

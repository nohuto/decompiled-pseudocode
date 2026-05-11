/*
 * XREFs of ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x1C0009DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::CancelPendingIrps(CSidebandDevice *this, __int64 a2)
{
  int v3; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        9u,
        0xDu,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v3 = 0;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        9u,
        0xEu,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
        v3);
    }
  }
  return 0LL;
}

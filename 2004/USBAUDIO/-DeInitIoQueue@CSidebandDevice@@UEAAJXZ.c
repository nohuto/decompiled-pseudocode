/*
 * XREFs of ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0009E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C0009F08 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 */

__int64 __fastcall CSidebandDevice::DeInitIoQueue(CSidebandDevice *this, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xFu,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
  v3 = CSidebandDevice::StopIoQueueThread(this);
  v5 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      9u,
      0x10u,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      v7);
  }
  return v5;
}

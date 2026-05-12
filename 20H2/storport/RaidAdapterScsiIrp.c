/*
 * XREFs of RaidAdapterScsiIrp @ 0x1C0079120
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0009AE0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterScsiIrp(__int64 a1, IRP *a2)
{
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Fu,
      (__int64)&WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
      a1,
      a2);
  }
  return RaidCompleteRequestEx(a2, 0, 0xC0000001);
}

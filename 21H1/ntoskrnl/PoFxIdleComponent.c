/*
 * XREFs of PoFxIdleComponent @ 0x140237150
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140236E70 (PopFxIdleWorkerTail.c)
 *     PoFxIdleDevice @ 0x14036B4B4 (PoFxIdleDevice.c)
 *     PoFxReportDevicePoweredOn @ 0x14039C760 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9D40 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1402371A0 (PopFxIdleComponent.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  _BYTE v5[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = BugCheckParameter3;
  memset(v5, 0, sizeof(v5));
  return PopFxIdleComponent(BugCheckParameter2, v2);
}

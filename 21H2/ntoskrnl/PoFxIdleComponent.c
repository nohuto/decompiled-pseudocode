/*
 * XREFs of PoFxIdleComponent @ 0x140282670
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140282390 (PopFxIdleWorkerTail.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PoFxReportDevicePoweredOn @ 0x14039FDD0 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BE190 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1402826C0 (PopFxIdleComponent.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  _BYTE v5[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = BugCheckParameter3;
  memset(v5, 0, sizeof(v5));
  return PopFxIdleComponent(BugCheckParameter2, v2);
}

/*
 * XREFs of PnpReportTargetDeviceChangeAsyncWorker @ 0x14089CC40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x1406473C4 (PnpSetCustomTargetEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpReportTargetDeviceChangeAsyncWorker(PVOID P)
{
  PnpSetCustomTargetEvent(
    *((_QWORD **)P + 4),
    0LL,
    0LL,
    *((_QWORD *)P + 5),
    *((_QWORD *)P + 6),
    *((unsigned __int16 **)P + 7));
  ObfDereferenceObjectWithTag(*((PVOID *)P + 4), 0x4E706E50u);
  ExFreePoolWithTag(P, 0x38706E50u);
}

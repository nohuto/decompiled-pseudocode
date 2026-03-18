/*
 * XREFs of WdtpBarkWorkerThread @ 0x14097CA30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

LONG __fastcall WdtpBarkWorkerThread(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 8));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}

/*
 * XREFs of WdtpBarkWorkerThread @ 0x140982800
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

LONG __fastcall WdtpBarkWorkerThread(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 8));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}

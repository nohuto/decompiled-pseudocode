/*
 * XREFs of NdisMReadDmaCounter @ 0x1C0061620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMReadDmaCounter(NDIS_HANDLE MiniportDmaHandle)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 80LL))();
}

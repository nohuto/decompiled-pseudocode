/*
 * XREFs of NdisMGetDmaAlignment @ 0x1C0020620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMGetDmaAlignment(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)MiniportAdapterHandle + 63);
  if ( v1 )
    return (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL) + 72LL))();
  else
    return 0;
}

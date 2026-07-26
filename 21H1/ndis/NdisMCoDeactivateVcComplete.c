/*
 * XREFs of NdisMCoDeactivateVcComplete @ 0x1C00B95B0
 * Callers:
 *     NdisCmDeactivateVc @ 0x1C00B7EF0 (NdisCmDeactivateVc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoDeactivateVcComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  unsigned int v5; // r8d

  v2 = *((_QWORD *)NdisVcHandle + 9);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
  v5 = *(_DWORD *)(v2 + 4) & 0xFFFFFFFB;
  *(_DWORD *)(v2 + 4) = v5;
  if ( !Status )
    *(_DWORD *)(v2 + 4) = v5 & 0xFFFFFFFE;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 8), v4);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 104))((unsigned int)Status, *(_QWORD *)(v2 + 88));
}

/*
 * XREFs of SeQueryServerSiloToken @ 0x1406DC060
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     SepUpdateSiloInClientSecurity @ 0x14091DF68 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PsGetSiloBySessionId @ 0x1406A64A4 (PsGetSiloBySessionId.c)
 */

__int64 __fastcall SeQueryServerSiloToken(
        __int64 a1,
        int (__fastcall **a2)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int))
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v5 = *(_DWORD *)(a1 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return PsGetSiloBySessionId(v5, a2);
}

/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x1403F724C
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1403F0650 (IoCheckRedirectionTrustLevel.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CD5C8 (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 */

bool __fastcall SeTokenGetRedirectionTrustPolicy(__int64 a1, bool *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  result = (v7 & 0x800000) != 0;
  *a2 = result;
  *a3 = HIBYTE(v7) & 1;
  return result;
}

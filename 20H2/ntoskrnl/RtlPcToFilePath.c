/*
 * XREFs of RtlPcToFilePath @ 0x14091BA40
 * Callers:
 *     KitLogFeatureUsage @ 0x1405B7C00 (KitLogFeatureUsage.c)
 *     EtwpProviderArrivalCallback @ 0x1406AFD98 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall RtlPcToFilePath(unsigned __int64 a1, UNICODE_STRING *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r8
  unsigned int v6; // ebx
  PVOID *v7; // rdx
  PVOID v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v5 = (PVOID *)PsLoadedModuleList;
  v6 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v5 != &PsLoadedModuleList )
    {
      v7 = v5;
      v5 = (PVOID *)*v5;
      v8 = v7[6];
      if ( a1 >= (unsigned __int64)v8 && a1 < (unsigned __int64)v8 + *((unsigned int *)v7 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v7 + 9));
        goto LABEL_7;
      }
    }
  }
  v6 = -1073741275;
LABEL_7:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegion();
  return v6;
}

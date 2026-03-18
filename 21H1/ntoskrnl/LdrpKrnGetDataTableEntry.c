/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x14033B390
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x14033A7A0 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x1406FB06C (LdrpResGetMappingSize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v2; // rbx
  PVOID *v4; // rcx
  PVOID v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !CurrentThread )
    return 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = (PVOID *)PsLoadedModuleList;
  if ( !PsLoadedModuleList )
    return 0LL;
  while ( 1 )
  {
    v5 = v4[6];
    if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)v4 + 16) )
      break;
    v4 = (PVOID *)*v4;
    if ( v4 == &PsLoadedModuleList )
      goto LABEL_6;
  }
  v2 = v4;
LABEL_6:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  return v2;
}

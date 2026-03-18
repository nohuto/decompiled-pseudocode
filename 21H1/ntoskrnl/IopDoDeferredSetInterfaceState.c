/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x1407234D0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14072341C (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036AB14 (PpMarkDeviceStackExtensionFlag.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  void **v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void **v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v4 = (void **)(a1 + 608);
  while ( 1 )
  {
    v5 = (char *)*v4;
    if ( *v4 == v4 )
      break;
    if ( *((void ***)v5 + 1) != v4 || (v10 = *(void ***)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v10;
    v10[1] = v4;
    LOBYTE(v3) = 1;
    IopProcessSetInterfaceState(v5 + 16, v3, 0LL);
    ExFreePoolWithTag(*((PVOID *)v5 + 3), 0);
    ExFreePoolWithTag(v5, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  return 0LL;
}

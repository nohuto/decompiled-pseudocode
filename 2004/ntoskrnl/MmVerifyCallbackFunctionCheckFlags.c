/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1403AB9B0
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140782250 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140782768 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x1407B7D20 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x1408C4CD4 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 0);
  if ( v6 && (!a2 || (*(_DWORD *)(v6 + 104) & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}

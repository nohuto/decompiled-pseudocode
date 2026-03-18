/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1403C773C
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140832440 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140832928 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x14096C8B0 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(a1, 0);
  if ( v6 && (!a2 || ((_DWORD)v6[13] & a2) != 0) )
    v5 = 1;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}

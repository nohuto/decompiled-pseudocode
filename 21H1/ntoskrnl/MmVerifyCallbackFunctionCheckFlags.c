/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1403AF6D0
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140787C70 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140788188 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x1407B4BB0 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x1408C3984 (MmVerifyCallbackFunction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
  return v5;
}

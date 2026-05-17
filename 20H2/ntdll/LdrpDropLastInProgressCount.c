/*
 * XREFs of LdrpDropLastInProgressCount @ 0x18005D97C
 * Callers:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrEnumerateLoadedModules @ 0x18005D8C0 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x180081BF4 (LdrpInitializeImportRedirection.c)
 *     LdrInitShimEngineDynamic @ 0x1800D05F0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4DB8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, v1, v2);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}

/*
 * XREFs of ?GetModuleHandleAndIncrementRefcount@@YGPAXPBG@Z @ 0x1E8814
 * Callers:
 *     ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C (-LoadModuleWorkHorse@@YGPAXPAGH@Z.c)
 * Callees:
 *     <none>
 */

void *__cdecl GetModuleHandleAndIncrementRefcount()
{
  if ( GreEngLoadModuleAllocListLock )
  {
    GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
    EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
    GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
  }
  return 0;
}

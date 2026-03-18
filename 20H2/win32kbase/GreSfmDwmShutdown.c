/*
 * XREFs of GreSfmDwmShutdown @ 0x1C00AD5E0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C00AD690 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 GreSfmDwmShutdown()
{
  int v0; // r8d
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rcx

  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( qword_1C024F930 )
    v1 = qword_1C024F930();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C024F938 )
    qword_1C024F938();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v0);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion(v3);
  }
  return result;
}

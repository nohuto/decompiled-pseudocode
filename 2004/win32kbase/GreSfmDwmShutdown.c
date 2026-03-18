/*
 * XREFs of GreSfmDwmShutdown @ 0x1C004C350
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C004C400 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0251930 )
    v1 = qword_1C0251930();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251938 )
    qword_1C0251938();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v0);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion(v3);
  }
  return result;
}

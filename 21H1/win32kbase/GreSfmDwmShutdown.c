/*
 * XREFs of GreSfmDwmShutdown @ 0x1C003F900
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C003F9B0 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 GreSfmDwmShutdown()
{
  int v0; // r8d
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( qword_1C02578F0 )
    v1 = qword_1C02578F0();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02578F8 )
    qword_1C02578F8();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v0);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
    return PsLeavePriorityRegion(v3);
  }
  return result;
}

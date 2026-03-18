/*
 * XREFs of EtwRegisterEventCallback @ 0x140938680
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwRegisterEventCallback(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *PoolWithTag; // rax

  v6 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( !a2 || a2 != qword_140CFCB68 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = EtwpAcquireLoggerContextByLoggerId(v7, a1, 0);
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x43777445u);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1304), (signed __int64)PoolWithTag, 0LL) )
      {
        v6 = -1073741811;
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      v6 = -1073741670;
    }
    EtwpReleaseLoggerContext((unsigned int *)v10, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, v12);
  return v6;
}

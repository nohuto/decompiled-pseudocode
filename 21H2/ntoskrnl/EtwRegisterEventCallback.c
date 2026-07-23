/*
 * XREFs of EtwRegisterEventCallback @ 0x14093D0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwRegisterEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *PoolWithTag; // rax

  v5 = a1;
  v6 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
  if ( !a2 || a2 != qword_140CFCB98 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = EtwpAcquireLoggerContextByLoggerId(v7, v5, 0);
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x43777445u);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 159, (signed __int64)PoolWithTag, 0LL) )
      {
        v6 = -1073741811;
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      v6 = -1073741670;
    }
    EtwpReleaseLoggerContext(v10, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, v12);
  return v6;
}

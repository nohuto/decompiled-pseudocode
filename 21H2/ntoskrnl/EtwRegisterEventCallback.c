/*
 * XREFs of EtwRegisterEventCallback @ 0x1409E94C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwRegisterEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r9d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  _QWORD *Pool2; // rax

  v4 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( !v5 || v5 != qword_140D070A8 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = EtwpAcquireLoggerContextByLoggerId(v6, v7, 0);
  if ( v9 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1131902021LL);
    if ( Pool2 )
    {
      Pool2[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 1288), (signed __int64)Pool2, 0LL) )
      {
        v4 = -1073741811;
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      v4 = -1073741670;
    }
    EtwpReleaseLoggerContext((unsigned int *)v9, 0);
  }
  else
  {
    v4 = -1073741162;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}

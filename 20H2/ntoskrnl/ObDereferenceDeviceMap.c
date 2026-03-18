/*
 * XREFs of ObDereferenceDeviceMap @ 0x14065EC78
 * Callers:
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x1407B6DE0 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x14063ADE4 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v5; // rbx
  void *v6; // rsi

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v6 = *(void **)(a1 + 1416);
  *(_QWORD *)(a1 + 1416) = 0LL;
  ExReleasePushLockEx(v5, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 )
    ObfDereferenceDeviceMap(v6);
}

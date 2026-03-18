/*
 * XREFs of ObDereferenceDeviceMap @ 0x14065E844
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v5; // rbx
  void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v6 = *(void **)(a1 + 1416);
  *(_QWORD *)(a1 + 1416) = 0LL;
  ExReleasePushLockEx(v5, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( v6 )
    ObfDereferenceDeviceMap(v6);
}

/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x1407B8710
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  _DWORD *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 30), 0LL);
  *a2 = v6[v2 + 3] != 0;
  ExReleasePushLockEx((ULONG_PTR)(v6 + 30), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return 0LL;
}

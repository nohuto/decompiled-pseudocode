/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1C001342C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C00134AC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // si
  int v4; // edi

  v1 = a1 + 320;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 4LL) )
    RaCallMiniportAdapterControl(v1, 4LL);
  v3 = RaidAdapterAcquireInterruptLock(a1);
  v4 = RaCallMiniportAdapterControl(v1, 2LL);
  if ( v4 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  RaidAdapterReleaseInterruptLock(a1, v3);
  return (unsigned int)v4;
}

/*
 * XREFs of RaidAdapterStopAdapter @ 0x1C00133A4
 * Callers:
 *     RaidAdapterStop @ 0x1C0013354 (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C00134AC (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStopAdapter(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 320, 1LL);
  RaidAdapterReleaseInterruptLock(a1, v2);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 3LL) )
    RaCallMiniportAdapterControl(a1 + 320, 3LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v3;
}

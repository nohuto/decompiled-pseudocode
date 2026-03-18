/*
 * XREFs of KiComputePriorityFloor @ 0x14026D1F0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputePriorityFloor(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  int v4; // r8d

  v2 = *(_DWORD *)(a1 + 856);
  if ( v2 && (_BitScanReverse((unsigned int *)&v4, v2), (char)a2 < v4) )
    return (unsigned __int8)v4;
  else
    return a2;
}

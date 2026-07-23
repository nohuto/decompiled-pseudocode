/*
 * XREFs of KiComputePriorityFloor @ 0x1402D5610
 * Callers:
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
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

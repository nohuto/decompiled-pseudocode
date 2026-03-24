/*
 * XREFs of KiComputePriorityFloor @ 0x140230DC0
 * Callers:
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140258E10 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
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

/*
 * XREFs of KiComputePriorityFloor @ 0x140573A80
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

char __fastcall KiComputePriorityFloor(__int64 a1, char a2)
{
  unsigned int v2; // eax
  char v3; // r9
  int v4; // r8d

  v2 = *(_DWORD *)(a1 + 856);
  v3 = a2;
  if ( v2 )
  {
    _BitScanReverse((unsigned int *)&v4, v2);
    if ( a2 < v4 )
      return v4;
  }
  return v3;
}

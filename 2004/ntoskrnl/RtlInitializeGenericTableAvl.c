/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x140202100
 * Callers:
 *     PiDqQueryCreate @ 0x1405D22F8 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PopDirectedDripsUmInitialize @ 0x14077F0F0 (PopDirectedDripsUmInitialize.c)
 *     EtwpInitializeAutoLoggers @ 0x14079C530 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14079D678 (EtwpEnableKeyProviders.c)
 *     PiDmObjectManagerInit @ 0x1407A47F4 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x1409BF634 (VfAvlInitializeTreeEx.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x140A5139C (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140A514A0 (PiInitializeDDBCache.c)
 *     PiSwInit @ 0x140A51818 (PiSwInit.c)
 *     PopPowerRequestInit @ 0x140A6CC74 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A6CE78 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A6F380 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}

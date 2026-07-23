/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14023FD70
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x14063C8BC (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x140646928 (PiDqQueryCreate.c)
 *     PopDirectedDripsUmInitialize @ 0x14078C634 (PopDirectedDripsUmInitialize.c)
 *     PiDmObjectManagerInit @ 0x140798A60 (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AB860 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x1407AC9A8 (EtwpEnableKeyProviders.c)
 *     VfAvlInitializeTreeEx @ 0x1409C5644 (VfAvlInitializeTreeEx.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x140A51A1C (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140A51B20 (PiInitializeDDBCache.c)
 *     PiSwInit @ 0x140A51E98 (PiSwInit.c)
 *     PopPowerRequestInit @ 0x140A73554 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A73758 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A75884 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
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

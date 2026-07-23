/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1402E59F0
 * Callers:
 *     PiDqQueryCreate @ 0x1406A0BD8 (PiDqQueryCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     PopDirectedDripsUmInitialize @ 0x14077F900 (PopDirectedDripsUmInitialize.c)
 *     PiDmObjectManagerInit @ 0x14078A450 (PiDmObjectManagerInit.c)
 *     EtwpInitializeAutoLoggers @ 0x14079FFEC (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x1407A1134 (EtwpEnableKeyProviders.c)
 *     VfAvlInitializeTreeEx @ 0x1409BF624 (VfAvlInitializeTreeEx.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x140A4B804 (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x140A4B908 (PiInitializeDDBCache.c)
 *     PiSwInit @ 0x140A4BBE8 (PiSwInit.c)
 *     PopPowerRequestInit @ 0x140A6C9A4 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x140A6CBA8 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x140A6E880 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
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

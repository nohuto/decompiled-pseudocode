/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C0004734
 * Callers:
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00046C8 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0017FF0 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00193B0 (-FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008A550 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}

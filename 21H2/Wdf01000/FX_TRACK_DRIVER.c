/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C0003664
 * Callers:
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0003920 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 *     ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C000E8D0 (-FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C0019C00 (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C001CDB0 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008D96C (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}

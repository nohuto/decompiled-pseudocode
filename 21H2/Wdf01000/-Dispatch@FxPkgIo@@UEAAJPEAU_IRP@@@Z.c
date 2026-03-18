/*
 * XREFs of ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0007AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007B50 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C00628A0 (WPP_IFR_SF_qqcDq.c)
 */

int __fastcall FxPkgIo::Dispatch(FxPkgIo *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  const void *_a3; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  _FX_DRIVER_GLOBALS *v9; // r11

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Globals = this->m_Globals;
  }
  if ( m_Globals->FxVerboseOn )
  {
    _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcDq(
      v9,
      *(_QWORD *)(v8 + 144),
      *(_QWORD *)(v7 + 184),
      0xCu,
      WPP_FxPkgIo_cpp_Traceguids,
      _a3,
      *(const void **)(v8 + 144),
      **(_BYTE **)(v7 + 184),
      *(unsigned __int8 *)(*(_QWORD *)(v7 + 184) + 1LL),
      Irp);
  }
  return FxPkgIo::DispatchStep1(this, Irp, this->m_DynamicDispatchInfoListHead.Flink);
}

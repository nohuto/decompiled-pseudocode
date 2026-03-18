/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004764 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004D00 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0011DD4 (WPP_IFR_SF_qqcq.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C008F2DC (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  _IRP *m_Irp; // r8
  unsigned __int8 MajorFunction; // cl
  unsigned int v8; // ebx
  const void *_a1; // rax
  __int64 v11; // r8
  __int64 v12; // r10
  _FX_DRIVER_GLOBALS *v13; // r11
  FxIrp fxIrp; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  fxIrp.m_Irp = Irp;
  m_Irp = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Irp = fxIrp.m_Irp;
  }
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqcq(
      v13,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      *(const void **)(v12 + 144),
      **(_BYTE **)(v11 + 184),
      Irp);
    m_Irp = fxIrp.m_Irp;
  }
  MajorFunction = m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction )
  {
    switch ( MajorFunction )
    {
      case 2u:
        return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
      case 0x12u:
        return (unsigned int)FxPkgGeneral::OnCleanup(this, &fxIrp);
      case 0x10u:
        return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
      default:
        v8 = -1073741637;
        m_Irp->IoStatus.Status = -1073741637;
        IofCompleteRequest(fxIrp.m_Irp, 0);
        return v8;
    }
  }
  else
  {
    return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
  }
}

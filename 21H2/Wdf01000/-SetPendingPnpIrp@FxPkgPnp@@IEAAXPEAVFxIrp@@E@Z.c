/*
 * XREFs of ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C001E6DC
 * Callers:
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C001E0A0 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C001E1A0 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0083930 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0088878 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0088C10 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0088C50 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0088C90 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0088CD0 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0088E60 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C008939C (WPP_IFR_SF_cqcqq.c)
 */

void __fastcall FxPkgPnp::SetPendingPnpIrp(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 MarkIrpPending)
{
  const void *id; // rax
  const void **v6; // rdx
  _QWORD *flags; // r9
  unsigned __int64 ObjectHandleUnchecked; // rax
  const _GUID *v9; // [rsp+20h] [rbp-38h]

  if ( this->m_PendingPnPIrp )
  {
    id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_cqcqq(
      this->m_Globals,
      *((_QWORD *)*v6 + 23),
      (unsigned int)*v6,
      (unsigned __int16)flags,
      v9,
      *(_BYTE *)(*((_QWORD *)*v6 + 23) + 1LL),
      *v6,
      *(_BYTE *)(flags[23] + 1LL),
      flags,
      id);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_PNP_FATAL_ERROR, ObjectHandleUnchecked, (unsigned __int64)Irp->m_Irp);
  }
  if ( MarkIrpPending )
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingPnPIrp = Irp->m_Irp;
}

/*
 * XREFs of ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x1C0080504
 * Callers:
 *     ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00798A0 (-_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusInformation(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned int v2; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _GUID *PoolWithTag; // rax
  const void *_a1; // rax
  unsigned int _a2; // edx

  v2 = 0;
  if ( this->m_BusInformation.BusTypeGuid.Data1 )
  {
    m_Globals = this->m_Globals;
    PoolWithTag = (_GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, m_Globals->Tag);
    if ( PoolWithTag )
    {
      *PoolWithTag = this->m_BusInformation.BusTypeGuid;
      *(_QWORD *)&PoolWithTag[1].Data1 = *(_QWORD *)&this->m_BusInformation.LegacyBusType;
      Irp->m_Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
    }
    else
    {
      Irp->m_Irp->IoStatus.Information = 0LL;
      v2 = -1073741670;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x1Du, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    }
  }
  else
  {
    return (unsigned int)Irp->m_Irp->IoStatus.Status;
  }
  return v2;
}

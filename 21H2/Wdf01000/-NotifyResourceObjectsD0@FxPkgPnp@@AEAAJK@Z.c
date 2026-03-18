/*
 * XREFs of ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0012BA0
 * Callers:
 *     ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000DA30 (-PowerWakingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F110 (-PowerWakingConnectInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00307B0 (-PowerD0StartingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0012C10 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsD0(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *i; // rbx
  signed int _a2; // esi
  const void *_a1; // rax

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
      return 0LL;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&i[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
      break;
  }
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)&i[-28].Blink);
  WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x51u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return (unsigned int)_a2;
}

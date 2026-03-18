/*
 * XREFs of ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000483C
 * Callers:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C001C10C (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C007D358 (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C007D54C (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DB60 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DD50 (-PowerGotoDxFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DE10 (-PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DE30 (-PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E600 (-PowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E640 (-PowerUpFailedDerefParent@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C00048C0 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsDx(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rsi
  unsigned int v6; // ebp
  signed int _a2; // r14d
  const void *_a1; // rax

  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v6 = 0;
  while ( Blink != p_m_InterruptListHead )
  {
    _a2 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)&Blink[-28].Blink);
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x52u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
      v6 = _a2;
    }
    Blink = Blink->Blink;
  }
  return v6;
}

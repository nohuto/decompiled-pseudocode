/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C00143D4
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C0017578 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qld @ 0x1C0055B64 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int level; // edi
  unsigned __int64 ObjectHandleUnchecked; // rbp
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v6)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v7)(WDFDMAENABLER__ *); // rax
  const void *_a1; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  const void *v13; // rax
  int globals; // edx
  unsigned int v15; // r8d

  m_Globals = this->m_Globals;
  level = 0;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x18u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  }
  m_Method = this->m_EvtDmaEnablerFill.m_Method;
  if ( m_Method )
  {
    v10 = m_Method((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerFill.m_Status = v10;
    level = v10;
    if ( v10 < 0 )
    {
      this->m_DmaEnablerFillFailed = 1;
LABEL_13:
      v13 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qld(m_Globals, globals, v15, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v13, globals, level);
      return level;
    }
  }
  v6 = this->m_EvtDmaEnablerEnable.m_Method;
  if ( v6 )
  {
    v11 = v6((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerEnable.m_Status = v11;
    level = v11;
    if ( v11 < 0 )
    {
      this->m_DmaEnablerEnableFailed = 1;
      goto LABEL_13;
    }
  }
  v7 = this->m_EvtDmaEnablerSelfManagedIoStart.m_Method;
  if ( v7 )
  {
    v12 = v7((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = v12;
    level = v12;
    if ( v12 < 0 )
    {
      this->m_DmaEnablerSelfManagedIoStartFailed = 1;
      goto LABEL_13;
    }
  }
  return level;
}

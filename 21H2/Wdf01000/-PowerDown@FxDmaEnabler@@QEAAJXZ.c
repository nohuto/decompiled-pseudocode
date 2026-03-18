/*
 * XREFs of ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x1C000D2D8
 * Callers:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C000D200 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qld @ 0x1C0055B64 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerDown(FxDmaEnabler *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int level; // edi
  unsigned __int64 ObjectHandleUnchecked; // r14
  int globals; // esi
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v7)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v8)(WDFDMAENABLER__ *); // rax
  const void *_a1; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const void *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d

  m_Globals = this->m_Globals;
  level = 0;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  globals = 0;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  }
  m_Method = this->m_EvtDmaEnablerSelfManagedIoStop.m_Method;
  if ( m_Method )
  {
    v11 = m_Method((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = v11;
    if ( v11 < 0 )
    {
      globals = 6;
      level = v11;
    }
  }
  v7 = this->m_EvtDmaEnablerDisable.m_Method;
  if ( v7 )
  {
    if ( !this->m_DmaEnablerFillFailed )
    {
      v12 = v7((WDFDMAENABLER__ *)ObjectHandleUnchecked);
      this->m_EvtDmaEnablerDisable.m_Status = v12;
      if ( v12 < 0 )
      {
        globals = 4;
        if ( level >= 0 )
          level = v12;
      }
    }
  }
  v8 = this->m_EvtDmaEnablerFlush.m_Method;
  if ( v8 )
  {
    if ( !this->m_DmaEnablerFillFailed && !this->m_DmaEnablerEnableFailed )
    {
      v13 = v8((WDFDMAENABLER__ *)ObjectHandleUnchecked);
      this->m_EvtDmaEnablerFlush.m_Status = v13;
      if ( v13 < 0 )
      {
        globals = 2;
        if ( level >= 0 )
          level = v13;
        goto LABEL_20;
      }
    }
  }
  if ( level < 0 )
  {
LABEL_20:
    v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qld(m_Globals, v15, v16, 0x1Bu, WPP_FxDmaEnabler_cpp_Traceguids, v14, globals, level);
  }
  return (unsigned int)level;
}

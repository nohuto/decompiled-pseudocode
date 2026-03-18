/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0004CF0
 * Callers:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C001BF64 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qld @ 0x1C0032238 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int level; // esi
  unsigned __int64 ObjectHandleUnchecked; // rbp
  int globals; // edi
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
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x18u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  }
  m_Method = this->m_EvtDmaEnablerFill.m_Method;
  if ( m_Method
    && (v11 = m_Method((WDFDMAENABLER__ *)ObjectHandleUnchecked),
        this->m_EvtDmaEnablerFill.m_Status = v11,
        level = v11,
        v11 < 0) )
  {
    globals = 1;
    this->m_DmaEnablerFillFailed = 1;
  }
  else
  {
    v7 = this->m_EvtDmaEnablerEnable.m_Method;
    if ( v7
      && (v12 = v7((WDFDMAENABLER__ *)ObjectHandleUnchecked),
          this->m_EvtDmaEnablerEnable.m_Status = v12,
          level = v12,
          v12 < 0) )
    {
      this->m_DmaEnablerEnableFailed = 1;
      globals = 3;
    }
    else
    {
      v8 = this->m_EvtDmaEnablerSelfManagedIoStart.m_Method;
      if ( v8 )
      {
        v13 = v8((WDFDMAENABLER__ *)ObjectHandleUnchecked);
        this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = v13;
        level = v13;
        if ( v13 >= 0 )
          return (unsigned int)level;
        this->m_DmaEnablerSelfManagedIoStartFailed = 1;
        globals = 5;
      }
    }
  }
  if ( level < 0 )
  {
    v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qld(m_Globals, v15, v16, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v14, globals, level);
  }
  return (unsigned int)level;
}

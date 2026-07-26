/*
 * XREFs of ??0BindState@Ndis@@QEAA@XZ @ 0x1C0102F30
 * Callers:
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0102F04 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C0108054 (--0BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1C0102F7C (-grow@-$KArray@PEAX$00@Rtl@@AEAA_N_K@Z.c)
 */

Ndis::BindState *__fastcall Ndis::BindState::BindState(Ndis::BindState *this)
{
  Rtl::KArray<void *,1> *p_m_bindContext; // rcx

  this->m_unbindReasons = 2;
  this->Miniport = 0LL;
  *(_WORD *)&this->AllowBindDespiteMandatory = 0;
  this->NeedsPauseAction = 0;
  this->m_AdditionalContext = 0LL;
  *(_QWORD *)&this->m_pauseReasons = 1LL;
  *(_QWORD *)&this->m_LastErrorCode = 0LL;
  p_m_bindContext = &this->m_bindContext;
  *(_QWORD *)&p_m_bindContext->m_bufferSize = 0LL;
  p_m_bindContext->_p = 0LL;
  Rtl::KArray<void *,1>::grow(p_m_bindContext, 1LL);
  return this;
}

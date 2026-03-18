/*
 * XREFs of ?ClearTargetPointers@FxIoTargetRemote@@MEAAXXZ @ 0x1C0066AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLdqqq @ 0x1C006784C (WPP_IFR_SF_qqLdqqq.c)
 */

void __fastcall FxIoTargetRemote::ClearTargetPointers(FxIoTargetRemote *this)
{
  const void *_a5; // rax
  FxIoTargetClearedPointers *m_ClearedPointers; // rcx
  const _GUID *v4; // [rsp+20h] [rbp-48h]

  _a5 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qqLdqqq(
    this->m_Globals,
    (unsigned __int8)this->m_TargetFileObject,
    this->m_OpenState,
    (unsigned __int16)_a5,
    v4,
    _a5,
    this->m_ClearedPointers,
    this->m_State,
    this->m_OpenState,
    this->m_TargetPdo,
    this->m_TargetFileObject,
    this->m_TargetHandle);
  m_ClearedPointers = this->m_ClearedPointers;
  if ( m_ClearedPointers )
  {
    m_ClearedPointers->TargetPdo = this->m_TargetPdo;
    this->m_ClearedPointers->TargetFileObject = this->m_TargetFileObject;
    this->m_ClearedPointers->TargetHandle = this->m_TargetHandle;
    this->m_ClearedPointers = 0LL;
  }
  this->m_TargetHandle = 0LL;
  this->m_TargetDevice = 0LL;
  this->m_TargetPdo = 0LL;
  this->m_TargetFileObject = 0LL;
  *(_WORD *)&this->m_TargetStackSize = 0;
}

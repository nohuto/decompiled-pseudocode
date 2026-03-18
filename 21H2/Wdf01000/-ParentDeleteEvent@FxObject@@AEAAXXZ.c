/*
 * XREFs of ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C000AA68
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxObject::ParentDeleteEvent(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  int m_ObjectState; // r8d
  KIRQL v5; // si
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  const void *_a2; // rax
  int v10; // r8d

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v5 = v3;
  this->m_ParentObject = 0LL;
  v6 = m_ObjectState - 2;
  if ( !v6 )
    goto LABEL_2;
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 4;
    if ( !v8 )
    {
LABEL_2:
      FxObject::SetObjectStateLocked(this, 0xAu);
      KeReleaseSpinLock(p_m_Lock, v5);
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      return;
    }
    if ( v8 == 1 )
    {
      if ( _bittest16((const signed __int16 *)&this->24, 9u) )
      {
        _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, v10 + 20, v10 + 11, WPP_FxObject_hpp_Traceguids, this, _a2, 9u, 6u);
      }
    }
  }
  KeReleaseSpinLock(p_m_Lock, v5);
}

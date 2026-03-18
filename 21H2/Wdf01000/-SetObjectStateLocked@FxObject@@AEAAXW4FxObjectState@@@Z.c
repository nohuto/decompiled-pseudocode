/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00013D0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008430 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008CE0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C000A9BC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C000AA68 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000AB04 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C000AB80 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C000ABF0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000AC50 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C000ADF4 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C000AE74 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C006E300 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006E3C4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  unsigned __int16 m_ObjectFlags; // ax
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v6; // r10

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqLL(v6, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, NewState);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
  }
  this->m_ObjectState = NewState;
}

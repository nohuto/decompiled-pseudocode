/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00021D0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002940 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C00040D8 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0004174 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0004EC0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C001563C (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C0015684 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0018808 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0018888 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005AA58 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005AB1C (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  unsigned __int16 m_ObjectFlags; // ax
  const void *_a2; // rax
  unsigned int _a3; // edx
  _FX_DRIVER_GLOBALS *v7; // r10

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqLL(v7, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, NewState);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
  }
  this->m_ObjectState = NewState;
}

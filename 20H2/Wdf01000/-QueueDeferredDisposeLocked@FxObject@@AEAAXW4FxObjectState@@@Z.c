/*
 * XREFs of ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005AB1C
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0018888 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00547AC (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 */

void __fastcall FxObject::QueueDeferredDisposeLocked(FxObject *this, unsigned int NewDeferedState)
{
  unsigned __int8 v3; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxDisposeList *m_DisposeList; // rcx

  FxObject::SetObjectStateLocked(this, NewDeferedState);
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
    m_DisposeList = m_DeviceBase->m_DisposeList;
  else
    m_DisposeList = this->m_Globals->Driver->m_DisposeList;
  FxDisposeList::Add(m_DisposeList, this, v3);
}

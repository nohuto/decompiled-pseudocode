/*
 * XREFs of ??0BindEngine@Ndis@@QEAA@XZ @ 0x1C0107F64
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0031AD4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

Ndis::BindEngine *__fastcall Ndis::BindEngine::BindEngine(Ndis::BindEngine *this)
{
  this->m_miniport = 0LL;
  this->m_bindThread = 0LL;
  this->m_currentOperation = 0LL;
  this->m_lock.m_Lock.Value = 0LL;
  KeInitializeEvent(&this->m_bindCompleteEvent.m_event, NotificationEvent, 0);
  this->m_asyncBindWorkItem.m_workitem.List.Flink = 0LL;
  this->m_asyncBindWorkItem.m_callback = Ndis::BindEngine::UpdateBindingsWorkItem;
  this->m_asyncBindWorkItem.m_context = this;
  this->m_asyncBindWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<Ndis::BindEngine,KWorkItem<Ndis::BindEngine>>::CallbackThunk;
  this->m_asyncBindWorkItem.m_workitem.Parameter = &this->m_asyncBindWorkItem;
  this->m_removeReadyEvent = 0LL;
  this->m_isDirty = 0;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  return this;
}

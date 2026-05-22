/*
 * XREFs of ??1AttachedInputObjectEntry@InputSite@@QEAA@XZ @ 0x180018F78
 * Callers:
 *     _InputSiteElementProxy::OnUIAHitTestInputObjectChanged_::_1_::dtor$26 @ 0x18004E060 (_InputSiteElementProxy--OnUIAHitTestInputObjectChanged_--_1_--dtor$26.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x18004F6A0 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x1800500E0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x180149C52 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x18014DB83 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSite::AttachedInputObjectEntry::~AttachedInputObjectEntry(
        InputSite::AttachedInputObjectEntry *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}

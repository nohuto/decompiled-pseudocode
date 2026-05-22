/*
 * XREFs of ??1AttachedInputObjectEntry@InputSite@@QEAA@XZ @ 0x180018F78
 * Callers:
 *     _InputSiteElementProxy::OnUIAHitTestInputObjectChanged_::_1_::dtor$26 @ 0x18004DA70 (_InputSiteElementProxy--OnUIAHitTestInputObjectChanged_--_1_--dtor$26.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x18004F0B0 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x18004FAF0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x180149792 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x18014D6C3 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSite::AttachedInputObjectEntry::~AttachedInputObjectEntry(
        InputSite::AttachedInputObjectEntry *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}

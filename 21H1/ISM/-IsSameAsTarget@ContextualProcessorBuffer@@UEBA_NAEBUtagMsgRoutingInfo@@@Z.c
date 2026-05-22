/*
 * XREFs of ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x18014C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800183B0 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ @ 0x180042010 (--1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ContextualProcessorBuffer::IsSameAsTarget(
        ContextualProcessorBuffer *this,
        const struct tagMsgRoutingInfo *a2)
{
  char v3; // bl
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v6 = 0LL;
  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 20) + 16LL);
  if ( *v4 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v4, &v6) >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *))(*(_QWORD *)v6 + 32LL))(v6, a2);
  ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry(&v6);
  return v3;
}

/*
 * XREFs of ?GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ @ 0x18014C470
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800183B0 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ @ 0x180042010 (--1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::GetInteractionObject(ContextualProcessorBuffer *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v4 = 0LL;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 20) + 16LL);
  if ( *v2 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v2, &v4) >= 0 )
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry(&v4);
  return v1;
}

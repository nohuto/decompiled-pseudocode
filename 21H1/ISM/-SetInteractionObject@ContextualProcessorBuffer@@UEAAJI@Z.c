/*
 * XREFs of ?SetInteractionObject@ContextualProcessorBuffer@@UEAAJI@Z @ 0x18014D930
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800183B0 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ @ 0x180042010 (--1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::SetInteractionObject(ContextualProcessorBuffer *this, unsigned int a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 20) + 16LL);
  if ( *v3 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v3, &v6) >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 80LL))(v6, a2);
  else
    v4 = -2147467259;
  ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry(&v6);
  return v4;
}

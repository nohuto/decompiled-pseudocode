/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000A574
 * Callers:
 *     _std::make_shared_std::function_void___cdecl(void)__std::function_void___cdecl(void)__&__::_1_::dtor$2 @ 0x18003B7D4 (_std--make_shared_std--function_void___cdecl(void)__std--function_void___cdecl(void_ea_18003B7D4.c)
 *     __WorkTask::Initialize_::_1_::dtor$0 @ 0x18003B7E6 (__WorkTask--Initialize_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x18003B80A (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$4 @ 0x18003B82E (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$4.c)
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x18003C7F3 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$4 @ 0x18003C82E (_QueueGenericWorkItem_--_1_--dtor$4.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$0 @ 0x18003C87F (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}

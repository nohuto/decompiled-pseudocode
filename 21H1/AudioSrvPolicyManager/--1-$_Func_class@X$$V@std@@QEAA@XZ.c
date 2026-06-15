/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000FD54
 * Callers:
 *     _std::make_shared_std::function_void___cdecl(void)__std::function_void___cdecl(void)__&__::_1_::dtor$2 @ 0x180041112 (_std--make_shared_std--function_void___cdecl(void)__std--function_void___cdecl(void_ea_180041112.c)
 *     __WorkTask::Initialize_::_1_::dtor$0 @ 0x180041124 (__WorkTask--Initialize_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x180041148 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$4 @ 0x18004116C (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$4.c)
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x180042131 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$4 @ 0x18004216C (_QueueGenericWorkItem_--_1_--dtor$4.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$0 @ 0x1800421BD (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
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

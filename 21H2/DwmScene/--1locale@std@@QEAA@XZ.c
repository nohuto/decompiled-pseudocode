/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x180078300
 * Callers:
 *     sub_18012A854 @ 0x18012A854 (sub_18012A854.c)
 *     ?dtor$0@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA_0 @ 0x18012F7C5 (-dtor$0@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexc_ea_18012F7C5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}

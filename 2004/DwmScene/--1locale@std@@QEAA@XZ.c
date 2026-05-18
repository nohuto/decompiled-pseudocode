/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x180072A30
 * Callers:
 *     sub_180124F3C @ 0x180124F3C (sub_180124F3C.c)
 *     ?dtor$0@?0??_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z@4HA_0 @ 0x180129EAD (-dtor$0@-0--_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexc_ea_180129EAD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
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

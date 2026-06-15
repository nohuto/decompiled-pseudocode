/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x18003B96C
 * Callers:
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x18004266C (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$1 @ 0x1800426D8 (_ATL--CDacl--Copy_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}

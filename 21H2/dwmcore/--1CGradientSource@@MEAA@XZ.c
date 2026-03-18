/*
 * XREFs of ??1CGradientSource@@MEAA@XZ @ 0x180040894
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800409A0 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18003E0F8 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  __int64 v1; // rax
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    *(_QWORD *)(v1 + 48) = 0LL;
  v3 = (__int64 *)((char *)this + 24);
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 4);
  while ( v4 != v5 )
  {
    v8 = *(_QWORD *)v4 + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 48LL))(v8, (char *)this + 8);
    v4 += 8LL;
  }
  v6 = (__int64 *)*v3;
  v7 = (v3[1] - *v3) >> 3;
  if ( v7 )
  {
    detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
      v3,
      0LL,
      v7);
    v6 = (__int64 *)*v3;
  }
  *v3 = 0LL;
  if ( v6 == v3 + 3 )
    v6 = 0LL;
  DefaultHeap::Free(v6);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((char *)this + 16);
}

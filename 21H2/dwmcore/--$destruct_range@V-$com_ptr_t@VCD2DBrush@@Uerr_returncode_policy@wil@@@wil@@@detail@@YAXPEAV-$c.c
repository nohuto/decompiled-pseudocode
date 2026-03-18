/*
 * XREFs of ??$destruct_range@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18003E3A0
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18003E0F8 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18003E2AC (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
}

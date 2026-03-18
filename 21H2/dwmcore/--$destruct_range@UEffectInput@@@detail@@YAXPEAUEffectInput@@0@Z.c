/*
 * XREFs of ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x180058960
 * Callers:
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x180058098 (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800588EC (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall detail::destruct_range<EffectInput>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3 + 8);
      result = wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v3);
      v3 += 104LL;
    }
    while ( v3 != a2 );
  }
  return result;
}

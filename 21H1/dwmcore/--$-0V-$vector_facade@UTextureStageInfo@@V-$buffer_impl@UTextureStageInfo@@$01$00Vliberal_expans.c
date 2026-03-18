/*
 * XREFs of ??$?0V?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@UTextureStageInfo@@$0?0@gsl@@QEAA@AEAV?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800187EC
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x180051710 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800BC0E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall gsl::span<TextureStageInfo,-1>::span<TextureStageInfo,-1>(__int64 *a1, gsl::details **a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  gsl::details *v6; // rcx

  v4 = (__int64)((unsigned __int128)((a2[1] - *a2) * (__int128)0x4924924924924925LL) >> 64) >> 4;
  v5 = gsl::narrow<__int64,unsigned __int64>(v4 + (v4 >> 63));
  v6 = *a2;
  *a1 = v5;
  if ( v5 < 0 || (a1[1] = (__int64)v6) == 0 && v5 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v6);
    __debugbreak();
  }
  return a1;
}

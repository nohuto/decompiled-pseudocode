/*
 * XREFs of ??$move@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x18001C01C
 * Callers:
 *     ?clear_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001BCA4 (-clear_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntr.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x180064240 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  void *v10; // rbx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (__int64)((unsigned __int128)((a3 - (__int64)a2) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 1;
  v9 = (v8 >> 63) + v8;
  if ( v9 < 0 && a4[2] < (unsigned __int64)-v9 || v9 > 0 && a4[1] - a4[2] < (unsigned __int64)v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v9);
    __debugbreak();
    JUMPOUT(0x1801024DDLL);
  }
  v10 = (void *)(*a4 + 76LL * a4[2]);
  memmove_0(v10, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v10 + v5 - *a4) / 76;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}

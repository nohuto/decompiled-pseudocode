/*
 * XREFs of std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt____stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____ @ 0x18019C858
 * Callers:
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x18019D5D0 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_std::move_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt____stdext::checked_array_iterator__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 1;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7);
    __debugbreak();
  }
  v8 = *a4;
  v9 = *a4 + 36 * a4[2];
  while ( v4 != a3 )
  {
    *(_OWORD *)v9 = *(_OWORD *)v4;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v4 + 16);
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(v4 + 32);
    v9 += 36LL;
    v4 += 36LL;
  }
  v10 = (__int64)((unsigned __int128)((v9 - v8) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 1;
  result = a1;
  a4[2] = (v10 >> 63) + v10;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}

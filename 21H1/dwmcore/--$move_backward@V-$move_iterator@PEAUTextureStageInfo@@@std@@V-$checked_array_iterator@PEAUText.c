/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1801A0850
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x180051710 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v5 = a1;
  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)(__int64)0xB6DB6DB6DB6DB6DBuLL) >> 64) >> 4;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7);
    __debugbreak();
  }
  v8 = *a4 + 56LL * a4[2];
  while ( v4 != a3 )
  {
    v8 -= 56LL;
    a3 -= 56LL;
    *(_OWORD *)v8 = *(_OWORD *)a3;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(a3 + 48);
  }
  result = v5;
  a4[2] = (v8 - *a4) / 56;
  v10 = a4[2];
  *(_OWORD *)v5 = *(_OWORD *)a4;
  *(_QWORD *)(v5 + 16) = v10;
  return result;
}

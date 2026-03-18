/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1801E2BE8
 * Callers:
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x1800A4C20 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  signed __int64 v4; // r10
  bool v5; // cf
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v4 = 0x9249249249249249uLL * ((a3 - a2) >> 3);
  if ( v4 >= 0 )
  {
    if ( v4 <= 0 )
      goto LABEL_7;
    v5 = a4[1] - a4[2] < (unsigned __int64)v4;
  }
  else
  {
    v5 = a4[2] < (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 3));
  }
  if ( v5 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v6 = *a4 + 56LL * a4[2];
  while ( a2 != a3 )
  {
    v6 -= 56LL;
    a3 -= 56LL;
    *(_OWORD *)v6 = *(_OWORD *)a3;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v6 + 48) = *(_QWORD *)(a3 + 48);
  }
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v6 - *a4) >> 3);
  result = a1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}

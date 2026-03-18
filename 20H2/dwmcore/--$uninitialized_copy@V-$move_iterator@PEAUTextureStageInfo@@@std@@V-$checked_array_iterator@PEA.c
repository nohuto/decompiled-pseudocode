/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180017EA8
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800A18C0 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // r10
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v6 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x4924924924924925LL) >> 64) >> 4;
  v7 = (v6 >> 63) + v6;
  if ( v7 < 0 && a4[2] < (unsigned __int64)-v7 || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7);
    __debugbreak();
    JUMPOUT(0x1801032F9LL);
  }
  v8 = *a4 + 56LL * a4[2];
  for ( i = a2 + 8; i - 8 != a3; i += 56LL )
  {
    *(_DWORD *)v8 = *(_DWORD *)(i - 8);
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(i - 4);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)i;
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(i + 4);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(i + 8);
    *(_DWORD *)(v8 + 20) = *(_DWORD *)(i + 12);
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(i + 16);
    *(_DWORD *)(v8 + 28) = *(_DWORD *)(i + 20);
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(i + 24);
    *(_OWORD *)(v8 + 36) = *(_OWORD *)(i + 28);
    *(_BYTE *)(v8 + 52) = *(_BYTE *)(i + 44);
    *(_BYTE *)(v8 + 53) = *(_BYTE *)(i + 45);
    v8 += 56LL;
  }
  result = a1;
  a4[2] = (v8 - *a4) / 56;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}

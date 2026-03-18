/*
 * XREFs of ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800149E8
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180014770 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180053820 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipRectAndEdgeFlags(__int64 a1, int a2, __int64 a3, int a4, _OWORD *a5, int *a6)
{
  char v8; // al
  int v9; // eax
  float v10; // xmm0_4
  bool v11; // dl
  int v12; // r9d
  float v13; // xmm0_4
  int v14; // edx
  __int128 v16; // [rsp+0h] [rbp-18h]

  if ( (float)(*(float *)a3 - *(float *)a1) > 0.0000011920929 )
  {
    LODWORD(v16) = *(_DWORD *)a3;
    v8 = 1;
  }
  else
  {
    LODWORD(v16) = *(_DWORD *)a1;
    v8 = 0;
  }
  v9 = v8 != 0 ? 0x3000000 : 0;
  if ( (float)(*(float *)(a3 + 4) - *(float *)(a1 + 4)) > 0.0000011920929 )
  {
    DWORD1(v16) = *(_DWORD *)(a3 + 4);
    v9 |= 3u;
  }
  else
  {
    DWORD1(v16) = *(_DWORD *)(a1 + 4);
  }
  v10 = *(float *)(a1 + 8) - *(float *)(a3 + 8);
  v11 = v10 > 0.0000011920929;
  if ( v10 > 0.0000011920929 )
    DWORD2(v16) = *(_DWORD *)(a3 + 8);
  else
    DWORD2(v16) = *(_DWORD *)(a1 + 8);
  v12 = v9 | 0x300;
  v13 = *(float *)(a1 + 12) - *(float *)(a3 + 12);
  if ( !v11 )
    v12 = v9;
  if ( v13 > 0.0000011920929 )
    HIDWORD(v16) = *(_DWORD *)(a3 + 12);
  else
    HIDWORD(v16) = *(_DWORD *)(a1 + 12);
  v14 = v12 | 0x30000;
  if ( v13 <= 0.0000011920929 )
    v14 = v12;
  *a5 = v16;
  *a6 = a4 & v14 | a2 & ~v14;
  return v14 != 0;
}

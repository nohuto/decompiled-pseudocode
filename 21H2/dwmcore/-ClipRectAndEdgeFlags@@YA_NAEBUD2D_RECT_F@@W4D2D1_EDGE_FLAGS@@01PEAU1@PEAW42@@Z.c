/*
 * XREFs of ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800E49FC
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18000BE80 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipRectAndEdgeFlags(__int64 a1, int a2, __int64 a3, int a4, _OWORD *a5, int *a6)
{
  char v7; // al
  int v8; // eax
  float v9; // xmm0_4
  int v10; // edx
  __int128 v12; // [rsp+0h] [rbp-18h]

  if ( (float)(*(float *)a3 - *(float *)a1) > 0.0000011920929 )
  {
    LODWORD(v12) = *(_DWORD *)a3;
    v7 = 1;
  }
  else
  {
    LODWORD(v12) = *(_DWORD *)a1;
    v7 = 0;
  }
  v8 = v7 != 0 ? 0x3000000 : 0;
  if ( (float)(*(float *)(a3 + 4) - *(float *)(a1 + 4)) > 0.0000011920929 )
  {
    DWORD1(v12) = *(_DWORD *)(a3 + 4);
    v8 |= 3u;
  }
  else
  {
    DWORD1(v12) = *(_DWORD *)(a1 + 4);
  }
  v9 = *(float *)(a1 + 8) - *(float *)(a3 + 8);
  if ( v9 > 0.0000011920929 )
    DWORD2(v12) = *(_DWORD *)(a3 + 8);
  else
    DWORD2(v12) = *(_DWORD *)(a1 + 8);
  v10 = v8 | 0x300;
  if ( v9 <= 0.0000011920929 )
    v10 = v8;
  if ( (float)(*(float *)(a1 + 12) - *(float *)(a3 + 12)) > 0.0000011920929 )
  {
    HIDWORD(v12) = *(_DWORD *)(a3 + 12);
    v10 |= 0x30000u;
  }
  else
  {
    HIDWORD(v12) = *(_DWORD *)(a1 + 12);
  }
  *a5 = v12;
  *a6 = a4 & v10 | a2 & ~v10;
  return v10 != 0;
}

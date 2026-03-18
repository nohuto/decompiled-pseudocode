/*
 * XREFs of ?GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z @ 0x1800D948C
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC488 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1801E8640 (-CalcGeometryCountsForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall Mesh::GetEdgeFlagsListForRectangle(int a1, int *a2, int *a3, int *a4, int *a5)
{
  int v5; // r10d
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int *result; // rax

  v5 = 3;
  switch ( a1 & 3 )
  {
    case 1:
      v6 = 1;
      break;
    case 2:
      v6 = 2;
      break;
    case 3:
      v6 = 3;
      break;
    default:
      v6 = 0;
      break;
  }
  *a2 = v6;
  v7 = a1 & 0x300;
  if ( v7 == 256 )
  {
    v8 = 1;
  }
  else if ( v7 == 512 )
  {
    v8 = 2;
  }
  else
  {
    v8 = 3;
    if ( v7 != 768 )
      v8 = 0;
  }
  *a3 = v8;
  v9 = a1 & 0x30000;
  if ( (a1 & 0x30000) == 0x10000 )
  {
    v10 = 1;
  }
  else if ( v9 == 0x20000 )
  {
    v10 = 2;
  }
  else
  {
    v10 = 3;
    if ( v9 != 196608 )
      v10 = 0;
  }
  *a4 = v10;
  v11 = a1 & 0x3000000;
  if ( v11 == 0x1000000 )
  {
    v5 = 1;
  }
  else if ( v11 == 0x2000000 )
  {
    v5 = 2;
  }
  else if ( v11 != 50331648 )
  {
    v5 = 0;
  }
  result = a5;
  *a5 = v5;
  return result;
}

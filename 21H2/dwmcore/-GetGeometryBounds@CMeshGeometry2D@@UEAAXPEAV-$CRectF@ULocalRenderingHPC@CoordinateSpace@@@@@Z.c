/*
 * XREFs of ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1801D6960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801D6BA0 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

void __fastcall CMeshGeometry2D::GetGeometryBounds(__int64 a1, _OWORD *a2)
{
  unsigned int VertexCount; // eax
  float *v5; // rcx
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float *v10; // rcx
  __int64 v11; // rdx
  float v12; // xmm1_4

  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    VertexCount = CMeshGeometry2D::GetVertexCount((CMeshGeometry2D *)a1);
    if ( VertexCount )
    {
      v5 = *(float **)(a1 + 120);
      v6 = *v5;
      v7 = v5[1];
      v8 = *v5;
      v9 = v7;
      if ( VertexCount > 1 )
      {
        v10 = v5 + 3;
        v11 = VertexCount - 1;
        do
        {
          if ( *v10 <= v8 )
            v8 = *v10;
          if ( v6 <= *v10 )
            v6 = *v10;
          v12 = v10[1];
          if ( v12 <= v9 )
            v9 = v10[1];
          if ( v7 <= v12 )
            v7 = v10[1];
          v10 += 3;
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v8 = 0.0;
      v7 = 0.0;
      v9 = 0.0;
      v6 = 0.0;
    }
    *(float *)(a1 + 88) = v6;
    *(float *)(a1 + 84) = v9;
    *(float *)(a1 + 92) = v7;
    *(float *)(a1 + 80) = v8;
    *(_DWORD *)(a1 + 72) &= ~1u;
  }
  *a2 = *(_OWORD *)(a1 + 80);
}

/*
 * XREFs of ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x1801D6070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801D6010 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::GetVerticesCore(
        CMeshGeometry2D *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int VertexCount; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r10
  float *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  int v16; // ecx
  double v17; // xmm0_8
  double v18; // xmm1_8

  v6 = 0;
  VertexCount = CMeshGeometry2D::GetVertexCount(this);
  if ( a3 >= VertexCount )
  {
    if ( VertexCount )
    {
      v9 = 0LL;
      v10 = VertexCount;
      v11 = 0LL;
      v12 = (float *)((char *)a2 + 16);
      v13 = 0LL;
      do
      {
        v14 = *((_QWORD *)this + 15);
        v15 = *(_QWORD *)(v14 + v13);
        v13 += 12LL;
        *((_QWORD *)v12 - 2) = v15;
        *(v12 - 2) = *(float *)(v14 + v13 - 4);
        v16 = *(_DWORD *)(v11 + *((_QWORD *)this + 19));
        v11 += 4LL;
        *((_DWORD *)v12 - 1) = v16;
        v17 = *(double *)(v9 + *((_QWORD *)this + 17));
        v9 += 16LL;
        *v12 = v17;
        v12 += 8;
        v18 = *(double *)(v9 + *((_QWORD *)this + 17) - 8);
        *(v12 - 6) = 0.0;
        *(v12 - 5) = 0.0;
        *(v12 - 7) = v18;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x12Du, 0LL);
  }
  return v6;
}

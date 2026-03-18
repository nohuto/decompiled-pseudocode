/*
 * XREFs of ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x1801A2300
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801A212C (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x1800584F8 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18009AC84 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 */

__int64 __fastcall Mesh::Init(float **this, const struct Mesh::ContentInfo *a2, const struct D2D_RECT_F *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  float *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4

  if ( (*((_BYTE *)this + 76) & 4) != 0 )
  {
    v6 = Mesh::PreallocateGraphObjects((Mesh *)this, (*((_BYTE *)this + 76) & 4) != 0);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x36u, 0LL);
      return v8;
    }
    *((_BYTE *)this + 76) &= ~4u;
  }
  Mesh::Clear((Mesh *)this);
  v9 = this[2];
  *((_BYTE *)this + 76) = *((_BYTE *)this + 76) & 0x7F | (*((_BYTE *)a2 + 16) << 7);
  v8 = 0;
  v10 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
  *v9 = v10;
  v9[2] = v10 * v10;
  v9[1] = v10 + v10;
  v11 = (float)(a3->bottom + a3->top) * 0.5;
  *((float *)this + 10) = (float)(a3->right + a3->left) * 0.5;
  *((float *)this + 11) = v11;
  return v8;
}

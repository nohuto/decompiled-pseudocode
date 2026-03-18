/*
 * XREFs of ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800AD78C
 * Callers:
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800ACD80 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x1801A202C (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Line2d::SetDirection(Mesh::Line2d *this, const struct D2D_VECTOR_2F *a2)
{
  float v2; // xmm0_4

  if ( COERCE_FLOAT(LODWORD(a2->x) & _xmm) >= 0.0000011920929 )
  {
    LODWORD(v2) = LODWORD(a2->y) & _xmm;
    *((_BYTE *)this + 16) = 0;
    if ( v2 >= 0.0000011920929 )
    {
      *((_BYTE *)this + 17) = 0;
      *((struct D2D_VECTOR_2F *)this + 1) = *a2;
    }
    else
    {
      *((_BYTE *)this + 17) = 1;
      *((_QWORD *)this + 1) = 1065353216LL;
    }
  }
  else
  {
    *((_WORD *)this + 8) = 1;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 1065353216;
  }
}

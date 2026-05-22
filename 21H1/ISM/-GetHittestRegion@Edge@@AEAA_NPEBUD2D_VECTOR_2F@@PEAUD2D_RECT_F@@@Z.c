/*
 * XREFs of ?GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z @ 0x1801792F8
 * Callers:
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x180179470 (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::GetHittestRegion(Edge *this, const struct D2D_VECTOR_2F *a2, struct D2D_RECT_F *a3)
{
  float v3; // xmm1_4
  bool result; // al
  float v5; // xmm2_4
  bool v7; // r9
  char v8; // r8
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  struct D2D_RECT_F v12; // [rsp+0h] [rbp-10h]

  v3 = *((float *)this + 19);
  result = 0;
  v5 = *((float *)this + 21);
  v7 = v3 == v5 || *((float *)this + 20) == *((float *)this + 22);
  if ( v3 != v5 || (v8 = 0, *((float *)this + 20) != *((float *)this + 22)) )
    v8 = 1;
  if ( *((_DWORD *)this + 18) != 2 || !v7 || !v8 )
    goto LABEL_24;
  if ( v3 == v5 )
  {
    v9 = *((float *)this + 14);
    if ( v9 > 0.0 )
    {
      v12.left = *((FLOAT *)this + 19);
      v12.right = v3 + a2->x;
LABEL_16:
      v12.top = fminf(*((float *)this + 20), *((float *)this + 22));
      v12.bottom = fmaxf(*((float *)this + 20), *((float *)this + 22));
LABEL_23:
      result = 1;
      *a3 = v12;
      return result;
    }
    if ( v9 < 0.0 )
    {
      v12.right = *((FLOAT *)this + 19);
      v12.left = v3 - a2->x;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = *((float *)this + 20);
    if ( v10 == *((float *)this + 22) )
    {
      v11 = *((float *)this + 15);
      if ( v11 <= 0.0 )
      {
        if ( v11 >= 0.0 )
          goto LABEL_24;
        v12.bottom = *((FLOAT *)this + 20);
        v12.top = v10 - a2->y;
      }
      else
      {
        v12.top = *((FLOAT *)this + 20);
        v12.bottom = v10 + a2->y;
      }
      v12.right = fmaxf(v3, v5);
      v12.left = fminf(v3, v5);
      goto LABEL_23;
    }
  }
LABEL_24:
  *a3 = 0LL;
  return result;
}

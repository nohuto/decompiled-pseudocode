/*
 * XREFs of ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18000CC80
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18000B954 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18000CDB4 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x18000D298 (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180208B4C (-Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z.c)
 */

bool __fastcall CVisualDepthGeometry::FindOverlappingPoint(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  unsigned int v3; // xmm4_4
  unsigned int v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  bool v9; // r8
  float v10; // xmm4_4
  float v11; // xmm5_4
  int v12; // xmm5_4
  bool result; // al
  int v14; // ebx
  __int64 v15; // rdi
  const struct CLineSegment *v16; // rax
  int *v17; // r15
  __int64 v18; // r12
  CLineSegment *v19; // r13
  const struct CLineSegment *v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // r9
  __int64 v23; // r10
  int v24; // xmm1_4
  bool v25; // r8
  int v26; // xmm1_4
  bool v27; // zf
  __int64 i; // rax
  unsigned __int64 v29; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  struct Windows::Foundation::Numerics::float2 *v33; // [rsp+48h] [rbp-C0h]
  float v34[48]; // [rsp+58h] [rbp-B0h]

  v3 = *((_DWORD *)a2 + 37);
  v5 = *((_DWORD *)a2 + 38);
  v6 = 0.0;
  v33 = a3;
  v7 = 0.0;
  v30 = 0LL;
  v29 = __PAIR64__(v5, v3);
  if ( !CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v29, 0)
    && (v12 = *((_DWORD *)this + 38),
        LODWORD(v29) = *((_DWORD *)this + 37),
        HIDWORD(v29) = v12,
        !CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v29, v9))
    || (v30 = __PAIR64__(LODWORD(v11), LODWORD(v10)),
        v7 = v11,
        v6 = v10,
        CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v30))
    || CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v30) )
  {
    v14 = 0;
    v31 = 4LL;
    v15 = 0LL;
    v16 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
    v17 = (int *)((char *)this + 40);
    v18 = a2 - this;
    v19 = (CVisualDepthGeometry *)((char *)this + 84);
    do
    {
      v20 = v16;
      do
      {
        if ( CLineSegment::Intersects(v19, v20, (struct Windows::Foundation::Numerics::float2 *)&v32) )
        {
          ++v14;
          ++v15;
          *v22 = v32;
        }
        v20 = (const struct CLineSegment *)(v21 + 16);
      }
      while ( v23 != 1 );
      v24 = *v17;
      LODWORD(v29) = *(v17 - 1);
      HIDWORD(v29) = v24;
      if ( CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v29, 1) )
      {
        ++v14;
        *(_QWORD *)&v34[2 * v15++] = v29;
      }
      v26 = *(int *)((char *)v17 + v18);
      LODWORD(v29) = *(int *)((char *)v17 + v18 - 4);
      HIDWORD(v29) = v26;
      if ( CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v29, v25) )
      {
        ++v14;
        *(_QWORD *)&v34[2 * v15++] = v29;
      }
      v19 = (CLineSegment *)((char *)v19 + 16);
      v16 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
      v17 += 3;
      --v31;
    }
    while ( v31 );
    v27 = v14 == 0;
    if ( v14 > 0 )
    {
      for ( i = 0LL; i < v14; v7 = v7 + v34[2 * i++ + 1] )
        v6 = v6 + v34[2 * i];
      v27 = v14 == 0;
      *(float *)&v30 = v6 * (float)(1.0 / (float)v14);
      *((float *)&v30 + 1) = v7 * (float)(1.0 / (float)v14);
    }
    if ( v27
      || CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v30)
      || CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v30) )
    {
      return 0;
    }
  }
  result = 1;
  *(_QWORD *)v33 = v30;
  return result;
}

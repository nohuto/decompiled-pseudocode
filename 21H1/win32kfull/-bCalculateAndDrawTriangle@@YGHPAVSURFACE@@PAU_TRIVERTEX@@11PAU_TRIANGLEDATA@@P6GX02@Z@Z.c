/*
 * XREFs of ?bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z @ 0x1E9AC4
 * Callers:
 *     ?bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@@4PAU_POINTL@@@Z @ 0x1EA568 (-bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bCalulateColorGradient@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1E9CBD (-bCalulateColorGradient@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z.c)
 *     ?lCalculateTriangleArea@@YGJPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1EA8AF (-lCalculateTriangleArea@@YGJPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z.c)
 *     ?vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z @ 0x1EA921 (-vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z.c)
 */

int __userpurge bCalculateAndDrawTriangle@<eax>(
        struct _TRIVERTEX *a1@<edx>,
        int a2@<ecx>,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIVERTEX *a5,
        struct _TRIVERTEX *a6,
        struct _TRIANGLEDATA *a7,
        void (__stdcall *a8)(struct SURFACE *, struct _TRIANGLEDATA *))
{
  struct _TRIVERTEX *v8; // edi
  struct _TRIVERTEX *v9; // esi
  struct _TRIVERTEX *v10; // ebx
  struct _TRIVERTEX *v11; // eax
  struct _TRIVERTEX *v12; // eax
  int v13; // eax
  struct _TRIVERTEX *v14; // eax
  LONG y; // edx
  LONG v16; // eax
  struct _TRIVERTEX *v17; // ebx
  LONG *p_y; // edx
  int v19; // ebx
  struct _TRIVERTEX *v21; // [esp+0h] [ebp-30h]
  struct _TRIVERTEX *v22; // [esp+0h] [ebp-30h]
  struct _TRIVERTEX *v23; // [esp+0h] [ebp-30h]
  struct _TRIVERTEX *v24; // [esp+0h] [ebp-30h]
  struct _TRIVERTEX *v25; // [esp+0h] [ebp-30h]
  struct _TRIANGLEDATA *v26; // [esp+4h] [ebp-2Ch]
  struct _TRIANGLEDATA *v27; // [esp+4h] [ebp-2Ch]
  struct _TRIANGLEDATA *v28; // [esp+4h] [ebp-2Ch]
  struct _TRIANGLEDATA *v29; // [esp+4h] [ebp-2Ch]
  struct _TRIANGLEDATA *v30; // [esp+4h] [ebp-2Ch]

  if ( !a6 )
    return 0;
  v8 = a1;
  v9 = a3;
  v10 = a4;
  if ( a1->y > a3->y )
  {
    v8 = a3;
    v9 = a1;
  }
  if ( v9->y > a4->y )
  {
    v11 = v9;
    v9 = a4;
    v10 = v11;
    a4 = v11;
  }
  if ( v8->y > v9->y )
  {
    v12 = v8;
    v8 = v9;
    v9 = v12;
  }
  v13 = lCalculateTriangleArea(v10, a5, v21, v26);
  if ( !v13 )
    return 0;
  if ( v13 < 0 )
  {
    v14 = v9;
    v9 = v10;
    v10 = v14;
    a4 = v14;
    if ( lCalculateTriangleArea(v14, a5, v22, v27) <= 0 )
      return 0;
  }
  y = v8->y;
  if ( y <= a5->y )
    y = a5->y;
  a5[7].x = y;
  v16 = v9->y;
  if ( v16 <= v10->y )
    v16 = v10->y;
  if ( v16 >= *(_DWORD *)&a5->Blue )
    v16 = *(_DWORD *)&a5->Blue;
  a5[7].y = v16;
  v17 = a4;
  if ( v16 - y > 0 )
  {
    p_y = &a5[10].y;
    v19 = 0;
    do
    {
      *(p_y - 1) = 0x7FFFFFFF;
      *p_y = 0x80000000;
      ++v19;
      p_y += 10;
    }
    while ( v19 < a5[7].y - a5[7].x );
    v17 = a4;
  }
  if ( v8->Red > 0xFF00u )
    v8->Red = -256;
  if ( v8->Green > 0xFF00u )
    v8->Green = -256;
  if ( v8->Blue > 0xFF00u )
    v8->Blue = -256;
  if ( v9->Red > 0xFF00u )
    v9->Red = -256;
  if ( v9->Green > 0xFF00u )
    v9->Green = -256;
  if ( v9->Blue > 0xFF00u )
    v9->Blue = -256;
  if ( v17->Red > 0xFF00u )
    v17->Red = -256;
  if ( v17->Green > 0xFF00u )
    v17->Green = -256;
  if ( v17->Blue > 0xFF00u )
    v17->Blue = -256;
  bCalulateColorGradient(v17, a5, v22, v27);
  vCalculateLine(a5, v23, v28);
  vCalculateLine(a5, v24, v29);
  vCalculateLine(a5, v25, v30);
  if ( bUMPDSecurityGateEx()
    && !a5[9].y
    && (a6 == (struct _TRIVERTEX *)vGradientFill4 || a6 == (struct _TRIVERTEX *)vGradientFill8) )
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bCalculateAndDrawTriangle:pfnG references NULL ptData->pxlo.\n",
        1008);
  }
  else
  {
    ((void (__stdcall *)(int, struct _TRIVERTEX *))a6)(a2, a5);
  }
  return 1;
}

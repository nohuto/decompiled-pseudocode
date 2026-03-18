/*
 * XREFs of ?bIsTriangleInBounds@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1E9F9E
 * Callers:
 *     ?bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@@4PAU_POINTL@@@Z @ 0x1EA568 (-bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge bIsTriangleInBounds@<eax>(
        LONG *a1@<edx>,
        LONG *a2@<ecx>,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIVERTEX *a5,
        struct _TRIANGLEDATA *a6)
{
  LONG v6; // esi
  LONG x; // edi
  LONG v8; // eax
  LONG v9; // ecx
  LONG v10; // edx
  LONG y; // ecx

  v6 = *a2;
  x = *a2;
  if ( *a2 < *a1 || (x = *a1, *a2 <= *a1) )
    v6 = *a1;
  v8 = a2[1];
  v9 = a1[1];
  v10 = v8;
  if ( v8 < v9 || (v10 = v9, v8 <= v9) )
    v8 = v9;
  if ( x >= a3->x )
    x = a3->x;
  if ( v6 <= a3->x )
    v6 = a3->x;
  y = a3->y;
  if ( v10 >= y )
    v10 = a3->y;
  if ( v8 <= y )
    v8 = a3->y;
  return x < *(_DWORD *)&a4->Red && v6 > a4->x && v10 < *(_DWORD *)&a4->Blue && v8 > a4->y;
}

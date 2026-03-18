/*
 * XREFs of ?lCalculateTriangleArea@@YGJPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1EA8AF
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z @ 0x1E9AC4 (-bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z.c)
 *     ?bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z @ 0x1EA00C (-bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge lCalculateTriangleArea@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIVERTEX *a5,
        struct _TRIANGLEDATA *a6)
{
  __int64 v6; // kr00_8
  int result; // eax

  v6 = (a1[1] - a3->y) * (__int64)(*a2 - a3->x) - (*a1 - a3->x) * (__int64)(a2[1] - a3->y);
  if ( !v6 )
    return 0;
  if ( v6 <= 0 )
    return -1;
  result = 1;
  if ( a4 )
    *(_QWORD *)&a4[7].Red = v6;
  return result;
}

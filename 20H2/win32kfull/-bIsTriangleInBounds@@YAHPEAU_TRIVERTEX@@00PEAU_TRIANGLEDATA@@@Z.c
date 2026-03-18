/*
 * XREFs of ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0142CF4
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01421D0 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIsTriangleInBounds(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // r10d
  LONG v6; // ebx
  LONG y; // r8d
  bool v8; // cc
  LONG v9; // ecx
  LONG v10; // eax
  LONG v11; // edx
  LONG v12; // eax
  LONG v13; // edi
  LONG v14; // r10d

  x = a1->x;
  v6 = x;
  y = a1->y;
  v8 = a1->x < a2->x;
  v9 = y;
  if ( x <= a2->x )
    x = a2->x;
  if ( !v8 )
    v6 = a2->x;
  v10 = a2->y;
  v11 = a3->y;
  if ( y >= v10 )
    v9 = v10;
  if ( y <= v10 )
    y = v10;
  v12 = a3->x;
  v13 = a3->x;
  if ( x > a3->x )
    v13 = x;
  v14 = a3->y;
  if ( v9 < v11 )
    v14 = v9;
  if ( y > v11 )
    v11 = y;
  if ( v6 < v12 )
    v12 = v6;
  return v12 < *((_DWORD *)a4 + 2) && v13 > *(_DWORD *)a4 && v14 < *((_DWORD *)a4 + 3) && v11 > *((_DWORD *)a4 + 1);
}

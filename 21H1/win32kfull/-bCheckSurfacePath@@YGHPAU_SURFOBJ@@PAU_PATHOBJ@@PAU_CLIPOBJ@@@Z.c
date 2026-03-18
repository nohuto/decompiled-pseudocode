/*
 * XREFs of ?bCheckSurfacePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x2169D7
 * Callers:
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge bCheckSurfacePath@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _PATHOBJ *a4,
        struct _CLIPOBJ *a5)
{
  int v7; // edx
  BOOL v8; // eax
  int *v9; // esi
  HSURF *p_hsurf; // ecx
  HSURF v11; // esi
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]

  v13 = 0;
  v7 = 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( !a2 || !a1 )
    return 0;
  if ( a3 )
    v8 = LOBYTE(a3->sizlBitmap.cy) == 0;
  else
    v8 = 1;
  if ( v8 )
  {
    v9 = (int *)(*(_DWORD *)(a1 + 8) + 28);
    p_hsurf = (HSURF *)&v13;
    v13 = *v9++;
    v14 = *v9++;
    v15 = *v9;
    v16 = v9[1];
    v13 >>= 4;
    v14 >>= 4;
    v15 >>= 4;
    v16 >>= 4;
  }
  else
  {
    p_hsurf = &a3->hsurf;
    if ( a3 == (struct _SURFOBJ *)-4 )
      return v7;
  }
  v11 = p_hsurf[2];
  if ( (int)*p_hsurf > (int)v11 || (int)p_hsurf[1] > (int)p_hsurf[3] )
  {
    v7 = 0;
  }
  else if ( (int)v11 > *(_DWORD *)(a2 + 16) )
  {
    return 0;
  }
  if ( (int)*p_hsurf < 0 || (int)p_hsurf[3] > *(_DWORD *)(a2 + 20) || (int)p_hsurf[1] < 0 )
    return 0;
  return v7;
}

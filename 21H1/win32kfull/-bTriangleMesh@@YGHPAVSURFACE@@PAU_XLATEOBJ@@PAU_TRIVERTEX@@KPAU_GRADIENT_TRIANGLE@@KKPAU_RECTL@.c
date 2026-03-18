/*
 * XREFs of ?bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@@4PAU_POINTL@@@Z @ 0x1EA568
 * Callers:
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?bDetermineTriangleFillRoutine@@YGHPAVSURFACE@@PAVXEPALOBJ@@PAP6GX0PAU_TRIANGLEDATA@@@ZPAP6GX0PAU_GRADIENTRECTDATA@@@Z@Z @ 0xBF344 (-bDetermineTriangleFillRoutine@@YGHPAVSURFACE@@PAVXEPALOBJ@@PAP6GX0PAU_TRIANGLEDATA@@@ZPAP6GX0PA.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z @ 0x1E9AC4 (-bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1E9F9E (-bIsTriangleInBounds@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z.c)
 *     ?bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z @ 0x1EA00C (-bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z.c)
 */

int __userpurge bTriangleMesh@<eax>(
        struct _TRIVERTEX *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *Src,
        struct _TRIVERTEX *a4,
        struct _TRIVERTEX *a5,
        struct _TRIVERTEX *Size,
        struct _GRADIENT_TRIANGLE *a7,
        size_t a8,
        PATHOBJ *a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        struct _POINTL *a12)
{
  int v12; // esi
  struct _TRIVERTEX *v13; // ebx
  struct _TRIVERTEX *v14; // esi
  struct _RECTL *v15; // ecx
  struct _TRIVERTEX *v16; // eax
  LONG top; // eax
  PATHOBJ *v18; // ecx
  COLOR16 *p_Red; // esi
  LONG *v20; // edx
  struct _TRIVERTEX *v21; // edi
  int v22; // ebx
  size_t v23; // edi
  PATHOBJ *v24; // eax
  struct _TRIVERTEX *v25; // esi
  struct _TRIVERTEX *v26; // ebx
  PATHOBJ *v27; // esi
  struct _RECTL *v28; // ecx
  unsigned int v29; // edx
  int v30; // eax
  char v31; // cl
  void (__stdcall **v33)(struct SURFACE *, struct _TRIANGLEDATA *); // [esp+0h] [ebp-28h]
  struct _TRIANGLEDATA *v34; // [esp+0h] [ebp-28h]
  unsigned int v35; // [esp+0h] [ebp-28h]
  ULONG *v36; // [esp+0h] [ebp-28h]
  struct _TRIVERTEX *v37; // [esp+0h] [ebp-28h]
  void (__stdcall **v38)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [esp+4h] [ebp-24h]
  void (__stdcall *v39)(struct SURFACE *, struct _TRIANGLEDATA *); // [esp+4h] [ebp-24h]
  unsigned int *v40; // [esp+4h] [ebp-24h]
  struct _TRIANGLEDATA *v41; // [esp+4h] [ebp-24h]
  unsigned int v42; // [esp+Ch] [ebp-1Ch] BYREF
  struct _TRIVERTEX *v43; // [esp+10h] [ebp-18h]
  int v44; // [esp+14h] [ebp-14h]
  struct _TRIVERTEX *v45; // [esp+18h] [ebp-10h] BYREF
  int v46; // [esp+1Ch] [ebp-Ch] BYREF
  int v47; // [esp+20h] [ebp-8h]
  struct _TRIVERTEX *v48; // [esp+24h] [ebp-4h]
  struct _RECTL *Srca; // [esp+30h] [ebp+8h]
  struct _TRIVERTEX *Srcb; // [esp+30h] [ebp+8h]
  struct _TRIVERTEX *v51; // [esp+34h] [ebp+Ch]
  size_t v52; // [esp+34h] [ebp+Ch]
  struct _TRIVERTEX *v53; // [esp+34h] [ebp+Ch]
  struct _TRIVERTEX *v54; // [esp+34h] [ebp+Ch]
  struct _TRIVERTEX *v55; // [esp+38h] [ebp+10h]

  v45 = 0;
  v12 = *(_DWORD *)(a8 + 12) - *(_DWORD *)(a8 + 4);
  v43 = a1;
  v44 = a2;
  v47 = 1;
  if ( v12 > 0 && (unsigned int)(v12 - 1) <= 0x6666661 )
  {
    v13 = (struct _TRIVERTEX *)PALLOCMEM2(40 * (v12 + 4), 1734624615, 1);
    v48 = v13;
    if ( v13 )
    {
      v46 = *(_DWORD *)(v44 + 88);
      if ( !v46 )
      {
        v46 = *(_DWORD *)(*(_DWORD *)(v44 + 28) + 1112);
        if ( !v46 )
          goto LABEL_35;
      }
      bDetermineTriangleFillRoutine((int)&v46, v44, (struct SURFACE *)&v45, (struct XEPALOBJ *)&v42, v33, v38);
      v14 = (struct _TRIVERTEX *)a8;
      v15 = a10;
      v13[9].x = (LONG)a7;
      v16 = v43;
      v13->x = v14->x;
      v14 = (struct _TRIVERTEX *)((char *)v14 + 4);
      v13[9].y = (LONG)v16;
      *(_DWORD *)&v13[9].Red = &v46;
      v13->y = v14->x;
      v14 = (struct _TRIVERTEX *)((char *)v14 + 4);
      *(_DWORD *)&v13->Red = v14->x;
      *(_DWORD *)&v13->Blue = v14->y;
      v13[8].x = v15->left;
      top = v15->top;
      v18 = a9;
      v13[8].y = top;
      if ( (signed int)(v18[1].fl - v18->fl) < 0x4000 && (signed int)(v18[1].cCurves - v18->cCurves) < 0x4000 )
      {
        a8 = (size_t)Size;
        if ( Size )
        {
          p_Red = &a5->Red;
          do
          {
            v20 = (LONG *)((char *)Src + 16 * *((_DWORD *)p_Red - 1));
            v21 = (struct _TRIVERTEX *)((char *)Src + 16 * *((_DWORD *)p_Red - 2));
            Size = (struct _TRIVERTEX *)((char *)Src + 16 * *(_DWORD *)p_Red);
            v51 = (struct _TRIVERTEX *)v20;
            if ( bIsTriangleInBounds(v20, &v21->x, Size, v13, (struct _TRIVERTEX *)v34, (struct _TRIANGLEDATA *)v39) )
              v47 = bCalculateAndDrawTriangle(v21, v44, v51, Size, v13, v45, v34, v39);
            p_Red += 6;
            --a8;
          }
          while ( a8 );
          v22 = v47;
        }
        else
        {
          v22 = 1;
        }
LABEL_38:
        v27 = (PATHOBJ *)v48;
LABEL_39:
        Win32FreePool(v27);
        return v22;
      }
      a7 = 0;
      a8 = 0;
      if ( (ULongAdd((int)a4, 0x1Du, (int *)&a7, (unsigned int)v34, (unsigned int *)v39) & 0x80000000) != 0
        || (v23 = (size_t)Size, (ULongAdd((int)Size, 0x3Au, (int *)&a8, v35, v40) & 0x80000000) != 0)
        || (Size = 0, ULongLongToULong(a8 + 16LL * (unsigned int)a7 + 12LL * a8, v36) < 0) )
      {
        Win32FreePool((PATHOBJ *)v13);
        return 0;
      }
      v24 = (PATHOBJ *)PALLOCMEM2((size_t)Size, 1953920071, 0);
      a9 = v24;
      if ( !v24 )
      {
LABEL_35:
        v22 = 0;
        goto LABEL_38;
      }
      v25 = (struct _TRIVERTEX *)&v24[2 * (int)a7];
      v42 = a8 - 2;
      v43 = v25;
      a10 = (struct _RECTL *)((char *)&a7[-1].Vertex3 + 3);
      a7 = (struct _GRADIENT_TRIANGLE *)((char *)v25 + 12 * a8);
      v26 = a4;
      memcpy(v24, Src, 16 * (_DWORD)a4);
      memcpy(v25, a5, 12 * v23);
      memset(a7, 0, v23);
      v27 = (PATHOBJ *)v48;
      v28 = a10;
      Size = a4;
      a8 = v23;
      while ( 1 )
      {
        v52 = 12 * (v23 - 1);
        Srca = *(struct _RECTL **)((char *)&v43->x + v52);
        if ( Srca >= v28
          || (v29 = *(LONG *)((char *)&v43->y + v52), v29 >= (unsigned int)v28)
          || (v27 = (PATHOBJ *)v48,
              v53 = *(struct _TRIVERTEX **)((char *)&v43->Red + v52),
              v53 >= (struct _TRIVERTEX *)v28) )
        {
LABEL_31:
          Win32FreePool(a9);
          v22 = v47;
          goto LABEL_39;
        }
        Srcb = (struct _TRIVERTEX *)&a9[2 * (int)Srca];
        v55 = (struct _TRIVERTEX *)&a9[2 * v29];
        v54 = (struct _TRIVERTEX *)&a9[2 * (int)v53];
        if ( !bIsTriangleInBounds(&v55->x, &Srcb->x, v54, v48, v37, v41) )
          goto LABEL_25;
        if ( !bSplitTriangle((LONG *)&Size, (int)a9, v43, &a8, a7, (unsigned int *)v37, (unsigned __int8 *)v41) )
          break;
        v26 = Size;
        v28 = a10;
        if ( Size > (struct _TRIVERTEX *)a10 )
          goto LABEL_31;
        v23 = a8;
        if ( a8 > v42 )
          goto LABEL_31;
LABEL_30:
        if ( !v23 )
          goto LABEL_31;
      }
      v30 = bCalculateAndDrawTriangle(
              Srcb,
              v44,
              v55,
              v54,
              (struct _TRIVERTEX *)v27,
              v45,
              (struct _TRIANGLEDATA *)v37,
              (void (__stdcall *)(struct SURFACE *, struct _TRIANGLEDATA *))v41);
      v26 = Size;
      v23 = a8;
      v47 = v30;
      do
      {
LABEL_25:
        v31 = *((_BYTE *)&a7->Vertex1 + --v23);
        if ( v31 )
          v26 = (struct _TRIVERTEX *)((char *)v26 - 1);
      }
      while ( v23 && v31 == 1 );
      v28 = a10;
      a8 = v23;
      Size = v26;
      goto LABEL_30;
    }
  }
  return 0;
}

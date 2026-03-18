/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01400A0
 * Callers:
 *     EngGradientFill @ 0x1C00CBFB0 (EngGradientFill.c)
 * Callees:
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00CC940 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C0140278 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0140BC4 (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C028B750 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 */

__int64 __fastcall bTriangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        unsigned int a4,
        struct _GRADIENT_TRIANGLE *a5,
        size_t Size,
        LONG a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10)
{
  struct _RECTL *v10; // rbx
  struct _TRIVERTEX *v11; // r15
  __int64 v13; // r14
  unsigned int v15; // r12d
  int v16; // r9d
  struct _POINTL *v17; // rsi
  struct _RECTL *v18; // rdx
  struct _RECTL v19; // xmm0
  struct _POINTL *v20; // rax
  __int64 v21; // r13
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v23; // rdi
  struct _TRIVERTEX *v24; // r14
  struct _TRIVERTEX *v25; // r15
  __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  struct _TRIVERTEX *v30; // rax
  struct _TRIVERTEX *v31; // r13
  unsigned int v32; // r15d
  unsigned int v33; // ebx
  ULONG Vertex1; // r9d
  ULONG Vertex2; // r8d
  __int64 Vertex3; // rdx
  int v37; // eax
  unsigned __int8 v38; // cl
  unsigned int v39; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-4Ch]
  __int64 v41; // [rsp+38h] [rbp-48h] BYREF
  struct _GRADIENT_TRIANGLE *v42; // [rsp+40h] [rbp-40h]
  void (*v43)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v44; // [rsp+50h] [rbp-30h]
  struct _TRIVERTEX *v45; // [rsp+58h] [rbp-28h]
  struct _TRIVERTEX *v46; // [rsp+60h] [rbp-20h]
  struct _TRIVERTEX *v47; // [rsp+68h] [rbp-18h]
  struct _POINTL *v48; // [rsp+70h] [rbp-10h]

  v10 = a8;
  v11 = a3;
  v43 = 0LL;
  v13 = a4;
  v15 = 1;
  v16 = a8->bottom - a8->top;
  if ( v16 <= 0 )
    return 0;
  if ( (unsigned int)(v16 - 1) > 0x6666661 )
    return 0;
  v48 = (struct _POINTL *)PALLOCMEM2((unsigned int)(40 * v16 + 168), 1734624615LL, 1);
  v17 = v48;
  if ( !v48 )
    return 0;
  v41 = *((_QWORD *)a1 + 16);
  if ( !v41 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1808LL);
    if ( !v41 )
      goto LABEL_15;
  }
  bDetermineTriangleFillRoutine(
    a1,
    (struct XEPALOBJ *)&v41,
    &v43,
    (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
  v18 = a9;
  v19 = *v10;
  v17[18].x = a7;
  v17[20] = (struct _POINTL)&v41;
  v20 = a10;
  *(struct _RECTL *)&v17->x = v19;
  v17[19] = (struct _POINTL)a2;
  v17[16] = *v20;
  if ( v18->right - v18->left < 0x4000 && v18->bottom - v18->top < 0x4000 )
  {
    if ( (_DWORD)Size )
    {
      v21 = (unsigned int)Size;
      p_Vertex3 = &a5->Vertex3;
      do
      {
        v23 = &v11[*(p_Vertex3 - 2)];
        v24 = &v11[*(p_Vertex3 - 1)];
        v25 = &a3[*p_Vertex3];
        if ( (unsigned int)bIsTriangleInBounds(v23, v24, v25, (struct _TRIANGLEDATA *)v17) )
          v15 = bCalculateAndDrawTriangle(a1, v23, v24, v25, (struct _TRIANGLEDATA *)v17, v43);
        v11 = a3;
        p_Vertex3 += 3;
        --v21;
      }
      while ( v21 );
    }
LABEL_13:
    Win32FreePool(v17);
    return v15;
  }
  if ( (unsigned int)v13 < 0xFFFFFFE3 )
  {
    LODWORD(v27) = Size;
    v40 = Size + 58;
    if ( (unsigned int)Size < 0xFFFFFFC6 )
    {
      a8 = (struct _RECTL *)(unsigned int)(Size + 58);
      v28 = (unsigned int)(v13 + 29);
      v29 = v28 * 16 + 13LL * (_QWORD)a8;
      if ( v29 <= 0xFFFFFFFF )
      {
        v30 = (struct _TRIVERTEX *)PALLOCMEM2((unsigned int)v29, 1953920071LL, 0);
        v31 = v30;
        if ( v30 )
        {
          v40 -= 2;
          v42 = (struct _GRADIENT_TRIANGLE *)&v30[v28];
          v32 = v13 + 28;
          v44 = (unsigned __int8 *)&v30[v28] + 12 * (_QWORD)a8;
          memmove(v30, a3, 16 * v13);
          memmove(v42, a5, 12LL * (unsigned int)Size);
          memset(v44, 0, (unsigned int)Size);
          v33 = v40;
          LODWORD(a8) = v13;
          v39 = Size;
          while ( 1 )
          {
            Vertex1 = v42[(unsigned int)(v27 - 1)].Vertex1;
            if ( Vertex1 >= v32
              || (Vertex2 = v42[(unsigned int)(v27 - 1)].Vertex2, Vertex2 >= v32)
              || (Vertex3 = v42[(unsigned int)(v27 - 1)].Vertex3, (unsigned int)Vertex3 >= v32) )
            {
LABEL_34:
              Win32FreePool(v31);
              goto LABEL_13;
            }
            v45 = &v31[Vertex3];
            v46 = &v31[Vertex2];
            v47 = &v31[Vertex1];
            if ( !(unsigned int)bIsTriangleInBounds(v47, v46, v45, (struct _TRIANGLEDATA *)v17) )
              goto LABEL_28;
            if ( !(unsigned int)bSplitTriangle(v31, (unsigned int *)&a8, v42, &v39, v44) )
              break;
            LODWORD(v13) = (_DWORD)a8;
            if ( (unsigned int)a8 > v32 )
              goto LABEL_34;
            LODWORD(v27) = v39;
            if ( v39 > v33 )
              goto LABEL_34;
LABEL_33:
            if ( !(_DWORD)v27 )
              goto LABEL_34;
          }
          v37 = bCalculateAndDrawTriangle(a1, v47, v46, v45, (struct _TRIANGLEDATA *)v17, v43);
          LODWORD(v13) = (_DWORD)a8;
          v15 = v37;
          LODWORD(v27) = v39;
          do
          {
LABEL_28:
            v27 = (unsigned int)(v27 - 1);
            v38 = v44[v27];
            if ( v38 )
            {
              LODWORD(v13) = v13 - 1;
              LODWORD(a8) = v13;
            }
          }
          while ( (_DWORD)v27 && v38 == 1 );
          v17 = v48;
          v33 = v40;
          v39 = v27;
          goto LABEL_33;
        }
LABEL_15:
        v15 = 0;
        goto LABEL_13;
      }
    }
  }
  Win32FreePool(v17);
  return 0LL;
}

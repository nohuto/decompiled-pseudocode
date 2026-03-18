/*
 * XREFs of ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F
 * Callers:
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     _OffBitBlt@56 @ 0xE9E3E (_OffBitBlt@56.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QAE@PAU_VDEV@@JJ@Z @ 0x20161B (--0MULTISORTBLTORDER@@QAE@PAU_VDEV@@JJ@Z.c)
 *     ??1MULTISORTBLTORDER@@QAE@XZ @ 0x20176E (--1MULTISORTBLTORDER@@QAE@XZ.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     _OffCopyBits@36 @ 0x22EF0F (_OffCopyBits@36.c)
 */

int __userpurge bBitBltScreenToScreen@<eax>(
        int a1@<edx>,
        int *a2@<ecx>,
        struct _CLIPOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11,
        unsigned int a12)
{
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  int *v15; // eax
  struct _DISPSURF *v16; // esi
  struct _DISPSURF *v17; // edi
  int v18; // edx
  int v19; // eax
  ULONG v20; // eax
  SURFOBJ *v21; // eax
  int v22; // eax
  _DWORD *v23; // esi
  int v24; // edx
  int v25; // ecx
  struct PALETTE *v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // edx
  struct _CLIPOBJ *v31; // edx
  RECTL *p_rclBounds; // edi
  LONG *p_top; // edi
  __int16 v34; // di
  int v35; // esi
  int v36; // eax
  struct _DISPSURF *v37; // edi
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // ecx
  int v39; // eax
  HSURF v40; // esi
  int *v41; // eax
  struct _CLIPOBJ *v42; // eax
  SIZEL v44; // [esp-18h] [ebp-F8h]
  int v45; // [esp-4h] [ebp-E4h]
  _DWORD v46[7]; // [esp+Ch] [ebp-D4h] BYREF
  PATHOBJ *v47[2]; // [esp+28h] [ebp-B8h] BYREF
  int **v48; // [esp+30h] [ebp-B0h]
  int v49; // [esp+34h] [ebp-ACh]
  int v50; // [esp+38h] [ebp-A8h]
  int v51; // [esp+3Ch] [ebp-A4h]
  char *v52; // [esp+44h] [ebp-9Ch]
  int v53; // [esp+48h] [ebp-98h]
  int v54; // [esp+4Ch] [ebp-94h]
  int v55; // [esp+50h] [ebp-90h]
  struct PALETTE *v56; // [esp+54h] [ebp-8Ch]
  const struct _RECTL *v57; // [esp+58h] [ebp-88h]
  int *v58; // [esp+5Ch] [ebp-84h]
  BRUSHOBJ *pbo; // [esp+60h] [ebp-80h]
  HSURF hsurf; // [esp+64h] [ebp-7Ch]
  int **v61; // [esp+68h] [ebp-78h]
  struct _SODISPSURF **v62; // [esp+6Ch] [ebp-74h]
  int v63; // [esp+70h] [ebp-70h]
  SURFOBJ *pso; // [esp+74h] [ebp-6Ch]
  int v65; // [esp+78h] [ebp-68h] BYREF
  int v66; // [esp+7Ch] [ebp-64h] BYREF
  int v67; // [esp+80h] [ebp-60h]
  struct PALETTE *v68; // [esp+84h] [ebp-5Ch]
  int v69; // [esp+88h] [ebp-58h]
  int *v70; // [esp+8Ch] [ebp-54h]
  int v71; // [esp+90h] [ebp-50h]
  int v72; // [esp+94h] [ebp-4Ch]
  struct _CLIPOBJ *v73; // [esp+98h] [ebp-48h]
  int v74; // [esp+9Ch] [ebp-44h]
  int v75; // [esp+A0h] [ebp-40h]
  struct _DISPSURF *v76; // [esp+A4h] [ebp-3Ch]
  int v77; // [esp+A8h] [ebp-38h]
  RECTL rclBounds; // [esp+ACh] [ebp-34h] BYREF
  int v79; // [esp+BCh] [ebp-24h] BYREF
  int v80; // [esp+C0h] [ebp-20h]
  struct PALETTE *v81; // [esp+C4h] [ebp-1Ch]
  int v82; // [esp+C8h] [ebp-18h]
  struct _RECTL v83; // [esp+CCh] [ebp-14h] BYREF

  v58 = (int *)a4;
  v73 = a3;
  v50 = (int)a7;
  pbo = (BRUSHOBJ *)a8;
  v51 = (int)a9;
  memset(&v83, 0, sizeof(v83));
  v12 = 0;
  v49 = a1;
  v70 = a2;
  v57 = (const struct _RECTL *)a5;
  v66 = 0;
  v67 = 0;
  v52 = 0;
  pso = 0;
  v77 = 1;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  memset(&rclBounds, 0, sizeof(rclBounds));
  v13 = a2[2];
  v14 = a5->iUniq - a6->iUniq;
  v62 = (struct _SODISPSURF **)(a5->rclBounds.left - a6->flXlate);
  v63 = v14;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)v47, (struct _VDEV *)v13, v14, v62);
  v61 = v48;
  if ( !v48 )
    goto LABEL_61;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v46,
    pbo,
    *(_DWORD *)(v13 + 8),
    (struct _VDEV *)v13,
    *(struct _SURFOBJ **)(v13 + 24),
    ((unsigned __int16)a10 ^ (unsigned __int16)((unsigned int)a10 >> 4)) & 0xF0F);
  if ( !v46[0] )
    goto LABEL_61;
  if ( v73 )
    rclBounds = v73->rclBounds;
  v53 = *((_WORD *)v70 + 25) & 0x40;
  v15 = (int *)v48;
  do
  {
    v16 = (struct _DISPSURF *)v15[1];
    v17 = v16;
    v76 = v16;
    v70 = v15;
    while ( 1 )
    {
      v83.left = v63 + *((_DWORD *)v17 + 5);
      v83.right = v63 + *((_DWORD *)v17 + 7);
      v83.top = (LONG)v62 + *((_DWORD *)v17 + 6);
      v83.bottom = (LONG)v62 + *((_DWORD *)v17 + 8);
      if ( !bIntersect(v57, &v83, &v83) || !bIntersect(&v83, (const struct _RECTL *)((char *)v16 + 20), &v83) )
        goto LABEL_55;
      v66 = v83.left - v63;
      v67 = v83.top - (_DWORD)v62;
      v18 = *((_DWORD *)v17 + 11);
      v19 = *((_DWORD *)v16 + 11);
      v71 = (int)v17 + 48;
      v72 = v18;
      v74 = v19;
      v52 = (char *)v16 + 48;
      hsurf = 0;
      if ( v18 != v19 )
      {
        if ( !*((_DWORD *)v17 + 3) )
          goto LABEL_55;
        v20 = *(_DWORD *)(*((_DWORD *)v17 + 9) + 1404);
        v44.cy = v83.bottom - v83.top;
        v44.cx = v83.right - v83.left;
        v68 = (struct PALETTE *)(v83.right - v83.left);
        v69 = v83.bottom - v83.top;
        hsurf = (HSURF)EngCreateBitmap(v44, 0, v20, 0, 0);
        v21 = EngLockSurface(hsurf);
        pso = v21;
        if ( v21 )
        {
          v81 = v68;
          v82 = v69;
          v79 = 0;
          v80 = 0;
          v22 = OffCopyBits((int)v21, v71, v72, 0, 0, (int)&v79, (int)&v66);
          v77 &= v22;
          v21 = pso;
        }
        v16 = v76;
        v18 = (int)v21;
        v72 = (int)v21;
        v19 = v74;
        v71 = (int)&gptlZero;
        v66 = 0;
        v67 = 0;
      }
      if ( v18 )
      {
        v23 = (_DWORD *)*((_DWORD *)v16 + 9);
        v65 = 0;
        v75 = (int)v58;
        if ( v19 != v18 )
        {
          v24 = *((_DWORD *)v76 + 4);
          if ( v24 || (v75 = (int)v58, *((_DWORD *)v17 + 4)) )
          {
            v25 = *((_DWORD *)v17 + 10);
            v54 = *(_DWORD *)(v25 + 1820);
            v55 = *(_DWORD *)(*((_DWORD *)v76 + 10) + 1820);
            v56 = ppalDefault;
            v68 = ppalDefault;
            if ( v24 && (v23[364] & 0x100) != 0 )
            {
              v26 = DrvRealizeHalftonePalette((int)v23, 0);
              v25 = *((_DWORD *)v17 + 10);
              v68 = v26;
            }
            v27 = 32 * (*(_DWORD *)(v25 + 1456) & 0x100);
            if ( v58 )
              v75 = v58[5];
            else
              v75 = 0;
            if ( v58 )
              v69 = v58[7];
            else
              v69 = 0;
            if ( v58 )
              v28 = v58[6];
            else
              v28 = 0;
            if ( v58 )
              v29 = v58[13];
            else
              v29 = 0;
            if ( v58 )
              v30 = v58[12];
            else
              v30 = 0;
            if ( EXLATEOBJ::bInitXlateObj(
                   &v65,
                   v30,
                   v29,
                   *(_DWORD **)(v54 + 88),
                   *(_DWORD **)(v55 + 88),
                   (int)v56,
                   (int)v68,
                   v28,
                   v69,
                   v75,
                   v27) )
            {
              v75 = v65;
              goto LABEL_38;
            }
            v77 = 0;
LABEL_51:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
            goto LABEL_52;
          }
        }
LABEL_38:
        v31 = v73;
        if ( v73 )
        {
          p_rclBounds = &v73->rclBounds;
          if ( !bIntersect(&rclBounds, &v83, &v73->rclBounds) )
          {
            p_rclBounds->left = rclBounds.left;
            p_top = &p_rclBounds->top;
            *p_top++ = rclBounds.top;
            *p_top = rclBounds.right;
            p_top[1] = rclBounds.bottom;
            goto LABEL_51;
          }
          v31 = v73;
        }
        if ( a10 == (struct _BRUSHOBJ *)52428 )
        {
          v34 = *(_WORD *)(v74 + 50);
          if ( (_WORD)v53 )
            *(_WORD *)(v74 + 50) |= 0x40u;
          v35 = v74;
          v36 = OffCopyBits(v74, v71, v72, v31, v75, (int)&v83, (int)&v66);
          v77 &= v36;
          *(_WORD *)(v35 + 50) = v34;
        }
        else
        {
          v37 = v76;
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v46, v76, (struct SURFACE *)(v74 - 16));
          if ( (*(_BYTE *)(v23[455] + 72) & 1) != 0 )
            v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v23[493];
          else
            v38 = EngBitBlt;
          v39 = OffBitBlt(
                  (int (__stdcall *)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int))v38,
                  (LONG *)v37 + 12,
                  v74,
                  (_DWORD *)v71,
                  v72,
                  v49,
                  v73,
                  v75,
                  &v83,
                  &v66,
                  v50,
                  (int)pbo,
                  (int *)v51,
                  (int)a10);
          v45 = *((_DWORD *)v37 + 2);
          v77 &= v39;
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v46, v45);
        }
        goto LABEL_51;
      }
LABEL_52:
      v40 = hsurf;
      if ( hsurf )
      {
        EngUnlockSurface(pso);
        EngDeleteSurface(v40);
      }
      v16 = v76;
LABEL_55:
      v41 = (int *)*v70;
      v70 = v41;
      if ( !v41 )
        break;
      v17 = (struct _DISPSURF *)v41[1];
    }
    v15 = *v61;
    v61 = (int **)v15;
  }
  while ( v15 );
  v42 = v73;
  if ( v73 )
  {
    v73->rclBounds.left = rclBounds.left;
    v42->rclBounds.top = rclBounds.top;
    v42->rclBounds.right = rclBounds.right;
    v42->rclBounds.bottom = rclBounds.bottom;
  }
  v12 = v77;
LABEL_61:
  MULTISORTBLTORDER::~MULTISORTBLTORDER(v47);
  return v12;
}

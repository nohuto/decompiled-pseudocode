/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A66B8
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A23D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C011F830 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0274664 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A1760 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C02A18D0 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02A1BA0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02A6194 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     OffCopyBits @ 0x1C02C8C98 (OffCopyBits.c)
 */

__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  struct _XLATEOBJ *v12; // r14
  unsigned int v14; // r12d
  LONG left; // ecx
  LONG top; // edx
  _QWORD *v17; // rsi
  __int64 v18; // r15
  int v19; // ebx
  __int64 v20; // rdi
  int v21; // esi
  int v22; // eax
  int v23; // r11d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // esi
  int v28; // r14d
  ULONG v29; // r8d
  SURFOBJ *v30; // rax
  SURFOBJ *v31; // r8
  __int64 v32; // rcx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rsi
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r9
  struct PALETTE *v40; // rsi
  struct PALETTE *v41; // rax
  int v42; // r10d
  int iUniq; // edi
  int flXlate; // ecx
  int v45; // r8d
  __int64 pulXlate; // rdx
  int v47; // edx
  __int16 v48; // di
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v50; // rdi
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v52; // rbx
  _QWORD *v53; // rax
  __int16 v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+74h] [rbp-8Ch]
  int v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h] BYREF
  int v59[2]; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  int v61[2]; // [rsp+98h] [rbp-68h]
  SIZEL sizl; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h] BYREF
  SURFOBJ *pso; // [rsp+B0h] [rbp-50h]
  HSURF hsurf; // [rsp+B8h] [rbp-48h]
  _QWORD *v66; // [rsp+C0h] [rbp-40h]
  _QWORD *v67; // [rsp+C8h] [rbp-38h]
  const struct _RECTL *v68; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  struct PALETTE *v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  __int64 v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v78; // [rsp+128h] [rbp+28h]
  _DWORD v79[12]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v80[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v81[2]; // [rsp+170h] [rbp+70h] BYREF
  RECTL rclBounds; // [rsp+180h] [rbp+80h] BYREF

  dhpdev = a1->dhpdev;
  v12 = a4;
  v58 = 0LL;
  sizl = 0LL;
  pso = 0LL;
  v14 = 1;
  v76 = (__int64)a2;
  v68 = a5;
  v69 = a4;
  left = a5->left;
  top = a5->top;
  v75 = (__int64)a7;
  v57 = top - a6->y;
  v56 = left - a6->x;
  v74 = (__int64)a8;
  v73 = (__int64)a9;
  *(_OWORD *)v80 = 0LL;
  *(_OWORD *)v81 = 0LL;
  rclBounds = 0LL;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)&v77, (struct _VDEV *)dhpdev, v56, v57);
  v17 = v78;
  v67 = v78;
  if ( !v78
    || (MULTIBRUSH::MULTIBRUSH(
          (MULTIBRUSH *)v79,
          a8,
          *((_DWORD *)dhpdev + 4),
          (struct _VDEV *)dhpdev,
          *((struct _SURFOBJ **)dhpdev + 6),
          ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F),
        !v79[0]) )
  {
    v14 = 0;
    goto LABEL_63;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v55 = a1->fjBitmap & 0x40;
  do
  {
    v18 = v17[1];
    v19 = v56;
    v20 = v18;
    v66 = v17;
    v21 = v57;
    while ( 1 )
    {
      LODWORD(v80[0]) = v19 + *(_DWORD *)(v20 + 28);
      LODWORD(v80[1]) = v19 + *(_DWORD *)(v20 + 36);
      HIDWORD(v80[0]) = v21 + *(_DWORD *)(v20 + 32);
      HIDWORD(v80[1]) = v21 + *(_DWORD *)(v20 + 40);
      if ( !bIntersect(v68, (const struct _RECTL *)v80, (struct _RECTL *)v80) )
        goto LABEL_58;
      v22 = bIntersect((const struct _RECTL *)v80, (const struct _RECTL *)(v18 + 28), (struct _RECTL *)v80);
      v23 = 0;
      if ( !v22 )
        goto LABEL_58;
      *(_QWORD *)v61 = v20 + 72;
      LODWORD(v58) = LODWORD(v80[0]) - v19;
      hsurf = 0LL;
      HIDWORD(v58) = HIDWORD(v80[0]) - v21;
      v24 = *(_QWORD *)(v20 + 64);
      v25 = *(_QWORD *)(v18 + 64);
      v60 = v24;
      *(_QWORD *)v59 = v25;
      if ( v24 != v25 )
      {
        if ( !*(_DWORD *)(v20 + 20) )
          goto LABEL_58;
        v26 = *(_QWORD *)(v20 + 48);
        v27 = LODWORD(v80[1]) - LODWORD(v80[0]);
        v28 = HIDWORD(v80[1]) - HIDWORD(v80[0]);
        sizl.cx = LODWORD(v80[1]) - LODWORD(v80[0]);
        v29 = *(_DWORD *)(v26 + 2108);
        sizl.cy = HIDWORD(v80[1]) - HIDWORD(v80[0]);
        hsurf = (HSURF)EngCreateBitmap(sizl, 0, v29, 0, 0LL);
        v30 = EngLockSurface(hsurf);
        v23 = 0;
        pso = v30;
        v31 = v30;
        if ( v30 )
        {
          v32 = *(_QWORD *)(v26 + 2552);
          v81[0] = 0LL;
          v81[1] = __PAIR64__(v28, v27);
          if ( (*(_DWORD *)(v32 + 112) & 0x400) != 0 )
            v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2840);
          else
            v33 = EngCopyBits;
          v34 = OffCopyBits((int)v33, (int)&gptlZero, (int)v30, v61[0], v60, 0LL, 0LL, (__int64)v81, (__int64)&v58);
          v31 = pso;
          v14 &= v34;
          v23 = 0;
        }
        v58 = 0LL;
        v12 = v69;
        v24 = (__int64)v31;
        *(_QWORD *)v61 = &gptlZero;
        v25 = *(_QWORD *)v59;
        v60 = (__int64)v31;
      }
      if ( v24 )
      {
        v35 = *(_QWORD *)(v18 + 48);
        v36 = (__int64)v12;
        v63 = 0LL;
        if ( v25 == v24 )
          goto LABEL_39;
        v37 = *(_DWORD *)(v18 + 24);
        if ( !v37 && !*(_DWORD *)(v20 + 24) )
          goto LABEL_39;
        v38 = *(_QWORD *)(v20 + 56);
        v39 = *(_QWORD *)(v38 + 2552);
        v71 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 2552LL);
        v70 = v39;
        v72 = ppalDefault;
        v40 = ppalDefault;
        if ( v37 && (*(_DWORD *)(v35 + 2172) & 0x100) != 0 )
        {
          v41 = DrvRealizeHalftonePalette((_QWORD *)v35, 0);
          v38 = *(_QWORD *)(v20 + 56);
          v40 = v41;
          v39 = v70;
          v23 = 0;
        }
        v42 = 32 * (*(_DWORD *)(v38 + 2172) & 0x100);
        if ( v12 )
          iUniq = v12[1].iUniq;
        else
          iUniq = 0;
        if ( v12 )
        {
          v23 = *(_DWORD *)&v12[1].iSrcType;
          flXlate = v12[1].flXlate;
        }
        else
        {
          flXlate = 0;
        }
        if ( v12 )
          v45 = v12[3].iUniq;
        else
          v45 = 0;
        if ( v12 )
          pulXlate = (__int64)v12[2].pulXlate;
        else
          pulXlate = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v63,
                             pulXlate,
                             v45,
                             *(_QWORD *)(v39 + 128),
                             *(_QWORD *)(v71 + 128),
                             (__int64)v72,
                             (__int64)v40,
                             flXlate,
                             v23,
                             iUniq,
                             v42) )
        {
          v36 = v63;
LABEL_39:
          if ( !a3 || bIntersect(&rclBounds, (const struct _RECTL *)v80, &a3->rclBounds) )
          {
            if ( a10 == 52428 )
            {
              v47 = v59[0];
              v48 = *(_WORD *)(*(_QWORD *)v59 + 78LL);
              if ( v55 )
                *(_WORD *)(*(_QWORD *)v59 + 78LL) = v48 | 0x40;
              if ( (*(_DWORD *)(*(_QWORD *)(v35 + 2552) + 112LL) & 0x400) != 0 )
                v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v35 + 2840);
              else
                v49 = EngCopyBits;
              v14 &= OffCopyBits((int)v49, (int)v18 + 72, v47, v61[0], v60, a3, v36, (__int64)v80, (__int64)&v58);
              *(_WORD *)(*(_QWORD *)v59 + 78LL) = v48;
            }
            else
            {
              v50 = *(_QWORD *)v59;
              MULTIBRUSH::LoadElement(
                (MULTIBRUSH *)v79,
                (struct _DISPSURF *)v18,
                (struct SURFACE *)(*(_QWORD *)v59 - 24LL));
              if ( (*(_DWORD *)(*(_QWORD *)(v35 + 2552) + 112LL) & 1) != 0 )
                v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v35 + 2832);
              else
                v51 = EngBitBlt;
              v14 &= OffBitBlt(
                       (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v51,
                       (LONG *)(v18 + 72),
                       v50,
                       *(_DWORD **)v61,
                       v60,
                       v76,
                       a3,
                       v36,
                       (int *)v80,
                       &v58,
                       v75,
                       v74,
                       (__int64 *)v73,
                       a10);
              MULTIBRUSH::StoreElement((MULTIBRUSH *)v79, *(_DWORD *)(v18 + 16));
            }
          }
          else
          {
            a3->rclBounds = rclBounds;
          }
        }
        else
        {
          v14 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
      }
      v52 = hsurf;
      if ( hsurf )
      {
        EngUnlockSurface(pso);
        EngDeleteSurface(v52);
      }
      v21 = v57;
      v19 = v56;
LABEL_58:
      v53 = (_QWORD *)*v66;
      v66 = v53;
      if ( !v53 )
        break;
      v20 = v53[1];
    }
    v17 = (_QWORD *)*v67;
    v67 = v17;
  }
  while ( v17 );
  if ( a3 )
    a3->rclBounds = rclBounds;
LABEL_63:
  if ( v77 )
    Win32FreePool(v77);
  return v14;
}

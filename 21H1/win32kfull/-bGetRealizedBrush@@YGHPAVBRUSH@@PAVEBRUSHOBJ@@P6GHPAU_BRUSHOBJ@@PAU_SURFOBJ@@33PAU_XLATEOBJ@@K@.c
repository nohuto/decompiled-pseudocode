/*
 * XREFs of ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996
 * Callers:
 *     ?pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x95952 (-pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x1CC6D1 (-BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     _BRUSHOBJ_pvGetRbrush@4 @ 0x1CC89F (_BRUSHOBJ_pvGetRbrush@4.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QAEXXZ @ 0x969F4 (-vRelease@HTSEMOBJ@@QAEXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x96A1A (--1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z @ 0x96A40 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _HT_CreateHalftoneBrush@20 @ 0x1BA502 (_HT_CreateHalftoneBrush@20.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QBEHXZ @ 0x1CC7E1 (-bIsCMYKColor@EBRUSHOBJ@@QBEHXZ.c)
 *     _EngDitherColor@16 @ 0x1E7B57 (_EngDitherColor@16.c)
 *     ?bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z @ 0x225B92 (-bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YGPAVXLATE@@K@Z @ 0x225E3B (-pCreateXlate@@YGPAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QAEXPAXK@Z @ 0x225EBC (-vCheckForICM@XLATE@@QAEXPAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QAEXXZ @ 0x225F31 (-vCheckForTrivial@XLATE@@QAEXXZ.c)
 */

int __userpurge bGetRealizedBrush@<eax>(
        EBRUSHOBJ *a1@<edx>,
        BRUSH *a2@<ecx>,
        struct BRUSH *a3,
        struct EBRUSHOBJ *a4,
        int (__stdcall *a5)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))
{
  EBRUSHOBJ *v5; // edi
  int v6; // eax
  int v8; // eax
  int v9; // ebx
  XLATE *v10; // esi
  BOOL v11; // eax
  _DWORD (__stdcall *v12)(_DWORD); // edx
  unsigned int v13; // ecx
  SURFACE *v14; // eax
  int v15; // ebx
  XLATE *v16; // ebx
  XLATE *v17; // ecx
  _DWORD *v18; // edx
  int NearestIndexFromColorref; // eax
  int v20; // edi
  ULONG v21; // eax
  int v22; // edx
  int v23; // eax
  HDEV v24; // eax
  int v25; // ecx
  HDEV v26; // eax
  ULONG v27; // eax
  ULONG v28; // eax
  void *v29; // eax
  int v30; // ecx
  int v31; // edx
  HDEV v32; // eax
  int v33; // ecx
  char v34; // cl
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  SURFACE *v41; // ecx
  struct _SURFOBJ *v42; // eax
  int v43; // ecx
  HBITMAP v44; // esi
  int v45; // ecx
  HBITMAP IcmDIB; // eax
  bool v47; // zf
  XLATE *v48; // eax
  struct PALETTE *v49; // edx
  _DWORD *v50; // ecx
  int v51; // eax
  int v52; // edx
  struct PALETTE *v53; // eax
  unsigned int v54; // [esp+64h] [ebp-98h]
  XLATE *v55; // [esp+74h] [ebp-88h]
  int v56; // [esp+74h] [ebp-88h]
  struct PALETTE *v57; // [esp+74h] [ebp-88h]
  ULONG iModea; // [esp+78h] [ebp-84h]
  int iModeb; // [esp+78h] [ebp-84h]
  ULONG iModec; // [esp+78h] [ebp-84h]
  XLATE *iModed; // [esp+78h] [ebp-84h]
  ULONG iModee; // [esp+78h] [ebp-84h]
  int v64; // [esp+7Ch] [ebp-80h] BYREF
  XLATE *Xlate; // [esp+80h] [ebp-7Ch]
  HDEV hdev; // [esp+84h] [ebp-78h] BYREF
  XLATE *v67; // [esp+88h] [ebp-74h] BYREF
  EBRUSHOBJ *v68; // [esp+8Ch] [ebp-70h]
  struct BRUSH *v69; // [esp+90h] [ebp-6Ch]
  void (__stdcall *v70)(XLATE *); // [esp+94h] [ebp-68h]
  ULONG **v71; // [esp+98h] [ebp-64h] BYREF
  int v72; // [esp+9Ch] [ebp-60h]
  int v73; // [esp+A0h] [ebp-5Ch]
  struct _SURFOBJ *v74; // [esp+A4h] [ebp-58h]
  int v75; // [esp+A8h] [ebp-54h] BYREF
  int v76; // [esp+ACh] [ebp-50h]
  int v77; // [esp+B0h] [ebp-4Ch]
  int v78; // [esp+B4h] [ebp-48h]
  int v79; // [esp+B8h] [ebp-44h]
  int v80; // [esp+BCh] [ebp-40h]
  int v81; // [esp+C0h] [ebp-3Ch] BYREF
  int v82; // [esp+C4h] [ebp-38h]
  char v83[4]; // [esp+C8h] [ebp-34h] BYREF
  char v84[4]; // [esp+CCh] [ebp-30h] BYREF
  int v85[4]; // [esp+D0h] [ebp-2Ch] BYREF
  _WORD v86[12]; // [esp+E0h] [ebp-1Ch] BYREF

  v5 = a1;
  v6 = *((_DWORD *)a2 + 14);
  v68 = a1;
  v69 = a3;
  v82 = v6;
  if ( v6 == 12 )
    return 0;
  v8 = *((_DWORD *)a1 + 14);
  v9 = 0;
  v71 = 0;
  v10 = 0;
  LOBYTE(v72) = 0;
  v73 = 0;
  hdev = *(HDEV *)(v8 + 28);
  v74 = 0;
  Xlate = 0;
  v47 = ((_BYTE)hdev[6] & 1) == 0;
  v67 = 0;
  v11 = !v47 && a3 == (struct BRUSH *)EngRealizeBrush;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v84, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v83, (struct PDEVOBJ *)&hdev);
  v12 = DEC_SHARE_REF_CNT;
  v70 = (void (__stdcall *)(XLATE *))DEC_SHARE_REF_CNT;
  v13 = *((_DWORD *)a2 + 14);
  if ( v13 >= 6 )
  {
    if ( v13 < 0xC )
    {
      if ( EBRUSHOBJ::bIsCMYKColor(v5) )
        goto LABEL_129;
      if ( (*((_DWORD *)v5 + 3) & 0x1000000) != 0 )
        *((_DWORD *)v5 + 3) = rgbFromColorref(*((_DWORD *)v5 + 15), *((_DWORD *)v5 + 16), *((_DWORD *)v5 + 3));
      v24 = hdev;
      if ( (((unsigned int)&loc_1FFFFC + 4) & (_DWORD)hdev[280]) != 0 && v69 != (struct BRUSH *)EngRealizeBrush )
      {
        if ( ((int (__stdcall *)(EBRUSHOBJ *, int, _DWORD, _DWORD, _DWORD, unsigned int))v69)(
               v5,
               *((_DWORD *)v5 + 14) != 0 ? *((_DWORD *)v5 + 14) + 16 : 0,
               0,
               0,
               0,
               *((_DWORD *)v5 + 3) | 0x80000000) )
        {
          v9 = 1;
          goto LABEL_129;
        }
        v24 = hdev;
      }
      v25 = *((_DWORD *)v5 + 14);
      v78 = 0;
      if ( *(_DWORD *)(v25 + 60) == 1 )
        v75 = 1;
      else
        v75 = *((_DWORD *)v24 + 351);
      if ( !*((_WORD *)v24 + 704) )
        goto LABEL_129;
      if ( !*((_WORD *)v24 + 705) )
        goto LABEL_129;
      v76 = *((unsigned __int16 *)v24 + 704);
      v77 = *((unsigned __int16 *)v24 + 705);
      v79 = 0;
      v80 = 1;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)&v75, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
        goto LABEL_129;
      v26 = hdev;
      iModeb = (*(_DWORD *)(*((_DWORD *)v5 + 14) + 60) == 1) + 1;
      v64 = *((_DWORD *)hdev + 488);
      if ( v64 )
      {
        if ( ((_DWORD)hdev[6] & 0x8000) == 0 )
          v26 = (HDEV)*((_DWORD *)hdev + 277);
        v27 = ((int (__stdcall *)(HDEV, int, _DWORD, ULONG *))v64)(v26, iModeb, *((_DWORD *)v5 + 3), v71[11]);
      }
      else
      {
        v27 = EngDitherColor(hdev, iModeb, *((_DWORD *)v5 + 3), v71[11]);
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        v55 = (XLATE *)xloIdent;
        goto LABEL_80;
      }
      if ( v28 != 1 )
        goto LABEL_129;
      if ( v69 == (struct BRUSH *)EngRealizeBrush )
      {
        v64 = 1;
        GreAcquireSemaphore(_ghsemHT);
      }
      else
      {
        v64 = 0;
      }
      if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) || PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0) )
      {
        v29 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
        v30 = *((_DWORD *)v5 + 3);
        v31 = *((_DWORD *)v5 + 12);
        iModec = (ULONG)v29;
        v85[3] = (int)&v81;
        v32 = hdev;
        v81 = v30;
        v85[0] = 262400;
        v33 = *((_DWORD *)hdev + 416) >> 7;
        v85[1] = 255;
        v34 = ~(_BYTE)v33 & 2;
        v85[2] = 1;
        LOBYTE(v56) = v34;
        if ( (v31 & 4) != 0 || (v31 & 0x20) == 0 && (v31 & 3) != 0 )
          LOBYTE(v56) = v34 | 0x10;
        if ( *(unsigned __int16 *)(iModec + 4) != v76 || *(unsigned __int16 *)(iModec + 6) != v77 )
        {
          SURFACE::bDeleteSurface(v71, 0, 0);
          v76 = *(unsigned __int16 *)(iModec + 4);
          v77 = *(unsigned __int16 *)(iModec + 6);
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)&v75, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
            goto LABEL_74;
          v32 = hdev;
        }
        v35 = *((_DWORD *)v32 + 415);
        if ( v35 )
        {
          v36 = v35 - 2;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  if ( v39 != 2 )
                    goto LABEL_74;
                  BYTE1(v56) = 6;
                }
                else
                {
                  BYTE1(v56) = -3;
                }
              }
              else
              {
                BYTE1(v56) = -2;
              }
            }
            else
            {
              BYTE1(v56) = -1;
            }
          }
          else
          {
            BYTE1(v56) = 2;
          }
        }
        else
        {
          BYTE1(v56) = 1;
        }
        HIBYTE(v56) = *((_BYTE *)v32 + 1652);
        qmemcpy(v86, *((const void **)v5 + 10), sizeof(v86));
        v86[5] = 10000;
        *(_DWORD *)&v86[3] = 655370000;
        BYTE2(v56) = 4;
        if ( HT_CreateHalftoneBrush((int)v85, v56, v71[11]) > 0 )
        {
          if ( ((_DWORD)hdev[6] & 0x200) != 0 )
          {
            v55 = (XLATE *)xloIdent;
LABEL_78:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
            v10 = Xlate;
            v5 = v68;
LABEL_80:
            v41 = (SURFACE *)v71;
            if ( v71 )
            {
LABEL_127:
              v42 = SURFACE::pSurfobj(v41);
              goto LABEL_128;
            }
            if ( v69 != (struct BRUSH *)EngRealizeBrush )
            {
              v42 = 0;
LABEL_128:
              v9 = ((int (__stdcall *)(EBRUSHOBJ *, int, struct _SURFOBJ *, struct _SURFOBJ *, XLATE *, int))v69)(
                     v5,
                     *((_DWORD *)v5 + 14) != 0 ? *((_DWORD *)v5 + 14) + 16 : 0,
                     v42,
                     v74,
                     v55,
                     v82);
              goto LABEL_129;
            }
            goto LABEL_129;
          }
          LOBYTE(v40) = 8;
          iModed = (XLATE *)HmgShareLockCheck(*(_DWORD *)iModec, v40);
          if ( EXLATEOBJ::bInitXlateObj(
                 (int *)&v67,
                 *((_DWORD *)v68 + 11),
                 *((_DWORD *)v68 + 12),
                 iModed,
                 *(_DWORD **)(*((_DWORD *)v68 + 14) + 88),
                 *((_DWORD *)v68 + 16),
                 *((_DWORD *)v68 + 16),
                 *((_DWORD *)v68 + 8),
                 *((_DWORD *)v68 + 9),
                 0xFFFFFF,
                 0) )
          {
            v55 = v67;
            if ( iModed )
              v70(iModed);
            v9 = 0;
            goto LABEL_78;
          }
          if ( iModed )
            v70(iModed);
          v9 = 0;
        }
        v10 = Xlate;
      }
LABEL_74:
      HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
      goto LABEL_129;
    }
    v43 = *((_DWORD *)v5 + 12);
    v44 = (HBITMAP)*((_DWORD *)a2 + 4);
    v64 = 0;
    if ( (v43 & 1) != 0 )
    {
      v12 = (_DWORD (__stdcall *)(_DWORD))*((_DWORD *)v5 + 11);
      if ( !v12 )
      {
        if ( EBRUSHOBJ::bIsCMYKColor(v5) )
          goto LABEL_95;
        goto LABEL_94;
      }
      v45 = *((_DWORD *)a2 + 6);
      if ( (v45 & 0x80u) != 0 )
      {
        if ( *((_DWORD *)a2 + 15) || (IcmDIB = BRUSH::hFindIcmDIB(a2, *((void **)v5 + 11))) == 0 )
        {
LABEL_95:
          LOBYTE(v12) = 5;
          v48 = (XLATE *)HmgShareLock(v44, v12);
          v10 = v48;
          if ( !v48 )
            goto LABEL_129;
          v49 = (struct PALETTE *)*((_DWORD *)v48 + 22);
          Xlate = (XLATE *)*((_DWORD *)v5 + 14);
          v57 = v49;
          v50 = (_DWORD *)*((_DWORD *)Xlate + 22);
          v51 = *((_DWORD *)a2 + 6);
          if ( (v51 & 0x1000) != 0 )
          {
            if ( !EXLATEOBJ::bMakeXlate(
                    &v67,
                    *((_DWORD *)v49 + 19),
                    *((_DWORD *)v5 + 16),
                    Xlate,
                    *((_DWORD *)v49 + 11),
                    *((_DWORD *)v49 + 5)) )
              goto LABEL_129;
            v55 = v67;
            goto LABEL_125;
          }
          if ( (v51 & 0x2000) != 0 )
          {
            if ( *((_DWORD *)v10 + 15) != *((_DWORD *)Xlate + 15) )
              goto LABEL_129;
            v55 = (XLATE *)xloIdent;
LABEL_126:
            v41 = v10;
            goto LABEL_127;
          }
          if ( (*((_WORD *)v10 + 32) || *((_DWORD *)v10 + 4)) && *((HDEV *)v10 + 7) != hdev )
            goto LABEL_129;
          if ( v49 )
          {
LABEL_117:
            if ( v64 )
              iModee = *((_DWORD *)v5 + 12);
            else
              iModee = 0;
            if ( v64 )
              Xlate = (XLATE *)*((_DWORD *)v5 + 11);
            else
              Xlate = 0;
            if ( !EXLATEOBJ::bInitXlateObj(
                    (int *)&v67,
                    (int)Xlate,
                    iModee,
                    v57,
                    v50,
                    *((_DWORD *)v68 + 16),
                    *((_DWORD *)v68 + 16),
                    *((_DWORD *)v5 + 8),
                    *((_DWORD *)v5 + 9),
                    0xFFFFFF,
                    0) )
              goto LABEL_129;
            v55 = v67;
LABEL_125:
            v5 = v68;
            goto LABEL_126;
          }
          v52 = *((_DWORD *)v10 + 15);
          if ( v52 == *((_DWORD *)hdev + 351) )
          {
            if ( ((_DWORD)hdev[364] & 0x100) == 0 )
            {
              v53 = (struct PALETTE *)*((_DWORD *)hdev + 278);
LABEL_114:
              v57 = v53;
              goto LABEL_117;
            }
          }
          else
          {
            if ( v52 == *((_DWORD *)v5 + 13) )
            {
              v53 = (struct PALETTE *)*((_DWORD *)v5 + 17);
              goto LABEL_114;
            }
            if ( v52 == 3 )
            {
              if ( ((_DWORD)hdev[364] & 0x100) == 0 )
              {
                v53 = ppalDefaultSurface8bpp;
                goto LABEL_114;
              }
            }
            else if ( ((unsigned int)&loc_20000 & (_DWORD)hdev[6]) == 0 )
            {
              goto LABEL_129;
            }
          }
          v57 = 0;
          goto LABEL_117;
        }
        v44 = IcmDIB;
LABEL_94:
        v64 = 1;
        goto LABEL_95;
      }
      v47 = ((unsigned int)&loc_20000 & v45) == 0;
    }
    else
    {
      v47 = (v43 & 6) == 0;
    }
    if ( v47 )
      goto LABEL_95;
    goto LABEL_94;
  }
  LOBYTE(v12) = 5;
  v14 = (SURFACE *)HmgShareLock(*((_DWORD *)hdev + v13 + 227), v12);
  v10 = v14;
  if ( v14 )
  {
    v74 = SURFACE::pSurfobj(v14);
    Xlate = pCreateXlate(v54);
    v67 = Xlate;
    if ( Xlate )
    {
      v15 = *((_DWORD *)v5 + 9);
      v64 = v15;
      if ( EBRUSHOBJ::bIsCMYKColor(v5) )
      {
        v16 = Xlate;
        iModea = *((_DWORD *)v5 + 3);
        *((_DWORD *)Xlate + 15) = v64;
        *((_DWORD *)v16 + 16) = iModea;
        XLATE::vCheckForICM(v16, *((void **)v5 + 11), *((_DWORD *)v5 + 12));
        v17 = v16;
        v55 = v16;
        v18 = (_DWORD *)((char *)v16 + 40);
      }
      else
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(*((_DWORD *)v5 + 15), *((_DWORD *)v5 + 16), v15, 1);
        v20 = *((_DWORD *)v5 + 3);
        v64 = NearestIndexFromColorref;
        v21 = ulGetNearestIndexFromColorref(*((_DWORD *)v68 + 15), *((_DWORD *)v68 + 16), v20, 1);
        v5 = v68;
        v22 = v21;
        iModea = v21;
        if ( *(_DWORD *)(*((_DWORD *)v68 + 14) + 60) == 1
          && *(_DWORD *)(*((_DWORD *)v68 + 15) + 20)
          && *((_DWORD *)v68 + 9) != *((_DWORD *)v68 + 3)
          && v64 == v21 )
        {
          v22 = 1 - v64;
          iModea = 1 - v64;
        }
        v16 = Xlate;
        v55 = Xlate;
        *((_DWORD *)Xlate + 15) = v64;
        *((_DWORD *)v16 + 16) = v22;
        XLATE::vCheckForICM(v16, *((void **)v5 + 11), *((_DWORD *)v5 + 12));
        XLATE::vCheckForTrivial(v16);
        v17 = v16;
        v18 = (_DWORD *)((char *)v16 + 40);
      }
      *((_DWORD *)v16 + 9) = ppalMono;
      *v18 = *((_DWORD *)v5 + 15);
      *((_DWORD *)v17 + 11) = *((_DWORD *)v5 + 16);
      v23 = v64;
      *((_DWORD *)v16 + 14) |= 0x100u;
      *((_DWORD *)v16 + 6) = v23;
      *((_DWORD *)v16 + 7) = iModea;
      goto LABEL_126;
    }
  }
LABEL_129:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v83);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v84);
  SURFMEM::~SURFMEM((SURFMEM *)&v71);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
  if ( v10 )
    v70(v10);
  return v9;
}

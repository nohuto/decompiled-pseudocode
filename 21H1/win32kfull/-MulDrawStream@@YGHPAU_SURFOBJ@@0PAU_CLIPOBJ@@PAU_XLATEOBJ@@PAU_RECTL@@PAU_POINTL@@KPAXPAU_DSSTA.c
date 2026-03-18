/*
 * XREFs of ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96
 * Callers:
 *     <none>
 * Callees:
 *     _EngDrawStream@36 @ 0x50172 (_EngDrawStream@36.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z @ 0x2061FA (-bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     _OffDrawStream@44 @ 0x22EFE7 (_OffDrawStream@44.c)
 */

int __stdcall MulDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  int v9; // esi
  HDEV hdev; // eax
  BOOL v11; // esi
  struct _SURFOBJ *v12; // ecx
  int Source; // eax
  BOOL v14; // ebx
  struct _SURFOBJ *v15; // edx
  int v16; // ecx
  struct PALETTE *v17; // eax
  ULONG *pulXlate; // eax
  struct PALETTE *flXlate; // edx
  int v20; // ecx
  struct _DSSTATE *v21; // ebx
  FLONG v23; // eax
  ULONG cEntries; // ebx
  int v25; // edx
  ULONG v26; // edx
  int v27; // ecx
  FLONG v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int NearestIndexFromColorref; // eax
  ULONG *v37; // [esp+Ch] [ebp-144h]
  struct PALETTE *v38; // [esp+10h] [ebp-140h]
  int Surface; // [esp+18h] [ebp-138h]
  struct _XLATEOBJ *v40; // [esp+18h] [ebp-138h]
  int v41; // [esp+18h] [ebp-138h]
  int v42; // [esp+1Ch] [ebp-134h]
  int v43; // [esp+24h] [ebp-12Ch]
  int v44; // [esp+28h] [ebp-128h]
  int v45; // [esp+34h] [ebp-11Ch] BYREF
  int v46; // [esp+38h] [ebp-118h] BYREF
  int v47; // [esp+3Ch] [ebp-114h] BYREF
  struct _XLATEOBJ *v48; // [esp+40h] [ebp-110h] BYREF
  ULONG iUniq; // [esp+44h] [ebp-10Ch]
  int v50; // [esp+48h] [ebp-108h]
  int v51; // [esp+4Ch] [ebp-104h]
  int v52; // [esp+50h] [ebp-100h]
  int v53; // [esp+54h] [ebp-FCh]
  int v54; // [esp+58h] [ebp-F8h]
  int v55; // [esp+5Ch] [ebp-F4h]
  _BYTE v56[48]; // [esp+60h] [ebp-F0h] BYREF
  struct _DISPSURF *v57; // [esp+90h] [ebp-C0h]
  int v58; // [esp+94h] [ebp-BCh]
  struct _CLIPOBJ *v59; // [esp+98h] [ebp-B8h]
  _BYTE v60[68]; // [esp+A8h] [ebp-A8h] BYREF
  int v61; // [esp+ECh] [ebp-64h]
  _BYTE v62[68]; // [esp+F8h] [ebp-58h] BYREF
  int v63; // [esp+13Ch] [ebp-14h]

  v51 = (int)a6;
  v50 = (int)a8;
  v53 = *((_DWORD *)a9 + 8);
  v52 = *((_DWORD *)a9 + 9);
  v54 = *((_DWORD *)a9 + 7);
  v9 = 1;
  v55 = *((_DWORD *)a9 + 1);
  if ( a2->iType != 1 || (hdev = a2->hdev) == 0 || ((unsigned int)&loc_20000 & (_DWORD)hdev[6]) == 0 )
  {
    v42 = 1;
    v11 = IsMetaDevBitmapForMirroring((int)a1);
    Surface = MSURF::bFindSurface((MSURF *)v56, v12, a3, a5);
    MULTISURF::MULTISURF((MULTISURF *)v60, a2);
    if ( v11 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v62, a1);
      v42 = EngDrawStream(v63, v61, (int)a3, (int)a4, (int)a5, (int *)v51, a7, (_DWORD *)v50, a9);
      MULTISURF::~MULTISURF((MULTISURF *)v62);
    }
    if ( !Surface )
    {
LABEL_32:
      v9 = v42;
      MULTISURF::~MULTISURF((MULTISURF *)v60);
      return v9;
    }
    while ( 1 )
    {
      v48 = 0;
      v47 = 0;
      v46 = 0;
      v45 = 0;
      Source = MULTISURF::bLoadSource((MULTISURF *)v60, v57);
      v44 = v58;
      v14 = Source == 0;
      if ( !Source )
      {
LABEL_29:
        v21 = a9;
        goto LABEL_30;
      }
      v15 = (struct _SURFOBJ *)v61;
      v40 = a4;
      v43 = v61 - 16;
      if ( !*((_DWORD *)v57 + 4) )
      {
        v21 = a9;
        goto LABEL_85;
      }
      v16 = *((_DWORD *)v57 + 9);
      v37 = *(ULONG **)(v61 - 16 + 88);
      v38 = ppalDefault;
      if ( (*(_DWORD *)(v16 + 1456) & 0x100) != 0 )
      {
        v17 = DrvRealizeHalftonePalette(v16, 0);
        v15 = (struct _SURFOBJ *)v61;
        v38 = v17;
      }
      if ( v37 )
        goto LABEL_27;
      if ( !a4 )
        goto LABEL_34;
      pulXlate = a4[1].pulXlate;
      if ( pulXlate )
        break;
      if ( (a4->flXlate & 1) != 0 )
      {
LABEL_34:
        if ( v15 == a2 )
        {
          pulXlate = (ULONG *)a1[1].sizlBitmap.cy;
          v37 = pulXlate;
        }
        else
        {
LABEL_27:
          pulXlate = v37;
        }
        if ( v14 )
          goto LABEL_29;
LABEL_16:
        flXlate = v38;
        goto LABEL_17;
      }
      if ( !a4[2].flXlate )
      {
        v14 = 1;
        goto LABEL_27;
      }
      flXlate = (struct PALETTE *)a4[2].flXlate;
      v38 = flXlate;
      if ( *(_DWORD *)(v43 + 60) == a1->iBitmapFormat )
      {
        pulXlate = (ULONG *)a1[1].sizlBitmap.cy;
        v37 = pulXlate;
      }
      else
      {
        pulXlate = 0;
      }
LABEL_17:
      v20 = 0;
      if ( pulXlate && (pulXlate[4] & 0x800) != 0 )
      {
        LOBYTE(v20) = flXlate != ppalDefault;
        v20 = ((v20 - 1) & 0xFFFFE000) + 0x4000;
      }
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v41 = *(_DWORD *)&a4[1].iSrcType;
      else
        v41 = 0;
      if ( a4 )
        v23 = a4[1].flXlate;
      else
        v23 = 0;
      if ( a4 )
        cEntries = a4[2].cEntries;
      else
        cEntries = 0;
      if ( a4 )
        v25 = *(_DWORD *)&a4[2].iSrcType;
      else
        v25 = 0;
      if ( !EXLATEOBJ::bInitXlateObj(
              (int *)&v48,
              v25,
              cEntries,
              v37,
              *(_DWORD **)(v44 + 72),
              (int)ppalDefault,
              (int)v38,
              v23,
              v41,
              iUniq,
              v20) )
        goto LABEL_29;
      v40 = v48;
      if ( a4 )
        v26 = a4[1].iUniq;
      else
        v26 = 0;
      if ( a4 )
        v27 = *(_DWORD *)&a4[1].iSrcType;
      else
        v27 = 0;
      if ( a4 )
        v28 = a4[1].flXlate;
      else
        v28 = 0;
      v21 = a9;
      if ( EXLATEOBJ::bInitXlateObj(&v47, 0, 0, *(_DWORD **)(v44 + 72), gppalRGB, (int)v38, (int)v38, v28, v27, v26, 0) )
      {
        *((_DWORD *)a9 + 8) = v47;
        v29 = a4 ? a4[1].iUniq : 0;
        v30 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
        v31 = a4 ? a4[1].flXlate : 0;
        if ( EXLATEOBJ::bInitXlateObj(
               &v46,
               0,
               0,
               gppalRGB,
               *(_DWORD **)(v44 + 72),
               (int)v38,
               (int)v38,
               v31,
               v30,
               v29,
               0) )
        {
          v15 = (struct _SURFOBJ *)v61;
          *((_DWORD *)a9 + 9) = v46;
          if ( v15 == a2 )
            goto LABEL_85;
          v32 = a4 ? a4[1].iUniq : 0;
          v33 = a4 ? *(_DWORD *)&a4[1].iSrcType : 0;
          v34 = a4 ? a4[1].flXlate : 0;
          if ( EXLATEOBJ::bInitXlateObj(
                 &v45,
                 0,
                 0,
                 *(_DWORD **)(v43 + 88),
                 gppalRGB,
                 (int)ppalDefault,
                 (int)v38,
                 v34,
                 v33,
                 v32,
                 0) )
          {
            *((_DWORD *)a9 + 7) = v45;
            v35 = ulIndexToRGB(a2[1].sizlBitmap.cy, ppalDefault, *((_DWORD *)a9 + 1));
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(*(_DWORD *)(v43 + 88), ppalDefault, v35, 1);
            v15 = (struct _SURFOBJ *)v61;
            *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_85:
            v42 &= OffDrawStream(v58, (int)v15, v59, (int)v40, (int)a5, v51, a7, v50, (int)v21);
            goto LABEL_31;
          }
        }
      }
LABEL_30:
      v42 = 0;
LABEL_31:
      *((_DWORD *)v21 + 9) = v52;
      *((_DWORD *)v21 + 8) = v53;
      *((_DWORD *)v21 + 7) = v54;
      *((_DWORD *)v21 + 1) = v55;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v46);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v47);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v48);
      if ( !MSURF::bNextSurface((MSURF *)v56) )
        goto LABEL_32;
    }
    v37 = a4[1].pulXlate;
    goto LABEL_16;
  }
  _DbgPrint("MulDrawStream: this should never happen\n");
  return v9;
}

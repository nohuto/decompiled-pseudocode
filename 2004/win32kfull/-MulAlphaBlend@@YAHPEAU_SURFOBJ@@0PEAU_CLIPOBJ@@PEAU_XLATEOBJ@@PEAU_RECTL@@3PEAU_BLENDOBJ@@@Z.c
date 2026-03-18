/*
 * XREFs of ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngAlphaBlend @ 0x1C00D1A90 (EngAlphaBlend.c)
 *     OffAlphaBlend @ 0x1C01066A0 (OffAlphaBlend.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0274664 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027EA70 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A1B60 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A2CB8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A6E60 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A716C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A72B4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A77F4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v7; // edi
  struct _RECTL *v9; // r14
  struct _RECTL v12; // xmm0
  HDEV hdev; // rax
  BOOL v14; // ebx
  int Surface; // eax
  int v16; // r15d
  int v17; // r12d
  int Source; // eax
  __int64 v19; // r8
  BOOL v20; // r14d
  __int64 v21; // r11
  SURFOBJ *v22; // rdx
  struct _XLATEOBJ *v23; // r9
  struct _DISPSURF *v24; // rcx
  PVOID *p_pvScan0; // r10
  __int64 v26; // rcx
  HDEV pulXlate; // r15
  struct PALETTE *v28; // r11
  struct PALETTE *v29; // rax
  int v30; // r10d
  FLONG flXlate; // r9d
  int v32; // r12d
  ULONG iUniq; // r14d
  ULONG v34; // r8d
  ULONG *v35; // rdx
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  BOOL v38; // [rsp+60h] [rbp-A0h]
  int v39; // [rsp+64h] [rbp-9Ch]
  struct PALETTE *v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v42; // [rsp+78h] [rbp-88h]
  PVOID *v43; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h] BYREF
  char v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C4h] [rbp-3Ch]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  __int64 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  _BYTE v55[40]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56; // [rsp+108h] [rbp+8h]
  char v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+114h] [rbp+14h]
  SURFOBJ *psoSrc; // [rsp+138h] [rbp+38h]
  RECTL *prclSrc; // [rsp+140h] [rbp+40h]
  _BYTE v61[56]; // [rsp+150h] [rbp+50h] BYREF
  struct _DISPSURF *v62; // [rsp+188h] [rbp+88h]
  int v63[2]; // [rsp+190h] [rbp+90h]
  struct _CLIPOBJ *v64; // [rsp+198h] [rbp+98h]
  int v65[2]; // [rsp+1A0h] [rbp+A0h]
  _BYTE v66[40]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  char v68; // [rsp+1E0h] [rbp+E0h]
  int v69; // [rsp+1E4h] [rbp+E4h]
  SURFOBJ *psoDest; // [rsp+208h] [rbp+108h]
  RECTL *prclDest; // [rsp+210h] [rbp+110h]
  struct _RECTL v72; // [rsp+220h] [rbp+120h] BYREF

  v7 = 0;
  v9 = a6;
  v52 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v12 = *a6;
  v53 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v54 = *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp;
  hdev = a2->hdev;
  v42 = a2;
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  v72 = v12;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v38 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v61, a1, a3, a5);
    v56 = 0LL;
    v16 = Surface;
    v57 = 0;
    v58 = 0;
    MULTISURF::vInit((MULTISURF *)v55, v42, v9);
    if ( v14 )
    {
      v67 = 0LL;
      v68 = 0;
      v69 = 0;
      MULTISURF::vInit((MULTISURF *)v66, a1, a5);
      v38 = EngAlphaBlend(psoDest, psoSrc, a3, a4, prclDest, prclSrc, pBlendObj);
      v17 = v38;
      MULTISURF::~MULTISURF((MULTISURF *)v66);
    }
    else
    {
      v17 = 1;
    }
    if ( !v16 )
    {
LABEL_63:
      v7 = v17;
      MULTISURF::~MULTISURF((MULTISURF *)v55);
      goto LABEL_64;
    }
    while ( 1 )
    {
      v48 = 0LL;
      v47 = 0LL;
      v46 = 0LL;
      v45 = 0LL;
      Source = MULTISURF::bLoadSource((MULTISURF *)v55, v62);
      v19 = *(_QWORD *)v63;
      v20 = Source == 0;
      v21 = *(_QWORD *)v63 - 24LL;
      v41 = *(_QWORD *)v63 - 24LL;
      if ( !Source )
        goto LABEL_61;
      v22 = psoSrc;
      v23 = a4;
      v24 = v62;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v43 = &psoSrc[-1].pvScan0;
      if ( !*((_DWORD *)v62 + 6) )
        goto LABEL_54;
      v26 = *((_QWORD *)v62 + 6);
      pulXlate = (HDEV)p_pvScan0[16];
      v28 = ppalDefault;
      v40 = ppalDefault;
      if ( (*(_DWORD *)(v26 + 2172) & 0x100) != 0 )
      {
        v29 = DrvRealizeHalftonePalette((_QWORD *)v26, 0);
        v22 = psoSrc;
        v28 = v29;
        p_pvScan0 = v43;
        v40 = v29;
      }
      if ( pulXlate )
        goto LABEL_27;
      if ( !a4 )
        goto LABEL_25;
      if ( a4[1].pulXlate )
      {
        pulXlate = (HDEV)a4[1].pulXlate;
      }
      else
      {
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_25:
          if ( v22 == v42 )
            pulXlate = a1[1].hdev;
LABEL_27:
          if ( v20 )
            goto LABEL_61;
          goto LABEL_28;
        }
        if ( !*(_QWORD *)&a4[2].iSrcType )
        {
          v20 = 1;
          goto LABEL_27;
        }
        v28 = *(struct PALETTE **)&a4[2].iSrcType;
        v40 = v28;
        if ( *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat )
          pulXlate = a1[1].hdev;
      }
LABEL_28:
      v30 = 0;
      if ( pulXlate )
      {
        if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
        {
          v30 = 0x4000;
          if ( v28 == ppalDefault )
            v30 = 0x2000;
        }
      }
      if ( a4 )
        flXlate = a4[1].flXlate;
      else
        flXlate = 0;
      v39 = flXlate;
      if ( a4 )
        v32 = *(_DWORD *)&a4[1].iSrcType;
      else
        v32 = 0;
      if ( a4 )
        iUniq = a4[1].iUniq;
      else
        iUniq = 0;
      if ( a4 )
        v34 = a4[3].iUniq;
      else
        v34 = 0;
      if ( a4 )
        v35 = a4[2].pulXlate;
      else
        v35 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v48,
                           (__int64)v35,
                           v34,
                           (__int64)pulXlate,
                           *(_QWORD *)(v41 + 128),
                           (__int64)ppalDefault,
                           (__int64)v28,
                           flXlate,
                           v32,
                           iUniq,
                           v30) )
      {
        *(_QWORD *)&v72.left = v48;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v47,
                             0LL,
                             0,
                             *(_QWORD *)(v41 + 128),
                             (__int64)gppalRGB,
                             (__int64)v40,
                             (__int64)v40,
                             v39,
                             v32,
                             iUniq,
                             0) )
        {
          *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v47;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v46,
                               0LL,
                               0,
                               (__int64)gppalRGB,
                               *(_QWORD *)(v41 + 128),
                               (__int64)v40,
                               (__int64)v40,
                               v39,
                               v32,
                               iUniq,
                               0) )
          {
            v22 = psoSrc;
            *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v46;
            if ( v22 == v42 )
              goto LABEL_53;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v45,
                                 0LL,
                                 0,
                                 (__int64)v43[16],
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)v40,
                                 v39,
                                 v32,
                                 iUniq,
                                 0) )
            {
              v22 = psoSrc;
              *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v45;
LABEL_53:
              v21 = v41;
              p_pvScan0 = v43;
              v23 = *(struct _XLATEOBJ **)&v72.left;
              v24 = v62;
              v19 = *(_QWORD *)v63;
LABEL_54:
              if ( (*(_DWORD *)(v19 + 88) & 0x10000) != 0 )
                v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)v24 + 7) + 3256LL);
              else
                v36 = EngAlphaBlend;
              if ( v22->iType == 1 && p_pvScan0[6] != *(PVOID *)(v21 + 48) )
                v36 = EngAlphaBlend;
              v17 = OffAlphaBlend(
                      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v36,
                      *(LONG **)v65,
                      v19,
                      (int *)&gptlZero,
                      (__int64)v22,
                      v64,
                      (__int64)v23,
                      (__int128 *)&a5->left,
                      (__int128 *)&prclSrc->left,
                      (__int64)pBlendObj) & v38;
              goto LABEL_62;
            }
          }
        }
      }
LABEL_61:
      v17 = 0;
LABEL_62:
      *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp = v52;
      *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp = v53;
      *(_QWORD *)&pBlendObj[2].BlendFunction.BlendOp = v54;
      v38 = v17;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v46);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v47);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v48);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v61) )
        goto LABEL_63;
    }
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v49, &v72) )
  {
    if ( !v49 )
    {
      v7 = 1;
      goto LABEL_64;
    }
    v9 = &v72;
    v42 = (struct _SURFOBJ *)(v49 + 24);
    goto LABEL_8;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v49);
  return v7;
}

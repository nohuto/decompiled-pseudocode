/*
 * XREFs of _GreDrawStream@12 @ 0x5C150
 * Callers:
 *     _NtGdiDrawStream@12 @ 0x5C0A8 (_NtGdiDrawStream@12.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPADPAU_DRAWSTREAMINFO@@@Z @ 0x5E070 (-NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPAD.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QAEXVXEPALOBJ@@000@Z @ 0x9C5F6 (-vAddToCache@EXLATEOBJ@@QAEXVXEPALOBJ@@000@Z.c)
 *     ??YERECTL@@QAEXABU_RECTL@@@Z @ 0xA93D0 (--YERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??1SEMOBJ@@QAE@XZ @ 0x1CCD37 (--1SEMOBJ@@QAE@XZ.c)
 *     ?vMarkTransformDirty@DC@@QAEXXZ @ 0x1CDA19 (-vMarkTransformDirty@DC@@QAEXXZ.c)
 *     ?vDec_cRef@SURFACE@@QAEXXZ @ 0x1D8765 (-vDec_cRef@SURFACE@@QAEXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2 (-vDestructorNULL@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 */

int __fastcall GreDrawStream(int a1, unsigned int a2, _DWORD *a3)
{
  XLATEOBJ *XlateObject; // esi
  struct XDCOBJ *v4; // edi
  int v5; // ecx
  bool v6; // zf
  unsigned int v7; // edx
  LONG *v8; // ebx
  LONG v9; // ebx
  int top; // edi
  int right; // eax
  LONG bottom; // edx
  LONG left; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  int v18; // edi
  struct _RECTL *v19; // ebx
  struct _RECTL *v20; // esi
  ULONG v21; // eax
  struct XDCOBJ *v22; // edi
  _DWORD *v23; // ecx
  int v24; // edx
  int v25; // eax
  LONG v26; // esi
  struct EXFORMOBJ *v27; // eax
  int v28; // esi
  int v29; // edx
  _DWORD *v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // edx
  struct _XLATETABLE *v36; // ebx
  struct _XLATETABLE **v37; // edx
  int v38; // eax
  struct _XLATETABLE *v39; // eax
  _DWORD *v40; // edx
  struct _XLATETABLE *v41; // eax
  volatile signed __int32 *v42; // edx
  struct _XLATETABLE *v43; // esi
  int v44; // ebx
  int v45; // edx
  struct _XLATETABLE *v46; // eax
  _DWORD *v47; // edi
  LONG v48; // ecx
  DC *v49; // eax
  int v50; // edi
  struct _DC_ATTR *UserAttr; // eax
  char *v52; // edi
  LONG v53; // edx
  LONG v54; // ecx
  LONG v55; // ebx
  XLATEOBJ *v56; // eax
  int v57; // eax
  struct XDCOBJ *v58; // eax
  int v59; // edi
  unsigned int v60; // esi
  int v61; // eax
  struct PALETTE *v62; // esi
  int v63; // esi
  int v64; // eax
  void (__stdcall *v65)(int); // esi
  int v66; // eax
  int v67; // ecx
  struct _DC_ATTR *v68; // eax
  int v69; // ebx
  int cEntries; // eax
  int v71; // esi
  PKTHREAD CurrentThread; // esi
  int *ThreadWin32Thread; // eax
  int v74; // eax
  int v75; // esi
  PKTHREAD v76; // esi
  int *v77; // eax
  int v78; // eax
  void (__fastcall *v79)(int); // ebx
  struct PALETTE *v81; // [esp-14h] [ebp-134h]
  unsigned int v82; // [esp+4h] [ebp-11Ch]
  int v83; // [esp+4h] [ebp-11Ch]
  char *v84; // [esp+8h] [ebp-118h]
  struct _DRAWSTREAMINFO *v85; // [esp+Ch] [ebp-114h]
  int v86; // [esp+14h] [ebp-10Ch] BYREF
  XLATEOBJ *v87; // [esp+18h] [ebp-108h]
  DC *v88; // [esp+1Ch] [ebp-104h] BYREF
  int v89; // [esp+20h] [ebp-100h]
  int v90; // [esp+24h] [ebp-FCh]
  struct _XLATETABLE **v91; // [esp+28h] [ebp-F8h] BYREF
  unsigned int v92; // [esp+2Ch] [ebp-F4h] BYREF
  unsigned int v93; // [esp+30h] [ebp-F0h]
  struct _RECTL *v94; // [esp+34h] [ebp-ECh]
  int v95; // [esp+38h] [ebp-E8h]
  struct _RECTL *v96; // [esp+3Ch] [ebp-E4h]
  struct PALETTE *v97; // [esp+40h] [ebp-E0h] BYREF
  _DWORD *v98; // [esp+44h] [ebp-DCh]
  struct XDCOBJ *v99; // [esp+48h] [ebp-D8h]
  struct PALETTE *v100; // [esp+4Ch] [ebp-D4h]
  _DWORD *v101; // [esp+50h] [ebp-D0h]
  struct XDCOBJ *v102; // [esp+54h] [ebp-CCh]
  struct EXFORMOBJ *v103; // [esp+58h] [ebp-C8h]
  XLATEOBJ *v104; // [esp+5Ch] [ebp-C4h] BYREF
  int v105; // [esp+60h] [ebp-C0h] BYREF
  int v106; // [esp+64h] [ebp-BCh]
  int v107; // [esp+68h] [ebp-B8h]
  int v108; // [esp+6Ch] [ebp-B4h]
  HSURF v109; // [esp+70h] [ebp-B0h] BYREF
  DC *v110; // [esp+74h] [ebp-ACh] BYREF
  int v111; // [esp+78h] [ebp-A8h]
  int v112; // [esp+7Ch] [ebp-A4h]
  int v113; // [esp+80h] [ebp-A0h]
  HDC v114[3]; // [esp+84h] [ebp-9Ch] BYREF
  int v115; // [esp+90h] [ebp-90h]
  LONG v116; // [esp+94h] [ebp-8Ch]
  struct XDCOBJ *v117; // [esp+98h] [ebp-88h]
  int v118; // [esp+9Ch] [ebp-84h]
  int v119; // [esp+A0h] [ebp-80h]
  int v120; // [esp+A4h] [ebp-7Ch]
  _DWORD v121[2]; // [esp+A8h] [ebp-78h] BYREF
  int v122; // [esp+B0h] [ebp-70h]
  _DWORD v123[3]; // [esp+B4h] [ebp-6Ch] BYREF
  _DWORD *i; // [esp+C0h] [ebp-60h]
  int v125; // [esp+C4h] [ebp-5Ch] BYREF
  int v126; // [esp+C8h] [ebp-58h]
  int v127[12]; // [esp+CCh] [ebp-54h] BYREF
  LONG v128; // [esp+FCh] [ebp-24h] BYREF
  XLATEOBJ *v129; // [esp+100h] [ebp-20h]
  LONG v130; // [esp+104h] [ebp-1Ch]
  XLATEOBJ *v131; // [esp+108h] [ebp-18h]
  struct _XLATEOBJ v132; // [esp+10Ch] [ebp-14h] BYREF

  XlateObject = 0;
  v4 = 0;
  v97 = gppalRGB;
  v93 = a2;
  v126 = a1;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  memset(v123, 0, sizeof(v123));
  v99 = 0;
  v115 = 0;
  v121[0] = 0;
  v122 = 0;
  v111 = 0;
  v112 = 0;
  LOWORD(v113) = 256;
  v117 = 0;
  v102 = 0;
  v100 = 0;
  v103 = 0;
  v95 = 0;
  v101 = 0;
  v98 = 0;
  v87 = 0;
  v118 = 0;
  v96 = 0;
  memset(v127, 0, sizeof(v127));
  v5 = 0;
  v119 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v110 = 0;
  memset(v114, 0, sizeof(v114));
  if ( v93 < 4 )
    goto LABEL_202;
  v6 = *a3 == 1148352339;
  v94 = (struct _RECTL *)(a3 + 1);
  if ( !v6 )
    goto LABEL_202;
  v7 = v93 - 4;
  v93 = v7;
  if ( v7 < 4 )
  {
LABEL_190:
    v115 = 1;
    goto LABEL_191;
  }
  v8 = a3 + 1;
  while ( 1 )
  {
    if ( !*v8 )
    {
      if ( v96 )
        goto LABEL_157;
      if ( v5 == 1 )
        DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v105);
      if ( v88 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v88);
      v88 = 0;
      if ( v4 )
      {
        if ( v4 == SURFACE::pdibDefault )
        {
          DEC_SHARE_REF_CNT(v4);
        }
        else
        {
          GreAcquireHmgrSemaphore();
          SURFACE::vDec_cRef(v4);
          GreReleaseHmgrSemaphore();
        }
        v99 = 0;
      }
      v92 = 24;
      if ( v93 < 0x18 )
        goto LABEL_192;
      v48 = v8[1];
      if ( v48 != v126 )
        goto LABEL_192;
      LOBYTE(v7) = 1;
      v49 = (DC *)HmgLockEx(v48, v7, v90);
      v88 = v49;
      if ( v49 )
      {
        if ( v90 )
        {
          if ( (*(_DWORD *)(*((_DWORD *)v49 + 9) + 24) & 0x8000) == 0
            || (v50 = *((_DWORD *)v49 + 461), v50 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
          {
LABEL_188:
            _InterlockedDecrement((volatile signed __int32 *)v88 + 2);
            v88 = 0;
            goto LABEL_192;
          }
        }
        if ( (*((_BYTE *)v88 + 32) & 2) == 0 )
        {
          if ( !v90 )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v88);
            if ( UserAttr )
            {
              if ( !DC::SaveAttributes(v88, UserAttr) )
                goto LABEL_188;
            }
          }
          *((_DWORD *)v88 + 8) |= 2u;
          v89 = 1;
        }
        if ( (*((_BYTE *)v88 + 520) & 4) != 0 )
          DC::vMarkTransformDirty(v88);
      }
      else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      {
        PsGetWin32KFilterSet();
      }
      if ( !v88
        || (*((_DWORD *)v88 + 6) & 0x10000) != 0
        || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v105, (struct XDCOBJ *)&v88, 0) )
      {
        goto LABEL_192;
      }
      v121[1] = *(_DWORD *)(*((_DWORD *)v88 + 255) + 228);
      v122 = *(_DWORD *)(*((_DWORD *)v88 + 255) + 148) & 1;
      if ( (*(_DWORD *)(*((_DWORD *)v88 + 255) + 340) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)v121, (struct XDCOBJ *)&v88, 0x204u, 0);
        v52 = (char *)v121[0];
      }
      else
      {
        v52 = (char *)v88 + 240;
        v121[0] = (char *)v88 + 240;
      }
      if ( (v52[56] & 1) == 0 )
        goto LABEL_192;
      v53 = v8[2];
      v128 = v53;
      v129 = (XLATEOBJ *)v8[3];
      v54 = v8[4];
      v130 = v54;
      v55 = v8[5];
      v104 = v129;
      v131 = (XLATEOBJ *)v55;
      if ( (v52[56] & 0x43) == 0x43 )
      {
        v56 = v104;
      }
      else
      {
        bCvtPts1(v52, &v128, 2);
        v55 = (LONG)v131;
        v54 = v130;
        v56 = v129;
        v53 = v128;
      }
      if ( v122 )
      {
        ++v53;
        ++v54;
        v128 = v53;
        v130 = v54;
      }
      if ( v53 > v54 )
      {
        v128 = v54;
        v130 = v53;
      }
      if ( (int)v56 > v55 )
      {
        v129 = (XLATEOBJ *)v55;
        v131 = v56;
      }
      v57 = *((_DWORD *)v88 + 6);
      if ( (v57 & 0xE0) != 0 )
      {
        if ( (v57 & 0x20) != 0 )
          ERECTL::operator|=(&v128);
        if ( *((char *)v88 + 24) < 0 )
          ERECTL::operator|=(&v128);
      }
      v58 = (struct XDCOBJ *)*((_DWORD *)v88 + 126);
      v117 = v58;
      if ( !v58 )
        goto LABEL_192;
      v95 = *((_DWORD *)v58 + 22);
      v101 = (_DWORD *)*((_DWORD *)v88 + 15);
      if ( v98 )
      {
        if ( (v98[4] & 0x2000) != 0 )
          goto LABEL_192;
      }
      v119 = 1;
      goto LABEL_154;
    }
    if ( *v8 != 1 )
    {
      if ( *v8 != 9 )
        goto LABEL_192;
      v92 = 60;
      if ( v7 < 0x3C )
        goto LABEL_192;
      v9 = v8[9];
      v116 = v9;
      if ( (v9 & 0xFFFFFF80) != 0 )
        goto LABEL_192;
      if ( !v102 )
        goto LABEL_192;
      top = v94[1].top;
      if ( top < 0 )
        goto LABEL_192;
      right = v94[1].right;
      if ( right < 0 )
        goto LABEL_192;
      bottom = v94[1].bottom;
      XlateObject = v87;
      if ( bottom > *((_DWORD *)v102 + 8) )
        goto LABEL_192;
      left = v94[2].left;
      XlateObject = v87;
      if ( left > *((_DWORD *)v102 + 9) )
        goto LABEL_192;
      v14 = bottom - top;
      v15 = left - right;
      if ( v14 <= 0 || v15 <= 0 )
        goto LABEL_192;
      if ( (v9 & 0x20) == 0 )
      {
        v86 = v94[2].right;
        if ( v86 < 0 )
          goto LABEL_192;
        v16 = v94[2].bottom;
        if ( v16 < 0 )
          goto LABEL_192;
        v17 = v94[3].left;
        if ( v17 < 0 )
          goto LABEL_192;
        v18 = v94[3].top;
        if ( v18 < 0 || v86 > v14 || v16 > v14 || v17 > v15 || v18 > v15 || v86 + v16 > v14 || v18 + v17 > v15 )
          goto LABEL_192;
        LOBYTE(v9) = v116;
      }
      if ( (v9 & 0xC) == 0xC )
        goto LABEL_192;
      if ( (v9 & 8) != 0 )
      {
        v19 = v94;
        v19[3].right = ulGetNearestIndexFromColorref(v98, v100, v94[3].right, 1);
      }
      else
      {
        v6 = (v9 & 4) == 0;
        v19 = v94;
        if ( !v6 )
          v118 = 1;
      }
      v20 = v96;
      if ( v96 )
      {
        ERECTL::operator+=(&v19->top);
      }
      else
      {
        v20 = v19;
        v132.iUniq = v19->top;
        v132.flXlate = v19->right;
        *(_DWORD *)&v132.iSrcType = v19->bottom;
        v21 = v19[1].left;
        v96 = v19;
        v132.cEntries = v21;
      }
      goto LABEL_155;
    }
    if ( v96 )
      goto LABEL_157;
    if ( v123[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v123);
    v123[0] = 0;
    if ( v4 )
    {
      if ( v4 == SURFACE::pdibDefault )
      {
        DEC_SHARE_REF_CNT(v4);
      }
      else
      {
        GreAcquireHmgrSemaphore();
        SURFACE::vDec_cRef(v4);
        GreReleaseHmgrSemaphore();
      }
      v99 = 0;
    }
    v92 = 8;
    if ( v93 < 8 )
      goto LABEL_192;
    if ( !v119 )
      goto LABEL_192;
    LOBYTE(v7) = 5;
    v22 = (struct XDCOBJ *)HmgShareLockCheck(v8[1], v7);
    v99 = v22;
    if ( !v22 )
      goto LABEL_192;
    if ( v22 != SURFACE::pdibDefault )
    {
      GreAcquireHmgrSemaphore();
      INC_SHARE_REF_CNT(v22);
      ++*((_DWORD *)v22 + 28);
      DEC_SHARE_REF_CNT(v22);
      GreReleaseHmgrSemaphore();
    }
    v23 = (_DWORD *)*((_DWORD *)v22 + 22);
    v102 = v22;
    v98 = v23;
    v100 = ppalDefault;
    if ( !v23 )
      goto LABEL_192;
    v24 = v23[4];
    if ( (v24 & 0x2000) != 0 || v22 == v117 || *((_DWORD *)v22 + 15) != 6 )
      goto LABEL_192;
    v25 = *((_DWORD *)v88 + 255);
    v26 = *(_DWORD *)(v25 + 196);
    v27 = *(struct EXFORMOBJ **)(v25 + 204);
    v116 = v26;
    v28 = v95;
    v103 = v27;
    v104 = (XLATEOBJ *)*((_DWORD *)v88 + 20);
    if ( v95 )
    {
      v30 = (_DWORD *)v23[20];
      if ( v30 == v23 )
        v31 = v23[6];
      else
        v31 = v30[6];
      v32 = *(_DWORD *)(v95 + 80);
      if ( v32 == v95 )
        v33 = *(_DWORD *)(v95 + 24);
      else
        v33 = *(_DWORD *)(v32 + 24);
      if ( v31 != v33 )
      {
        v86 = v23[10];
        v125 = _ghsemPalette;
        GreAcquireSemaphore(_ghsemPalette);
        v23 = v98;
        v34 = v86;
        v120 = 0;
        v35 = (_DWORD *)v98[20];
        for ( i = v35; ; v35 = i )
        {
          if ( v35 == v98 )
            v36 = (struct _XLATETABLE *)v98[6];
          else
            v36 = (struct _XLATETABLE *)v35[6];
          v37 = &xlateTable + 6 * v34;
          v91 = v37;
          if ( v37[2] == v36 )
          {
            v38 = *(_DWORD *)(v28 + 80);
            v39 = v38 == v28 ? *(struct _XLATETABLE **)(v28 + 24) : *(struct _XLATETABLE **)(v38 + 24);
            if ( v37[3] == v39 )
            {
              v40 = (_DWORD *)v101[20];
              v41 = (struct _XLATETABLE *)(v40 == v101 ? v101[6] : v40[6]);
              v42 = (volatile signed __int32 *)v91;
              if ( v91[5] == v41 )
              {
                v43 = v91[1];
                v87 = (XLATEOBJ *)v43;
                v44 = *((_DWORD *)v43 + 14);
                if ( (v44 & 0x6000) == 0 )
                {
                  if ( (*((_DWORD *)v43 + 1) & 4) == 0 && (v44 & 0x100) == 0
                    || (*((_DWORD *)v43 + 1) & 4) != 0
                    && !*((_DWORD *)v43 + 5)
                    && ((v45 = *((_DWORD *)v100 + 20), (struct PALETTE *)v45 == v100)
                      ? (v46 = (struct _XLATETABLE *)*((_DWORD *)v100 + 6))
                      : (v46 = *(struct _XLATETABLE **)(v45 + 24)),
                        v42 = (volatile signed __int32 *)v91,
                        v91[4] == v46)
                    || (v44 & 0x100) != 0 && v103 == *((struct EXFORMOBJ **)v43 + 6) && v116 == *((_DWORD *)v43 + 7) )
                  {
                    _InterlockedIncrement(v42);
                    v23[10] = v86;
                    SEMOBJ::~SEMOBJ((SEMOBJ *)&v125);
                    v103 = v43;
                    goto LABEL_154;
                  }
                }
                v28 = v95;
              }
            }
          }
          v34 = ((_BYTE)v86 + 1) & 7;
          v86 = v34;
          if ( (unsigned int)++v120 >= 8 )
            break;
        }
        if ( _ghsemPalette )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemPalette);
          GreReleaseSemaphoreInternal(_ghsemPalette);
          v23 = v98;
        }
LABEL_98:
        v47 = v101;
        XlateObject = (XLATEOBJ *)CreateXlateObject(0, v104, v23, v28, v100, v101, v103, v116, 0, 0);
        v87 = XlateObject;
        v104 = XlateObject;
        if ( !XlateObject )
          goto LABEL_192;
        if ( v95 && ((int)XlateObject[2].pulXlate & 0x200) == 0 )
          EXLATEOBJ::vAddToCache(&v104, v98, v95, v100, v47);
        v103 = (struct EXFORMOBJ *)XlateObject;
        goto LABEL_154;
      }
    }
    else
    {
      if ( (v24 & 0x800) == 0 )
        goto LABEL_98;
      v29 = v101[14];
      if ( v29 )
      {
        if ( v29 != v101[13] )
          goto LABEL_98;
      }
    }
    v87 = xloIdent;
    v103 = (struct EXFORMOBJ *)xloIdent;
LABEL_154:
    v20 = v96;
    v19 = v94;
LABEL_155:
    v7 = v93 - v92;
    v93 = v7;
    v8 = &v19->left + (v92 >> 2);
    v94 = (struct _RECTL *)v8;
    if ( v7 )
      goto LABEL_186;
    if ( !v20 )
      goto LABEL_190;
LABEL_157:
    if ( !v88 || !v102 )
      goto LABEL_186;
    v127[0] = 48;
    v59 = 0;
    v91 = 0;
    v60 = 0;
    v86 = 0;
    v92 = 0;
    v127[1] = 0;
    v127[2] = 33488896;
    memset(&v127[3], 0, 12);
    if ( v118 )
      break;
    memset(&v127[7], 0, 12);
LABEL_168:
    if ( !NtGdiDrawStreamInternal(
            v102,
            v103,
            (struct SURFACE *)&v128,
            &v132,
            (struct _RECTL *)((char *)v8 - (char *)v96),
            v96,
            (int)v127,
            v84,
            v85) )
      goto LABEL_189;
    v96 = 0;
    v118 = 0;
    if ( v60 )
    {
      v64 = *(_DWORD *)(v60 + 32);
      if ( v64 < 0 )
      {
        if ( v64 == -1 )
        {
          v82 = v60;
          v65 = (void (__stdcall *)(int))FreeThreadBufferWithTag;
          FreeThreadBufferWithTag(v82);
          goto LABEL_173;
        }
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 6 * v64);
      }
    }
    v65 = (void (__stdcall *)(int))FreeThreadBufferWithTag;
LABEL_173:
    if ( v59 )
    {
      v66 = *(_DWORD *)(v59 + 32);
      if ( v66 < 0 )
      {
        if ( v66 == -1 )
          v65(v59);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 6 * v66);
      }
    }
    if ( v91 )
    {
      v67 = (int)v91[8];
      if ( v67 < 0 )
      {
        if ( v67 == -1 )
          v65((int)v91);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 6 * v67);
      }
    }
    v7 = v93;
LABEL_186:
    if ( v7 < 4 )
      goto LABEL_190;
    XlateObject = v87;
    v4 = v99;
    v5 = v119;
  }
  v61 = *((_DWORD *)v117 + 15);
  if ( v61 != 1 && v61 != 2 && v61 != 3 )
  {
    v62 = v97;
    if ( EXLATEOBJ::bInitXlateObj(&v91, 0, 0, v98, v97, v100, v100, 0, 0, 0, 0) )
    {
      v127[7] = (int)v91;
      v81 = v62;
      v63 = v95;
      if ( EXLATEOBJ::bInitXlateObj(&v86, 0, 0, v95, v81, v101, v101, 0, 0, 0, 0) )
      {
        v59 = v86;
        v127[8] = v86;
        if ( EXLATEOBJ::bInitXlateObj(&v92, 0, 0, v97, v63, v101, v101, 0, 0, 0, 0) )
        {
          v60 = v92;
          v127[9] = v92;
          goto LABEL_168;
        }
      }
    }
  }
LABEL_189:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v86);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v91);
LABEL_191:
  XlateObject = v87;
LABEL_192:
  if ( v88 )
  {
    if ( v89 && (*((_BYTE *)v88 + 32) & 2) != 0 )
    {
      if ( !v90 )
      {
        v68 = XDCOBJ::GetUserAttr((XDCOBJ *)&v88);
        if ( v68 )
          DC::RestoreAttributes(v88, v68);
      }
      *((_DWORD *)v88 + 8) &= ~2u;
      v89 = 0;
    }
    v97 = 0;
    v69 = *(_DWORD *)v88;
    HmgDecrementExclusiveReferenceCountEx(v88, v90, &v97);
    if ( v97 )
      bDeleteDCInternalEx(v69, 0);
  }
  v4 = v99;
LABEL_202:
  v88 = 0;
  if ( v123[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v123);
  v123[0] = 0;
  if ( XlateObject )
  {
    cEntries = XlateObject[1].cEntries;
    if ( cEntries < 0 )
    {
      if ( cEntries == -1 )
        FreeThreadBufferWithTag(XlateObject);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 6 * cEntries);
    }
  }
  if ( v110 && BYTE1(v113) )
  {
    v71 = *((_DWORD *)v110 + 9);
    if ( (v108 & 0x1000) != 0 )
    {
      if ( (v108 & 0x400) != 0 )
      {
        bUnHookRedir((struct XDCOBJ *)v84);
        v108 &= ~0x400u;
      }
      if ( (v108 & 0x2000) != 0 )
      {
        bUnHookBmpDrv((struct XDCOBJ *)v84);
        v108 &= ~0x2000u;
      }
      DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)&v105, 1);
      if ( (v108 & 0x10) != 0 )
      {
        *((_DWORD *)v110 + 6) &= ~0x4000u;
        DC::pSurface(v110, *(struct SURFACE **)(v71 + 1820));
      }
      if ( v110 && BYTE1(v113) && (v108 & 0x1000) != 0 && (*((_DWORD *)v110 + 6) & 0x200) != 0 )
      {
        GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        if ( !v114[0] )
          DC::vClearRendering(v110);
        if ( (*((_DWORD *)v110 + 6) & 0x4000) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
            {
              v74 = *ThreadWin32Thread;
              if ( v74 )
                *(_DWORD *)(v74 + 180) &= ~1u;
            }
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
      }
    }
    if ( v110 )
    {
      if ( (_BYTE)v113 )
      {
        *((_DWORD *)v110 + 7) &= ~2u;
        LOBYTE(v113) = 0;
      }
      if ( v110 )
      {
        if ( v111 && (*((_BYTE *)v110 + 32) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v110);
          *((_DWORD *)v110 + 8) &= ~2u;
          v111 = 0;
        }
        v97 = 0;
        v75 = *(_DWORD *)v110;
        HmgDecrementExclusiveReferenceCountEx(v110, v112, &v97);
        if ( v97 )
          bDeleteDCInternalEx(v75, 0);
      }
    }
    v110 = 0;
  }
  if ( (v108 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v108 &= ~0x1000u;
    v76 = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      v77 = (int *)PsGetThreadWin32Thread(v76);
      if ( v77 )
      {
        v78 = *v77;
        if ( v78 )
        {
          *(_DWORD *)(v78 + 176) = 0;
          *(_DWORD *)(v78 + 172) = 0;
        }
      }
    }
  }
  else if ( (v108 & 0x800000) != 0 )
  {
    GreDecLockCount();
    v108 &= ~0x800000u;
  }
  if ( v105 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v105);
    v79 = (void (__fastcall *)(int))GreReleaseSemaphoreInternal;
    GreReleaseSemaphoreInternal(v105);
  }
  else
  {
    v79 = (void (__fastcall *)(int))GreReleaseSemaphoreInternal;
  }
  if ( (v108 & 8) != 0 )
    v108 &= ~8u;
  if ( v106 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v106);
    v79(v106);
  }
  UntrapAppContainerRenderingWorker(v114, &v109, (HSURF *)v84, (const unsigned int *)v85);
  if ( v110 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v110);
  if ( v4 )
  {
    if ( v4 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v4);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      DEC_SHARE_REF_CNT(v4);
      v6 = (*((_DWORD *)v4 + 28))-- == 1;
      if ( v6 )
      {
        if ( (*(_DWORD *)v4 & 0x800000) != 0 && (*((_WORD *)v4 + 33) & 0x400) != 0 )
        {
          v83 = *(_DWORD *)v4;
          *((_WORD *)v4 + 33) &= ~0x400u;
          GreMakeBitmapNonStock(v83);
        }
        *((_DWORD *)v4 + 27) = 0;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return v115;
}

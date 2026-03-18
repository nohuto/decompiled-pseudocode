/*
 * XREFs of ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84
 * Callers:
 *     _NtGdiLineTo@12 @ 0xBBAF6 (_NtGdiLineTo@12.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0xBDEEA (-vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QBE?AU_POINTFIX@@XZ @ 0x1E578B (-ptfxGetCurrent@EPATHOBJ@@QBE-AU_POINTFIX@@XZ.c)
 *     ?vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z @ 0x1FDD2F (-vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z.c)
 */

int __userpurge GreLineTo@<eax>(LONG a1@<edx>, HDC a2@<ecx>, HDC a3, int a4, int a5)
{
  LONG v5; // edi
  int v6; // ebx
  DC *v7; // ecx
  int v8; // eax
  int v9; // esi
  struct _LINEATTRS *v10; // esi
  DC *v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  BOOL (__stdcall *v15)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // eax
  int v16; // eax
  int v17; // ecx
  int *v18; // edx
  int v19; // edi
  LONG v20; // edx
  struct ECLIPOBJ *v21; // ecx
  LONG v22; // ecx
  DC *v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  int v27; // eax
  LONG v28; // edx
  char *v29; // edi
  int v30; // edx
  DC *v31; // ecx
  struct REGION *v32; // eax
  int v33; // eax
  BRUSHOBJ *v35; // edi
  bool v36; // zf
  int v37; // edx
  struct ECLIPOBJ *v38; // ecx
  int v39; // esi
  int v40; // edx
  int v41; // eax
  int v42; // eax
  DC *v43; // ecx
  int v44; // edx
  DC *v45; // ecx
  int v46; // edx
  const struct _POINTFIX *x; // eax
  DC *v48[3]; // [esp+5Ch] [ebp-310h] BYREF
  LONG y; // [esp+68h] [ebp-304h]
  struct ECLIPOBJ *v50; // [esp+6Ch] [ebp-300h]
  struct _LINEATTRS *v51; // [esp+70h] [ebp-2FCh]
  HDC v52; // [esp+74h] [ebp-2F8h]
  LONG v53; // [esp+78h] [ebp-2F4h]
  LONG v54; // [esp+7Ch] [ebp-2F0h]
  int v55; // [esp+80h] [ebp-2ECh]
  struct _POINTL v56; // [esp+84h] [ebp-2E8h] BYREF
  int v57; // [esp+8Ch] [ebp-2E0h]
  LONG v58; // [esp+90h] [ebp-2DCh]
  int v59; // [esp+94h] [ebp-2D8h]
  BOOL (__stdcall *v60)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [esp+98h] [ebp-2D4h]
  _DWORD v61[3]; // [esp+9Ch] [ebp-2D0h] BYREF
  LONG v62; // [esp+A8h] [ebp-2C4h]
  int v63; // [esp+ACh] [ebp-2C0h]
  int v64; // [esp+B0h] [ebp-2BCh]
  struct _POINTL v65; // [esp+B4h] [ebp-2B8h] BYREF
  _DWORD v66[3]; // [esp+BCh] [ebp-2B0h] BYREF
  int v67; // [esp+C8h] [ebp-2A4h]
  _DWORD v68[3]; // [esp+D0h] [ebp-29Ch] BYREF
  __int16 v69; // [esp+DCh] [ebp-290h]
  struct ECLIPOBJ *v70; // [esp+ECh] [ebp-280h] BYREF
  LONG v71; // [esp+F0h] [ebp-27Ch]
  char *v72; // [esp+F4h] [ebp-278h]
  int v73; // [esp+F8h] [ebp-274h]
  struct ECLIPOBJ *v74; // [esp+FCh] [ebp-270h] BYREF
  LONG v75; // [esp+100h] [ebp-26Ch]
  char *v76; // [esp+104h] [ebp-268h]
  int v77; // [esp+108h] [ebp-264h]
  _BYTE v78[8]; // [esp+10Ch] [ebp-260h] BYREF
  int v79; // [esp+114h] [ebp-258h]
  char v80[16]; // [esp+13Ch] [ebp-230h] BYREF
  int v81; // [esp+14Ch] [ebp-220h]

  v5 = a1;
  v52 = a3;
  v6 = 0;
  v54 = a1;
  v48[1] = 0;
  v48[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v48, a2);
  if ( !v48[0] )
  {
    EngSetLastError(6u);
    return v6;
  }
  if ( (*((_DWORD *)v48[0] + 6) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_86:
    XDCOBJ::vUnlockFast((XDCOBJ *)v48);
    return v6;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v61, (struct XDCOBJ *)v48, 516);
  v7 = v48[0];
  v51 = (struct _LINEATTRS *)((char *)v48[0] + 140);
  v8 = *((_DWORD *)v48[0] + 255);
  v9 = *(_DWORD *)(v8 + 184);
  if ( (v9 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v48[0], *(_DWORD *)(v8 + 188));
    v7 = v48[0];
  }
  if ( (v9 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_DWORD *)(*((_DWORD *)v7 + 255) + 192));
    v7 = v48[0];
  }
  v10 = v51;
  if ( (v51->fl & 0xB) != 0
    || (*((_BYTE *)v7 + 172) & 1) != 0
    || (*(_BYTE *)(v61[0] + 56) & 2) == 0 && *(_DWORD *)(*((_DWORD *)v7 + 255) + 228) == 2 )
  {
LABEL_72:
    v65.y = (LONG)v52;
    v65.x = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v78, (struct XDCOBJ *)v48, 1);
    if ( v79 )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)v78, (struct EXFORMOBJ *)v61, &v65, 1u) )
      {
        x = (const struct _POINTFIX *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v78).x;
        DC::vCurrentPosition(v48[0], &v65, x);
        if ( (*((_BYTE *)v48[0] + 172) & 1) == 0
          && !EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v78, (struct XDCOBJ *)v48, v10, (struct EXFORMOBJ *)v61, 1u) )
        {
LABEL_83:
          EPATHOBJ::vUnlock((EPATHOBJ *)v78);
          if ( v81 )
            PopThreadGuardedObject(v80);
          goto LABEL_86;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v6 = 1;
    goto LABEL_83;
  }
  memset(v68, 0, sizeof(v68));
  v69 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v66, (struct XDCOBJ *)v48, 0);
  v11 = v48[0];
  v12 = *((_DWORD *)v48[0] + 9);
  if ( (v67 & 1) == 0 )
  {
    v33 = XDCOBJ::bFullScreen(v48);
    goto LABEL_39;
  }
  v13 = *((_DWORD *)v48[0] + 126);
  v59 = v13;
  if ( !v13 )
    goto LABEL_76;
  v14 = *(_DWORD *)(v13 + 72);
  if ( (v14 & 0x100) != 0 )
  {
    v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v12 + 2024);
  }
  else
  {
    if ( *(_WORD *)(v13 + 64) || (v14 & 0x20) != 0 )
    {
LABEL_76:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
      if ( v68[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v68);
LABEL_71:
      v10 = v51;
      goto LABEL_72;
    }
    v15 = EngLineTo;
  }
  v60 = v15;
  if ( !v15 )
    goto LABEL_76;
  if ( (*(_BYTE *)(v61[0] + 56) & 2) != 0 )
  {
    v16 = *(int *)(v61[0] + 48) >> 4;
    v17 = *(int *)(v61[0] + 52) >> 4;
    v50 = (struct ECLIPOBJ *)(v5 + v16);
    y = (LONG)v52 + v17;
    v18 = (int *)*((_DWORD *)v48[0] + 255);
    if ( (v18[46] & 0x100) != 0 )
    {
      v19 = v18[2] >> 4;
      v20 = v18[3] >> 4;
    }
    else
    {
      v19 = v16 + v18[59];
      v20 = v17 + v18[60];
    }
    v21 = v50;
  }
  else
  {
    v56.x = v5;
    v56.y = (LONG)v52;
    v41 = *((_DWORD *)v48[0] + 255);
    if ( (*(_DWORD *)(v41 + 184) & 0x200) != 0 )
    {
      v57 = *(_DWORD *)(v41 + 236);
      v58 = *(_DWORD *)(*((_DWORD *)v48[0] + 255) + 240);
      EXFORMOBJ::bXform((EXFORMOBJ *)v61, &v56, 2u);
      v19 = v57;
      v20 = v58;
      v11 = v48[0];
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v61, &v56, 1u);
      v11 = v48[0];
      v42 = *((_DWORD *)v48[0] + 255);
      v19 = *(int *)(v42 + 8) >> 4;
      v20 = *(int *)(v42 + 12) >> 4;
    }
    v21 = (struct ECLIPOBJ *)v56.x;
    v50 = (struct ECLIPOBJ *)v56.x;
    y = v56.y;
  }
  v53 = v20;
  v55 = v19;
  v56.x = v20;
  v64 = v19;
  if ( (unsigned int)v21 + 134217726 > 0xFFFFFFC || (unsigned int)(y + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v22 = v54;
    *(_DWORD *)(*((_DWORD *)v11 + 255) + 184) &= 0xFFFFFCFF;
    *(_DWORD *)(*((_DWORD *)v11 + 255) + 236) = v22;
    *(_DWORD *)(*((_DWORD *)v11 + 255) + 240) = v52;
    *(_DWORD *)(*((_DWORD *)v11 + 255) + 8) = 16 * (_DWORD)v50;
    *(_DWORD *)(*((_DWORD *)v11 + 255) + 12) = 16 * y;
    v23 = v48[0];
    v24 = *((_DWORD *)v48[0] + 7) & 1;
    v25 = *((_DWORD *)v48[0] + 2 * v24 + 262);
    v26 = v25 + v19;
    v27 = *((_DWORD *)v48[0] + 2 * v24 + 263);
    v28 = v27 + v20;
    v50 = (struct ECLIPOBJ *)((char *)v50 + v25);
    y += v27;
    v63 = v26;
    v62 = v28;
    if ( (unsigned int)(v26 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v28 + 134217726) <= 0xFFFFFFC
      && (unsigned int)v50 + 134217726 <= 0xFFFFFFC
      && (unsigned int)(y + 134217726) <= 0xFFFFFFC )
    {
      if ( v26 > (int)v50 )
      {
        v74 = v50;
        v29 = (char *)(v26 + 1);
      }
      else
      {
        v74 = (struct ECLIPOBJ *)v26;
        v29 = (char *)v50 + 1;
      }
      v76 = v29;
      if ( v28 > y )
      {
        v75 = y;
        v30 = v28 + 1;
      }
      else
      {
        v75 = v28;
        v30 = y + 1;
      }
      v77 = v30;
      if ( (*((_BYTE *)v48[0] + 24) & 0xE0) != 0 )
      {
        v70 = v74;
        v71 = v75;
        v72 = v76;
        v73 = v77;
        XDCOBJ::vAccumulate((XDCOBJ *)v48, v50, (struct ERECTL *)&v70);
        v30 = v77;
        v29 = v76;
        v23 = v48[0];
      }
      if ( *((struct PEN **)v23 + 24) == gpPenNull )
        goto LABEL_38;
      v53 = 0;
      if ( (int)v74 < *((_DWORD *)v23 + 258)
        || (int)v29 > *((_DWORD *)v23 + 260)
        || v75 < *((_DWORD *)v23 + 259)
        || v30 > *((_DWORD *)v23 + 261) )
      {
        v53 = (LONG)v23 + 1568;
        if ( DC::prgnRao(v23) )
          v32 = DC::prgnRao(v31);
        else
          v32 = DC::prgnVisSnap(v31);
        XCLIPOBJ::vSetup((DC *)((char *)v23 + 1568), v32, (struct ERECTL *)&v74, 0);
        if ( ERECTL::bEmpty((DC *)((char *)v23 + 1572)) )
        {
LABEL_38:
          v33 = 1;
LABEL_39:
          v6 = v33;
          goto LABEL_40;
        }
        v23 = v48[0];
      }
      v35 = (BRUSHOBJ *)((char *)v23 + 1276);
      v36 = *((_DWORD *)v23 + 319) == -1;
      v55 = (int)v23 + 1276;
      if ( v36 )
      {
        *(_DWORD *)(*((_DWORD *)v23 + 255) + 184) |= 2u;
        v23 = v48[0];
      }
      v37 = *((_DWORD *)v23 + 255);
      v38 = *(struct ECLIPOBJ **)(v37 + 184);
      if ( (((unsigned __int8)v38 | *((_BYTE *)v23 + 236)) & 2) != 0 )
      {
        v39 = v59;
        *(_DWORD *)(v37 + 184) = (unsigned int)v38 & 0xFFFFFFFD;
        *((_DWORD *)v48[0] + 59) &= ~2u;
        EBRUSHOBJ::vInitBrush(
          v35,
          v48[0],
          *((_DWORD *)v48[0] + 24),
          *((_DWORD *)v48[0] + 15),
          *(_DWORD *)(v39 + 88),
          v39,
          0);
        v23 = v48[0];
      }
      if ( (*((_BYTE *)v23 + 24) & 0xE0) != 0 && ((int)v35[6].pvRbrush & 0x100) == 0 )
      {
        v70 = v74;
        v71 = v75;
        v72 = v76;
        v73 = v77;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v48, v38, (LONG *)&v70);
        v35 = (BRUSHOBJ *)v55;
      }
      v40 = v59;
      ++*(_DWORD *)(v59 + 56);
      if ( v60(
             (SURFOBJ *)(v40 + 16),
             (CLIPOBJ *)v53,
             v35,
             v63,
             v62,
             (LONG)v50,
             y,
             (RECTL *)&v74,
             (((*(_BYTE *)(*((_DWORD *)v48[0] + 255) + 232) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*((_DWORD *)v48[0] + 255)
                                                                                            + 232)
                                                                                 - 1) & 0xF)
                                                                               + 1) << 8)) )
      {
        goto LABEL_38;
      }
      v43 = v48[0];
      v44 = 16 * v64;
      *(_DWORD *)(*((_DWORD *)v48[0] + 255) + 184) &= ~0x200u;
      *(_DWORD *)(*((_DWORD *)v43 + 255) + 184) |= 0x100u;
      *(_DWORD *)(*((_DWORD *)v43 + 255) + 8) = v44;
      *(_DWORD *)(*((_DWORD *)v43 + 255) + 12) = 16 * v56.x;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
      if ( v68[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v68);
      v5 = v54;
      goto LABEL_71;
    }
    EngSetLastError(0x57u);
    v45 = v48[0];
    v46 = 16 * v55;
    *(_DWORD *)(*((_DWORD *)v48[0] + 255) + 184) &= ~0x200u;
    *(_DWORD *)(*((_DWORD *)v45 + 255) + 184) |= 0x100u;
    *(_DWORD *)(*((_DWORD *)v45 + 255) + 8) = v46;
    *(_DWORD *)(*((_DWORD *)v45 + 255) + 12) = 16 * v53;
  }
LABEL_40:
  XDCOBJ::vUnlockFast((XDCOBJ *)v48);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
  if ( v68[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v68);
  return v6;
}

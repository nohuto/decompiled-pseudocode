/*
 * XREFs of ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z @ 0x4A170 (-bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QAEXXZ @ 0x1F4FA1 (-vAttemptDeviceMatch@MAPPER@@QAEXXZ.c)
 *     ?vEmergency@MAPPER@@QAEXXZ @ 0x1F50F6 (-vEmergency@MAPPER@@QAEXXZ.c)
 * Callees:
 *     ?jMapCharset@@YGEEAAVPFEOBJ@@@Z @ 0x4AF54 (-jMapCharset@@YGEEAAVPFEOBJ@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AAEHXZ @ 0x4AFA2 (-bCalculateWishCell@MAPPER@@AAEHXZ.c)
 *     ?bNoMatch@MAPPER@@QBEHPAVPFE@@@Z @ 0x4B006 (-bNoMatch@MAPPER@@QBEHPAVPFE@@@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QBEEXZ @ 0x8999C (-lfOutPrecision@IFIOBJ@@QBEEXZ.c)
 *     ?bCalcOrientation@MAPPER@@QAEHXZ @ 0x8AE80 (-bCalcOrientation@MAPPER@@QAEHXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z @ 0xC1EE4 (-bWin31BitmapHeightScaling@MAPPER@@QAEHJJPAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 *     ??$SafeDivide@KKK@@YGJKKPAK@Z @ 0xC3054 (--$SafeDivide@KKK@@YGJKKPAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QAEHXZ @ 0xC52CA (-bSimItalic@IFIOBJ@@QAEHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QAEPAXXZ @ 0xC93D0 (-pvSimBold@IFIOBJ@@QAEPAXXZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z @ 0xDDD0C (-bCheckFamilyName@PFEOBJ@@QAEHPBGHPAH@Z.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z @ 0x1F4F08 (-bWin31BitmapWidthScaling@MAPPER@@QAEHJJPAJ@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QAEPAU_LIST_ENTRY@@XZ @ 0x1F4F3D (-pGetLinkedFontList@PFEOBJ@@QAEPAU_LIST_ENTRY@@XZ.c)
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 *     ?bEmbedOk@PFEOBJ@@QAEHXZ @ 0x22937D (-bEmbedOk@PFEOBJ@@QAEHXZ.c)
 */

int __userpurge MAPPER::bNearMatch@<eax>(
        MAPPER *this@<ecx>,
        unsigned __int8 a2@<dil>,
        struct PFEOBJ *a3,
        int a4,
        int a5)
{
  PFEOBJ *v5; // ebx
  unsigned int v7; // eax
  struct PFE *v8; // ecx
  struct PFEOBJ **v9; // edx
  int v10; // edi
  char v11; // cl
  char v12; // al
  char v13; // cl
  int v14; // eax
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  char v20; // dl
  int v21; // edi
  struct PFE *v22; // edi
  int v23; // eax
  int v24; // ecx
  char v25; // dh
  struct PFE *v26; // edi
  int v27; // ecx
  IFIOBJ *v28; // edi
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // edi
  int v38; // eax
  unsigned int v39; // eax
  int v41; // ecx
  __int16 v42; // ax
  struct PFEOBJ *v43; // edx
  int v44; // eax
  int v45; // eax
  char v46; // al
  int v47; // eax
  bool v48; // zf
  _BYTE *v49; // edx
  int v50; // eax
  unsigned int v51; // ecx
  struct PFEOBJ *v52; // eax
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  int v59; // ebx
  int v60; // eax
  char *v61; // edx
  int *v62; // ecx
  int v63; // eax
  unsigned __int8 v64; // al
  MAPPER *v65; // eax
  bool v66; // cf
  _BYTE *v67; // eax
  int v68; // eax
  int v69; // eax
  unsigned int v70; // ecx
  int v71; // edx
  int v72; // eax
  MAPPER *v73; // ecx
  int v74; // edi
  struct _LIST_ENTRY *v75; // edi
  struct _LIST_ENTRY *LinkedFontList; // eax
  struct _LIST_ENTRY *Blink; // ecx
  struct _LIST_ENTRY *Flink; // eax
  _BYTE *v79; // eax
  int v80; // edx
  MAPPER *v81; // ecx
  int v82; // eax
  unsigned int v83; // eax
  int v84; // edx
  wchar_t *v85; // eax
  int v86; // ecx
  int v87; // eax
  int v88; // ecx
  char *v89; // eax
  int v90; // edx
  struct PFE *v91; // eax
  MAPPER *v92; // edx
  unsigned int v93; // ecx
  wchar_t *v94; // ebx
  struct PFEOBJ *v95; // edi
  char *v96; // ebx
  int v97; // ebx
  int v98; // edi
  bool v99; // cc
  struct PFEOBJ *v100; // ebx
  int v101; // edi
  MAPPER *v102; // ecx
  struct PFE *v103; // [esp-8h] [ebp-38h]
  struct PFE *v104; // [esp-8h] [ebp-38h]
  struct PFE *v105; // [esp-8h] [ebp-38h]
  struct PFE *v106; // [esp-8h] [ebp-38h]
  struct PFE *v107; // [esp-8h] [ebp-38h]
  struct PFE *v108; // [esp-8h] [ebp-38h]
  struct PFE *v109; // [esp-8h] [ebp-38h]
  struct PFEOBJ *v111; // [esp+0h] [ebp-30h]
  int v112; // [esp+8h] [ebp-28h] BYREF
  int v113; // [esp+Ch] [ebp-24h]
  int v114; // [esp+10h] [ebp-20h]
  int v115; // [esp+14h] [ebp-1Ch]
  unsigned int v116; // [esp+18h] [ebp-18h] BYREF
  wchar_t *Str2; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v118; // [esp+20h] [ebp-10h] BYREF
  int v119; // [esp+24h] [ebp-Ch] BYREF
  int v120; // [esp+28h] [ebp-8h]
  struct PFE *v121; // [esp+2Ch] [ebp-4h]

  v5 = a3;
  Str2 = 0;
  v121 = *(struct PFE **)a3;
  v7 = *((_DWORD *)this + 55) & 0xFFFFB7FF;
  *((_DWORD *)this + 55) = v7;
  v8 = *(struct PFE **)v5;
  if ( *(struct PFE **)v5 == gppfeMapperDefault )
  {
    *((_DWORD *)this + 55) = v7 | 0x4000;
    v8 = *(struct PFE **)v5;
  }
  v9 = (struct PFEOBJ **)((char *)this + 224);
  *((_DWORD *)this + 56) = *((_DWORD *)v8 + 5);
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 8) & 2) != 0 )
    goto LABEL_294;
  v112 = **(_DWORD **)v5;
  if ( *(struct PFT **)(v112 + 80) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)&v112) )
      goto LABEL_294;
    v9 = (struct PFEOBJ **)((char *)this + 224);
  }
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 8) & 0x20) != 0 )
    goto LABEL_294;
  if ( *(struct PFT **)(**(_DWORD **)v5 + 80) != gpPFTPrivate )
    goto LABEL_7;
  if ( PFEOBJ::bEmbedOk(v5) && *(char *)(*((_DWORD *)this + 1) + 25) >= 0 )
  {
LABEL_294:
    *((_DWORD *)this + 43) = -2;
    return 0;
  }
  v9 = (struct PFEOBJ **)((char *)this + 224);
LABEL_7:
  v10 = *((_DWORD *)this + 55);
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 1;
  *((_DWORD *)this + 46) = 1;
  v118 = v10;
  if ( v10 < 0 && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 20) + 48) & 0x4000) == 0
    || *((_DWORD *)this + 60) && !*((_DWORD *)v121 + 11) )
  {
    goto LABEL_293;
  }
  a3 = *v9;
  v11 = *((_BYTE *)a3 + 45);
  v116 = *((_DWORD *)this + 1);
  v12 = *(_BYTE *)(v116 + 27) & 3;
  if ( v12 )
  {
    v13 = v11 & 2;
    if ( v12 == 1 )
    {
      v14 = v13 != 0 ? 0x3A98 : 0;
      if ( !v13 )
        goto LABEL_12;
    }
    else
    {
      if ( v13 )
        goto LABEL_12;
      v14 = 350;
    }
  }
  else
  {
    if ( (v11 & 1) == 0 )
      goto LABEL_12;
    v14 = 1;
  }
  v103 = v121;
  *((_DWORD *)this + 43) = v14;
  if ( MAPPER::bNoMatch(this, v103) )
    return 0;
LABEL_12:
  v15 = *((_BYTE *)a3 + 45) & 0x70;
  v16 = *(_BYTE *)(v116 + 27) & 0x70;
  if ( !v16 )
  {
    if ( *((_BYTE *)this + 244) == 2 )
    {
      v16 = *((_BYTE *)a3 + 45) & 0x70;
    }
    else if ( v15 )
    {
      if ( (v10 & 0x800000) != 0 )
        v16 = 16;
      else
        v16 = 32;
    }
  }
  if ( (v16 & 0xF0u) < 0x60 )
    Str2 = (wchar_t *)(&gpwszFamilyDefaultFonts)[v16 >> 4];
  if ( v16 == v15 )
    goto LABEL_25;
  v17 = 0;
  if ( !v15 )
  {
    v18 = 8000;
    goto LABEL_24;
  }
  if ( v16 > 0x30u )
  {
    if ( v15 > 0x30u )
      goto LABEL_23;
LABEL_163:
    v17 = 50;
    goto LABEL_23;
  }
  if ( v15 > 0x30u )
    goto LABEL_163;
LABEL_23:
  v18 = v17 + 9000;
LABEL_24:
  *((_DWORD *)this + 43) += v18;
  v19 = *((_DWORD *)this + 43);
  if ( v19 >= *((_DWORD *)this + 42)
    && (v19 != *((_DWORD *)this + 42) || (v10 & 0x1000080) != 0 || *((_DWORD *)v121 + 12) >= *((_DWORD *)this + 48)) )
  {
    return 0;
  }
LABEL_25:
  v20 = *((_BYTE *)this + 244);
  v21 = v10 & 0x8000000;
  HIBYTE(a3) = v20;
  if ( v20 == 1 || v21 )
  {
    v64 = jMapCharset(a2, v111);
    v48 = HIBYTE(a3) == 1;
    *(_BYTE *)a4 = v64;
    if ( !v48 || v21 )
    {
LABEL_30:
      v26 = v121;
      goto LABEL_31;
    }
    v26 = v121;
    if ( MAPPER::DefaultCharset != v64 )
    {
      *((_DWORD *)this + 43) += 2;
      if ( MAPPER::bNoMatch(this, v26) )
        return 0;
    }
  }
  else
  {
    v22 = *(struct PFE **)v5;
    v23 = *(_DWORD *)(*(_DWORD *)v5 + 20);
    v24 = *(_DWORD *)(v23 + 40);
    if ( v24 )
    {
      if ( v20 == -2 )
      {
        v25 = -2;
      }
      else
      {
        v25 = *(_BYTE *)(v23 + v24);
        v67 = (_BYTE *)(v24 + v23);
        a3 = (struct PFEOBJ *)(v67 + 16);
        if ( v67 >= v67 + 16 )
        {
LABEL_172:
          v74 = *((_DWORD *)v22 + 19);
          if ( v74 )
          {
            v75 = *(struct _LIST_ENTRY **)(v74 + 8);
            LinkedFontList = PFEOBJ::pGetLinkedFontList(v5);
            v116 = (unsigned int)LinkedFontList;
            while ( v75 != LinkedFontList )
            {
              Blink = v75[3].Flink[2].Blink;
              Flink = Blink[5].Flink;
              if ( Flink )
              {
                v79 = (char *)Flink + (_DWORD)Blink;
                a3 = (struct PFEOBJ *)(v79 + 16);
                if ( v79 < v79 + 16 )
                {
                  while ( *v79 != v20 )
                  {
                    if ( *v79 != 1 && ++v79 < (_BYTE *)a3 )
                      continue;
                    goto LABEL_182;
                  }
                  goto LABEL_113;
                }
              }
              else if ( LOBYTE(Blink[5].Blink) == v20 )
              {
                goto LABEL_113;
              }
LABEL_182:
              v75 = v75->Flink;
              LinkedFontList = (struct _LIST_ENTRY *)v116;
            }
          }
        }
        else
        {
          while ( *v67 != v20 )
          {
            if ( *v67 != 1 && ++v67 < (_BYTE *)a3 )
              continue;
            goto LABEL_172;
          }
LABEL_113:
          v25 = v20;
        }
      }
    }
    else
    {
      v25 = *(_BYTE *)(v23 + 44);
    }
    *(_BYTE *)a4 = v25;
    if ( v20 == v25 )
      goto LABEL_30;
    if ( (v118 & 0x4000000) == 0 )
      goto LABEL_293;
    v26 = v121;
    *((_DWORD *)this + 43) += 65000;
    if ( MAPPER::bNoMatch(this, v26) )
      return 0;
  }
LABEL_31:
  if ( a5 )
  {
    a4 = 0;
    if ( PFEOBJ::bCheckFamilyName(v5, *((wchar_t **)this + 2), 0, &a4) )
    {
      if ( a4 )
        ++*((_DWORD *)this + 43);
    }
    else
    {
      *((_DWORD *)this + 43) += !Str2
                             || __wcsicmp(
                                  (const wchar_t *)(*(_DWORD *)(*(_DWORD *)v5 + 20)
                                                  + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 20) + 8)),
                                  Str2)
                              ? 10000
                              : 9000;
    }
    if ( MAPPER::bNoMatch(this, v26) )
      return 0;
  }
  v27 = *((_DWORD *)this + 56);
  v28 = (MAPPER *)((char *)this + 224);
  v29 = *((_DWORD *)this + 55);
  v30 = *(_DWORD *)(v27 + 8);
  if ( (v29 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v30 + v27) != 64 )
      goto LABEL_293;
  }
  else if ( *(_WORD *)(v30 + v27) == 64 )
  {
    goto LABEL_293;
  }
  if ( (*(_DWORD *)(v27 + 48) & 0x3000010) != 0 )
    goto LABEL_51;
  if ( (v29 & 4) == 0 && !MAPPER::bCalculateWishCell(this) )
    goto LABEL_293;
  v31 = *((_DWORD *)this + 55);
  v32 = *(_DWORD *)v28;
  if ( (v31 & 2) != 0 )
    v33 = *(__int16 *)(v32 + 56);
  else
    v33 = *(__int16 *)(v32 + 60) + *(__int16 *)(v32 + 62);
  a4 = *((_DWORD *)this + 38);
  if ( v33 < a4
    && (*(_DWORD *)(v32 + 48) & 0x100000) != 0
    && (v31 & 0x8000) == 0
    && (v73 = (MAPPER *)a4, a4 > 7 * v33 / 4) )
  {
    a4 = 0;
    if ( !MAPPER::bWin31BitmapHeightScaling(v73, (int)v73, v33, &a4) )
      return 0;
    v34 = a4;
    if ( (unsigned int)a4 > 8 )
      v34 = 8;
  }
  else
  {
    v34 = 1;
  }
  *((_DWORD *)this + 46) = v34;
  v35 = 0;
  if ( v34 > 1 )
  {
    if ( (*((_DWORD *)this + 55) & 0x800) == 0 && v34 + 2 >= v33 )
      return 0;
    v33 *= v34;
    v35 = (20 * v34) | (5 * (v34 - 1));
  }
  v36 = *((_DWORD *)this + 38);
  if ( v36 >= v33 )
  {
    v38 = v36 - v33;
    goto LABEL_44;
  }
  v37 = v33 - v36;
  if ( (*((_DWORD *)this + 55) & 0x1080) != 0x1080 )
  {
    v38 = v37 + 4;
LABEL_44:
    v35 += 150 * v38;
    goto LABEL_45;
  }
  if ( v37 > 1 )
  {
    v38 = v37 + 20;
    goto LABEL_44;
  }
LABEL_45:
  if ( v35 )
  {
    *((_DWORD *)this + 43) += v35;
    v39 = *((_DWORD *)this + 43);
    if ( v39 >= *((_DWORD *)this + 42)
      && (v39 != *((_DWORD *)this + 42)
       || (*((_DWORD *)this + 55) & 0x1000080) != 0
       || *((_DWORD *)v121 + 12) >= *((_DWORD *)this + 48)) )
    {
      return 0;
    }
    if ( v35 >= 0x2710 && (*((_DWORD *)this + 55) & 0x4800) == 0 )
      return 0;
  }
  v28 = (MAPPER *)((char *)this + 224);
LABEL_51:
  Str2 = *(wchar_t **)this;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)Str2 + 1020) + 256) & 1) != 0
    && IFIOBJ::lfOutPrecision(v28) == 6
    && (*((_DWORD *)this + 55) & 0x4000) == 0 )
  {
    v80 = *(_DWORD *)v28;
    a3 = (struct PFEOBJ *)*((_DWORD *)this + 53);
    a4 = *(_DWORD *)(v80 + 128);
    if ( (a3 != (struct PFEOBJ *)a4 || *((_DWORD *)this + 54) != *(_DWORD *)(v80 + 132))
      && (_DWORD)a3 * *(_DWORD *)(v80 + 132) != a4 * *((_DWORD *)this + 54) )
    {
      goto LABEL_293;
    }
  }
  v41 = *(_DWORD *)v28;
  v119 = *((_DWORD *)this + 1);
  v120 = v41;
  v42 = *(_WORD *)(v41 + 52) & 1;
  if ( !*(_BYTE *)(v119 + 20) )
  {
    if ( !v42 )
      goto LABEL_54;
    v105 = v121;
    *((_DWORD *)this + 43) += 4;
    if ( MAPPER::bNoMatch(this, v105) )
      return 0;
    goto LABEL_126;
  }
  if ( v42 )
  {
LABEL_54:
    v43 = (struct PFEOBJ *)*((_DWORD *)this + 55);
    v44 = *(unsigned __int16 *)(v41 + 46) - *((_DWORD *)this + 40);
    a3 = v43;
    if ( (((unsigned int)&loc_1FFFFC + 4) & (unsigned int)v43) != 0 )
    {
      v106 = v121;
      *((_DWORD *)this + 43) += (int)(19 * abs32(v44)) >> 7;
      if ( MAPPER::bNoMatch(this, v106) )
        return 0;
    }
    else
    {
      if ( !v44 )
        goto LABEL_56;
      if ( v44 < 0 )
      {
        v44 = -v44;
        a4 = v44;
        if ( v44 > 150 )
        {
          v48 = IFIOBJ::pvSimBold(v28) == 0;
          v44 = a4;
          if ( !v48 )
          {
            *((_DWORD *)this + 44) |= 0x2000u;
            v44 -= 120;
          }
        }
      }
      v104 = v121;
      *((_DWORD *)this + 43) += (73 * v44) >> 8;
      if ( MAPPER::bNoMatch(this, v104) )
        return 0;
    }
    v43 = a3;
    v41 = v120;
LABEL_56:
    v116 = (unsigned __int8)v43 & 0x80;
    if ( ((unsigned __int8)v43 & 0x80) == 0 )
    {
      v45 = *(_DWORD *)(v41 + 48);
      a5 = v45;
      if ( (v45 & 1) == 0
        && (v45 & 2) != 0
        && (((unsigned int)v43 & 0x10000) != 0
         || *(int *)(*(_DWORD *)Str2 + 48) < 0
         || (((unsigned __int16)v43 & 0x100) == 0 || *((_DWORD *)this + 53) != *((_DWORD *)this + 54))
         && (a5 & 0x40000000) == 0) )
      {
        goto LABEL_293;
      }
      v46 = *(_BYTE *)(v119 + 24);
      HIBYTE(a4) = v46;
      if ( v46 == 7 )
      {
        if ( IFIOBJ::lfOutPrecision(v28) != 8 )
          goto LABEL_293;
        v41 = v120;
        v46 = HIBYTE(a4);
      }
      if ( v46 == 10 && a5 >= 0 )
        goto LABEL_293;
    }
    HIBYTE(a4) = *(_BYTE *)(v119 + 24);
    if ( HIBYTE(a4) == 9
      || *(_DWORD *)(_gpGdiSharedMemory + 1048724) && HIBYTE(a4) != 6 && HIBYTE(a4) != 5 && HIBYTE(a4) != 10
      || (*(_DWORD *)(*(_DWORD *)Str2 + 48) & 0x20000000) != 0 )
    {
      if ( v116 || (v47 = *(_DWORD *)(v41 + 48), (v47 & 1) == 0) && ((v47 & 6) != 0 || (v47 & 8) == 0) )
      {
        *((_DWORD *)this + 43) += 2;
        v65 = (MAPPER *)*((_DWORD *)this + 43);
        v66 = (unsigned int)v65 < *((_DWORD *)this + 42);
        a4 = *((_DWORD *)this + 42);
        v28 = (MAPPER *)((char *)this + 224);
        if ( !v66
          && (v65 != (MAPPER *)a4
           || ((unsigned int)v43 & 0x1000080) != 0
           || *((_DWORD *)v121 + 12) >= *((_DWORD *)this + 48)) )
        {
          return 0;
        }
      }
    }
    v48 = (*(_DWORD *)(v41 + 48) & 0x2000010) == 0;
    v49 = (_BYTE *)(v41 + 48);
    a5 = v41 + 48;
    if ( !v48 )
      goto LABEL_78;
    a4 = *(__int16 *)(v41 + 76);
    v50 = v119;
    *((_DWORD *)this + 45) = 1;
    if ( *(_DWORD *)(v50 + 4) )
    {
      if ( ((unsigned __int8)a3 & 4) == 0 && !MAPPER::bCalculateWishCell(this) )
        goto LABEL_293;
      v51 = *(_DWORD *)(*(_DWORD *)v28 + 48);
      v49 = (_BYTE *)(*(_DWORD *)v28 + 48);
      Str2 = *(wchar_t **)v28;
      v52 = (struct PFEOBJ *)*((_DWORD *)this + 55);
      v116 = v51;
      a3 = v52;
      a5 = (int)v49;
      if ( (v51 & 0x100000) != 0
        && ((unsigned __int16)v52 & 0x8000) == 0
        && (v81 = (MAPPER *)*((_DWORD *)this + 39), (int)v81 > a4) )
      {
        Str2 = 0;
        if ( !MAPPER::bWin31BitmapWidthScaling(v81, (int)v81, a4, (int *)&Str2) )
          return 0;
        v82 = (int)Str2;
        if ( (unsigned int)Str2 > 5 )
          v82 = 5;
        *((_DWORD *)this + 45) = v82;
      }
      else
      {
        if ( (v116 & 0x1000000) == 0 )
          goto LABEL_72;
        a4 *= *((_DWORD *)this + 38);
        if ( SafeDivide<long,long,long>(&a4) )
          return 0;
      }
      v49 = (_BYTE *)a5;
LABEL_72:
      v53 = *((_DWORD *)this + 45);
      v54 = 0;
      v116 = v53;
      if ( v53 > 1 )
      {
        a4 *= v53;
        v54 = (v116 - 1) | (20 * v116);
      }
      v116 = *((_DWORD *)this + 39);
      v55 = v116 - a4;
      if ( (int)(v116 - a4) < 0 )
        v55 = a4 - v116;
      v56 = 50 * v55 + v54;
      if ( v56 )
      {
        *((_DWORD *)this + 43) += v56;
        v57 = *((_DWORD *)this + 43);
        if ( v57 >= *((_DWORD *)this + 42) )
        {
          if ( v57 != *((_DWORD *)this + 42) )
            return 0;
          v58 = (unsigned int)a3;
          if ( ((unsigned int)a3 & 0x1000080) != 0 || *((_DWORD *)v121 + 12) >= *((_DWORD *)this + 48) )
            return 0;
LABEL_79:
          v113 = *((_DWORD *)this + 45);
          if ( v113 <= 1 && *((int *)this + 46) <= 1 )
            goto LABEL_81;
          v86 = v113;
          a4 = *((_DWORD *)this + 43) + 50;
          *((_DWORD *)this + 43) = a4;
          v87 = *((_DWORD *)this + 46);
          v114 = v87;
          if ( v86 <= v87 )
          {
            if ( v86 >= v87 )
              goto LABEL_263;
            if ( !v86 )
              goto LABEL_293;
            v90 = 100 * v87;
            v113 = 100 * v87;
            if ( v86 != 1 )
              v90 = (v113 + v86 / 2) / v86;
            v89 = (char *)(a4 + 4 * v90);
          }
          else
          {
            if ( !v87 )
              goto LABEL_293;
            v88 = 100 * v86;
            if ( v87 != 1 )
              v88 = (v88 + v87 / 2) / v114;
            v89 = (char *)(a4 + 4 * v88);
          }
          *((_DWORD *)this + 43) = v89;
LABEL_263:
          if ( !MAPPER::bNoMatch(this, v121) )
          {
            v49 = (_BYTE *)a5;
            v58 = (unsigned int)a3;
LABEL_81:
            if ( (*v49 & 0x10) == 0 && (v58 & 0x41000) != 0x41000 )
            {
              if ( ((unsigned int)&loc_80000 & v58) == 0 && !MAPPER::bCalcOrientation(this) )
                goto LABEL_293;
              v91 = *(struct PFE **)v5;
              a4 = *((_DWORD *)this + 41);
              v92 = (MAPPER *)a4;
              v93 = a4 - *((_DWORD *)v91 + 10);
              if ( a4 != *((_DWORD *)v91 + 10) )
              {
                if ( (*((_DWORD *)this + 55) & 0x480) == 0x480 )
                {
                  if ( v93 > a4 )
                    v93 = *((_DWORD *)v91 + 10) - a4;
                  v92 = (MAPPER *)a4;
                  v93 %= 0x384u;
                }
                if ( v93 )
                {
                  if ( (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(*(_DWORD *)v28 + 48)) != 0 )
                  {
                    if ( v93 > (unsigned int)v92 )
                      v93 = -v93;
                    v93 %= 0x384u;
                  }
                  if ( v93 )
                    goto LABEL_293;
                }
              }
            }
            v59 = *((_DWORD *)this + 55);
            if ( (v59 & 0x400000) != 0 )
            {
              v109 = v121;
              ++*((_DWORD *)this + 43);
              if ( MAPPER::bNoMatch(this, v109) )
                return 0;
            }
            if ( v59 < 0 )
            {
              v61 = (char *)this + 88;
              v62 = (int *)((char *)this + 84);
            }
            else
            {
              v60 = *((_DWORD *)this + 1);
              v61 = (char *)(v60 + 356);
              v62 = (int *)(v60 + 352);
            }
            v63 = *v62;
            if ( !*v62 )
              return 1;
            v94 = *(wchar_t **)v28;
            a4 = (int)v94;
            if ( *((_DWORD *)v94 + 1) < 0x10u
              || (v95 = (struct PFEOBJ *)*((_DWORD *)v94 + 49), (a3 = v95) == 0)
              || (v96 = (char *)v94 + (_DWORD)v95) == 0 )
            {
LABEL_293:
              *((_DWORD *)this + 43) = -2;
              return 0;
            }
            v97 = *((_DWORD *)v96 + 1);
            v98 = v97;
            a5 = v63;
            if ( v97 && (a5 = v63, v63 == v97) )
            {
              v99 = *((_DWORD *)this + 43) <= 0x88B8u;
              v100 = a3;
              a5 = v63;
              if ( v99 )
              {
                *((_DWORD *)this + 62) = v121;
                v101 = *v62;
                v102 = (MAPPER *)a4;
                a5 = v101;
                v98 = *(_DWORD *)((char *)v100 + a4 + 4);
LABEL_291:
                if ( a5 == v98 && !memcmp(v61, (char *)v102 + (_DWORD)v100 + 8, 4 * v98) )
                  return 1;
                goto LABEL_293;
              }
            }
            else
            {
              v100 = a3;
            }
            v102 = (MAPPER *)a4;
            goto LABEL_291;
          }
          return 0;
        }
      }
LABEL_78:
      v58 = (unsigned int)a3;
      goto LABEL_79;
    }
    if ( _bittest((const signed __int32 *)&a3, 0xFu) || (*(_DWORD *)v49 & 0x100000) == 0 )
      goto LABEL_78;
    v68 = *((_DWORD *)this + 53);
    v114 = *((_DWORD *)this + 54);
    Str2 = 0;
    v118 = 0;
    v116 = 0;
    v119 = 0;
    v113 = v68;
    if ( SafeDivide<unsigned long,unsigned long,unsigned long>(&v118) )
      return 0;
    v69 = *(_DWORD *)(v120 + 128);
    v115 = *(_DWORD *)(v120 + 132);
    v120 = v69;
    if ( SafeDivide<long,long,long>(&v119) )
      return 0;
    a4 = *((_DWORD *)this + 46);
    if ( SafeDivide<long,long,long>(&v116) )
      return 0;
    if ( v120 == v115 && v113 == v114 )
    {
      v70 = a4;
      v71 = 1;
      if ( a4 == 1 )
      {
LABEL_136:
        v49 = (_BYTE *)a5;
        goto LABEL_78;
      }
      v83 = a4;
    }
    else
    {
      if ( v118 <= (3 * v116) >> 1 )
      {
        v70 = a4;
        v84 = 1;
        goto LABEL_247;
      }
      if ( !v116 )
        goto LABEL_293;
      v83 = v118 / v116;
      v70 = a4;
      v71 = 0;
    }
    if ( v83 > 5 )
      v83 = 5;
    *((_DWORD *)this + 45) = v83;
    Str2 = (wchar_t *)(20 * v83);
    v28 = (MAPPER *)((char *)this + 224);
    a4 = v83;
    if ( v71 )
    {
      v84 = v83;
      if ( v83 == v70 )
      {
        v85 = Str2;
LABEL_249:
        if ( v85 )
        {
          v108 = v121;
          *((_DWORD *)this + 43) += v85;
          if ( MAPPER::bNoMatch(this, v108) )
            return 0;
        }
        goto LABEL_136;
      }
    }
    else
    {
      v84 = a4;
    }
LABEL_247:
    if ( !v70 )
      goto LABEL_293;
    v85 = &Str2[15 * abs32(v118 - v119 * v84 / v70)];
    goto LABEL_249;
  }
  if ( IFIOBJ::bSimItalic(v28) )
  {
    *((_DWORD *)this + 44) |= 0x4000u;
    v72 = 1;
  }
  else
  {
    v72 = 4;
  }
  v107 = v121;
  *((_DWORD *)this + 43) += v72;
  if ( !MAPPER::bNoMatch(this, v107) )
  {
LABEL_126:
    v41 = v120;
    goto LABEL_54;
  }
  return 0;
}

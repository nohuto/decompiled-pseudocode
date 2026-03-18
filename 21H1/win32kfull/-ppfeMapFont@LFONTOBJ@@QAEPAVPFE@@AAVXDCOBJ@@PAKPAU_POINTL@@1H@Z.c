/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40
 * Callers:
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     ?dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z @ 0x1EB996 (-dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 */

struct PFE *__thiscall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        struct tagENUMLOGFONTEXDVW *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        struct _POINTL *a6)
{
  int v6; // eax
  struct XDCOBJ *v7; // edi
  _DWORD *v8; // edx
  int v9; // esi
  int v10; // ebx
  bool v11; // zf
  char v12; // bl
  int v13; // eax
  int v14; // ebx
  struct PFE *v15; // eax
  int v16; // ecx
  struct PFE *v17; // eax
  int v18; // eax
  unsigned int *v19; // ebx
  int v20; // edx
  unsigned int v21; // eax
  struct PFE *v22; // edx
  LFONTOBJ *v23; // esi
  LFONTOBJ *v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // eax
  struct PFE *AMatch; // eax
  int v30; // eax
  LFONTOBJ *v31; // ebx
  char v32; // cl
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  LFONTOBJ *v38; // ecx
  struct tagPvtData *v39; // eax
  char v40; // al
  unsigned int *v41; // [esp+0h] [ebp-40h]
  int v42; // [esp+4h] [ebp-3Ch]
  int v43; // [esp+Ch] [ebp-34h] BYREF
  int v44; // [esp+14h] [ebp-2Ch]
  struct PFE *v45; // [esp+18h] [ebp-28h]
  int v46; // [esp+1Ch] [ebp-24h]
  int v47; // [esp+20h] [ebp-20h]
  struct PFE *v48; // [esp+24h] [ebp-1Ch]
  int v49; // [esp+28h] [ebp-18h]
  void *Src; // [esp+2Ch] [ebp-14h]
  void *v51; // [esp+30h] [ebp-10h]
  int v52; // [esp+34h] [ebp-Ch]
  int v53; // [esp+38h] [ebp-8h]
  LFONTOBJ *v54; // [esp+3Ch] [ebp-4h]
  LONG lfHeight; // [esp+48h] [ebp+8h]
  char v56; // [esp+4Fh] [ebp+Fh]

  v6 = *(_DWORD *)this;
  v7 = a2;
  v8 = (_DWORD *)(*(_DWORD *)this + 32);
  v54 = this;
  v53 = 0;
  v47 = v6;
  v9 = *(_DWORD *)a2;
  v51 = v8;
  v46 = 0;
  v44 = *(_DWORD *)(v9 + 36);
  v10 = 0;
  v11 = (*(_BYTE *)(v9 + 172) & 1) == 0;
  v52 = 0;
  if ( v11 )
  {
    v12 = *(_BYTE *)(v6 + 306);
    if ( ((*(_BYTE *)(v9 + 24) & 1) != 0 || *(_DWORD *)(v9 + 20) == 1)
      && ((_gulFontInformation & 2) != 0 && v12 != 3 || v12 == 4 || v12 == 5 || v12 == 6)
      && *(_DWORD *)(v9 + 504) )
    {
      GreAcquireHmgrSemaphore();
      v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 504) + 60);
      v46 = v13;
      if ( v13 == 6 || (unsigned int)(v13 - 4) <= 1 )
      {
        v52 = 0x10000;
        if ( v12 == 6 )
        {
          v14 = 1342242816;
          v52 = 1342242816;
        }
        else
        {
          if ( v12 == 5 || (_gulFontInformation & 0x10) != 0 )
            v52 = 268500992;
          v14 = v52;
        }
      }
      else
      {
        v14 = 0;
      }
      GreReleaseHmgrSemaphore();
      v8 = v51;
      this = v54;
    }
    else
    {
      v14 = 0;
    }
    if ( !a6 )
    {
      v15 = *(struct PFE **)this;
      v45 = (struct PFE *)_gpGdiSharedMemory;
      v48 = v15;
      if ( *((_DWORD *)v15 + 7) != *(_DWORD *)(_gpGdiSharedMemory + 1048728) )
      {
        v38 = v54;
        *((_DWORD *)v48 + 6) = 0;
        *(_DWORD *)(*(_DWORD *)v38 + 28) = *(_DWORD *)(*(_DWORD *)v45 + 1048728);
        v15 = *(struct PFE **)v54;
      }
      v16 = 0;
      v53 = 0;
      if ( *((int *)v15 + 6) > 0 )
      {
        v49 = 1;
        Src = (void *)(v47 + 92);
        do
        {
          if ( v44 == *v8
            && v8[1] == *(_DWORD *)(v9 + 240)
            && v8[2] == *(_DWORD *)(v9 + 244)
            && v8[3] == *(_DWORD *)(v9 + 248)
            && v8[4] == *(_DWORD *)(v9 + 252)
            && v8[5] == *(_DWORD *)(v9 + 256)
            && v8[6] == *(_DWORD *)(v9 + 260)
            && v8[7] == *(_DWORD *)(v9 + 264)
            && v8[8] == *(_DWORD *)(v9 + 268) )
          {
            v17 = (struct PFE *)v8[9];
            v45 = v17;
            if ( v17 )
            {
              v43 = *(_DWORD *)v17;
              if ( *(struct PFT **)(v43 + 80) != gpPFTPrivate
                || (v39 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v43), v8 = v51, v39) )
              {
                v18 = v8[10];
                if ( v14 )
                {
                  if ( (v18 & 0x10010000) == v14 && v46 == v8[14] )
                  {
LABEL_32:
                    v19 = a5;
                    v20 = v47 + 60 * v53;
                    a3->elfEnumLogfontEx.elfLogFont.lfHeight = *(_DWORD *)(v20 + 72);
                    *a4 = *(struct _POINTL *)(v20 + 76);
                    v21 = *(_DWORD *)(v20 + 84);
                    v22 = v45;
                    *a5 = v21;
                    goto LABEL_33;
                  }
                }
                else if ( (v18 & 0x10000) == 0 )
                {
                  goto LABEL_32;
                }
              }
              v16 = v53;
            }
            v25 = v54;
            v45 = *(struct PFE **)v54;
            v26 = *((_DWORD *)v45 + 6);
            if ( v49 < v26 )
            {
              v48 = (struct PFE *)(v26 - v16);
              memmove(v8, Src, 60 * (v26 - v16) - 60);
              v8 = v51;
              v16 = v53;
              v45 = *(struct PFE **)v54;
              v25 = v54;
            }
            --v16;
            Src = (char *)Src - 60;
            v8 -= 15;
            --*((_DWORD *)v45 + 6);
            --v49;
            v7 = a2;
          }
          else
          {
            v25 = v54;
          }
          v27 = *(_DWORD *)v25;
          ++v16;
          Src = (char *)Src + 60;
          v8 += 15;
          ++v49;
          v53 = v16;
          v51 = v8;
        }
        while ( v16 < *(_DWORD *)(v27 + 24) );
      }
    }
    v10 = v52;
  }
  if ( (*(_BYTE *)(*(_DWORD *)v54 + 20) & 2) != 0
    && ((v37 = *(_DWORD *)(*(_DWORD *)v7 + 520), (v37 & 1) == 0) || (v37 & 2) != 0) )
  {
    v28 = 64;
  }
  else
  {
    v28 = 0;
  }
  AMatch = ppfeGetAMatch(
             (struct XDCOBJ *)(*(_DWORD *)v54 + 212),
             a3,
             (const unsigned __int16 *)v28,
             (unsigned int *)a3,
             a4,
             a5,
             a6,
             v41,
             v42);
  v22 = AMatch;
  if ( AMatch )
  {
    if ( (*(_BYTE *)(*(_DWORD *)v7 + 172) & 1) != 0 )
      goto LABEL_63;
    if ( !v10
      || (*(_BYTE *)(*((_DWORD *)AMatch + 5) + 48) & 0x40) == 0
      || (lfHeight = a3->elfEnumLogfontEx.elfLogFont.lfHeight,
          a3->elfEnumLogfontEx.elfLogFont.lfHeight |= 0x10000u,
          v30 = *(_DWORD *)v7,
          (*(_BYTE *)(*(_DWORD *)v7 + 24) & 1) == 0)
      && *(_DWORD *)(v30 + 20) != 1 )
    {
      v31 = v54;
      goto LABEL_57;
    }
    v31 = v54;
    if ( *(_DWORD *)(v30 + 504) && (*(_BYTE *)(*((_DWORD *)v22 + 5) + 48) & 1) != 0 )
    {
      v32 = *(_BYTE *)(*(_DWORD *)v54 + 306);
      if ( v32 == 5 )
      {
LABEL_56:
        a3->elfEnumLogfontEx.elfLogFont.lfHeight = lfHeight | 0x10010000;
        goto LABEL_57;
      }
      if ( v32 == 4 )
        goto LABEL_57;
      if ( v32 != 6 )
      {
        if ( (_gulFontInformation & 0x12) != 0x12 )
          goto LABEL_57;
        goto LABEL_56;
      }
      a3->elfEnumLogfontEx.elfLogFont.lfHeight = lfHeight | 0x50010000;
    }
LABEL_57:
    if ( !a6 )
    {
      v33 = v53;
      if ( v53 >= 3 )
      {
        v33 = 0;
        *(_DWORD *)(*(_DWORD *)v31 + 24) = 0;
      }
      v34 = v47 + 60 * v33;
      v35 = v44;
      *(_DWORD *)(v34 + 68) = v22;
      *(_DWORD *)(v34 + 32) = v35;
      *(_DWORD *)(v34 + 72) = a3->elfEnumLogfontEx.elfLogFont.lfHeight;
      *(struct _POINTL *)(v34 + 76) = *a4;
      v19 = a5;
      *(_DWORD *)(v34 + 36) = *(_DWORD *)(v9 + 240);
      *(_DWORD *)(v34 + 40) = *(_DWORD *)(v9 + 244);
      *(_DWORD *)(v34 + 44) = *(_DWORD *)(v9 + 248);
      *(_DWORD *)(v34 + 48) = *(_DWORD *)(v9 + 252);
      *(_DWORD *)(v34 + 52) = *(_DWORD *)(v9 + 256);
      *(_DWORD *)(v34 + 56) = *(_DWORD *)(v9 + 260);
      *(_DWORD *)(v34 + 60) = *(_DWORD *)(v9 + 264);
      v36 = *(_DWORD *)(v9 + 268);
      v23 = v54;
      *(_DWORD *)(v34 + 64) = v36;
      *(_DWORD *)(v34 + 84) = *a5;
      *(_DWORD *)(v34 + 88) = v46;
      ++*(_DWORD *)(*(_DWORD *)v23 + 24);
      goto LABEL_34;
    }
LABEL_63:
    v19 = a5;
LABEL_33:
    v23 = v54;
LABEL_34:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_DWORD *)v23 + 305) & 0x40) != 0 )
      goto LABEL_35;
    v56 = *((_BYTE *)v19 + 3);
    v40 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( v56 )
    {
      if ( v56 != -1 || (v40 & 1) == 0 )
        goto LABEL_35;
    }
    else if ( (v40 & 2) == 0 )
    {
      goto LABEL_35;
    }
    *v19 = *v19 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_35:
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 1020) + 4) = *v19 >> 8;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 1020) + 184) &= ~0x10u;
  }
  return v22;
}

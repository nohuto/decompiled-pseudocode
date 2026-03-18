/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444 (-ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z.c)
 *     _GreAddFontResourceWInternal@28 @ 0xDC42C (_GreAddFontResourceWInternal@28.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621 (-bAttemptReload@PFFOBJ@@QAEHXZ.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500 (-bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z @ 0xDDB5C (-chpfeIncrPFF@PFTOBJ@@QAEKPAVPFF@@PAHKPAU_EUDCLOAD@@@Z.c)
 *     ?vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNTCHECKSUM@@HPAH@Z @ 0xDDDEA (-vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNT.c)
 *     ?bPerformLazyValidation@PFFOBJ@@SGHHKPAGKPAUtagDESIGNVECTOR@@K@Z @ 0xDE1BE (-bPerformLazyValidation@PFFOBJ@@SGHHKPAGKPAUtagDESIGNVECTOR@@K@Z.c)
 *     ?IsTrustedFontFilePath@@YG_NPBG@Z @ 0xDE1EE (-IsTrustedFontFilePath@@YG_NPBG@Z.c)
 *     ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C (--1PFFMEMOBJ@@QAE@XZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QAEXXZ @ 0xDE55E (-vSetUniqueness@PFFOBJ@@QAEXXZ.c)
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 *     ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050 (-Remove@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z.c)
 *     ??0PFFMEMOBJ@@QAE@PAVPFF@@KKPAVPFT@@@Z @ 0xDF222 (--0PFFMEMOBJ@@QAE@PAVPFF@@KKPAVPFT@@@Z.c)
 */

int __thiscall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *Src,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        unsigned int *MaxCount,
        unsigned int *a7,
        unsigned int a8,
        struct _FONTFILEVIEW ***a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12,
        int a13,
        int a14)
{
  unsigned int v14; // ebx
  int v15; // edi
  PUBLIC_PFTOBJ *v16; // ecx
  struct PFF *v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // ax
  struct _FONTFILEVIEW **v20; // edx
  struct PFF *v22; // eax
  struct _FONTFILEVIEW **v23; // esi
  unsigned __int16 *v24; // eax
  unsigned __int16 *v25; // edx
  unsigned __int16 *v26; // edi
  char *v27; // esi
  unsigned int v28; // ecx
  HDEV v29; // eax
  BOOL v31; // eax
  unsigned int v32; // eax
  struct PFF *v33; // ecx
  struct _FONTFILEVIEW ***v34; // eax
  int v35; // edi
  struct PFT *v36; // eax
  unsigned int *v37; // edx
  struct _FONTFILEVIEW **v38; // ecx
  unsigned int v39; // ecx
  unsigned __int16 *v40; // edx
  _WORD *v41; // esi
  struct _FONTFILEVIEW **v43; // ecx
  __int16 v44; // ax
  unsigned int k; // esi
  void (__stdcall *v46)(struct _FONTFILEVIEW **); // ebx
  unsigned int i; // edi
  unsigned int j; // edi
  unsigned int v49; // eax
  struct _FONTFILEVIEW **v50; // edx
  unsigned __int16 *v51; // ecx
  unsigned int v52; // edi
  PUBLIC_PFTOBJ *v53; // esi
  struct PFF *v54; // ecx
  struct _FONTFILEVIEW ***v55; // eax
  int v56; // eax
  int v57; // esi
  struct PFF **v58; // edx
  struct _FONTFILEVIEW **v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // edx
  __int16 v62; // ax
  struct _FONTFILEVIEW **v63; // edx
  int v64; // [esp-2h] [ebp-6Ch]
  unsigned int v65; // [esp-2h] [ebp-6Ch]
  HDEV v66; // [esp-2h] [ebp-6Ch]
  unsigned __int16 *v67; // [esp+2h] [ebp-68h]
  int *v68; // [esp+6h] [ebp-64h]
  char v69; // [esp+11h] [ebp-59h]
  unsigned __int16 *v70; // [esp+12h] [ebp-58h]
  int v71; // [esp+16h] [ebp-54h] BYREF
  PUBLIC_PFTOBJ *v72; // [esp+1Ah] [ebp-50h]
  int v73; // [esp+1Eh] [ebp-4Ch]
  unsigned int v74; // [esp+22h] [ebp-48h]
  struct _FONTFILEVIEW **v75; // [esp+26h] [ebp-44h]
  struct PFF **v76; // [esp+2Ah] [ebp-40h] BYREF
  void (__stdcall *v77)(struct _FONTFILEVIEW **); // [esp+2Eh] [ebp-3Ch]
  unsigned int v78; // [esp+32h] [ebp-38h] BYREF
  HDEV v79; // [esp+36h] [ebp-34h] BYREF
  int v80; // [esp+3Ah] [ebp-30h] BYREF
  unsigned __int16 *v81; // [esp+3Eh] [ebp-2Ch]
  int v82; // [esp+42h] [ebp-28h] BYREF
  struct _FONTFILEVIEW **v83; // [esp+46h] [ebp-24h] BYREF
  char *v84; // [esp+4Ah] [ebp-20h] BYREF
  unsigned int v85; // [esp+4Eh] [ebp-1Ch] BYREF
  unsigned int v86[2]; // [esp+52h] [ebp-18h] BYREF
  _DWORD v87[2]; // [esp+5Ah] [ebp-10h] BYREF
  __int16 v88; // [esp+62h] [ebp-8h]

  v14 = 0;
  v72 = this;
  v15 = 0;
  v76 = 0;
  v73 = 0;
  v71 = 0;
  v86[0] = 0;
  v86[1] = 0;
  v69 = 1;
  if ( Src && a4 <= 3 )
  {
    v80 = _ghsemPublicPFT;
    GreAcquireSemaphore(_ghsemPublicPFT);
    v74 = a10;
    if ( !a11 )
    {
      v16 = v72;
      *a7 = 0;
      v79 = (HDEV)(a12 != 0);
      v17 = PUBLIC_PFTOBJ::pPFFGet(
              v16,
              Src,
              a3,
              a4,
              (struct tagDESIGNVECTOR *)a5,
              (unsigned int)MaxCount,
              &v76,
              (int)v79);
      *a9 = (struct _FONTFILEVIEW **)v17;
      if ( v17 )
      {
        v18 = PFTOBJ::chpfeIncrPFF(v72, v17, &v71, v74, a12);
        *a7 = v18;
        if ( v18 )
        {
          v19 = v74;
          if ( (v74 & 0x40) != 0 )
            *a7 = 0;
          v20 = *a9;
          if ( (v19 & 0x400) != 0 )
            v20[8] = (struct _FONTFILEVIEW *)((unsigned int)v20[8] | 0x400);
          if ( (v19 & 0x100) != 0 )
            v20[8] = (struct _FONTFILEVIEW *)((unsigned int)v20[8] | 0x800);
          v15 = v71;
          goto LABEL_13;
        }
        v15 = v71;
        v73 = v71;
      }
      v22 = PUBLIC_PFTOBJ::pPFFGet(
              v72,
              Src,
              a3,
              a4,
              (struct tagDESIGNVECTOR *)a5,
              (unsigned int)MaxCount,
              &v76,
              a12 == 0);
      v83 = (struct _FONTFILEVIEW **)v22;
      if ( v22 )
      {
        if ( !a14 && !*((_DWORD *)v22 + 24) )
        {
          PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v87, v22, a8, v74, *(struct PFT **)v72);
          v15 = 0;
          v71 = 0;
          v78 = (unsigned int)v83[31];
          SEMOBJ::vUnlock((SEMOBJ *)&v80);
          if ( !v87[0] )
          {
LABEL_95:
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v87);
LABEL_13:
            SEMOBJ::vUnlock((SEMOBJ *)&v80);
            return v15;
          }
          if ( !PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v87, Src, v78, 0, a12) )
          {
            *a7 = 0;
            goto LABEL_95;
          }
          v83 = (struct _FONTFILEVIEW **)_ghsemPublicPFT;
          GreAcquireSemaphore(_ghsemPublicPFT);
          v53 = v72;
          v54 = PUBLIC_PFTOBJ::pPFFGet(
                  v72,
                  Src,
                  a3,
                  a4,
                  (struct tagDESIGNVECTOR *)a5,
                  (unsigned int)MaxCount,
                  &v76,
                  (int)v79);
          v55 = a9;
          *a9 = (struct _FONTFILEVIEW **)v54;
          if ( v54 )
          {
            v60 = PFTOBJ::chpfeIncrPFF(v53, v54, &v71, v74, a12);
            v15 = v71;
            v78 = v60;
            if ( v60 )
            {
              *a7 = v60;
LABEL_94:
              SEMOBJ::vUnlock((SEMOBJ *)&v83);
              goto LABEL_95;
            }
            v55 = a9;
          }
          v66 = v79;
          *v55 = (struct _FONTFILEVIEW **)v87[0];
          if ( PFFOBJ::bAddHash((PFFOBJ *)v87, (int)v66) )
          {
            v56 = *(_DWORD *)v53;
            v57 = v87[0];
            if ( (*(_DWORD *)(v87[0] + 32) & 0x200) == 0 )
              ++*(_DWORD *)(v56 + 20);
            ++*(_DWORD *)(v56 + 16);
            v58 = v76;
            v59 = *a9;
            if ( *v76 )
              *((_DWORD *)*v76 + 2) = v59;
            v59[1] = *v58;
            v59[2] = 0;
            *v58 = (struct PFF *)v59;
            PFFOBJ::vSetUniqueness((PFFOBJ *)v87);
            v88 |= 2u;
            PopThreadGuardedObject(v57 + 100);
            v15 = 1;
            *a7 = v78;
          }
          else
          {
            *a7 = 0;
            PFFOBJ::vRemoveHash((PFFOBJ *)v87);
          }
          goto LABEL_94;
        }
      }
    }
    v78 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v80);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v83, 8 * a4);
    v23 = v83;
    v75 = v83;
    v77 = (void (__stdcall *)(struct _FONTFILEVIEW **))Win32FreePool;
    if ( !v83
      || (v83 += a4,
          v82 = (4 * a4 + 7) & 0xFFFFFFF8,
          v24 = (unsigned __int16 *)PALLOCMEM2(v82 + 72 * a4, 1986422343, 1),
          (v70 = v24) == 0) )
    {
      v15 = 0;
      goto LABEL_60;
    }
    v25 = Src;
    v84 = (char *)v24 + v82;
    v81 = Src;
    if ( a4 )
    {
      v26 = v24;
      v79 = (HDEV)((char *)v23 - (char *)v24);
      v85 = (char *)v83 - (char *)v24;
      v27 = v84;
      v82 = a4;
      do
      {
        *(_DWORD *)v26 = v27;
        *((_DWORD *)v27 + 12) = v25;
        v28 = *(_DWORD *)(*(_DWORD *)v26 + 24) & 0xFFFFFFF7 | (8 * IsTrustedFontFilePath(v67));
        v29 = v79;
        *(_DWORD *)(*(_DWORD *)v26 + 24) = v28;
        v25 = v81;
        *(_DWORD *)((char *)v26 + (_DWORD)v29) = 0;
        *(_DWORD *)((char *)v26 + v85) = 0;
        while ( *v25++ )
          ;
        v27 += 72;
        v81 = v25;
        v26 += 2;
        --v82;
      }
      while ( v82 );
      v23 = v75;
      v15 = v73;
    }
    v79 = 0;
    v82 = 0;
    v31 = a13
       || !PFFOBJ::bPerformLazyValidation(
             (int)Src,
             a3,
             (unsigned __int16 *)a5,
             (unsigned int)MaxCount,
             (struct tagDESIGNVECTOR *)v67,
             (unsigned int)v68);
    vLoadFontFileView(
      v70,
      a4,
      v23,
      (unsigned int)v83,
      a5,
      MaxCount,
      (struct tagDESIGNVECTOR *)&v78,
      (unsigned int)&v79,
      v86,
      (struct PDEV **)v31,
      (struct _FNTCHECKSUM *)&v82,
      (int)v67,
      v68);
    if ( !v78
      || (v32 = (*((int (__stdcall **)(unsigned int, int, _DWORD, _DWORD))v79 + 526))(v78, 2, 0, 0), (v85 = v32) == 0)
      || v32 == -1 )
    {
LABEL_58:
      if ( v70 )
      {
        v85 = 0;
        if ( a4 )
        {
          for ( i = v85; i < a4; ++i )
            EngUnmapFontFileFD(*(_DWORD *)&v70[2 * i]);
          v23 = v75;
          v15 = v73;
        }
      }
      if ( v69 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v84, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
        if ( UmfdFileviewLookup )
        {
          v85 = 0;
          if ( a4 )
          {
            for ( j = v85; j < a4; ++j )
            {
              v85 = *(_DWORD *)(*(_DWORD *)&v70[2 * j] + 36);
              NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(&v85);
            }
            v23 = v75;
            v15 = v73;
          }
        }
        if ( v84 )
        {
          ExReleasePushLockExclusiveEx(v84, 0);
          KeLeaveCriticalRegion();
        }
        v49 = a4;
        v50 = 0;
        v83 = 0;
        if ( a4 )
        {
          v51 = v70;
          do
          {
            v52 = *(_DWORD *)&v51[2 * (_DWORD)v50];
            v85 = v52;
            if ( (*(_BYTE *)(v52 + 24) & 8) == 0 && !*(_DWORD *)(v52 + 12) && !*(_DWORD *)(v52 + 8) )
            {
              vUnreferenceFileviewSection(v52);
              v49 = a4;
              v51 = v70;
              v50 = v83;
            }
            v50 = (struct _FONTFILEVIEW **)((char *)v50 + 1);
            v83 = v50;
          }
          while ( (unsigned int)v50 < v49 );
          v15 = v73;
        }
        v46 = v77;
        v77((struct _FONTFILEVIEW **)v70);
        goto LABEL_61;
      }
LABEL_60:
      v46 = v77;
LABEL_61:
      if ( v23 )
        v46(v23);
      goto LABEL_13;
    }
    if ( a12 && !*((_DWORD *)a12 + 1) && v32 > 2 )
      goto LABEL_60;
    v64 = v82;
    *a7 = v32;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v87,
      v32,
      Src,
      a3,
      a4,
      (struct tagDESIGNVECTOR *)a5,
      (size_t)MaxCount,
      v78,
      v79,
      0,
      *(struct PFT **)v72,
      a8,
      v74,
      (struct _FNTCHECKSUM *)v86,
      (struct _FONTFILEVIEW **)v70,
      0,
      v64);
    if ( !v87[0] )
    {
LABEL_57:
      PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v87);
      goto LABEL_58;
    }
    v69 = 0;
    if ( !PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v87, Src, v85, 0, a12) )
    {
      *a7 = 0;
LABEL_56:
      if ( (v88 & 2) == 0 )
      {
        if ( a4 )
        {
          do
            EngUnmapFontFileFD(*(_DWORD *)&v70[2 * v14++]);
          while ( v14 < a4 );
          v23 = v75;
          v15 = v73;
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v87);
        goto LABEL_60;
      }
      goto LABEL_57;
    }
    v84 = (char *)_ghsemPublicPFT;
    GreAcquireSemaphore(_ghsemPublicPFT);
    v85 = a12 != 0;
    v33 = PUBLIC_PFTOBJ::pPFFGet(v72, Src, a3, a4, (struct tagDESIGNVECTOR *)a5, (unsigned int)MaxCount, &v76, v85);
    v34 = a9;
    *a9 = (struct _FONTFILEVIEW **)v33;
    if ( v33 )
    {
      v61 = PFTOBJ::chpfeIncrPFF(v72, v33, &v71, v74, a12);
      if ( v61 )
      {
        v62 = v74;
        *a7 = (v74 & 0x40) == 0 ? v61 : 0;
        v63 = *a9;
        if ( (v62 & 0x400) != 0 )
          v63[8] = (struct _FONTFILEVIEW *)((unsigned int)v63[8] | 0x400);
        v15 = v71;
        v73 = v71;
        if ( (v62 & 0x100) != 0 )
          v63[8] = (struct _FONTFILEVIEW *)((unsigned int)v63[8] | 0x800);
        goto LABEL_55;
      }
      v15 = v71;
      v34 = a9;
      v73 = v71;
    }
    v65 = v85;
    *v34 = (struct _FONTFILEVIEW **)v87[0];
    if ( PFFOBJ::bAddHash((PFFOBJ *)v87, v65) )
    {
      v35 = v87[0];
      v36 = *(struct PFT **)v72;
      if ( (*(_DWORD *)(v87[0] + 32) & 0x200) == 0 )
        ++*((_DWORD *)v36 + 5);
      v37 = (unsigned int *)v76;
      ++*((_DWORD *)v36 + 4);
      v85 = *v37;
      v38 = *a9;
      if ( v85 )
        *(_DWORD *)(v85 + 8) = v38;
      v38[1] = (struct _FONTFILEVIEW *)*v37;
      v38[2] = 0;
      *v37 = (unsigned int)v38;
      PFFOBJ::vSetUniqueness((PFFOBJ *)v87);
      v88 |= 2u;
      PopThreadGuardedObject(v35 + 100);
      v39 = 0;
      v40 = v70;
      if ( a4 )
      {
        v41 = *(_WORD **)(v35 + 12);
        do
        {
          *(_DWORD *)(*(_DWORD *)&v70[2 * v39] + 48) = v41;
          while ( *v41++ )
            ;
          ++v39;
        }
        while ( v39 < a4 );
        v23 = v75;
      }
      v43 = *a9;
      v44 = v74;
      v83 = *a9;
      if ( (v74 & 0x40) != 0 )
        v43[8] = (struct _FONTFILEVIEW *)((unsigned int)v43[8] | 0x80);
      if ( (v44 & 0x400) != 0 )
      {
        v83[8] = (struct _FONTFILEVIEW *)((unsigned int)v83[8] | 0x400);
        v23 = v75;
      }
      if ( (v44 & 0x100) != 0 )
        v83[8] = (struct _FONTFILEVIEW *)((unsigned int)v83[8] | 0x800);
      if ( a4 )
      {
        for ( k = 0; k < a4; ++k )
        {
          EngUnmapFontFileFD(*(_DWORD *)&v40[2 * k]);
          v40 = v70;
        }
        v23 = v75;
      }
      v70 = 0;
      v15 = 1;
      v73 = 1;
    }
    else
    {
      *a7 = 0;
      PFFOBJ::vRemoveHash((PFFOBJ *)v87);
    }
LABEL_55:
    SEMOBJ::vUnlock((SEMOBJ *)&v84);
    goto LABEL_56;
  }
  return 0;
}

/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8
 * Callers:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C0105D34 (GreAddFontResourceWInternal.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C010B1F4 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BB3FC (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00108C4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0010BE0 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0010ECC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C0012928 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C0014AB0 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0016CE4 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D8F4C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00D9CB4 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C010A588 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C0114160 (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0114770 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0118400 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C011B6B8 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C011B920 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011C63C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D6F0 (--1PFFMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *a5,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12,
        int a13,
        int a14)
{
  struct PFF **v14; // rsi
  __int64 v15; // r14
  PUBLIC_PFTOBJ *v16; // r13
  unsigned int v17; // edi
  unsigned int v18; // r15d
  unsigned int *v19; // r12
  unsigned int v20; // r8d
  const unsigned __int16 *v21; // rdx
  struct _EUDCLOAD *v22; // rbx
  struct PFF *v23; // rax
  unsigned int v24; // eax
  struct PFF *v25; // rcx
  struct PFF *v27; // rbx
  void **v28; // rbx
  struct _FONTFILEVIEW **v29; // rsi
  unsigned __int16 *v30; // r10
  WCHAR *v31; // rcx
  unsigned int *v32; // r15
  void **v33; // rax
  __int64 v34; // rbx
  struct _FONTFILEVIEW **v35; // r12
  signed __int64 v36; // r13
  __int64 v37; // rsi
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // edx
  const unsigned __int16 *v42; // r8
  unsigned int v43; // r9d
  struct PFF *v44; // rdx
  struct PFF **v45; // rax
  unsigned int v46; // edx
  struct PFT *v47; // rcx
  struct PFF **v48; // rdx
  struct PFF **v49; // rdi
  struct PFF *v50; // rcx
  _WORD *v51; // rcx
  struct _FONTFILEVIEW **v52; // r8
  __int64 v53; // r9
  struct PFF *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // r15
  ULONG_PTR *v58; // r12
  __int64 v59; // r13
  struct _FONTFILEVIEW **v60; // r12
  __int64 v61; // r13
  struct _FONTFILEVIEW **v62; // r14
  struct _FONTFILEVIEW *v63; // rcx
  unsigned int v64; // ebx
  struct PFF *v65; // rax
  __int64 v66; // r14
  int v67; // edx
  struct PFT *v68; // rcx
  struct PFF **v69; // rdx
  struct PFF *v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // eax
  struct PFF *v73; // rcx
  __int64 v74; // rbx
  struct tagDESIGNVECTOR *Src; // [rsp+28h] [rbp-E8h]
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned __int64 v77; // [rsp+38h] [rbp-D8h]
  HDEV v78; // [rsp+40h] [rbp-D0h]
  struct PFT *v79; // [rsp+50h] [rbp-C0h]
  unsigned int v80; // [rsp+58h] [rbp-B8h]
  int v81; // [rsp+80h] [rbp-90h]
  char v82; // [rsp+90h] [rbp-80h]
  int v83; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned int FontFile; // [rsp+98h] [rbp-78h]
  int v85[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v86[2]; // [rsp+A8h] [rbp-68h] BYREF
  char v87; // [rsp+B8h] [rbp-58h]
  struct PFF **v88; // [rsp+C0h] [rbp-50h] BYREF
  HDEV v89; // [rsp+C8h] [rbp-48h] BYREF
  void **v90; // [rsp+D0h] [rbp-40h] BYREF
  struct _FONTFILEVIEW **v91; // [rsp+D8h] [rbp-38h] BYREF
  unsigned __int64 v92; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v93; // [rsp+E8h] [rbp-28h] BYREF
  unsigned int *v94; // [rsp+F0h] [rbp-20h]
  _QWORD v95[3]; // [rsp+F8h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+158h] [rbp+48h] BYREF
  unsigned int v98; // [rsp+160h] [rbp+50h]

  v98 = a3;
  SourceString = a2;
  v14 = a9;
  v15 = a4;
  v16 = this;
  v83 = 0;
  v17 = 0;
  v88 = 0LL;
  v95[0] = 0LL;
  v82 = 1;
  if ( a2 && a4 <= 3 )
  {
    v93 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v18 = a10;
    v19 = a7;
    FontFile = a10;
    if ( !a11 )
    {
      v20 = v98;
      v21 = SourceString;
      *a7 = 0;
      v22 = a12;
      v85[0] = a12 != 0LL;
      v23 = PUBLIC_PFTOBJ::pPFFGet(v16, v21, v20, v15, a5, a6, &v88, v85[0]);
      *v14 = v23;
      if ( v23 )
      {
        v24 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v16, v23, &v83, v18, v22);
        *v19 = v24;
        if ( v24 )
        {
          if ( (v18 & 0x40) != 0 )
            *v19 = 0;
          v25 = *v14;
          if ( (v18 & 0x400) != 0 )
            *((_DWORD *)v25 + 13) |= 0x400u;
          if ( (v18 & 0x100) != 0 )
            *((_DWORD *)v25 + 13) |= 0x800u;
          v17 = v83;
LABEL_13:
          SEMOBJ::vUnlock((SEMOBJ *)&v93);
          return v17;
        }
        v17 = v83;
      }
      v27 = PUBLIC_PFTOBJ::pPFFGet(v16, SourceString, v98, v15, a5, a6, &v88, v22 == 0LL);
      if ( v27 && !a14 && !*((_QWORD *)v27 + 19) )
      {
        PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v86, v27, a8, v18, *(struct PFT **)v16);
        v64 = *((_DWORD *)v27 + 52);
        v17 = 0;
        v83 = 0;
        SEMOBJ::vUnlock((SEMOBJ *)&v93);
        if ( v86[0] )
        {
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v86, SourceString, v64, 0LL, a12) )
          {
            v90 = (void **)ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v65 = PUBLIC_PFTOBJ::pPFFGet(v16, SourceString, v98, v15, a5, a6, &v88, v85[0]);
            *v14 = v65;
            if ( v65
              && (v71 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v16, v65, &v83, v18, a12), v17 = v83,
                                                                                              (v64 = v71) != 0) )
            {
              *v19 = v71;
            }
            else
            {
              v66 = v86[0];
              v67 = v85[0];
              *v14 = (struct PFF *)v86[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v86, v67) )
              {
                v68 = *(struct PFT **)v16;
                if ( (*(_DWORD *)(v66 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v68 + 8);
                ++*((_DWORD *)v68 + 7);
                v69 = v88;
                v70 = *v14;
                if ( *v88 )
                  *((_QWORD *)*v88 + 2) = v70;
                *((_QWORD *)v70 + 1) = *v69;
                *((_QWORD *)v70 + 2) = 0LL;
                *v69 = v70;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v86);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v86);
                *v19 = v64;
                v17 = 1;
              }
              else
              {
                *v19 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v86);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v90);
          }
          else
          {
            *v19 = 0;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v86);
        goto LABEL_13;
      }
    }
    v92 = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v93);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v90, 12 * v15);
    v28 = v90;
    if ( !v90
      || (v94 = (unsigned int *)&v90[v15],
          v91 = (struct _FONTFILEVIEW **)PALLOCMEM2((unsigned int)((_DWORD)v15 << 7), 1986422343LL, 1),
          (v29 = v91) == 0LL) )
    {
      v17 = 0;
      goto LABEL_61;
    }
    v30 = (unsigned __int16 *)SourceString;
    v31 = (WCHAR *)SourceString;
    v89 = (HDEV)SourceString;
    *(_QWORD *)v85 = (char *)v91 + (unsigned int)(8 * v15);
    if ( (_DWORD)v15 )
    {
      v32 = v94;
      v33 = v28;
      v34 = *(_QWORD *)v85;
      v35 = v91;
      v36 = (char *)v33 - (char *)v91;
      v37 = v15;
      do
      {
        *v35 = (struct _FONTFILEVIEW *)v34;
        *(_QWORD *)(v34 + 80) = v31;
        *((_DWORD *)*v35 + 10) = *((_DWORD *)*v35 + 10) & 0xFFFFFFF7 | (8 * IsTrustedFontFilePath(v31));
        v31 = (WCHAR *)v89;
        *(struct _FONTFILEVIEW **)((char *)v35 + v36) = 0LL;
        *v32 = 0;
        while ( *v31++ )
          ;
        v34 += 120LL;
        v89 = (HDEV)v31;
        ++v35;
        ++v32;
        --v37;
      }
      while ( v37 );
      v28 = v90;
      v29 = v91;
      v18 = FontFile;
      v19 = a7;
      v16 = this;
      v30 = (unsigned __int16 *)SourceString;
    }
    v89 = 0LL;
    v85[0] = 0;
    if ( a13 )
    {
      v39 = v98;
    }
    else
    {
      v39 = v98;
      if ( *(struct PFT **const *)v16 != gpPFTPrivate && (v18 & 0xFFFFFFFE) == 0 && v98 && !a5 && !(_DWORD)a6 )
      {
        v40 = 0;
LABEL_30:
        vLoadFontFileView(
          v30,
          v39,
          v29,
          (unsigned int)v15,
          v28,
          v94,
          a5,
          a6,
          &v92,
          (struct PDEV **)&v89,
          (struct _FNTCHECKSUM *)v95,
          v40,
          v85);
        v91 = (struct _FONTFILEVIEW **)v89;
        if ( !v92 )
          goto LABEL_59;
        FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v91, v92, 2u, 0, 0LL);
        v41 = FontFile;
        if ( FontFile - 1 > 0xFFFFFFFD )
          goto LABEL_59;
        if ( !a12 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
        {
          v42 = SourceString;
          v81 = v85[0];
          v80 = a8;
          v79 = *(struct PFT **)v16;
          v43 = v98;
          v78 = v89;
          v77 = v92;
          LODWORD(Size) = a6;
          Src = a5;
          *v19 = FontFile;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v86,
            v41,
            v42,
            v43,
            v15,
            Src,
            Size,
            v77,
            v78,
            0LL,
            v79,
            v80,
            v18,
            (struct _FNTCHECKSUM *)v95,
            v29,
            0LL,
            v81);
          if ( !v86[0] )
          {
LABEL_58:
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v86);
LABEL_59:
            v57 = v15;
            if ( v29 && (_DWORD)v15 )
            {
              v58 = (ULONG_PTR *)v29;
              v59 = v15;
              do
              {
                EngUnmapFontFileFD(*v58++);
                --v59;
              }
              while ( v59 );
            }
            if ( v82 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&a12, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
              if ( UmfdFileviewLookup && (_DWORD)v15 )
              {
                v60 = v29;
                v61 = v15;
                do
                {
                  LODWORD(SourceString) = *((_DWORD *)*v60 + 16);
                  NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(
                    (unsigned int)SourceString,
                    &SourceString);
                  ++v60;
                  --v61;
                }
                while ( v61 );
              }
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
              if ( (_DWORD)v15 )
              {
                v62 = v29;
                do
                {
                  v63 = *v62;
                  if ( (*((_DWORD *)*v62 + 10) & 8) == 0 && !*((_QWORD *)v63 + 2) && !*((_QWORD *)v63 + 1) )
                    vUnreferenceFileviewSection(v63);
                  ++v62;
                  --v57;
                }
                while ( v57 );
              }
              Win32FreePool(v29);
            }
            goto LABEL_61;
          }
          v82 = 0;
          if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v86, SourceString, FontFile, 0LL, a12) )
          {
            *v19 = 0;
LABEL_57:
            if ( (v87 & 2) == 0 )
            {
              if ( (_DWORD)v15 )
              {
                v74 = v15;
                do
                {
                  EngUnmapFontFileFD((ULONG_PTR)*v29++);
                  --v74;
                }
                while ( v74 );
                v28 = v90;
              }
              PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v86);
              goto LABEL_61;
            }
            goto LABEL_58;
          }
          v91 = (struct _FONTFILEVIEW **)ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          FontFile = a12 != 0LL;
          v44 = PUBLIC_PFTOBJ::pPFFGet(v16, SourceString, v98, v15, a5, a6, &v88, FontFile);
          v45 = a9;
          *a9 = v44;
          if ( v44 )
          {
            v72 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v16, v44, &v83, v18, a12);
            if ( v72 )
            {
              if ( (v18 & 0x40) != 0 )
                v72 = 0;
              *v19 = v72;
              v73 = *a9;
              if ( (v18 & 0x400) != 0 )
                *((_DWORD *)v73 + 13) |= 0x400u;
              v17 = v83;
              if ( (v18 & 0x100) != 0 )
                *((_DWORD *)v73 + 13) |= 0x800u;
              goto LABEL_56;
            }
            v17 = v83;
            v45 = a9;
          }
          v46 = FontFile;
          *v45 = (struct PFF *)v86[0];
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v86, v46) )
          {
            v47 = *(struct PFT **)v16;
            if ( (*(_DWORD *)(v86[0] + 52LL) & 0x200) == 0 )
              ++*((_DWORD *)v47 + 8);
            ++*((_DWORD *)v47 + 7);
            v48 = v88;
            v49 = a9;
            v50 = *a9;
            if ( *v88 )
              *((_QWORD *)*v88 + 2) = v50;
            *((_QWORD *)v50 + 1) = *v48;
            *((_QWORD *)v50 + 2) = 0LL;
            *v48 = v50;
            PFFOBJ::vSetUniqueness((PFFOBJ *)v86);
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v86);
            v51 = *(_WORD **)(v86[0] + 24LL);
            if ( (_DWORD)v15 )
            {
              v52 = v29;
              v53 = v15;
              do
              {
                *((_QWORD *)*v52 + 10) = v51;
                while ( *v51++ )
                  ;
                ++v52;
                --v53;
              }
              while ( v53 );
            }
            v55 = *v49;
            if ( (v18 & 0x40) != 0 )
              *((_DWORD *)v55 + 13) |= 0x80u;
            if ( (v18 & 0x400) != 0 )
              *((_DWORD *)v55 + 13) |= 0x400u;
            if ( (v18 & 0x100) != 0 )
              *((_DWORD *)v55 + 13) |= 0x800u;
            if ( (_DWORD)v15 )
            {
              v56 = v15;
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v29++);
                --v56;
              }
              while ( v56 );
            }
            v29 = 0LL;
            v17 = 1;
          }
          else
          {
            *v19 = 0;
            PFFOBJ::vRemoveHash((PFFOBJ *)v86);
          }
LABEL_56:
          SEMOBJ::vUnlock((SEMOBJ *)&v91);
          goto LABEL_57;
        }
LABEL_61:
        if ( v28 )
          Win32FreePool(v28);
        goto LABEL_13;
      }
    }
    v40 = 1;
    goto LABEL_30;
  }
  return 0LL;
}

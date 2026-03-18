/*
 * XREFs of MiConstructLoaderEntry @ 0x14075F4A4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1406EB634 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovGetSectionInfo @ 0x1407606CC (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x1407607D8 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140761188 (MiCaptureImageExceptionValues.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, int a5, __int64 *a6)
{
  char v9; // r15
  SIZE_T v10; // rdx
  __int64 v11; // rdi
  _WORD *Pool; // rax
  _WORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned int v16; // r15d
  unsigned int *v17; // rsi
  unsigned int v18; // r13d
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r12
  SIZE_T v24; // rdx
  _OWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  char *v30; // rbx
  char *v31; // r14
  char *v32; // rcx
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  __int16 v35; // r8
  unsigned __int64 v36; // rsi
  int v37; // ebp
  __int64 SectionInfo; // rax
  bool v40; // cc
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned int v43; // r9d
  unsigned int v44; // r8d
  __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  unsigned int v47; // eax
  int v48; // edx
  __int64 v49; // r12
  unsigned __int64 v50; // r12
  unsigned int v51; // r9d
  __int64 v52; // rbx
  __int64 v53; // r8
  unsigned int *v54; // rsi
  __int64 v55; // rax
  unsigned int v56; // r13d
  unsigned int v57; // edx
  __int64 v58; // rax
  unsigned __int128 v59; // rax
  unsigned __int64 v60; // rax
  unsigned int v61; // ebx
  __int64 v62; // [rsp+20h] [rbp-128h]
  unsigned int v63; // [rsp+20h] [rbp-128h]
  int v64; // [rsp+28h] [rbp-120h]
  __int64 v65; // [rsp+30h] [rbp-118h]
  __int64 v66; // [rsp+30h] [rbp-118h]
  __int128 v67; // [rsp+38h] [rbp-110h]
  __int64 v68; // [rsp+48h] [rbp-100h]
  char *v69; // [rsp+50h] [rbp-F8h]
  __int64 v70; // [rsp+58h] [rbp-F0h]
  __int64 v71[29]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v74; // [rsp+160h] [rbp+18h] BYREF
  int v75; // [rsp+168h] [rbp+20h]

  v75 = a4;
  v9 = a4;
  memset(&v71[1], 0, 0x90uLL);
  v10 = *(unsigned __int16 *)a3 + 2LL;
  v62 = 0LL;
  *a6 = 0LL;
  v11 = 0LL;
  DWORD1(v67) = 0;
  Pool = MiAllocatePool(256, v10, 0x54446D4Du);
  *((_QWORD *)&v67 + 1) = Pool;
  v13 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  LOWORD(v67) = *(_WORD *)a3;
  WORD1(v67) = *(_WORD *)a3;
  memmove(Pool, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(_QWORD *)(a1 + 48);
  v65 = v14;
  v15 = RtlImageNtHeader(v14);
  v64 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    v18 = 32;
    v40 = *(_DWORD *)(v15 + 132) <= 6u;
    v17 = 0LL;
    v74 = 0LL;
    v16 = 0;
    if ( !v40 )
    {
      v41 = *(unsigned int *)(v15 + 184);
      v74 = v15 + 184;
      if ( (_DWORD)v41 )
      {
        v42 = *(unsigned int *)(v15 + 188);
        if ( (_DWORD)v42 )
        {
          if ( (int)v42 + (int)v41 > (unsigned int)v41 )
          {
            v43 = *(_DWORD *)(v15 + 80);
            if ( (int)v42 + (int)v41 < v43 )
            {
              v18 = v42 + 32;
              v44 = 0;
              v45 = v14 + v41;
              v46 = v42 / 0x1C;
              if ( v46 )
              {
                do
                {
                  v47 = *(_DWORD *)(v45 + 20);
                  if ( v47 )
                  {
                    if ( v47 < v43 )
                    {
                      v48 = *(_DWORD *)(v45 + 16);
                      if ( v48 + v47 < v43 )
                        v18 += v48;
                    }
                  }
                  ++v44;
                  v45 += 28LL;
                }
                while ( v44 < v46 );
              }
              v17 = (unsigned int *)(-28LL * v44 + v45);
            }
          }
        }
      }
      v18 = (v18 + 7) & 0xFFFFFFF8;
    }
  }
  else
  {
    v16 = *(unsigned __int16 *)(v15 + 6);
    if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned __int16 *)(v15 + 6) < 4 )
    {
      v61 = -1073741520;
      goto LABEL_78;
    }
    v17 = 0LL;
    v74 = 0LL;
    v18 = 0;
  }
  v19 = (*(_DWORD *)(v15 + 80) >> 12) + ((*(_DWORD *)(v15 + 80) & 0xFFF) != 0);
  v20 = 8 * ((v19 >> 6) + ((v19 & 0x3F) != 0) + 2);
  v21 = (unsigned int)v20;
  v22 = v20 + 330;
  v68 = v21;
  if ( v22 <= 0x14A )
    goto LABEL_76;
  if ( v18 )
  {
    if ( v22 + v18 <= v22 )
      goto LABEL_76;
    v22 += v18;
  }
  v23 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = v22 + v23;
  if ( v22 + v23 <= v22 )
  {
LABEL_76:
    v61 = -1073741701;
    goto LABEL_78;
  }
  if ( v16 )
  {
    if ( v24 + 4LL * v16 > v24 )
    {
      v24 += 4LL * v16;
      goto LABEL_11;
    }
    goto LABEL_76;
  }
LABEL_11:
  v69 = (char *)MiAllocatePool(64, v24, 0x644C6D4Du);
  v11 = (__int64)v69;
  if ( !v69 )
    goto LABEL_77;
  v25 = (_OWORD *)a1;
  v26 = *(_QWORD *)(a1 + 112);
  v70 = v26;
  if ( !v26 )
    goto LABEL_15;
  v27 = *(_QWORD *)MiSectionControlArea(v26);
  v29 = v28;
  LOBYTE(v29) = (*(_DWORD *)(v27 + 8) & 0xFFF) != 0;
  v62 = (unsigned int)((*(_DWORD *)(v27 + 8) >> 12) + v29);
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v62, v28) )
  {
LABEL_77:
    v61 = -1073741670;
LABEL_78:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag((PVOID)v11, 0);
    return v61;
  }
  v25 = (_OWORD *)a1;
LABEL_15:
  v30 = v69 + 160;
  *((_QWORD *)v69 + 33) = 0LL;
  *((_QWORD *)v69 + 38) = v69 + 296;
  *((_QWORD *)v69 + 37) = v69 + 296;
  v31 = &v69[v68 + 328];
  v32 = &v31[v18];
  *((_QWORD *)v69 + 34) = v69 + 328;
  *((_QWORD *)v69 + 32) = v31;
  *((_QWORD *)v69 + 27) = v62;
  if ( v16 )
    *((_QWORD *)v69 + 28) = &v32[v23];
  *(_OWORD *)v69 = *v25;
  *((_OWORD *)v69 + 1) = v25[1];
  *((_OWORD *)v69 + 2) = v25[2];
  *((_OWORD *)v69 + 3) = v25[3];
  *((_OWORD *)v69 + 4) = v25[4];
  *((_OWORD *)v69 + 5) = v25[5];
  *((_OWORD *)v69 + 6) = v25[6];
  *((_OWORD *)v69 + 7) = v25[7];
  *((_OWORD *)v69 + 8) = v25[8];
  *((_OWORD *)v69 + 9) = v25[9];
  if ( *(_WORD *)(v15 + 64) >= 5u && *(_WORD *)(v15 + 68) >= 5u )
    *((_DWORD *)v69 + 26) |= 0x8000000u;
  if ( (*(_BYTE *)(v15 + 94) & 0x80) != 0 )
    *((_DWORD *)v69 + 26) |= 0x20u;
  *((_QWORD *)v69 + 12) = v32;
  *((_WORD *)v69 + 44) = *(_WORD *)a2;
  *((_WORD *)v69 + 45) = *(_WORD *)a2;
  memmove(v32, a2[1], *(unsigned __int16 *)a2);
  v33 = v65;
  *(_WORD *)(*((_QWORD *)v69 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *(_OWORD *)(v69 + 72) = v67;
  *((_QWORD *)v69 + 5) = 0LL;
  if ( v64 )
  {
    *((_DWORD *)v69 + 26) |= 0x20000000u;
    *((_QWORD *)v69 + 5) = v31;
    *(_DWORD *)v31 = 84302;
    *((_DWORD *)v31 + 1) = v18;
    *((_WORD *)v31 + 4) = *(_WORD *)(v15 + 4);
    *((_WORD *)v31 + 5) = *(_WORD *)(v15 + 22);
    *((_DWORD *)v31 + 3) = *(_DWORD *)(v15 + 8);
    *((_DWORD *)v31 + 4) = *(_DWORD *)(v15 + 88);
    *((_DWORD *)v31 + 5) = *(_DWORD *)(v15 + 80);
    *((_QWORD *)v31 + 3) = v65;
    if ( v17 )
    {
      v49 = v74;
      memmove(v31 + 32, v17, *(unsigned int *)(v74 + 4));
      v50 = *(unsigned int *)(v49 + 4);
      v63 = 0;
      v51 = 0;
      if ( v50 / 0x1C )
      {
        v52 = v74;
        v53 = 0LL;
        v66 = 0LL;
        v54 = v17 + 4;
        do
        {
          v55 = v54[1];
          v56 = *v54;
          LODWORD(v74) = v50;
          if ( (_DWORD)v55
            && (v57 = *(_DWORD *)(v15 + 80), (unsigned int)v55 < v57)
            && (unsigned int)v55 + v56 > (unsigned int)v55
            && (unsigned int)v55 + v56 < v57 )
          {
            memmove(&v31[(unsigned int)v50 + 32], (const void *)(v33 + v55), v56);
            v53 = v66;
            LODWORD(v50) = v56 + v50;
            v51 = v63;
          }
          else
          {
            LODWORD(v74) = 0;
          }
          ++v51;
          v58 = 28 * v53;
          v53 = v51;
          v54 += 7;
          v63 = v51;
          v66 = v51;
          *(_DWORD *)&v31[v58 + 52] = v74;
          v59 = *(unsigned int *)(v52 + 4) * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v51 < (*((_QWORD *)&v59 + 1)
                     + (((unsigned __int64)*(unsigned int *)(v52 + 4) - *((_QWORD *)&v59 + 1)) >> 1)) >> 4 );
        v11 = (__int64)v69;
        v30 = v69 + 160;
      }
    }
  }
  *(_QWORD *)(v11 + 56) = v33 + *(unsigned int *)(v15 + 40);
  *(_DWORD *)(v11 + 120) = *(_DWORD *)(v15 + 88);
  if ( v70 )
  {
    v34 = MiSectionControlArea(v70);
    v35 = *(_WORD *)(v11 + 110) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 4);
    *(_WORD *)(v11 + 110) = v35;
    *(_WORD *)(v11 + 110) = v35 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 1) & 7));
  }
  else
  {
    v34 = 0LL;
  }
  *(_DWORD *)(v11 + 152) = *(_DWORD *)(v15 + 80);
  *(_DWORD *)(v11 + 156) = *(_DWORD *)(v15 + 8);
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v70 )
    v36 = *(unsigned int *)(*(_QWORD *)v34 + 8LL);
  else
    v36 = (unsigned __int64)*(unsigned int *)(v11 + 64) >> 12;
  if ( v64 )
    goto LABEL_30;
  *((_QWORD *)v30 + 5) = v36;
  *((_QWORD *)v30 + 6) = v36;
  if ( v33 == PsNtosImageBase )
    goto LABEL_70;
  if ( v33 == PsHalImageBase )
  {
    if ( v33 != PsNtosImageBase )
    {
      v60 = v36 - MxHalFreedGapCharges;
      goto LABEL_71;
    }
LABEL_70:
    v60 = v36 - MxKernelFreedGapCharges;
LABEL_71:
    *((_QWORD *)v30 + 5) = v60;
  }
LABEL_30:
  if ( !a5 )
    *((_DWORD *)v30 + 9) |= 1u;
  v37 = v75;
  if ( (dword_140D051B4 & 1) != 0 || (v75 & 2) != 0 )
    *((_DWORD *)v30 + 9) |= 0x10u;
  *(_QWORD *)(v11 + 128) = 0LL;
  LODWORD(v74) = 0;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*(_QWORD *)(v11 + 48), &v74);
    if ( SectionInfo )
    {
      *(_DWORD *)(v11 + 124) = v74;
      *(_QWORD *)(v11 + 128) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", (const void *)v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1);
    }
  }
  if ( dword_140C4F478 && (MiFlags & 0x4000) != 0 && (v37 & 0x40000001) == 1 )
    *((_DWORD *)v30 + 9) |= 0x40u;
  MiProcessLoaderEntry((unsigned __int64 *)v11, 1);
  if ( !v64 )
  {
    if ( v70 )
    {
      *((_DWORD *)v30 + 8) = -2;
      *((_QWORD *)v30 + 2) = v33 | 3;
      *((_QWORD *)v30 + 3) = (v36 << 12) + v33 - 1;
      v71[0] = v34;
      MiManageSubsectionView(v71, v30, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}

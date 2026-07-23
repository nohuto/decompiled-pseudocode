/*
 * XREFs of MiBuildImageControlArea @ 0x1406AC318
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x14030312C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiParseImageSectionHeaders @ 0x1406FF7F0 (MiParseImageSectionHeaders.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildImageControlArea(int a1, int a2, __int64 a3, __int64 a4, int a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v9; // rbp
  int v10; // esi
  __int64 v11; // r14
  _QWORD *Pool; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  char *v20; // r8
  bool v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  __int16 v26; // ax
  __int64 SubsectionPte; // rbx
  unsigned int v28; // r10d
  int v29; // r8d
  int v30; // esi
  unsigned int v31; // r15d
  BOOL v32; // eax
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rax
  void *v36; // rdi
  int v37; // ebx
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 DemandZeroPte; // rdi
  __int64 v42; // r9
  unsigned int *v43; // r11
  unsigned int v44; // esi
  __int64 v45; // r15
  unsigned int *v46; // rbp
  BOOL v47; // eax
  int v48; // r8d
  __int64 v49; // rdx
  bool v50; // zf
  bool v51; // zf
  bool v52; // zf
  int v53; // [rsp+34h] [rbp-54h]
  size_t Size; // [rsp+38h] [rbp-50h]
  _QWORD *v55; // [rsp+40h] [rbp-48h]
  unsigned __int64 *v56; // [rsp+48h] [rbp-40h]
  unsigned int v59; // [rsp+A8h] [rbp+20h]
  unsigned int v60; // [rsp+A8h] [rbp+20h]

  v53 = *(unsigned __int16 *)(a4 + 2);
  v9 = a3;
  v59 = (*(_DWORD *)(a3 + 16) >> 12) + ((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !v59 )
    return 3221225595LL;
  v10 = a5;
  v11 = 1LL;
  if ( (a5 & 0x200000) == 0 )
    v11 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  Pool = MiAllocatePool(
           64,
           8 * (7 * v11 + (((unsigned __int64)(unsigned int)MiFlags >> 13) & 1)) + 184,
           (a5 & 0x200000) != 0 ? 1631808845 : 1766026573);
  v55 = Pool;
  v13 = Pool;
  if ( !Pool )
  {
    dword_140C4CC58 = 26;
    return 3221225626LL;
  }
  v14 = (__int64)(Pool + 16);
  v15 = (__int64)&Pool[7 * v11 + 16];
  Pool[12] = v15;
  v56 = (unsigned __int64 *)v15;
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v16 = (__int64 *)MiAllocatePool(274, 8LL * v59, 0x74536D4Du);
  v17 = v16;
  if ( !v16 )
  {
    dword_140C4CC58 = 27;
    v37 = -1073741670;
    goto LABEL_40;
  }
  memset(v16, 0, 8LL * v59);
  v18 = MiAllocatePool(256, 0x98uLL, 0x6765534Du);
  Size = (size_t)v18;
  v19 = v18;
  if ( !v18 )
  {
    dword_140C4CC58 = 28;
    v37 = -1073741670;
    v36 = 0LL;
    goto LABEL_36;
  }
  v18[5] = 0LL;
  v20 = (char *)(v18 + 9);
  v18[8] = v17;
  *v18 = v13;
  *((_DWORD *)v18 + 2) = v59;
  v18[7] = v18 + 9;
  v18[3] = (unsigned __int64)v59 << 12;
  *((_DWORD *)v18 + 34) = *(_DWORD *)(v9 + 24);
  *((_DWORD *)v18 + 35) = *(_DWORD *)(v9 + 16);
  *((_DWORD *)v18 + 36) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)v18 + 32) = *a6;
  v18[9] = *(_QWORD *)v9 + *(unsigned int *)(v9 + 28);
  v18[11] = *(_QWORD *)(v9 + 32);
  v18[12] = *(_QWORD *)(v9 + 40);
  *((_DWORD *)v18 + 26) = *(unsigned __int16 *)(v9 + 50);
  *((_WORD *)v18 + 55) = *(_WORD *)(v9 + 52);
  *((_WORD *)v18 + 54) = *(_WORD *)(v9 + 54);
  *((_WORD *)v18 + 56) = *(_WORD *)(v9 + 56);
  *((_WORD *)v18 + 57) = *(_WORD *)(v9 + 58);
  *((_WORD *)v18 + 59) = *(_WORD *)(v9 + 60);
  *((_DWORD *)v18 + 33) = *(_DWORD *)(v9 + 64);
  v21 = *(_DWORD *)(v9 + 68) || *(_DWORD *)(v9 + 28);
  *((_BYTE *)v19 + 122) = v21;
  *((_WORD *)v19 + 58) = *(_WORD *)(a4 + 18);
  *((_WORD *)v19 + 60) = *(_WORD *)a4;
  *((_DWORD *)v19 + 31) = *(_DWORD *)(v9 + 20);
  v13[2] = v13 + 1;
  v13[1] = v13 + 1;
  *v13 = v19;
  v13[14] = 1LL;
  v13[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v13[6] = 1LL;
  *((_DWORD *)v13 + 22) = -1;
  v13[13] = 0LL;
  *((_DWORD *)v13 + 14) = *((_DWORD *)v13 + 14) ^ (*((_DWORD *)v13 + 14) ^ (a1 << 20)) & 0x3F00000 | 0xA2;
  *((_BYTE *)v19 + 14) = *((_BYTE *)v19 + 14) & 0x7F | (*(_DWORD *)(v9 + 104) != 0 ? 0x80 : 0);
  *(_QWORD *)v14 = v13;
  v19[4] = *(_QWORD *)v9;
  *(_QWORD *)(v14 + 8) = v17;
  if ( (a5 & 0x200000) == 0 )
  {
    v22 = *(unsigned int *)(v9 + 24);
    if ( !(_DWORD)v22 )
    {
      dword_140C4CC58 = 29;
      v37 = -1073741701;
      v36 = v19;
      goto LABEL_36;
    }
    v23 = *(unsigned int *)(v9 + 12);
    v24 = v22 + v23 - 1;
    if ( v24 <= (unsigned int)v22 )
    {
      dword_140C4CC58 = 30;
    }
    else
    {
      v25 = (((v24 & -(int)v23 & 0xFFF) + 4095) >> 12)
          + (((unsigned __int64)~(v23 - 1) >> 12) & ((unsigned __int64)(v23 + v22 - 1) >> 12));
      *(_DWORD *)(v14 + 44) = v25;
      if ( v25 <= v59 )
      {
        *(_DWORD *)(v14 + 40) = *(_DWORD *)(v9 + 24) >> 9;
        v60 = v59 - v25;
        v26 = *(_WORD *)(v14 + 32);
        *(_WORD *)(v14 + 34) = *(_WORD *)(v14 + 34) & 0xF | (16 * (*(_WORD *)(v9 + 24) & 0x1FF));
        *(_WORD *)(v14 + 32) = v26 & 0xFFC1 | 2;
        SubsectionPte = MiMakeSubsectionPte(v14);
        if ( !v29 )
        {
          v35 = *(unsigned int *)(v14 + 44);
LABEL_23:
          v36 = (void *)Size;
          v17 -= v35;
          goto LABEL_24;
        }
        v30 = 0;
        v31 = 0;
        while ( 1 )
        {
          v32 = MiPteInShadowRange((unsigned __int64)v17);
          v33 = 0;
          if ( v31 >= *(_DWORD *)(v9 + 24) )
          {
            v39 = ZeroPte;
            if ( !v32 )
            {
LABEL_29:
              *v17 = v39;
              if ( v33 )
                MiWritePteShadow((__int64)v17, v39);
              *(_DWORD *)(v14 + 52) ^= (*(_DWORD *)(v14 + 52) ^ (*(_DWORD *)(v14 + 52) + 1)) & 0x3FFFFFFF;
              goto LABEL_21;
            }
            if ( (unsigned int)MiPteHasShadow() )
            {
              v33 = 1;
              if ( HIBYTE(word_140C4E048) )
                goto LABEL_29;
              v52 = (v39 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_29;
              v52 = (v39 & 1) == 0;
            }
            if ( !v52 )
              v39 |= 0x8000000000000000uLL;
            goto LABEL_29;
          }
          v34 = SubsectionPte;
          if ( v32 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v33 = 1;
              if ( !HIBYTE(word_140C4E048) )
              {
                v51 = (SubsectionPte & 1) == 0;
                goto LABEL_72;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v51 = (SubsectionPte & 1) == 0;
LABEL_72:
              if ( !v51 )
                v34 |= 0x8000000000000000uLL;
            }
          }
          *v17 = v34;
          if ( v33 )
            MiWritePteShadow((__int64)v17, v34);
LABEL_21:
          v35 = *(unsigned int *)(v14 + 44);
          v31 += 4096;
          ++v17;
          if ( ++v30 >= (unsigned int)v35 )
          {
            v10 = a5;
            v13 = v55;
            v28 = v60;
            goto LABEL_23;
          }
        }
      }
      dword_140C4CC58 = 31;
    }
    v36 = (void *)Size;
    v37 = -1073741701;
    goto LABEL_36;
  }
  *(_DWORD *)(v14 + 44) = v59;
  *(_DWORD *)(v14 + 40) = *(__int64 *)a6 >> 9;
  *(_WORD *)(v14 + 34) = *(_WORD *)(v14 + 34) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
  v20[51] |= 8u;
  v20[50] = 1;
  *(_WORD *)(v14 + 32) = *(_WORD *)(v14 + 32) & 0xFFC1 | 0xE;
  v40 = MiMakeSubsectionPte(v14);
  DemandZeroPte = MiMakeDemandZeroPte(7);
  if ( !v28 )
    goto LABEL_62;
  v44 = 0;
  v45 = v42;
  v46 = v43;
  do
  {
    v47 = MiPteInShadowRange((unsigned __int64)v17);
    v48 = 0;
    if ( v44 >= *v46 )
    {
      v49 = DemandZeroPte;
      if ( !v47 )
        goto LABEL_58;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v48 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_58;
        v50 = (DemandZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_58;
        v50 = (DemandZeroPte & 1) == 0;
      }
    }
    else
    {
      v49 = v40;
      if ( !v47 )
        goto LABEL_58;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v48 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_58;
        v50 = (v40 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_58;
        v50 = (v40 & 1) == 0;
      }
    }
    if ( !v50 )
      v49 |= 0x8000000000000000uLL;
LABEL_58:
    *v17 = v49;
    if ( v48 )
      MiWritePteShadow((__int64)v17, v49);
    v44 += 4096;
    ++v17;
    --v45;
  }
  while ( v45 );
  v28 = v59;
  v10 = a5;
  v13 = v55;
  v9 = a3;
  v42 = v59;
LABEL_62:
  v36 = (void *)Size;
  v17 -= v42;
  *(_QWORD *)(Size + 48) = v42;
LABEL_24:
  v37 = MiParseImageSectionHeaders(v10, (_DWORD)v13, a2, v53, v9, v28);
  if ( v37 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v56, 1);
    *a7 = v13;
    return 0LL;
  }
LABEL_36:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
LABEL_40:
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)v37;
}

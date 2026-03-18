/*
 * XREFs of MiBuildImageControlArea @ 0x1406F14F0
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x140263B4C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiParseImageSectionHeaders @ 0x14060B1B0 (MiParseImageSectionHeaders.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildImageControlArea(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6, _QWORD *a7)
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
  __int64 v20; // r8
  bool v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int16 v29; // ax
  __int64 SubsectionPte; // rbx
  unsigned int v31; // r10d
  int v32; // r8d
  int v33; // esi
  unsigned int v34; // r15d
  BOOL v35; // eax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rax
  void *v39; // rdi
  int v40; // ebx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 DemandZeroPte; // rdi
  __int64 v49; // r9
  unsigned int *v50; // r11
  unsigned int v51; // esi
  __int64 v52; // r15
  unsigned int *v53; // rbp
  BOOL v54; // eax
  __int64 v55; // r8
  __int64 v56; // rdx
  bool v57; // zf
  bool v58; // zf
  bool v59; // zf
  int v60; // [rsp+34h] [rbp-54h]
  size_t Size; // [rsp+38h] [rbp-50h]
  _QWORD *v62; // [rsp+40h] [rbp-48h]
  unsigned __int64 *v63; // [rsp+48h] [rbp-40h]
  unsigned int v66; // [rsp+A8h] [rbp+20h]
  unsigned int v67; // [rsp+A8h] [rbp+20h]

  v60 = *(unsigned __int16 *)(a4 + 2);
  v9 = a3;
  v66 = (*(_DWORD *)(a3 + 16) >> 12) + ((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !v66 )
    return 3221225595LL;
  v10 = a5;
  v11 = 1LL;
  if ( (a5 & 0x200000) == 0 )
    v11 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  Pool = MiAllocatePool(
           64,
           8 * (7 * v11 + (((unsigned __int64)(unsigned int)MiFlags >> 13) & 1)) + 184,
           (a5 & 0x200000) != 0 ? 1631808845 : 1766026573);
  v62 = Pool;
  v13 = Pool;
  if ( !Pool )
  {
    dword_140C4CA18 = 26;
    return 3221225626LL;
  }
  v14 = (__int64)(Pool + 16);
  v15 = (__int64)&Pool[7 * v11 + 16];
  Pool[12] = v15;
  v63 = (unsigned __int64 *)v15;
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v16 = (__int64 *)MiAllocatePool(274, 8LL * v66, 0x74536D4Du);
  v17 = v16;
  if ( !v16 )
  {
    dword_140C4CA18 = 27;
    v40 = -1073741670;
    goto LABEL_40;
  }
  memset(v16, 0, 8LL * v66);
  v18 = MiAllocatePool(256, 0x98uLL, 0x6765534Du);
  Size = (size_t)v18;
  v19 = v18;
  if ( !v18 )
  {
    dword_140C4CA18 = 28;
    v40 = -1073741670;
    v39 = 0LL;
    goto LABEL_36;
  }
  v18[5] = 0LL;
  v20 = (__int64)(v18 + 9);
  v18[8] = v17;
  *v18 = v13;
  *((_DWORD *)v18 + 2) = v66;
  v18[7] = v18 + 9;
  v18[3] = (unsigned __int64)v66 << 12;
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
      dword_140C4CA18 = 29;
      v40 = -1073741701;
      v39 = v19;
      goto LABEL_36;
    }
    v23 = *(unsigned int *)(v9 + 12);
    v24 = (unsigned int)(v22 + v23 - 1);
    if ( (unsigned int)v24 <= (unsigned int)v22 )
    {
      dword_140C4CA18 = 30;
    }
    else
    {
      v25 = v23 + v22 - 1;
      v26 = (unsigned __int64)~(v23 - 1) >> 12;
      v27 = (((unsigned int)v24 & -(int)v23 & 0xFFF) + 4095) >> 12;
      v28 = (unsigned int)v27 + ((unsigned int)v26 & (unsigned int)(v25 >> 12));
      *(_DWORD *)(v14 + 44) = v28;
      if ( (unsigned int)v28 <= v66 )
      {
        *(_DWORD *)(v14 + 40) = *(_DWORD *)(v9 + 24) >> 9;
        v67 = v66 - v28;
        v29 = *(_WORD *)(v14 + 32);
        *(_WORD *)(v14 + 34) = *(_WORD *)(v14 + 34) & 0xF | (16 * (*(_WORD *)(v9 + 24) & 0x1FF));
        *(_WORD *)(v14 + 32) = v29 & 0xFFC1 | 2;
        SubsectionPte = MiMakeSubsectionPte(v14, v27, v28, v24);
        if ( !v32 )
        {
          v38 = *(unsigned int *)(v14 + 44);
LABEL_23:
          v39 = (void *)Size;
          v17 -= v38;
          goto LABEL_24;
        }
        v33 = 0;
        v34 = 0;
        while ( 1 )
        {
          v35 = MiPteInShadowRange((unsigned __int64)v17);
          v36 = 0LL;
          if ( v34 >= *(_DWORD *)(v9 + 24) )
          {
            v42 = ZeroPte;
            if ( !v35 )
            {
LABEL_29:
              *v17 = v42;
              if ( (_DWORD)v36 )
                MiWritePteShadow((__int64)v17, v42, v36);
              *(_DWORD *)(v14 + 52) ^= (*(_DWORD *)(v14 + 52) ^ (*(_DWORD *)(v14 + 52) + 1)) & 0x3FFFFFFF;
              goto LABEL_21;
            }
            if ( (unsigned int)MiPteHasShadow() )
            {
              v36 = 1LL;
              if ( HIBYTE(word_140C4DE08) )
                goto LABEL_29;
              v59 = (v42 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_29;
              v59 = (v42 & 1) == 0;
            }
            if ( !v59 )
              v42 |= 0x8000000000000000uLL;
            goto LABEL_29;
          }
          v37 = SubsectionPte;
          if ( v35 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v36 = 1LL;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v58 = (SubsectionPte & 1) == 0;
                goto LABEL_72;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v58 = (SubsectionPte & 1) == 0;
LABEL_72:
              if ( !v58 )
                v37 |= 0x8000000000000000uLL;
            }
          }
          *v17 = v37;
          if ( (_DWORD)v36 )
            MiWritePteShadow((__int64)v17, v37, v36);
LABEL_21:
          v38 = *(unsigned int *)(v14 + 44);
          v34 += 4096;
          ++v17;
          if ( ++v33 >= (unsigned int)v38 )
          {
            v10 = a5;
            v13 = v62;
            v31 = v67;
            goto LABEL_23;
          }
        }
      }
      dword_140C4CA18 = 31;
    }
    v39 = (void *)Size;
    v40 = -1073741701;
    goto LABEL_36;
  }
  *(_DWORD *)(v14 + 44) = v66;
  *(_DWORD *)(v14 + 40) = *(__int64 *)a6 >> 9;
  v43 = *(_WORD *)(v14 + 34) & 0xFu | (unsigned __int16)(16 * (*(_WORD *)a6 & 0x1FF));
  *(_WORD *)(v14 + 34) = v43;
  *(_BYTE *)(v20 + 51) |= 8u;
  *(_BYTE *)(v20 + 50) = 1;
  *(_WORD *)(v14 + 32) = *(_WORD *)(v14 + 32) & 0xFFC1 | 0xE;
  v44 = MiMakeSubsectionPte(v14, v43, v20, v66);
  DemandZeroPte = MiMakeDemandZeroPte(7, v45, v46, v47);
  if ( !v31 )
    goto LABEL_62;
  v51 = 0;
  v52 = v49;
  v53 = v50;
  do
  {
    v54 = MiPteInShadowRange((unsigned __int64)v17);
    v55 = 0LL;
    if ( v51 >= *v53 )
    {
      v56 = DemandZeroPte;
      if ( !v54 )
        goto LABEL_58;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v55 = 1LL;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_58;
        v57 = (DemandZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_58;
        v57 = (DemandZeroPte & 1) == 0;
      }
    }
    else
    {
      v56 = v44;
      if ( !v54 )
        goto LABEL_58;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v55 = 1LL;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_58;
        v57 = (v44 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_58;
        v57 = (v44 & 1) == 0;
      }
    }
    if ( !v57 )
      v56 |= 0x8000000000000000uLL;
LABEL_58:
    *v17 = v56;
    if ( (_DWORD)v55 )
      MiWritePteShadow((__int64)v17, v56, v55);
    v51 += 4096;
    ++v17;
    --v52;
  }
  while ( v52 );
  v31 = v66;
  v10 = a5;
  v13 = v62;
  v9 = a3;
  v49 = v66;
LABEL_62:
  v39 = (void *)Size;
  v17 -= v49;
  *(_QWORD *)(Size + 48) = v49;
LABEL_24:
  v40 = MiParseImageSectionHeaders(v10, v13, a2, v60, v9, v31);
  if ( v40 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v63, 1);
    *a7 = v13;
    return 0LL;
  }
LABEL_36:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
LABEL_40:
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)v40;
}

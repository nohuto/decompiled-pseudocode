/*
 * XREFs of MiBuildImageControlArea @ 0x14070893C
 * Callers:
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14026EA48 (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiParseImageSectionHeaders @ 0x1406F4230 (MiParseImageSectionHeaders.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildImageControlArea(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        _QWORD *a7)
{
  __int64 v9; // r13
  int v10; // esi
  __int64 v11; // r14
  _QWORD *Pool; // rax
  _QWORD *v13; // r15
  char *v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // r14
  _QWORD *v17; // rax
  _BYTE *v18; // r12
  char v19; // al
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // rdx
  __int16 v25; // ax
  unsigned int v26; // edx
  __int64 v27; // rdi
  unsigned int v28; // r11d
  unsigned int v29; // eax
  int v30; // ebx
  unsigned __int64 v32; // rbx
  int v33; // eax
  unsigned __int64 v34; // rdx
  __int64 SubsectionPte; // rax
  __int64 DemandZeroPte; // rax
  __int64 v37; // rdx
  unsigned int v38; // r9d
  __int64 v39; // r10
  __int64 v40; // r8
  __int64 v41; // rcx
  bool v42; // zf
  unsigned int v43; // [rsp+30h] [rbp-48h]
  int v44; // [rsp+34h] [rbp-44h]
  __int64 v45; // [rsp+38h] [rbp-40h]
  unsigned int v47; // [rsp+90h] [rbp+18h]

  v44 = *(unsigned __int16 *)(a4 + 2);
  v9 = (*(_DWORD *)(a3 + 16) >> 12) + (unsigned int)((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !(_DWORD)v9 )
    return 3221225595LL;
  v10 = a5;
  v11 = 1LL;
  if ( (a5 & 0x400000) == 0 )
    v11 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  Pool = MiAllocatePool(
           64,
           8 * (7 * v11 + (((unsigned __int64)(unsigned int)MiFlags >> 12) & 1)) + 184,
           (a5 & 0x400000) != 0 ? 1631808845 : 1766026573);
  v13 = Pool;
  if ( !Pool )
  {
    dword_140C4F3D0 = 26;
    return 3221225626LL;
  }
  v14 = (char *)&Pool[7 * v11 + 16];
  Pool[12] = v14;
  v45 = (__int64)v14;
  *((_QWORD *)v14 + 3) = *((_QWORD *)v14 + 3) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v15 = (__int64 *)MiAllocatePool(274, 8 * v9, 0x74536D4Du);
  v16 = v15;
  if ( !v15 )
  {
    dword_140C4F3D0 = 27;
    v30 = -1073741670;
    goto LABEL_55;
  }
  memset(v15, 0, 8 * v9);
  v17 = MiAllocatePool(256, 0x98uLL, 0x6765534Du);
  v18 = v17;
  if ( !v17 )
  {
    dword_140C4F3D0 = 28;
    v30 = -1073741670;
    goto LABEL_53;
  }
  v17[5] = 0LL;
  v17[8] = v16;
  *v17 = v13;
  *((_DWORD *)v17 + 2) = v9;
  v17[7] = v17 + 9;
  v17[3] = (unsigned __int64)(unsigned int)v9 << 12;
  *((_DWORD *)v17 + 34) = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v17 + 35) = *(_DWORD *)(a3 + 16);
  *((_DWORD *)v17 + 36) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)v17 + 32) = *a6;
  v17[9] = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  v17[11] = *(_QWORD *)(a3 + 32);
  v17[12] = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v17 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v17 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v17 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v17 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v17 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v17 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v17 + 33) = *(_DWORD *)(a3 + 64);
  if ( *(_DWORD *)(a3 + 68) || (v19 = 0, *(_DWORD *)(a3 + 28)) )
    v19 = 1;
  v18[122] = v19;
  *((_WORD *)v18 + 58) = *(_WORD *)(a4 + 18);
  *((_WORD *)v18 + 60) = *(_WORD *)a4;
  *((_DWORD *)v18 + 31) = *(_DWORD *)(a3 + 20);
  v13[2] = v13 + 1;
  v13[1] = v13 + 1;
  *v13 = v18;
  v13[14] = 1LL;
  v13[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v13[6] = 1LL;
  *((_DWORD *)v13 + 22) = -1;
  v20 = *((_DWORD *)v13 + 14) ^ (a1 << 20);
  v13[13] = 0LL;
  v47 = 0;
  *((_DWORD *)v13 + 14) = *((_DWORD *)v13 + 14) ^ v20 & 0x7F00000 | 0xA2;
  v18[14] = v18[14] & 0x7F | (*(_DWORD *)(a3 + 104) != 0 ? 0x80 : 0);
  v13[16] = v13;
  *((_QWORD *)v18 + 4) = *(_QWORD *)a3;
  v13[17] = v16;
  if ( (a5 & 0x400000) != 0 )
  {
    *((_DWORD *)v13 + 43) = v9;
    v34 = *(_QWORD *)a6;
    if ( (unsigned __int64)*(unsigned int *)(a3 + 16) <= *(_QWORD *)a6 )
      v34 = *(unsigned int *)(a3 + 16);
    *((_DWORD *)v13 + 42) = v34 >> 9;
    LOWORD(v34) = *((_WORD *)v13 + 81) & 0xF | (16 * (v34 & 0x1FF));
    *((_WORD *)v13 + 81) = v34;
    v18[123] |= 8u;
    v18[122] = 1;
    *((_WORD *)v13 + 80) = v13[20] & 0xFFC1 | 0xE;
    SubsectionPte = MiMakeSubsectionPte((__int64)(v13 + 16), v34);
    DemandZeroPte = MiMakeDemandZeroPte(7, SubsectionPte);
    v40 = v39;
    do
    {
      v41 = DemandZeroPte;
      if ( v38 < *a6 )
        v41 = v37;
      v38 += 4096;
      *v16++ = v41;
      --v40;
    }
    while ( v40 );
    *((_QWORD *)v18 + 6) = v39;
    v16 -= v9;
    goto LABEL_21;
  }
  v21 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v21 )
  {
    dword_140C4F3D0 = 29;
LABEL_43:
    v30 = -1073741701;
    goto LABEL_53;
  }
  v22 = *(unsigned int *)(a3 + 12);
  v23 = v21 + v22 - 1;
  if ( v23 <= (unsigned int)v21 )
  {
    dword_140C4F3D0 = 30;
    goto LABEL_43;
  }
  v24 = (((v23 & -(int)v22 & 0xFFF) + 4095) >> 12)
      + ((unsigned int)((unsigned __int64)~(v22 - 1) >> 12) & (unsigned int)((unsigned __int64)(v22 + v21 - 1) >> 12));
  *((_DWORD *)v13 + 43) = v24;
  if ( (unsigned int)v24 > (unsigned int)v9 )
  {
    dword_140C4F3D0 = 31;
    goto LABEL_43;
  }
  LODWORD(v9) = v9 - v24;
  *((_DWORD *)v13 + 42) = *(_DWORD *)(a3 + 24) >> 9;
  v25 = *((_WORD *)v13 + 80);
  *((_WORD *)v13 + 81) = *((_WORD *)v13 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_WORD *)v13 + 80) = v25 & 0xFFC1 | 2;
  v27 = MiMakeSubsectionPte((__int64)(v13 + 16), v24);
  v29 = 0;
  v43 = 0;
  if ( !v26 )
    goto LABEL_20;
  do
  {
    if ( v28 < *(_DWORD *)(a3 + 24) )
    {
      *v16 = v27;
      goto LABEL_18;
    }
    v32 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v16) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v33 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_27;
      v42 = (ZeroPte & 1) == 0;
LABEL_48:
      if ( !v42 )
        v32 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_27;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v33 = 0;
      v42 = (ZeroPte & 1) == 0;
      goto LABEL_48;
    }
LABEL_26:
    v33 = 0;
LABEL_27:
    *v16 = v32;
    if ( v33 )
      MiWritePteShadow((__int64)v16, v32);
    v28 = v47;
    v29 = v43;
    *((_DWORD *)v13 + 45) ^= (*((_DWORD *)v13 + 45) ^ (*((_DWORD *)v13 + 45) + 1)) & 0x3FFFFFFF;
LABEL_18:
    v26 = *((_DWORD *)v13 + 43);
    v28 += 4096;
    ++v29;
    v47 = v28;
    ++v16;
    v43 = v29;
  }
  while ( v29 < v26 );
  v10 = a5;
LABEL_20:
  v16 -= v26;
LABEL_21:
  v30 = MiParseImageSectionHeaders(v10, v13, a2, v44, a3, v9);
  if ( v30 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v45, 1);
    *a7 = v13;
    return 0LL;
  }
  if ( v16 )
  {
LABEL_53:
    ExFreePoolWithTag(v16, 0);
    if ( v18 )
      goto LABEL_54;
  }
  else
  {
LABEL_54:
    ExFreePoolWithTag(v18, 0);
  }
LABEL_55:
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)v30;
}

/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x1403B6D88
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B6748 (MiPfnRangeIsZero.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E2C58 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x1402E2D70 (MiGetPageTablePages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeColorBase @ 0x14034E4AC (MiInitializeColorBase.c)
 *     MiTransformValidPteInPlace @ 0x140376EBC (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiConvertLargePfnToSmall @ 0x1403F0318 (MiConvertLargePfnToSmall.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int64 v5; // rcx
  __int16 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  signed __int64 v16; // rdi
  __int64 v17; // r9
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  int v22; // eax
  bool v23; // zf
  __int64 v24; // r9
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  unsigned __int64 v27; // r13
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 i; // rbx
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned __int8 v44; // [rsp+38h] [rbp-D0h] BYREF
  int v45; // [rsp+3Ch] [rbp-CCh]
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-B8h]
  int v49; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+78h] [rbp-90h]
  unsigned __int64 v55; // [rsp+80h] [rbp-88h]
  unsigned __int64 v56; // [rsp+88h] [rbp-80h]
  _QWORD v57[38]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v58[24]; // [rsp+1C8h] [rbp+C0h] BYREF

  v47 = 0LL;
  v44 = 0;
  memset(v58, 0, 0xB8uLL);
  memset(v57, 0, 0x128uLL);
  LODWORD(v58[1]) = 20;
  v58[3] = 0LL;
  v48 = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v48;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( v48 != 1 )
  {
    v5 = v48 - 1;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v5;
    }
    while ( v5 );
  }
  v52 = MI_READ_PTE_LOCK_FREE(v3);
  v6 = v52;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52);
  LODWORD(v57[7]) = 4;
  v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
  v57[4] = &MiSystemPartition;
  v54 = v8;
  v9 = MiSearchNumaNodeTable(v8);
  MiInitializeColorBase(a1, *((_DWORD *)v9 + 2) + 1, (__int64)&v57[34]);
  if ( (int)MiGetPageTablePages((__int64)v57, 1uLL, &v47) < 0 )
    return 0LL;
  v11 = v47;
  *(_QWORD *)v47 = 0LL;
  v12 = (v11 + 0x58000000000LL) / 48;
  v51 = v12;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v15 = 2147483652LL;
  v55 = (v13 >> 12) & 0xFFFFFFFFFLL;
  if ( (v6 & 0x100) != 0 && v2 == 1 )
    v15 = 2684354564LL;
  v56 = v3 << 25;
  ValidPte = MiMakeValidPte((__int64)(v3 << 25) >> 16, v8, v15, v14);
  v16 = ValidPte;
  v53 = MiMapPageInHyperSpaceWorker(v12, &v44, 0x80000000, v17);
  v18 = v53;
  v19 = v16;
  do
  {
    v45 = 0;
    v20 = v19;
    if ( !MiPteInShadowRange(v18) )
    {
LABEL_18:
      v22 = v45;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v22 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_19;
      v23 = (v19 & 1) == 0;
    }
    else
    {
      v16 = ValidPte;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v22 = v45;
      v23 = (v19 & 1) == 0;
    }
    if ( !v23 )
      v20 = v19 | 0x8000000000000000uLL;
LABEL_19:
    *(_QWORD *)v18 = v20;
    if ( v22 )
      MiWritePteShadow(v18, v20, v21);
    v18 += 8LL;
    v16 ^= (v16 ^ ((v16 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v16;
    v19 = v16;
  }
  while ( (v18 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v53, v44, 0x80000000);
  v25 = v48;
  v26 = -2080374780;
  v27 = v54;
  if ( v48 == 1 )
    v26 = -2147483644;
  v28 = v26;
  LODWORD(v28) = v26 | 0x20000000;
  if ( (v52 & 0x100) == 0 )
    v28 = v26;
  LODWORD(v28) = v28 | 0x8000000;
  v29 = MiMakeValidPte(v3, v54, v28, v24);
  v30 = v51;
  ValidPte = v29;
  MiInitializePfnForOtherProcess(v51, v3, v55, 2560LL);
  v49 = 0;
  v34 = v47;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v49, v31, v32, v33);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  *(_QWORD *)(v34 + 24) ^= (*(_QWORD *)(v34 + 24) ^ (*(_QWORD *)(v34 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v51 = v30 & 0xFFFFFFFFFLL;
  ValidPte = ((v30 & 0xFFFFFFFFFLL) << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v25);
  v37 = 3LL;
  if ( v25 == 3 )
    MiInsertLargeTbFlushEntry((__int64)v58, 3u, v3);
  v38 = v51;
  v39 = (__int64)(v56 + 0x10000000) >> 16;
  v40 = 512LL;
  for ( i = 48 * v27 - 0x58000000000LL + 24576; ; i = v47 )
  {
    v42 = i - 48;
    v39 -= 8LL;
    LODWORD(v50) = 0;
    v47 = v42;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v50, v37, v35, v36);
      while ( *(__int64 *)(v42 + 24) < 0 );
    }
    v43 = v47;
    if ( (*(_BYTE *)(v47 + 35) & 0x10) == 0 )
    {
      if ( (*(_QWORD *)(v47 + 40) & 0x1000000000LL) != 0 )
        MiConvertLargePfnToSmall(48 * v27 - 0x58000000000LL, v47, v35, 0LL);
      *(_QWORD *)(v43 + 8) = v39;
      *(_QWORD *)(v43 + 40) = v38 | *(_QWORD *)(v43 + 40) & 0xFFFFFFF000000000uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v40 )
      break;
  }
  if ( v48 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v27, v4 >> 12, 0, 1);
  MiFlushTbList((__int64)v58, (_KPROCESS *)v37);
  return 1LL;
}

/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x1403BA398
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInitializeColorBase @ 0x1403081C8 (MiInitializeColorBase.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140378BA8 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5FC8 (MiConvertLargePfnToSmall.c)
 *     memset @ 0x140414300 (memset.c)
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
  int v14; // r8d
  signed __int64 v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // r14d
  int v22; // ecx
  unsigned __int64 v23; // r13
  int v24; // r8d
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 i; // rbx
  __int64 v38; // rbx
  __int64 v39; // rbx
  unsigned __int8 v40; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+3Ch] [rbp-CCh]
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-B8h]
  int v45; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h]
  unsigned __int64 v51; // [rsp+80h] [rbp-88h]
  unsigned __int64 v52; // [rsp+88h] [rbp-80h]
  _QWORD v53[38]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v54[24]; // [rsp+1C8h] [rbp+C0h] BYREF

  v43 = 0LL;
  v40 = 0;
  memset(v54, 0, 0xB8uLL);
  memset(v53, 0, 0x128uLL);
  LODWORD(v54[1]) = 20;
  v54[3] = 0LL;
  v44 = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v44;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( v44 != 1 )
  {
    v5 = v44 - 1;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v5;
    }
    while ( v5 );
  }
  v48 = MI_READ_PTE_LOCK_FREE(v3);
  v6 = v48;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48);
  LODWORD(v53[7]) = 4;
  v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
  v53[4] = &MiSystemPartition;
  v50 = v8;
  v9 = MiSearchNumaNodeTable(v8);
  MiInitializeColorBase(a1, *((_DWORD *)v9 + 2) + 1, (__int64)&v53[34]);
  if ( (int)MiGetPageTablePages((__int64)v53, 1uLL, &v43) < 0 )
    return 0LL;
  v11 = v43;
  *(_QWORD *)v43 = 0LL;
  v12 = (v11 + 0x58000000000LL) / 48;
  v47 = v12;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v14 = -2147483644;
  v51 = (v13 >> 12) & 0xFFFFFFFFFLL;
  if ( (v6 & 0x100) != 0 && v2 == 1 )
    v14 = -1610612732;
  v52 = v3 << 25;
  ValidPte = MiMakeValidPte((__int64)(v3 << 25) >> 16, v8, v14);
  v15 = ValidPte;
  v49 = MiMapPageInHyperSpaceWorker(v12, &v40, 0x80000000);
  v16 = v49;
  v17 = v15;
  do
  {
    v41 = 0;
    v18 = v17;
    if ( !MiPteInShadowRange(v16) )
    {
LABEL_18:
      v19 = v41;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_19;
      v20 = (v17 & 1) == 0;
    }
    else
    {
      v15 = ValidPte;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v19 = v41;
      v20 = (v17 & 1) == 0;
    }
    if ( !v20 )
      v18 = v17 | 0x8000000000000000uLL;
LABEL_19:
    *(_QWORD *)v16 = v18;
    if ( v19 )
      MiWritePteShadow(v16, v18);
    v16 += 8LL;
    v15 ^= (v15 ^ ((v15 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v15;
    v17 = v15;
  }
  while ( (v16 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v49, v40, 0x80000000);
  v21 = v44;
  v22 = -2080374780;
  v23 = v50;
  if ( v44 == 1 )
    v22 = -2147483644;
  v24 = v22 | 0x20000000;
  if ( (v48 & 0x100) == 0 )
    v24 = v22;
  v25 = MiMakeValidPte(v3, v50, v24 | 0x8000000u);
  v26 = v47;
  ValidPte = v25;
  MiInitializePfnForOtherProcess(v47, v3, v51, 2560);
  v45 = 0;
  v30 = v43;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v45, v27, v28, v29);
    while ( *(__int64 *)(v30 + 24) < 0 );
  }
  *(_QWORD *)(v30 + 24) ^= (*(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v47 = v26 & 0xFFFFFFFFFLL;
  ValidPte = ((v26 & 0xFFFFFFFFFLL) << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v21);
  v33 = 3LL;
  if ( v21 == 3 )
    MiInsertLargeTbFlushEntry((__int64)v54, 3u, v3);
  v34 = v47;
  v35 = (__int64)(v52 + 0x10000000) >> 16;
  v36 = 512LL;
  for ( i = 48 * v23 - 0x58000000000LL + 24576; ; i = v43 )
  {
    v38 = i - 48;
    v35 -= 8LL;
    LODWORD(v46) = 0;
    v43 = v38;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v46, v33, v31, v32);
      while ( *(__int64 *)(v38 + 24) < 0 );
    }
    v39 = v43;
    if ( (*(_BYTE *)(v43 + 35) & 0x10) == 0 )
    {
      if ( (*(_QWORD *)(v43 + 40) & 0x1000000000LL) != 0 )
        MiConvertLargePfnToSmall(48 * v23 - 0x58000000000LL, v43, v31, 0LL);
      *(_QWORD *)(v39 + 8) = v35;
      *(_QWORD *)(v39 + 40) = v34 | *(_QWORD *)(v39 + 40) & 0xFFFFFFF000000000uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v36 )
      break;
  }
  if ( v44 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v23, v4 >> 12, 0, 1);
  MiFlushTbList((__int64)v54, (_KPROCESS *)v33);
  return 1LL;
}

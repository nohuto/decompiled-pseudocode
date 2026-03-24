/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x1403BA228
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9BE8 (MiPfnRangeIsZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     MiInitializeColorBase @ 0x1402FD478 (MiInitializeColorBase.c)
 *     MiUpdateLargePageBitMap @ 0x140300090 (MiUpdateLargePageBitMap.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140379058 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5FC8 (MiConvertLargePfnToSmall.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  unsigned int v23; // r14d
  int v24; // ecx
  unsigned __int64 v25; // r13
  int v26; // r8d
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 i; // rbx
  __int64 v40; // rbx
  __int64 v41; // rbx
  unsigned __int8 v42; // [rsp+38h] [rbp-D0h] BYREF
  int v43; // [rsp+3Ch] [rbp-CCh]
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-B8h]
  int v47; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-98h]
  __int64 v52; // [rsp+78h] [rbp-90h]
  unsigned __int64 v53; // [rsp+80h] [rbp-88h]
  unsigned __int64 v54; // [rsp+88h] [rbp-80h]
  _QWORD v55[38]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v56[24]; // [rsp+1C8h] [rbp+C0h] BYREF

  v45 = 0LL;
  v42 = 0;
  memset(v56, 0, 0xB8uLL);
  memset(v55, 0, 0x128uLL);
  LODWORD(v56[1]) = 20;
  v56[3] = 0LL;
  v46 = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v46;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( v46 != 1 )
  {
    v5 = v46 - 1;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v5;
    }
    while ( v5 );
  }
  v50 = MI_READ_PTE_LOCK_FREE(v3);
  v6 = v50;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50);
  LODWORD(v55[7]) = 4;
  v8 = (v7 >> 12) & 0xFFFFFFFFFLL;
  v55[4] = &MiSystemPartition;
  v52 = v8;
  v9 = MiSearchNumaNodeTable(v8);
  MiInitializeColorBase(a1, *((_DWORD *)v9 + 2) + 1, (__int64)&v55[34]);
  if ( (int)MiGetPageTablePages((__int64)v55, 1uLL, &v45) < 0 )
    return 0LL;
  v11 = v45;
  *(_QWORD *)v45 = 0LL;
  v12 = (v11 + 0x58000000000LL) / 48;
  v49 = v12;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v14 = -2147483644;
  v53 = (v13 >> 12) & 0xFFFFFFFFFLL;
  if ( (v6 & 0x100) != 0 && v2 == 1 )
    v14 = -1610612732;
  v54 = v3 << 25;
  ValidPte = MiMakeValidPte((__int64)(v3 << 25) >> 16, v8, v14);
  v15 = ValidPte;
  v51 = MiMapPageInHyperSpaceWorker(v12, &v42, 0x80000000);
  v16 = v51;
  v17 = v15;
  do
  {
    v43 = 0;
    v18 = v17;
    if ( !MiPteInShadowRange(v16) )
    {
LABEL_18:
      v21 = v43;
      goto LABEL_19;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v21 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_19;
      v22 = (v17 & 1) == 0;
    }
    else
    {
      v15 = ValidPte;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v21 = v43;
      v22 = (v17 & 1) == 0;
    }
    if ( !v22 )
      v18 = v17 | 0x8000000000000000uLL;
LABEL_19:
    *(_QWORD *)v16 = v18;
    if ( v21 )
      MiWritePteShadow(v16, v18, v20);
    v16 += 8LL;
    v15 ^= (v15 ^ ((v15 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v15;
    v17 = v15;
  }
  while ( (v16 & 0xFFF) != 0 );
  LOBYTE(v19) = v42;
  MiUnmapPageInHyperSpaceWorker(v51, v19, 0x80000000);
  v23 = v46;
  v24 = -2080374780;
  v25 = v52;
  if ( v46 == 1 )
    v24 = -2147483644;
  v26 = v24 | 0x20000000;
  if ( (v50 & 0x100) == 0 )
    v26 = v24;
  v27 = MiMakeValidPte(v3, v52, v26 | 0x8000000u);
  v28 = v49;
  ValidPte = v27;
  MiInitializePfnForOtherProcess(v49, v3, v53, 2560LL);
  v47 = 0;
  v32 = v45;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v47, v29, v30, v31);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  *(_QWORD *)(v32 + 24) ^= (*(_QWORD *)(v32 + 24) ^ (*(_QWORD *)(v32 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v49 = v28 & 0xFFFFFFFFFLL;
  ValidPte = ((v28 & 0xFFFFFFFFFLL) << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v23);
  v35 = 3LL;
  if ( v23 == 3 )
    MiInsertLargeTbFlushEntry((__int64)v56, 3u, v3);
  v36 = v49;
  v37 = (__int64)(v54 + 0x10000000) >> 16;
  v38 = 512LL;
  for ( i = 48 * v25 - 0x58000000000LL + 24576; ; i = v45 )
  {
    v40 = i - 48;
    v37 -= 8LL;
    LODWORD(v48) = 0;
    v45 = v40;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v48, v35, v33, v34);
      while ( *(__int64 *)(v40 + 24) < 0 );
    }
    v41 = v45;
    if ( (*(_BYTE *)(v45 + 35) & 0x10) == 0 )
    {
      if ( (*(_QWORD *)(v45 + 40) & 0x1000000000LL) != 0 )
        MiConvertLargePfnToSmall(48 * v25 - 0x58000000000LL, v45, v33, 0LL);
      *(_QWORD *)(v41 + 8) = v37;
      *(_QWORD *)(v41 + 40) = v36 | *(_QWORD *)(v41 + 40) & 0xFFFFFFF000000000uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v38 )
      break;
  }
  if ( v46 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v25, v4 >> 12, 0, 1);
  MiFlushTbList((__int64)v56, (_KPROCESS *)v35);
  return 1LL;
}

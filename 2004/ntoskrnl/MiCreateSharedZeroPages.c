/*
 * XREFs of MiCreateSharedZeroPages @ 0x1402B7DE0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiInitializePfn @ 0x1402B8070 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1405504D0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rsi
  __int64 v4; // r14
  __int64 v6; // rbp
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 PageChain; // r13
  int v12; // r8d
  unsigned __int64 v13; // rbp
  unsigned int i; // r14d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  int v31; // r9d
  __int64 ClusterPage; // rax
  bool v33; // zf
  unsigned int v34; // eax
  __int64 v35; // r9
  int v36; // [rsp+20h] [rbp-68h]
  _QWORD *v37; // [rsp+40h] [rbp-48h]
  char v38; // [rsp+90h] [rbp+8h] BYREF
  int v39; // [rsp+A0h] [rbp+18h]
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2);
  v7 = v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v28 = *(unsigned int *)(v4 + 48);
    if ( (v28 & 0x100000) == 0 && MiVadPageSizes[(v28 >> 18) & 3] == 16 )
    {
      v30 = *a2;
      v31 = a1[8];
      v36 = a1[9];
      v38 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v30, v31, v36, (__int64)&v38);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v33 = v38 == 1;
          *a2 = 1LL;
          if ( v33 )
            *a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v34 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 2) = v6;
          v2 -= 2 * (v34 & 0xF);
        }
        goto LABEL_3;
      }
      v7 = (_DWORD *)*((_QWORD *)a1 + 3);
      *a2 = 1LL;
    }
  }
  MiSharedVaToPartition(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), v6, v7);
  v9 = MiProtectionToCacheAttribute(v8);
  PageChain = MiGetPageChain(v10, *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), a1[12], v9, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_3:
  v12 = 0;
  v37 = (_QWORD *)*((_QWORD *)a1 + 7);
  v39 = 0;
  if ( v4 )
  {
    v29 = *(unsigned int *)(v4 + 52);
    LODWORD(v29) = v29 & 0x7FFFFFFF;
    if ( (v29 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      v12 = 64;
      v39 = 64;
    }
  }
  v13 = v6 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < *a2; ++i )
  {
    v15 = PageChain;
    v16 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v40 = PageChain;
    if ( v16 == 0xFFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v16 - 0x58000000000LL;
    v17 = (v15 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v17);
      v12 = v39;
      v15 = v40;
    }
    v18 = (*v2 >> 5) & 0x1F;
    if ( v18 == 24 )
      v18 = 1;
    v19 = *a1;
    v20 = v12 | 0x112;
    v39 = v20;
    if ( (v19 & 4) != 0 || ((v18 - 4) & 0xFFFFFFFD) != 0 )
    {
      v20 |= 0x20u;
      v39 = v20;
    }
    MiInitializePfn(v15, v2, v18, v20);
    ValidPte = MiMakeValidPte((unsigned __int64)v2, v17, v18 | 0x20000000, v21);
    if ( MiPteInShadowRange((unsigned __int64)v2) )
    {
      if ( (unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
      {
        if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = ValidPte;
        MiWritePteShadow(v2, ValidPte);
        goto LABEL_14;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v2 = ValidPte;
LABEL_14:
    if ( (*a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v40, 0LL);
      if ( v37 )
      {
        if ( (*a1 & 8) == 0 && v13 == *(_QWORD *)(v37[1] + 16LL * v37[3]) + (v37[4] << 12) )
          MiAdvanceFaultList(v37, 2LL * v37[3], v37, v35);
      }
    }
    v12 = v39;
    v13 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}

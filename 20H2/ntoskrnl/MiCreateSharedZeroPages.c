/*
 * XREFs of MiCreateSharedZeroPages @ 0x14028DDB0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiInitializePfn @ 0x14028E040 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x14028EF98 (MiSharedVaToPartition.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rsi
  __int64 v4; // r14
  __int64 v6; // rbp
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r10
  __int64 PageChain; // r13
  int v14; // r8d
  unsigned __int64 v15; // rbp
  unsigned int i; // r14d
  __int64 v17; // r10
  __int64 v18; // rax
  ULONG_PTR v19; // r15
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // r8d
  __int64 ValidPte; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  int v32; // r9d
  __int64 ClusterPage; // rax
  bool v34; // zf
  unsigned int v35; // eax
  __int64 v36; // r9
  int v37; // [rsp+20h] [rbp-68h]
  _QWORD *v38; // [rsp+40h] [rbp-48h]
  char v39; // [rsp+90h] [rbp+8h] BYREF
  int v40; // [rsp+A0h] [rbp+18h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2);
  v7 = v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v29 = *(unsigned int *)(v4 + 48);
    if ( (v29 & 0x100000) == 0 && MiVadPageSizes[(v29 >> 18) & 3] == 16 )
    {
      v31 = *a2;
      v32 = a1[8];
      v37 = a1[9];
      v39 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v31, v32, v37, (__int64)&v39);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v34 = v39 == 1;
          *a2 = 1LL;
          if ( v34 )
            *a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v35 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 2) = v6;
          v2 -= 2 * (v35 & 0xF);
        }
        goto LABEL_3;
      }
      v7 = (_DWORD *)*((_QWORD *)a1 + 3);
      *a2 = 1LL;
    }
  }
  MiSharedVaToPartition(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), v6, v7);
  v11 = MiProtectionToCacheAttribute(v8, v9, v10);
  PageChain = MiGetPageChain(v12, *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), a1[12], v11, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_3:
  v14 = 0;
  v38 = (_QWORD *)*((_QWORD *)a1 + 7);
  v40 = 0;
  if ( v4 )
  {
    v30 = *(unsigned int *)(v4 + 52);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    if ( (v30 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      v14 = 64;
      v40 = 64;
    }
  }
  v15 = v6 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < *a2; ++i )
  {
    v17 = PageChain;
    v18 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v41 = PageChain;
    if ( v18 == 0xFFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v18 - 0x58000000000LL;
    v19 = (v17 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v19);
      v14 = v40;
      v17 = v41;
    }
    v20 = (*v2 >> 5) & 0x1F;
    if ( v20 == 24 )
      v20 = 1;
    v21 = *a1;
    v22 = v14 | 0x112;
    v40 = v22;
    if ( (v21 & 4) != 0 || ((v20 - 4) & 0xFFFFFFFD) != 0 )
    {
      v22 |= 0x20u;
      v40 = v22;
    }
    MiInitializePfn(v17, v2, v20, v22);
    ValidPte = MiMakeValidPte(v2, v19, v20 | 0x20000000);
    if ( MiPteInShadowRange((unsigned __int64)v2) )
    {
      if ( (unsigned int)MiPteHasShadow(v25, v24, v26, v27) )
      {
        if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
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
      MiLockAndDecrementShareCount(v41, 0);
      if ( v38 )
      {
        if ( (*a1 & 8) == 0 && v15 == *(_QWORD *)(v38[1] + 16LL * v38[3]) + (v38[4] << 12) )
          MiAdvanceFaultList(v38, 2LL * v38[3], v38, v36);
      }
    }
    v14 = v40;
    v15 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}

/*
 * XREFs of MiCreateSharedZeroPages @ 0x140225160
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x14054FE80 (MiGetClusterPage.c)
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
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 PageChain; // r13
  int v15; // r8d
  unsigned __int64 v16; // rbp
  unsigned int i; // r14d
  __int64 v18; // r10
  __int64 v19; // rax
  ULONG_PTR v20; // r15
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v23; // r8d
  __int64 ValidPte; // rbx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  int v32; // r9d
  __int64 ClusterPage; // rax
  bool v34; // zf
  unsigned int v35; // eax
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
    v29 = *(unsigned int *)(v4 + 48);
    if ( (v29 & 0x100000) == 0 && MiVadPageSizes[(v29 >> 18) & 3] == 16 )
    {
      v31 = *a2;
      v32 = a1[8];
      v36 = a1[9];
      v38 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v31, v32, v36, (__int64)&v38);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v34 = v38 == 1;
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
  v12 = MiProtectionToCacheAttribute(v8, v9, v10, v11);
  PageChain = MiGetPageChain(v13, *(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), a1[12], v12, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_3:
  v15 = 0;
  v37 = (_QWORD *)*((_QWORD *)a1 + 7);
  v39 = 0;
  if ( v4 )
  {
    v30 = *(unsigned int *)(v4 + 52);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    if ( (v30 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      v15 = 64;
      v39 = 64;
    }
  }
  v16 = v6 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < *a2; ++i )
  {
    v18 = PageChain;
    v19 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v40 = PageChain;
    if ( v19 == 0xFFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v19 - 0x58000000000LL;
    v20 = (v18 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v20);
      v15 = v39;
      v18 = v40;
    }
    v21 = (*v2 >> 5) & 0x1F;
    if ( v21 == 24 )
      v21 = 1;
    v22 = *a1;
    v23 = v15 | 0x112;
    v39 = v23;
    if ( (v22 & 4) != 0 || ((v21 - 4) & 0xFFFFFFFD) != 0 )
    {
      v23 |= 0x20u;
      v39 = v23;
    }
    MiInitializePfn(v18, v2, v21, v23);
    ValidPte = MiMakeValidPte(v2, v20, v21 | 0x20000000);
    if ( (unsigned int)MiPteInShadowRange(v2, v25) )
    {
      if ( (unsigned int)MiPteHasShadow(v27, v26) )
      {
        if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
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
        if ( (*a1 & 8) == 0 && v16 == *(_QWORD *)(v37[1] + 16LL * v37[3]) + (v37[4] << 12) )
          MiAdvanceFaultList(v37);
      }
    }
    v15 = v39;
    v16 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}

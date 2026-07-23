/*
 * XREFs of MiCreateSharedZeroPages @ 0x1402E5FC0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rsi
  __int64 v4; // r14
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 PageChain; // r13
  int v12; // r8d
  unsigned __int64 v13; // rbp
  unsigned int i; // r14d
  __int64 v15; // r10
  __int64 v16; // rax
  ULONG_PTR v17; // r15
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 ValidPte; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  int v26; // r9d
  __int64 ClusterPage; // rax
  bool v28; // zf
  unsigned int v29; // eax
  int v30; // [rsp+20h] [rbp-68h]
  _QWORD *v31; // [rsp+40h] [rbp-48h]
  char v32; // [rsp+90h] [rbp+8h] BYREF
  int v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2);
  v7 = (unsigned __int64)v2;
  v8 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v23 = *(unsigned int *)(v4 + 48);
    if ( (v23 & 0x100000) == 0 && MiVadPageSizes[(v23 >> 18) & 3] == 16 )
    {
      v25 = *a2;
      v26 = a1[8];
      v30 = a1[9];
      v32 = 0;
      ClusterPage = MiGetClusterPage(v4, v6, v25, v26, v30, (__int64)&v32);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v28 = v32 == 1;
          *a2 = 1LL;
          if ( v28 )
            *a1 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v29 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 2) = v6;
          v2 -= 2 * (v29 & 0xF);
        }
        goto LABEL_3;
      }
      v7 = *((_QWORD *)a1 + 3);
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
  v31 = (_QWORD *)*((_QWORD *)a1 + 7);
  v33 = 0;
  if ( v4 )
  {
    v24 = *(unsigned int *)(v4 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( (v24 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      v12 = 64;
      v33 = 64;
    }
  }
  v13 = v6 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; i < *a2; ++i )
  {
    v15 = PageChain;
    v16 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v34 = PageChain;
    if ( v16 == 0xFFFFFFFFFLL )
      PageChain = 0LL;
    else
      PageChain = 48 * v16 - 0x58000000000LL;
    v17 = (v15 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v17);
      v12 = v33;
      v15 = v34;
    }
    v18 = (*v2 >> 5) & 0x1F;
    if ( v18 == 24 )
      v18 = 1;
    v19 = *a1;
    v20 = v12 | 0x112;
    v33 = v20;
    if ( (v19 & 4) != 0 || ((v18 - 4) & 0xFFFFFFFD) != 0 )
    {
      v20 |= 0x20u;
      v33 = v20;
    }
    MiInitializePfn(v15, v2, v18, v20);
    ValidPte = MiMakeValidPte(v2, v17, v18 | 0x20000000);
    if ( (unsigned int)MiPteInShadowRange(v2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = ValidPte;
        MiWritePteShadow((__int64)v2, ValidPte);
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
      MiLockAndDecrementShareCount(v34, 0);
      if ( v31 )
      {
        if ( (*a1 & 8) == 0 && v13 == *(_QWORD *)(v31[1] + 16LL * v31[3]) + (v31[4] << 12) )
          MiAdvanceFaultList(v31);
      }
    }
    v12 = v33;
    v13 += 4096LL;
    v2 += 2;
  }
  return 273LL;
}

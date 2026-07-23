/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1402B4A20
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiComputeZeroClusterMaximum @ 0x14026243C (MiComputeZeroClusterMaximum.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402E08FC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  int v1; // edi
  int *v2; // r15
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v7; // rdx
  __int64 v8; // r11
  struct _KTHREAD *v9; // r10
  int v10; // r12d
  __int64 v11; // r13
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 PageChain; // r10
  unsigned __int64 v15; // r11
  int v16; // esi
  int v17; // edi
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // r9d
  __int64 ClusterPage; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v26; // rax
  unsigned __int64 i; // rdi
  int v28; // r10d
  __int64 v29; // rdx
  struct _LIST_ENTRY *v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  bool v33; // zf
  unsigned __int64 v34; // rdx
  int v35; // eax
  int v36; // r9d
  __int64 LargePage; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // eax
  int v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int128 v46; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v48[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v49; // [rsp+90h] [rbp-70h]
  __int128 v50; // [rsp+A0h] [rbp-60h]
  __int128 v51; // [rsp+B0h] [rbp-50h]
  __int128 v52; // [rsp+C0h] [rbp-40h]
  __int128 v53; // [rsp+D0h] [rbp-30h]
  char v55; // [rsp+138h] [rbp+38h] BYREF
  int v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]

  v1 = *a1;
  v2 = a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 7);
  if ( (*a1 & 2) != 0 )
  {
    v5 = a1[8];
    if ( v5 >> 3 == 3 )
    {
      if ( (v5 & 7) == 0 )
      {
LABEL_4:
        MiAdvanceFaultList(*((_QWORD **)a1 + 7));
        return 0LL;
      }
    }
    else if ( v5 >> 3 != 1 )
    {
      goto LABEL_4;
    }
    if ( (v1 & 4) == 0 )
      goto LABEL_4;
  }
  if ( (v1 & 8) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 )
    return 3221225495LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *(_QWORD *)(v7 + 56);
  v42 = v8;
  v45 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v8 + 174));
  if ( (v1 & 0x40) != 0 )
  {
    v9 = (struct _KTHREAD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10];
    if ( v9 )
    {
      if ( v9 != KeGetCurrentThread() )
      {
        *(_DWORD *)(v7 + 80) |= 4u;
        return 0LL;
      }
    }
  }
  v10 = 1;
  v43 = 1LL;
  v44 = -1LL;
  v11 = *((_QWORD *)a1 + 8);
  v12 = a1[12];
  v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = 0;
  PageChain = 0LL;
  v57 = 0LL;
  if ( v11 )
  {
    v17 = v1 & 0x15;
    if ( v17 )
    {
      v18 = MiComputeZeroClusterMaximum(v4, v8, v11);
      PageChain = v57;
      v8 = v42;
      v44 = v18;
      v56 = 1;
    }
    v19 = *(_DWORD *)(v11 + 48);
    v12 = (v19 >> 12) & 0x3F;
    if ( (v19 & 0x100000) != 0 && MiVadPageSizes[(v19 >> 18) & 3] == 16 )
    {
      v20 = v2[8];
      v41 = v2[9];
      v55 = 0;
      ClusterPage = MiGetClusterPage(v11, v3, 16, v20, v41, (__int64)&v55);
      v57 = ClusterPage;
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          if ( v55 == 1 )
            *v2 |= 4u;
        }
        else
        {
          v22 = v3 & 0xFFFFFFFFFFFF0000uLL;
          v43 = 16LL;
          *((_QWORD *)v2 + 2) = v22;
          v13 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
      }
    }
    else if ( !v17
           && ((v3 >> 9) & 0x78) == 0
           && (*(_DWORD *)(v11 + 48) & 0x100000) != 0
           && (v19 & 0x300000) != 0x300000
           && !v2[9]
           && v3 >= ((*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) + 16) << 12
           && ((v3 >> 9) & 0xFF8) != 0
           && (v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v23 = 0LL;
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
      do
      {
        v24 = *(_QWORD *)v4;
        if ( v4 >= 0xFFFFF6FB7DBED000uLL
          && v4 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v24 & 1) == 0 )
            break;
          if ( (v24 & 0x20) == 0 || (v24 & 0x42) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v26 = *((_QWORD *)&Flink->Flink + ((v4 >> 3) & 0x1FF));
              LOBYTE(Flink) = v24 | 0x20;
              if ( (v26 & 0x20) == 0 )
                Flink = *(struct _LIST_ENTRY **)v4;
              LOBYTE(v24) = (_BYTE)Flink;
              if ( (v26 & 0x42) != 0 )
                LOBYTE(v24) = (unsigned __int8)Flink | 0x42;
            }
          }
        }
        if ( (v24 & 1) == 0 )
          break;
        if ( (v24 & 0x20) == 0 )
          break;
        ++v23;
        v4 -= 8LL;
      }
      while ( v23 < 0x10 );
      v2 = a1;
      if ( v23 == 16 )
      {
        v47[1] = 0x10000LL;
        v49 = 1uLL;
        v48[0] = 0LL;
        v48[1] = v47;
        v50 = 0uLL;
        v51 = 0LL;
        v47[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
        v52 = 0LL;
        v53 = 0LL;
        if ( MiComputeZeroClusterMaximum((__int64)v48, v8, v11) >= 0x10 )
        {
          v16 = 2;
          v15 = 16LL;
LABEL_62:
          v28 = v2[9];
          v4 = v13 + 8;
          for ( i = 1LL; i < v15; ++i )
          {
            v29 = *(_QWORD *)v4;
            if ( v4 >= 0xFFFFF6FB7DBED000uLL
              && v4 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v29 & 1) != 0
              && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
            {
              v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v30 )
              {
                v31 = *((_QWORD *)&v30->Flink + ((v4 >> 3) & 0x1FF));
                v32 = v29 | 0x20;
                if ( (v31 & 0x20) == 0 )
                  v32 = *(_QWORD *)v4;
                v29 = v32;
                if ( (v31 & 0x42) != 0 )
                  v29 = v32 | 0x42;
              }
            }
            if ( v28 )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v29) )
                break;
              v33 = v28 == ((v34 >> 5) & 0x1F);
            }
            else
            {
              v33 = v29 == 0;
            }
            if ( !v33 )
              break;
            v4 += 8LL;
          }
          v2 = a1;
          v10 = 1;
LABEL_82:
          if ( v16 == 2 )
          {
            if ( i == v15 )
            {
              v46 = 0LL;
              MiInitializePageColorBase(v42, v12, &v46);
              _InterlockedExchangeAdd((volatile signed __int32 *)v46, 1u);
              v35 = MiProtectionToCacheAttribute((unsigned int)v2[8]);
              LargePage = MiGetLargePage(v45, 2, v35, v36, 4, 0LL);
              v57 = LargePage;
              PageChain = LargePage;
              if ( LargePage )
              {
                *v2 |= 0x80u;
                MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL);
                PageChain = v57;
                v43 = i;
LABEL_90:
                LODWORD(v8) = v42;
                goto LABEL_91;
              }
LABEL_88:
              v43 = i;
              goto LABEL_90;
            }
            i = 1LL;
          }
          PageChain = v57;
          goto LABEL_88;
        }
        goto LABEL_89;
      }
      PageChain = v57;
    }
    v16 = v56;
    if ( !v56 || PageChain )
      goto LABEL_90;
    v15 = v44;
LABEL_61:
    i = 1LL;
    if ( v15 <= 1 )
      goto LABEL_82;
    goto LABEL_62;
  }
  if ( (v1 & 0x40) == 0 && (v1 & 1) != 0 && (*(_BYTE *)(v8 + 184) & 7u) >= 2 )
  {
    v15 = MiComputeZeroClusterMaximum(v4, v8, 0LL);
    if ( v15 > 1 )
    {
      v16 = 1;
      goto LABEL_61;
    }
LABEL_89:
    PageChain = v57;
    goto LABEL_90;
  }
LABEL_91:
  v38 = *((_QWORD *)v2 + 9);
  if ( v38 )
    v39 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v38 + 544) + 1838LL));
  else
    LODWORD(v39) = v45;
  if ( !PageChain )
  {
    v40 = v2[8];
    if ( v40 )
    {
      if ( v40 != 31 )
      {
        if ( v40 >> 3 == 3 )
        {
          if ( (v40 & 7) != 0 )
            v10 = 2;
        }
        else if ( v40 >> 3 == 1 )
        {
          v10 = 0;
        }
      }
    }
    else
    {
      v10 = 3;
    }
    PageChain = MiGetPageChain(v39, v8, v12, v10, 258, -1LL, (__int64)&v43);
    if ( !PageChain )
      return 3221225495LL;
  }
  return MiCompletePrivateZeroFault(v2, PageChain, v43, v4);
}

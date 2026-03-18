/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1402A2100
 * Callers:
 *     MiZeroFault @ 0x14029CF50 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiComputeZeroClusterMaximum @ 0x1403122A4 (MiComputeZeroClusterMaximum.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EFF78 (MiConvertEntireLargePageToSmall.c)
 *     MiGetClusterPage @ 0x1405504D0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // r11
  struct _KTHREAD *v12; // r10
  int v13; // r12d
  __int64 v14; // r13
  int v15; // ebx
  __int64 v16; // r14
  __int64 PageChain; // r10
  unsigned __int64 v18; // r11
  int v19; // esi
  int v20; // edi
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // r9d
  __int64 ClusterPage; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v29; // rax
  unsigned __int64 i; // rdi
  int v31; // r10d
  __int64 v32; // rdx
  struct _LIST_ENTRY *v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  bool v36; // zf
  unsigned __int64 v37; // rdx
  int v38; // eax
  int v39; // r9d
  __int64 LargePage; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned int v43; // eax
  int v44; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int128 v49; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v50[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v51[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v52; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+A0h] [rbp-60h]
  __int128 v54; // [rsp+B0h] [rbp-50h]
  __int128 v55; // [rsp+C0h] [rbp-40h]
  __int128 v56; // [rsp+D0h] [rbp-30h]
  char v58; // [rsp+138h] [rbp+38h] BYREF
  int v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]

  v3 = *a1;
  v4 = a1;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_QWORD *)a1 + 7);
  if ( (*a1 & 2) != 0 )
  {
    v7 = (unsigned int)a1[8];
    v8 = (unsigned int)a1[8] >> 3;
    if ( v8 == 3 )
    {
      if ( (v7 & 7) == 0 )
      {
LABEL_4:
        MiAdvanceFaultList(*((_QWORD *)a1 + 7), v7, a3, v6);
        return 0LL;
      }
    }
    else if ( v8 != 1 )
    {
      goto LABEL_4;
    }
    if ( (v3 & 4) == 0 )
      goto LABEL_4;
  }
  if ( (v3 & 8) != 0 && (*(_DWORD *)(v6 + 56) & 8) != 0 )
    return 3221225495LL;
  v10 = *((_QWORD *)a1 + 1);
  v11 = *(_QWORD *)(v10 + 56);
  v45 = v11;
  v48 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v11 + 174));
  if ( (v3 & 0x40) != 0 )
  {
    v12 = (struct _KTHREAD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10];
    if ( v12 )
    {
      if ( v12 != KeGetCurrentThread() )
      {
        *(_DWORD *)(v10 + 80) |= 4u;
        return 0LL;
      }
    }
  }
  v13 = 1;
  v46 = 1LL;
  v47 = -1LL;
  v14 = *((_QWORD *)a1 + 8);
  v15 = a1[12];
  v16 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = 0;
  PageChain = 0LL;
  v60 = 0LL;
  if ( v14 )
  {
    v20 = v3 & 0x15;
    if ( v20 )
    {
      v21 = MiComputeZeroClusterMaximum(v6, v11, v14);
      PageChain = v60;
      v11 = v45;
      v47 = v21;
      v59 = 1;
    }
    v22 = *(_DWORD *)(v14 + 48);
    v15 = (v22 >> 12) & 0x3F;
    if ( (v22 & 0x100000) != 0 && MiVadPageSizes[(v22 >> 18) & 3] == 16 )
    {
      v23 = v4[8];
      v44 = v4[9];
      v58 = 0;
      ClusterPage = MiGetClusterPage(v14, v5, 16, v23, v44, (__int64)&v58);
      v60 = ClusterPage;
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          if ( v58 == 1 )
            *v4 |= 4u;
        }
        else
        {
          v25 = v5 & 0xFFFFFFFFFFFF0000uLL;
          v46 = 16LL;
          *((_QWORD *)v4 + 2) = v25;
          v16 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
      }
    }
    else if ( !v20
           && ((v5 >> 9) & 0x78) == 0
           && (*(_DWORD *)(v14 + 48) & 0x100000) != 0
           && (v22 & 0x300000) != 0x300000
           && !v4[9]
           && v5 >= ((*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) + 16) << 12
           && ((v5 >> 9) & 0xFF8) != 0
           && (v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v26 = 0LL;
      v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
      do
      {
        v27 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v27 & 1) == 0 )
            break;
          if ( (v27 & 0x20) == 0 || (v27 & 0x42) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v29 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
              LOBYTE(Flink) = v27 | 0x20;
              if ( (v29 & 0x20) == 0 )
                Flink = *(struct _LIST_ENTRY **)v6;
              LOBYTE(v27) = (_BYTE)Flink;
              if ( (v29 & 0x42) != 0 )
                LOBYTE(v27) = (unsigned __int8)Flink | 0x42;
            }
          }
        }
        if ( (v27 & 1) == 0 )
          break;
        if ( (v27 & 0x20) == 0 )
          break;
        ++v26;
        v6 -= 8LL;
      }
      while ( v26 < 0x10 );
      v4 = a1;
      if ( v26 == 16 )
      {
        v50[1] = 0x10000LL;
        v52 = 1uLL;
        v51[0] = 0LL;
        v51[1] = v50;
        v53 = 0uLL;
        v54 = 0LL;
        v50[0] = v5 & 0xFFFFFFFFFFFFF000uLL;
        v55 = 0LL;
        v56 = 0LL;
        if ( (unsigned __int64)MiComputeZeroClusterMaximum(v51, v11, v14) >= 0x10 )
        {
          v19 = 2;
          v18 = 16LL;
LABEL_62:
          v31 = v4[9];
          v6 = v16 + 8;
          for ( i = 1LL; i < v18; ++i )
          {
            v32 = *(_QWORD *)v6;
            if ( v6 >= 0xFFFFF6FB7DBED000uLL
              && v6 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v32 & 1) != 0
              && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
            {
              v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v33 )
              {
                v34 = *((_QWORD *)&v33->Flink + ((v6 >> 3) & 0x1FF));
                v35 = v32 | 0x20;
                if ( (v34 & 0x20) == 0 )
                  v35 = *(_QWORD *)v6;
                v32 = v35;
                if ( (v34 & 0x42) != 0 )
                  v32 = v35 | 0x42;
              }
            }
            if ( v31 )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v32) )
                break;
              v36 = v31 == ((v37 >> 5) & 0x1F);
            }
            else
            {
              v36 = v32 == 0;
            }
            if ( !v36 )
              break;
            v6 += 8LL;
          }
          v4 = a1;
          v13 = 1;
LABEL_82:
          if ( v19 == 2 )
          {
            if ( i == v18 )
            {
              v49 = 0LL;
              MiInitializePageColorBase(v45, v15, (__int64)&v49);
              _InterlockedExchangeAdd((volatile signed __int32 *)v49, 1u);
              v38 = MiProtectionToCacheAttribute((unsigned int)v4[8]);
              LargePage = MiGetLargePage(v48, 2, v38, v39, 4, 0LL);
              v60 = LargePage;
              PageChain = LargePage;
              if ( LargePage )
              {
                *v4 |= 0x80u;
                MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL);
                PageChain = v60;
                v46 = i;
LABEL_90:
                LODWORD(v11) = v45;
                goto LABEL_91;
              }
LABEL_88:
              v46 = i;
              goto LABEL_90;
            }
            i = 1LL;
          }
          PageChain = v60;
          goto LABEL_88;
        }
        goto LABEL_89;
      }
      PageChain = v60;
    }
    v19 = v59;
    if ( !v59 || PageChain )
      goto LABEL_90;
    v18 = v47;
LABEL_61:
    i = 1LL;
    if ( v18 <= 1 )
      goto LABEL_82;
    goto LABEL_62;
  }
  if ( (v3 & 0x40) == 0 && (v3 & 1) != 0 && (*(_BYTE *)(v11 + 184) & 7u) >= 2 )
  {
    v18 = MiComputeZeroClusterMaximum(v6, v11, 0LL);
    if ( v18 > 1 )
    {
      v19 = 1;
      goto LABEL_61;
    }
LABEL_89:
    PageChain = v60;
    goto LABEL_90;
  }
LABEL_91:
  v41 = *((_QWORD *)v4 + 9);
  if ( v41 )
    v42 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v41 + 544) + 1838LL));
  else
    LODWORD(v42) = v48;
  if ( !PageChain )
  {
    v43 = v4[8];
    if ( v43 )
    {
      if ( v43 != 31 )
      {
        if ( v43 >> 3 == 3 )
        {
          if ( (v43 & 7) != 0 )
            v13 = 2;
        }
        else if ( v43 >> 3 == 1 )
        {
          v13 = 0;
        }
      }
    }
    else
    {
      v13 = 3;
    }
    PageChain = MiGetPageChain(v42, v11, v15, v13, 258, -1LL, (__int64)&v46);
    if ( !PageChain )
      return 3221225495LL;
  }
  return MiCompletePrivateZeroFault(v4, PageChain, v46, v6);
}

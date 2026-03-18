/*
 * XREFs of MiResolvePrivateZeroFault @ 0x140271440
 * Callers:
 *     MiZeroFault @ 0x140224FB0 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiComputeZeroClusterMaximum @ 0x14023C1EC (MiComputeZeroClusterMaximum.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140349584 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
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
  unsigned __int64 v21; // rax
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
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  int v41; // r9d
  __int64 LargePage; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned int v45; // eax
  int v46; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  __int128 v51; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v52[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v53[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h]
  __int128 v55; // [rsp+A0h] [rbp-60h]
  __int128 v56; // [rsp+B0h] [rbp-50h]
  __int128 v57; // [rsp+C0h] [rbp-40h]
  __int128 v58; // [rsp+D0h] [rbp-30h]
  char v60; // [rsp+138h] [rbp+38h] BYREF
  int v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]

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
  v47 = v11;
  v50 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v11 + 174));
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
  v48 = 1LL;
  v49 = -1LL;
  v14 = *((_QWORD *)a1 + 8);
  v15 = a1[12];
  v16 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = 0;
  PageChain = 0LL;
  v62 = 0LL;
  if ( v14 )
  {
    v20 = v3 & 0x15;
    if ( v20 )
    {
      v21 = MiComputeZeroClusterMaximum(v6, v11, v14);
      PageChain = v62;
      v11 = v47;
      v49 = v21;
      v61 = 1;
    }
    v22 = *(_DWORD *)(v14 + 48);
    v15 = (v22 >> 12) & 0x3F;
    if ( (v22 & 0x100000) != 0 && MiVadPageSizes[(v22 >> 18) & 3] == 16 )
    {
      v23 = v4[8];
      v46 = v4[9];
      v60 = 0;
      ClusterPage = MiGetClusterPage(v14, v5, 16, v23, v46, (__int64)&v60);
      v62 = ClusterPage;
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          if ( v60 == 1 )
            *v4 |= 4u;
        }
        else
        {
          v25 = v5 & 0xFFFFFFFFFFFF0000uLL;
          v48 = 16LL;
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
        v52[1] = 0x10000LL;
        v54 = 1uLL;
        v53[0] = 0LL;
        v53[1] = v52;
        v55 = 0uLL;
        v56 = 0LL;
        v52[0] = v5 & 0xFFFFFFFFFFFFF000uLL;
        v57 = 0LL;
        v58 = 0LL;
        if ( MiComputeZeroClusterMaximum((__int64)v53, v11, v14) >= 0x10 )
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
              v51 = 0LL;
              MiInitializePageColorBase(v47, v15, (__int64)&v51);
              v38 = v51;
              _InterlockedExchangeAdd((volatile signed __int32 *)v51, 1u);
              v40 = MiProtectionToCacheAttribute((unsigned int)v4[8], v39, v38);
              LargePage = MiGetLargePage(v50, 2, v40, v41, 4, 0LL);
              v62 = LargePage;
              PageChain = LargePage;
              if ( LargePage )
              {
                *v4 |= 0x80u;
                MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL);
                PageChain = v62;
                v48 = i;
LABEL_90:
                LODWORD(v11) = v47;
                goto LABEL_91;
              }
LABEL_88:
              v48 = i;
              goto LABEL_90;
            }
            i = 1LL;
          }
          PageChain = v62;
          goto LABEL_88;
        }
        goto LABEL_89;
      }
      PageChain = v62;
    }
    v19 = v61;
    if ( !v61 || PageChain )
      goto LABEL_90;
    v18 = v49;
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
    PageChain = v62;
    goto LABEL_90;
  }
LABEL_91:
  v43 = *((_QWORD *)v4 + 9);
  if ( v43 )
    v44 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v43 + 544) + 1838LL));
  else
    LODWORD(v44) = v50;
  if ( !PageChain )
  {
    v45 = v4[8];
    if ( v45 )
    {
      if ( v45 != 31 )
      {
        if ( v45 >> 3 == 3 )
        {
          if ( (v45 & 7) != 0 )
            v13 = 2;
        }
        else if ( v45 >> 3 == 1 )
        {
          v13 = 0;
        }
      }
    }
    else
    {
      v13 = 3;
    }
    PageChain = MiGetPageChain(v44, v11, v15, v13, 258, -1LL, (__int64)&v48);
    if ( !PageChain )
      return 3221225495LL;
  }
  return MiCompletePrivateZeroFault(v4, PageChain, v48, v6);
}

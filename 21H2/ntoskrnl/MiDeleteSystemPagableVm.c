/*
 * XREFs of MiDeleteSystemPagableVm @ 0x14027E810
 * Callers:
 *     MmFreePoolMemory @ 0x140366DA8 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403C84E4 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     MiUnmapPatchTable @ 0x140977DCC (MiUnmapPatchTable.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReturnSystemCharges @ 0x140229640 (MiReturnSystemCharges.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x14024B768 (MiImageProtoChargedCommit.c)
 *     MiWriteWsle @ 0x14026ED30 (MiWriteWsle.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiInitializeTbFlushStamps @ 0x1402CCC80 (MiInitializeTbFlushStamps.c)
 *     MiAppendWsleCluster @ 0x1402CF100 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     MiIsPfnSystemCharged @ 0x1403B2AB0 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDriverPageIsDangling @ 0x1405905CC (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 v9; // r14
  char v11; // r13
  int v12; // eax
  unsigned __int64 v13; // rdi
  char v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // r12
  unsigned __int8 v17; // bl
  signed __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // rdi
  __int64 Process; // rcx
  __int64 v25; // r15
  int v26; // edi
  _QWORD *v27; // r14
  bool v28; // cf
  unsigned __int64 v30; // rbx
  int IsContended; // eax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  char v41; // rdx^7
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned __int8 v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh]
  signed __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  unsigned __int64 valid; // [rsp+50h] [rbp-B0h]
  _QWORD *v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+64h] [rbp-9Ch]
  int v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+7Ch] [rbp-84h]
  __int128 v60; // [rsp+80h] [rbp-80h] BYREF
  __int128 v61; // [rsp+90h] [rbp-70h]
  _QWORD v62[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  _QWORD v66[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v67; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v68; // [rsp+E4h] [rbp-1Ch]
  __int16 v69; // [rsp+E6h] [rbp-1Ah]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  _BYTE v73[152]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a6;
  v65 = a2;
  v51 = a1;
  v9 = a1;
  v53 = a6;
  v69 = 0;
  v63 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  memset(v73, 0, sizeof(v73));
  v11 = a5;
  v49 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 0x800) == 0 )
      goto LABEL_3;
  }
  else if ( (a5 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v49 = 1;
LABEL_3:
  valid = 0LL;
  v54 = 0;
  v12 = 10;
  v59 = a5 & 1;
  v13 = 0LL;
  DWORD2(v61) = 10;
  if ( (a5 & 1) == 0 )
  {
    v12 = 14;
    DWORD2(v61) = 14;
  }
  v56 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v61) = v12 | 0x10;
  v14 = *(_BYTE *)(v9 + 184) & 7;
  v15 = 0;
  v64 = 0LL;
  v55 = 0;
  if ( (unsigned __int8)(v14 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 && dword_140C52B68 )
      v54 = 1;
    v15 = 2;
    v55 = 2;
  }
  v57 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v9 + 174));
  v70 = 20LL;
  v67 = v15;
  v68 = 0;
  v71 = 0LL;
  v72 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v62[2] = (unsigned int)a4;
    v62[0] = 0LL;
    v62[1] = (__int64)(a3 << 25) >> 16;
    if ( v14 == 4 )
    {
      v62[0] = 6LL;
    }
    else if ( v14 == 3 )
    {
      v62[0] = 4LL;
    }
    else
    {
      v62[0] = v62[0] & 0xFFF0000000000007uLL | (16LL
                                               * *(unsigned int *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25]
                                                                 + 8)) | 7;
    }
    v66[1] = 24LL;
    v66[0] = v62;
    EtwTraceKernelEvent((unsigned int)v66, 1, 536870913, 633, 289413892);
  }
  v16 = a3 + 8 * a4;
  v48 = MiLockWorkingSetShared(v9);
  v17 = v48;
  if ( a3 < v16 )
  {
    while ( 1 )
    {
      if ( !v13 )
        goto LABEL_54;
      if ( (a3 & 0xFFF) == 0 )
        break;
LABEL_13:
      v18 = *(_QWORD *)a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v38 = *((_QWORD *)&Flink->Flink + ((a3 >> 3) & 0x1FF));
          v39 = v18 | 0x20;
          if ( (v38 & 0x20) == 0 )
            v39 = *(_QWORD *)a3;
          v18 = v39;
          if ( (v38 & 0x42) != 0 )
            v18 = v39 | 0x42;
        }
      }
      v50 = v18;
      if ( !v18 )
        goto LABEL_30;
      if ( (v18 & 1) != 0 )
      {
        v19 = (__int64)((a3 << 25) - v64) >> 16;
        v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v21 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
        if ( (a5 & 8) != 0 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v20) )
          {
            v58 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v58);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            *(_BYTE *)(v20 + 35) &= ~0x20u;
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v21 == v57 )
              ++v6[1];
          }
          goto LABEL_29;
        }
        LODWORD(v50) = 0;
        v22 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = *(_QWORD *)v22;
        if ( (unsigned int)MiPteInShadowRange(v22) )
        {
          if ( (MiFlags & 0xC00000) != 0 )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 912) != 1 && (v23 & 1) != 0 && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              Process = (__int64)KeGetCurrentThread()->ApcState.Process;
              v40 = *(_QWORD *)(Process + 1928);
              if ( v40 )
              {
                v41 = HIBYTE(v23);
                v42 = *(_QWORD *)(v40 + 8 * ((v22 >> 3) & 0x1FF));
                Process = (unsigned __int8)v42;
                LOBYTE(Process) = v42 & 0x20;
                if ( (v42 & 0x20) == 0 )
                  v41 = HIBYTE(v23);
                HIBYTE(v23) = v41;
                if ( (v42 & 0x42) != 0 )
                  HIBYTE(v23) = v41;
              }
            }
          }
        }
        if ( (HIBYTE(v23) & 0xF) != 9 )
        {
          v25 = v51;
          if ( v54 )
            MI_WSLE_LOG_ACCESS(v51, (_BYTE *)a3);
          if ( (HIBYTE(v23) & 0xF) == 8 )
            v26 = 1;
          else
            v26 = v50;
          if ( (unsigned int)MiAppendWsleCluster(&v60, v25, a3) )
          {
            v27 = v53;
          }
          else
          {
            v34 = MiTerminateWsleCluster(&v60);
            v27 = v53;
            v53[1] += v34;
            MiAppendWsleCluster(&v60, v25, a3);
          }
          if ( *(__int64 *)(v20 + 40) < 0 )
          {
            v36 = *(_QWORD *)(v20 + 16);
            if ( (v36 & 0x400) == 0 || (v18 & 0x200) != 0 )
              goto LABEL_75;
            if ( qword_140C50780 && (v36 & 0x10) == 0 )
              v36 &= ~qword_140C50780;
            if ( (*(_DWORD *)(*(_QWORD *)(v36 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_75:
              ++v27[4];
          }
          else
          {
            ++v53[4];
          }
          v6 = v53;
          if ( !v26 )
            goto LABEL_29;
          goto LABEL_61;
        }
        MiWriteWsle(Process, v19);
        v6 = v53;
        MiDeleteValidSystemPage(v51, a3, v56 | 0x10u, v53);
        if ( v59 )
        {
LABEL_60:
          MiInsertTbFlushEntry(&v67, v19, 1LL, 0LL);
          goto LABEL_61;
        }
        v50 = 0LL;
        MiInitializeTbFlushStamps(&v50);
        v43 = v50;
        if ( (unsigned int)MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (v43 & 1) != 0 )
              v43 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v43;
            MiWritePteShadow(a3, v43);
LABEL_131:
            v44 = v50;
            if ( qword_140C50780 && (v50 & 0x10) == 0 )
              v44 = v50 & ~qword_140C50780;
            if ( (v44 & 0xFFFFFFFF00000000uLL) == 0 )
              goto LABEL_60;
LABEL_61:
            ++*v6;
            if ( v55 == 2 )
              MiReturnSystemCharges(v57, 1uLL, 1);
LABEL_29:
            v11 = a5;
            v9 = v51;
            goto LABEL_30;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v43 & 1) != 0 )
          {
            v43 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v43;
        goto LABEL_131;
      }
      if ( (v18 & 0x400) == 0 )
      {
        if ( (v18 & 0x800) == 0 )
        {
          if ( (v18 & 0x3E0) == 0 || (v11 & 8) != 0 )
            goto LABEL_30;
          MiReleasePageFileSpace(v57, v18, 1);
          v30 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(a3) )
          {
            if ( !(unsigned int)MiPteHasShadow() )
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v30 = ZeroPte | 0x8000000000000000uLL;
              }
              goto LABEL_42;
            }
            if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
              v30 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)a3 = v30;
            MiWritePteShadow(a3, v30);
          }
          else
          {
LABEL_42:
            *(_QWORD *)a3 = v30;
          }
          ++v6[4];
          goto LABEL_30;
        }
        v35 = MiLockTransitionLeafPageEx(a3);
        if ( !v35 )
          goto LABEL_32;
        if ( (a5 & 8) != 0 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v35) )
          {
            *(_BYTE *)(v46 + 35) &= ~0x20u;
            ++v6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( v56 && (unsigned int)MiIsPfnSystemCharged(v35) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v47 + 35) &= ~0x20u;
          }
          if ( (unsigned int)MiDeleteTransitionPte(a3) == 3 )
            ++v6[1];
          ++v6[4];
        }
        goto LABEL_30;
      }
      if ( (a5 & 8) != 0 )
        goto LABEL_30;
      if ( (v18 & 2) != 0 )
        goto LABEL_50;
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ++v6[4];
        if ( qword_140C50780 && (v18 & 0x10) == 0 )
          v18 &= ~qword_140C50780;
        v45 = **(_QWORD **)((((v18 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v9, v18 >> 16) == 3 && v45 == v57 )
          ++v6[1];
        goto LABEL_51;
      }
      if ( v49 )
        goto LABEL_50;
      if ( qword_140C50780 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C50780;
      if ( MiImageProtoChargedCommit(v65, v18 >> 16) )
LABEL_50:
        ++v6[4];
LABEL_51:
      v33 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(a3) )
        goto LABEL_52;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v33 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_52:
        *(_QWORD *)a3 = v33;
        goto LABEL_30;
      }
      if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
        v33 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)a3 = v33;
      MiWritePteShadow(a3, v33);
LABEL_30:
      a3 += 8LL;
      v28 = a3 < v16;
      if ( a3 != v16 )
      {
        if ( (a3 & 0x78) == 0 )
        {
          IsContended = MiWorkingSetIsContended(v9);
          v32 = valid;
          if ( IsContended || (unsigned int)MiPageTableLockIsContended(v9, valid) || KeShouldYieldProcessor() )
          {
            MiFlushTbList(&v67);
            v6[1] += MiTerminateWsleCluster(&v60);
            MiUnlockPageTableInternal(v9, v32);
            MiUnlockWorkingSetShared(v9, v48);
            valid = 0LL;
            MiLockWorkingSetShared(v9);
          }
        }
        goto LABEL_32;
      }
LABEL_33:
      v13 = valid;
      if ( !v28 )
      {
        v17 = v48;
        goto LABEL_35;
      }
    }
    MiFlushTbList(&v67);
    v6[1] += MiTerminateWsleCluster(&v60);
    MiUnlockPageTableInternal(v9, v13);
LABEL_54:
    valid = MiLockLowestValidPageTable(v9, a3, &v63);
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v9, valid);
      valid = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_32:
      v28 = a3 < v16;
      goto LABEL_33;
    }
    goto LABEL_13;
  }
LABEL_35:
  MiFlushTbList(&v67);
  if ( v13 )
  {
    v6[1] += MiTerminateWsleCluster(&v60);
    MiUnlockPageTableInternal(v9, v13);
  }
  return MiUnlockWorkingSetShared(v9, v17);
}

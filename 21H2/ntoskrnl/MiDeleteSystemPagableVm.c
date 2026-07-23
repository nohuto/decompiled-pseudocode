/*
 * XREFs of MiDeleteSystemPagableVm @ 0x1403107D0
 * Callers:
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403B52E8 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8640 (MmReturnChargesToLockPagedPool.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInitializeTbFlushStamps @ 0x14021B0C0 (MiInitializeTbFlushStamps.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReturnSystemCharges @ 0x140237D28 (MiReturnSystemCharges.c)
 *     MiWriteWsle @ 0x14023F36C (MiWriteWsle.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x140340820 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x140379DF0 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14037C4A8 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiDriverPageIsDangling @ 0x140535A34 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  int v9; // eax
  int v10; // ecx
  unsigned __int64 valid; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // r13
  unsigned __int8 v17; // bl
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rcx
  __int64 v27; // rdi
  __int64 Process; // rcx
  __int64 v29; // rax
  char v30; // rdx^7
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  ULONG_PTR v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  int IsContended; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  _DWORD *v44; // r9
  unsigned __int8 v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+4Ch] [rbp-B4h]
  BOOL v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+54h] [rbp-ACh]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+64h] [rbp-9Ch]
  __int64 v56; // [rsp+68h] [rbp-98h]
  unsigned __int64 v57; // [rsp+70h] [rbp-90h]
  _QWORD v58[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v59; // [rsp+90h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  _QWORD v64[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v65; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v66; // [rsp+E4h] [rbp-1Ch]
  __int16 v67; // [rsp+E6h] [rbp-1Ah]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+100h] [rbp+0h]
  __int128 v72; // [rsp+110h] [rbp+10h]
  __int128 v73; // [rsp+120h] [rbp+20h]
  __int128 v74; // [rsp+130h] [rbp+30h]
  __int128 v75; // [rsp+140h] [rbp+40h]
  __int128 v76; // [rsp+150h] [rbp+50h]
  __int128 v77; // [rsp+160h] [rbp+60h]
  __int128 v78; // [rsp+170h] [rbp+70h]
  __int128 v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+190h] [rbp+90h]
  int v81; // [rsp+210h] [rbp+110h]

  v56 = a1;
  v6 = a1;
  v63 = a2;
  v61 = 0LL;
  v67 = 0;
  v80 = 0LL;
  v51 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( a2 )
    v51 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v9 = 10;
  v48 = 0LL;
  v10 = 0;
  v55 = a5 & 1;
  valid = 0LL;
  v49 = 0;
  if ( (a5 & 1) == 0 )
    v9 = 14;
  DWORD2(v60) = v9;
  v52 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v60) = v9 | 0x10;
  v12 = *(_BYTE *)(v6 + 184) & 7;
  v13 = 0LL;
  v62 = 0LL;
  v14 = (__int64)(a3 << 25) >> 16;
  v50 = 0;
  if ( (unsigned __int8)(v12 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( dword_140C4E868 )
        v10 = 1;
      v49 = v10;
    }
    v13 = 2LL;
    v50 = 2;
  }
  v15 = a5 & 8;
  v81 = v15;
  v16 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v53 = v16;
  v68 = 20LL;
  v65 = v13;
  v66 = 0;
  v69 = 0LL;
  v70 = 0LL;
  if ( !v15 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v58[2] = (unsigned int)a4;
    v58[0] = 0LL;
    v58[1] = (__int64)(a3 << 25) >> 16;
    if ( (_BYTE)v12 == 4 )
    {
      v58[0] = 6LL;
    }
    else if ( (_BYTE)v12 == 3 )
    {
      v58[0] = 4LL;
    }
    else
    {
      v58[0] = v58[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v64[1] = 24LL;
    v64[0] = v58;
    EtwTraceKernelEvent((int)v64, 1, 0x20000001u, 633, 289413890);
  }
  v57 = a3 + 8 * a4;
  v17 = MiLockWorkingSetShared(v6, v14, v12, (_DWORD *)v13);
  v46 = v17;
  while ( a3 < v57 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(&v65);
      a6[1] += MiTerminateWsleCluster(&v59);
      MiUnlockPageTableInternal(v6, valid);
    }
    valid = MiLockLowestValidPageTable(v6, a3, &v61);
    v48 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v6, valid);
      valid = 0LL;
      v48 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_27:
    v18 = MI_READ_PTE_LOCK_FREE(a3);
    v47 = v18;
    v19 = v18;
    if ( !v18 )
      goto LABEL_133;
    if ( (v18 & 1) != 0 )
    {
      v20 = (__int64)((a3 << 25) - v62) >> 16;
      v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v47) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v22 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      if ( v81 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v21) )
        {
          v54 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v54, v23, v24, v25);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          *(_BYTE *)(v21 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = v53;
          if ( v22 == v53 )
            ++a6[1];
          goto LABEL_132;
        }
LABEL_131:
        v16 = v53;
LABEL_132:
        v15 = v81;
        goto LABEL_133;
      }
      v26 = (__int64 *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v27 = *v26;
      if ( (unsigned int)MiPteInShadowRange(v26)
        && (unsigned int)MiPteHasShadow()
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v29 = *(_QWORD *)(Process + 1928);
        if ( v29 )
        {
          v30 = HIBYTE(v27);
          v31 = *(_QWORD *)(v29 + 8 * ((((v20 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          Process = (unsigned __int8)v31;
          LOBYTE(Process) = v31 & 0x20;
          if ( (v31 & 0x20) == 0 )
            v30 = HIBYTE(v27);
          HIBYTE(v27) = v30;
          if ( (v31 & 0x42) != 0 )
            HIBYTE(v27) = v30;
        }
        LOWORD(v19) = v47;
      }
      if ( (HIBYTE(v27) & 0xF) == 9 )
      {
        MiWriteWsle(Process, v20);
        v6 = v56;
        MiDeleteValidSystemPage(v56, a3, v52 | 0x10u, a6);
        if ( v55 )
          goto LABEL_63;
        v47 = 0LL;
        MiInitializeTbFlushStamps(&v47);
        v32 = v47;
        if ( (unsigned int)MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v32 & 1) != 0 )
              v32 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v32;
            MiWritePteShadow(a3, v32);
LABEL_59:
            v33 = v47;
            if ( qword_140C4DF80 && (v47 & 0x10) == 0 )
              v33 = v47 & ~qword_140C4DF80;
            if ( (v33 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_63:
              MiInsertTbFlushEntry(&v65, v20, 1LL, 0LL);
LABEL_77:
            ++*a6;
            v16 = v53;
            if ( v50 == 2 )
              MiReturnSystemCharges(v53, 1uLL, 1);
            goto LABEL_132;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v32 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v32;
        goto LABEL_59;
      }
      v6 = v56;
      if ( v49 )
        MI_WSLE_LOG_ACCESS(v56, a3);
      if ( !(unsigned int)MiAppendWsleCluster(&v59, v6, a3) )
      {
        a6[1] += MiTerminateWsleCluster(&v59);
        MiAppendWsleCluster(&v59, v6, a3);
      }
      if ( !(unsigned int)MI_PFN_IS_PROTO(v21) )
        goto LABEL_75;
      v34 = *(_QWORD *)(v21 + 16);
      if ( (v34 & 0x400) == 0 || (v19 & 0x200) != 0 )
        goto LABEL_75;
      if ( qword_140C4DF80 && (v34 & 0x10) == 0 )
        v34 &= ~qword_140C4DF80;
      if ( (*(_DWORD *)(*(_QWORD *)(v34 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_75:
        ++a6[3];
      if ( (HIBYTE(v27) & 0xF) != 8 )
        goto LABEL_131;
      goto LABEL_77;
    }
    if ( (v18 & 0x400) == 0 )
    {
      if ( (v18 & 0x800) != 0 )
      {
        v37 = MiLockTransitionLeafPage(a3, 0LL);
        if ( !v37 )
          goto LABEL_140;
        if ( v15 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v37) )
          {
            *(_BYTE *)(v39 + 35) &= ~0x20u;
            ++a6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( v52 && (unsigned int)MiIsPfnSystemCharged(v37) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v37 + 35) &= ~0x20u;
          }
          LOBYTE(v38) = 17;
          if ( (unsigned int)MiDeleteTransitionPte(a3, v37, v38, 1) == 3 )
            ++a6[1];
          ++a6[3];
        }
        goto LABEL_133;
      }
      if ( !v15 && (v18 & 0x3E0) != 0 )
      {
        MiReleasePageFileSpace(v16, v18, 1);
        v40 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(a3) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
              v40 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)a3 = v40;
            MiWritePteShadow(a3, v40);
            ++a6[3];
            goto LABEL_133;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v40 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v40;
        ++a6[3];
      }
      goto LABEL_133;
    }
    if ( v15 )
      goto LABEL_133;
    if ( (v18 & 2) == 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ++a6[3];
        if ( qword_140C4DF80 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DF80;
        }
        v35 = **(_QWORD **)((((v19 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v6, v19 >> 16) == 3 && v35 == v16 )
          ++a6[1];
        goto LABEL_97;
      }
      if ( !v51 )
      {
        if ( qword_140C4DF80 )
        {
          if ( (v19 & 0x10) != 0 )
            v19 &= ~0x10uLL;
          else
            v19 &= ~qword_140C4DF80;
        }
        if ( !(unsigned int)MiImageProtoChargedCommit(v63, v19 >> 16) )
          goto LABEL_97;
      }
    }
    ++a6[3];
LABEL_97:
    v36 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(a3) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v36 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a3 = v36;
        MiWritePteShadow(a3, v36);
        goto LABEL_133;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v36 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v36;
LABEL_133:
    a3 += 8LL;
    if ( a3 == v57 || (a3 & 0x78) != 0 )
    {
      valid = v48;
LABEL_140:
      v17 = v46;
      continue;
    }
    IsContended = MiWorkingSetIsContended(v6);
    valid = v48;
    if ( !IsContended && !(unsigned int)MiPageTableLockIsContended(v6, v48) && !KeShouldYieldProcessor() )
      goto LABEL_140;
    MiFlushTbList(&v65);
    a6[1] += MiTerminateWsleCluster(&v59);
    MiUnlockPageTableInternal(v6, valid);
    v17 = v46;
    MiUnlockWorkingSetShared(v6, v46);
    valid = 0LL;
    v48 = 0LL;
    MiLockWorkingSetShared(v6, v42, v43, v44);
  }
  MiFlushTbList(&v65);
  if ( valid )
  {
    a6[1] += MiTerminateWsleCluster(&v59);
    MiUnlockPageTableInternal(v6, valid);
  }
  return MiUnlockWorkingSetShared(v6, v17);
}

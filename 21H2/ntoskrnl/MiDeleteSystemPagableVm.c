/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140305A80
 * Callers:
 *     MmFreePoolMemory @ 0x1402FA848 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403B5178 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C84E0 (MmReturnChargesToLockPagedPool.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14028D248 (MI_PROTO_FORMAT_COMBINED.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiInitializeTbFlushStamps @ 0x1402967E0 (MiInitializeTbFlushStamps.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiReturnSystemCharges @ 0x1402B9B18 (MiReturnSystemCharges.c)
 *     MiWriteWsle @ 0x1402C0ED0 (MiWriteWsle.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x140335AD0 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     MiDecrementCombinedPte @ 0x140366EC4 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x14037A2A0 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14037C958 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiDriverPageIsDangling @ 0x1405357F4 (MiDriverPageIsDangling.c)
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
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned __int64 v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 Process; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  char v34; // al
  char v35; // di
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // r8
  ULONG_PTR v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  int IsContended; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  _DWORD *v54; // r9
  unsigned __int8 v56; // [rsp+30h] [rbp-D0h]
  __int64 v57; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+48h] [rbp-B8h]
  int v60; // [rsp+4Ch] [rbp-B4h]
  BOOL v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+54h] [rbp-ACh]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch]
  __int64 v66; // [rsp+68h] [rbp-98h]
  unsigned __int64 v67; // [rsp+70h] [rbp-90h]
  _QWORD v68[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h] BYREF
  __int128 v70; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h]
  _QWORD v74[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v75; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v76; // [rsp+E4h] [rbp-1Ch]
  __int16 v77; // [rsp+E6h] [rbp-1Ah]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  __int128 v81; // [rsp+100h] [rbp+0h]
  __int128 v82; // [rsp+110h] [rbp+10h]
  __int128 v83; // [rsp+120h] [rbp+20h]
  __int128 v84; // [rsp+130h] [rbp+30h]
  __int128 v85; // [rsp+140h] [rbp+40h]
  __int128 v86; // [rsp+150h] [rbp+50h]
  __int128 v87; // [rsp+160h] [rbp+60h]
  __int128 v88; // [rsp+170h] [rbp+70h]
  __int128 v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+90h]
  int v91; // [rsp+210h] [rbp+110h]

  v66 = a1;
  v6 = a1;
  v73 = a2;
  v71 = 0LL;
  v77 = 0;
  v90 = 0LL;
  v61 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  if ( a2 )
    v61 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v9 = 10;
  v58 = 0LL;
  v10 = 0;
  v65 = a5 & 1;
  valid = 0LL;
  v59 = 0;
  if ( (a5 & 1) == 0 )
    v9 = 14;
  DWORD2(v70) = v9;
  v62 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v70) = v9 | 0x10;
  v12 = *(_BYTE *)(v6 + 184) & 7;
  v13 = 0LL;
  v72 = 0LL;
  v14 = (__int64)(a3 << 25) >> 16;
  v60 = 0;
  if ( (unsigned __int8)(v12 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( dword_140C4E828 )
        v10 = 1;
      v59 = v10;
    }
    v13 = 2LL;
    v60 = 2;
  }
  v15 = a5 & 8;
  v91 = v15;
  v16 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v63 = v16;
  v78 = 20LL;
  v75 = v13;
  v76 = 0;
  v79 = 0LL;
  v80 = 0LL;
  if ( !v15 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v68[2] = (unsigned int)a4;
    v68[0] = 0LL;
    v68[1] = (__int64)(a3 << 25) >> 16;
    if ( (_BYTE)v12 == 4 )
    {
      v68[0] = 6LL;
    }
    else if ( (_BYTE)v12 == 3 )
    {
      v68[0] = 4LL;
    }
    else
    {
      v68[0] = v68[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v74[1] = 24LL;
    v74[0] = v68;
    EtwTraceKernelEvent((int)v74, 1, 0x20000001u, 633, 289413890);
  }
  v67 = a3 + 8 * a4;
  v17 = MiLockWorkingSetShared(v6, v14, v12, (_DWORD *)v13);
  v56 = v17;
  while ( a3 < v67 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(&v75);
      a6[1] += MiTerminateWsleCluster(&v69);
      MiUnlockPageTableInternal(v6, valid);
    }
    valid = MiLockLowestValidPageTable(v6, a3, &v71);
    v58 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v6, valid);
      valid = 0LL;
      v58 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_27:
    v18 = MI_READ_PTE_LOCK_FREE(a3);
    v57 = v18;
    v20 = v18;
    if ( !v18 )
      goto LABEL_133;
    if ( (v18 & 1) != 0 )
    {
      v21 = (__int64)((a3 << 25) - v72) >> 16;
      v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v57) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v24 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v23 + 40) >> 39) & 0x3FFLL));
      if ( v91 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v23) )
        {
          v64 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v64, v25, v26, v27);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          *(_BYTE *)(v23 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = v63;
          if ( v24 == v63 )
            ++a6[1];
          goto LABEL_132;
        }
LABEL_131:
        v16 = v63;
LABEL_132:
        v15 = v91;
        goto LABEL_133;
      }
      v28 = (unsigned __int64 *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = *v28;
      if ( (unsigned int)MiPteInShadowRange(v28, v22)
        && (unsigned int)MiPteHasShadow()
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v31 = *(_QWORD *)(Process + 1928);
        if ( v31 )
        {
          v32 = v29 | 0x20;
          v33 = *(_QWORD *)(v31 + 8 * ((((v21 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          Process = (unsigned __int8)v33;
          LOBYTE(Process) = v33 & 0x20;
          if ( (v33 & 0x20) == 0 )
            v32 = v29;
          v29 = v32;
          if ( (v33 & 0x42) != 0 )
            v29 = v32 | 0x42;
        }
        LOWORD(v20) = v57;
      }
      v34 = HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7));
      v35 = v34 & 0xF;
      if ( (v34 & 0xF) == 9 )
      {
        MiWriteWsle(Process, v21, v34 & 0xF0 | 0xA);
        v6 = v66;
        MiDeleteValidSystemPage(v66, a3, v62 | 0x10u, a6);
        if ( v65 )
          goto LABEL_63;
        v57 = 0LL;
        MiInitializeTbFlushStamps(&v57, v36);
        v37 = v57;
        if ( (unsigned int)MiPteInShadowRange(a3, v38) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E008) && (v37 & 1) != 0 )
              v37 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v37;
            MiWritePteShadow(a3, v37, v39);
LABEL_59:
            v40 = v57;
            if ( qword_140C4DF40 && (v57 & 0x10) == 0 )
              v40 = v57 & ~qword_140C4DF40;
            if ( (v40 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_63:
              MiInsertTbFlushEntry(&v75, v21, 1LL, 0LL);
LABEL_77:
            ++*a6;
            v16 = v63;
            if ( v60 == 2 )
              MiReturnSystemCharges(v63, 1uLL, 1);
            goto LABEL_132;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v37 & 1) != 0 )
          {
            v37 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v37;
        goto LABEL_59;
      }
      v6 = v66;
      if ( v59 )
        MI_WSLE_LOG_ACCESS(v66, a3);
      if ( !(unsigned int)MiAppendWsleCluster(&v69, v6, a3) )
      {
        a6[1] += MiTerminateWsleCluster(&v69);
        MiAppendWsleCluster(&v69, v6, a3);
      }
      if ( !(unsigned int)MI_PFN_IS_PROTO(v23) )
        goto LABEL_75;
      v41 = *(_QWORD *)(v23 + 16);
      if ( (v41 & 0x400) == 0 || (v20 & 0x200) != 0 )
        goto LABEL_75;
      if ( qword_140C4DF40 && (v41 & 0x10) == 0 )
        v41 &= ~qword_140C4DF40;
      if ( (*(_DWORD *)(*(_QWORD *)(v41 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_75:
        ++a6[3];
      if ( v35 != 8 )
        goto LABEL_131;
      goto LABEL_77;
    }
    if ( (v18 & 0x400) == 0 )
    {
      if ( (v18 & 0x800) != 0 )
      {
        v45 = MiLockTransitionLeafPage(a3);
        if ( !v45 )
          goto LABEL_140;
        if ( v15 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v45) )
          {
            *(_BYTE *)(v47 + 35) &= ~0x20u;
            ++a6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( v62 && (unsigned int)MiIsPfnSystemCharged(v45) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v45 + 35) &= ~0x20u;
          }
          LOBYTE(v46) = 17;
          if ( (unsigned int)MiDeleteTransitionPte(a3, v45, v46, 1) == 3 )
            ++a6[1];
          ++a6[3];
        }
        goto LABEL_133;
      }
      if ( !v15 && (v18 & 0x3E0) != 0 )
      {
        MiReleasePageFileSpace(v16, v18, 1);
        v48 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(a3, v49) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
              v48 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)a3 = v48;
            MiWritePteShadow(a3, v48, v50);
            ++a6[3];
            goto LABEL_133;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v48 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v48;
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
        if ( qword_140C4DF40 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140C4DF40;
        }
        v42 = **(_QWORD **)((((v20 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v6, v20 >> 16) == 3 && v42 == v16 )
          ++a6[1];
        goto LABEL_97;
      }
      if ( !v61 )
      {
        if ( qword_140C4DF40 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140C4DF40;
        }
        if ( !(unsigned int)MiImageProtoChargedCommit(v73, v20 >> 16) )
          goto LABEL_97;
      }
    }
    ++a6[3];
LABEL_97:
    v43 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(a3, v19) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v43 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a3 = v43;
        MiWritePteShadow(a3, v43, v44);
        goto LABEL_133;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v43 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v43;
LABEL_133:
    a3 += 8LL;
    if ( a3 == v67 || (a3 & 0x78) != 0 )
    {
      valid = v58;
LABEL_140:
      v17 = v56;
      continue;
    }
    IsContended = MiWorkingSetIsContended(v6);
    valid = v58;
    if ( !IsContended && !(unsigned int)MiPageTableLockIsContended(v6) && !KeShouldYieldProcessor() )
      goto LABEL_140;
    MiFlushTbList(&v75);
    a6[1] += MiTerminateWsleCluster(&v69);
    MiUnlockPageTableInternal(v6, valid);
    v17 = v56;
    MiUnlockWorkingSetShared(v6, v56);
    valid = 0LL;
    v58 = 0LL;
    MiLockWorkingSetShared(v6, v52, v53, v54);
  }
  MiFlushTbList(&v75);
  if ( valid )
  {
    a6[1] += MiTerminateWsleCluster(&v69);
    MiUnlockPageTableInternal(v6, valid);
  }
  return MiUnlockWorkingSetShared(v6, v17);
}

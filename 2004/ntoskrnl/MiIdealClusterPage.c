/*
 * XREFs of MiIdealClusterPage @ 0x140550974
 * Callers:
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140229704 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14022C020 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiReturnPfnReferenceCount @ 0x14035CB94 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EFF78 (MiConvertEntireLargePageToSmall.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x14055E2D0 (MiSwapHardFaultPage.c)
 */

unsigned __int8 *__fastcall MiIdealClusterPage(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  bool v14; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // r15
  __int64 v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned int v29; // ebx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r15
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // ebx
  signed __int32 v36; // r13d
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v40; // eax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // rdx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned int v48; // eax
  __int64 v49; // r9
  unsigned int v50; // r11d
  __int64 LargePage; // rax
  __int64 v52; // rdi
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  unsigned __int64 v57; // r8
  struct _KPRCB *v58; // r9
  __int64 v59; // rdx
  signed __int32 v60; // eax
  __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  ULONG_PTR v64; // rcx
  __int64 v65; // rax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  __int64 v70; // rdi
  int v71; // eax
  bool v72; // bl
  __int64 v73; // rdx
  struct _KPRCB *v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  void *v79; // rax
  void *v80; // r13
  void *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  _DWORD *v84; // r9
  __int64 v85; // rbx
  unsigned __int64 v86; // r8
  struct _KPRCB *v87; // r9
  __int64 v88; // rdx
  signed __int32 v89; // eax
  signed __int32 v90; // eax
  char v91; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v92[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v93; // [rsp+68h] [rbp-98h]
  __int64 v94; // [rsp+70h] [rbp-90h]
  __int64 v95; // [rsp+78h] [rbp-88h]
  void *Buf2; // [rsp+80h] [rbp-80h]
  ULONG_PTR v97; // [rsp+88h] [rbp-78h] BYREF
  int v98; // [rsp+90h] [rbp-70h] BYREF
  int v99; // [rsp+94h] [rbp-6Ch] BYREF
  int v100; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v101; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v102; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v103; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v105; // [rsp+C0h] [rbp-40h]
  __int64 v106; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v108; // [rsp+D8h] [rbp-28h]
  _BYTE *v109; // [rsp+E0h] [rbp-20h]
  __int128 v110; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-8h]
  __int64 v112; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+108h] [rbp+8h] BYREF
  __int128 v114; // [rsp+118h] [rbp+18h]
  __int128 v115; // [rsp+128h] [rbp+28h]
  _OWORD v116[3]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v117[128]; // [rsp+170h] [rbp+70h] BYREF

  v93 = a2;
  v102 = a1;
  v103 = a4;
  Buf2 = a6;
  v10 = *((_DWORD *)a1 + 20);
  v11 = a1[7];
  v12 = *a1;
  LODWORD(v94) = v10 >> 6;
  *a7 = 0;
  v109 = a7;
  v112 = a3;
  v13 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x100000) == 0;
  v92[0] = 0;
  v106 = 0LL;
  v97 = 0LL;
  Buf1 = 0LL;
  v104 = v11;
  v114 = 0LL;
  v105 = v13;
  v115 = 0LL;
  v107 = 16LL;
  v110 = 0LL;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v106);
    if ( !ProtoPteAddress || !v106 || ProtoPteAddress != a3 )
      return a5;
    v16 = *(_QWORD *)(v106 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v106 + 44) - (unsigned __int64)(*(_DWORD *)(v106 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 || a3 - 8 * v13 < v16 || a3 + 8 * (16 - v13) > v17 )
      return a5;
    v18 = *(_WORD *)(*(_QWORD *)v106 + 60LL) & 0x3FF;
  }
  else
  {
    v19 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
      return a5;
    v18 = *(unsigned __int16 *)(v11 + 174);
  }
  v20 = (__int64 *)v117;
  v21 = 16LL;
  v22 = 1LL;
  v23 = *(_QWORD *)(qword_140C4E448 + 8 * v18);
  v24 = a3 - 8 * v13;
  do
  {
    v25 = MI_READ_PTE_LOCK_FREE(v24);
    v24 += 8LL;
    *v20++ = v25;
    --v21;
  }
  while ( v21 );
  v26 = -1LL;
  v27 = (__int64)(a5 + 0x58000000000LL) / 48;
  v28 = (unsigned __int64 *)v117;
  v108 = v27;
  v29 = 0;
  while ( 1 )
  {
    v30 = *v28;
    v95 = v30;
    v101 = v30;
    if ( (v30 & 1) != 0 )
      break;
    ++v29;
    ++v28;
    if ( v29 >= 0x10 )
      goto LABEL_36;
  }
  v31 = v30;
  if ( MiPteInShadowRange((unsigned __int64)&v101)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v101 >> 3) & 0x1FF));
      if ( (v33 & 0x20) != 0 )
        v31 = v95 | 0x20;
      if ( (v33 & 0x42) != 0 )
        v31 |= 0x42uLL;
    }
    else
    {
      v31 = v101;
    }
  }
  v26 = (v31 >> 12) & 0xFFFFFFFFFLL;
  if ( (v26 & 0xF) != v29 )
    return a5;
  LOBYTE(v27) = v108;
LABEL_36:
  v95 = 0LL;
  v91 = 0;
  if ( v29 != 16 )
  {
    v26 += v13 - v29;
    if ( v26 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v26 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      return a5;
    v95 = 48 * v26 - 0x58000000000LL;
    if ( (unsigned __int8 *)v95 != a5 )
    {
      v35 = *((_DWORD *)MiSearchNumaNodeTable(v26) + 2);
      LODWORD(v93) = dword_140C4DCF8 & v26;
      goto LABEL_46;
    }
LABEL_43:
    *v109 = 1;
    return a5;
  }
  if ( (v27 & 0xF) == v13 )
    goto LABEL_43;
  if ( (int)MiAcquireNonPagedResources(v23, 1uLL, 0LL, 0) < 0 )
    return a5;
  v91 = 1;
  MiInitializePageColorBase(v104, (*(_DWORD *)(v93 + 48) >> 12) & 0x3F, (__int64)&v110);
  v35 = HIDWORD(v110) >> byte_140C4DC8C;
  v36 = _InterlockedExchangeAdd((volatile signed __int32 *)v110, 1u);
  LODWORD(v93) = HIDWORD(v110) | DWORD2(v110) & v36;
LABEL_46:
  *(_BYTE *)(*(_QWORD *)(v23 + 16) + 4544LL * v35 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0LL, v34) )
  {
    if ( v91 == 1 )
    {
      MiReturnCommit(v23, 1LL);
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_58;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_58;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v40 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v40;
          LODWORD(CachedResidentAvailable) = v40;
          if ( v14 )
            return a5;
        }
        while ( v40 != -1 && (unsigned __int64)(v40 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v22 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v22 )
LABEL_58:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v22);
    }
    return a5;
  }
  v41 = *((_OWORD *)a5 + 1);
  v116[0] = *(_OWORD *)a5;
  v42 = *((_OWORD *)a5 + 2);
  v116[1] = v41;
  v116[2] = v42;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0LL);
    LOBYTE(v43) = 17;
    v44 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v45 = *((_OWORD *)Buf2 + 2);
    v114 = v44;
    v115 = v45;
    MiUnlockProtoPoolPage((__int64)Buf2, v43);
  }
  v111 = MiReleaseFaultState((__int64)(v102 + 7), 1u, v92);
  if ( v91 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v92[0] = CurrentIrql;
    v48 = MiProtectionToCacheAttribute((v103 >> 5) & 0x1F);
    LargePage = MiGetLargePage(v23, v50, v48, v93, 4, v49);
    v94 = LargePage;
    v52 = LargePage;
    if ( LargePage )
    {
      MiConvertEntireLargePageToSmall(LargePage, 2, 2LL, 1LL, 0LL, 0LL);
      v61 = v52;
      v62 = v105;
      v63 = (unsigned __int128)((v61 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v64 = ((unsigned __int64)v63 >> 63) + (v63 >> 3);
      v65 = v95;
      v97 = v64;
      do
      {
        v104 = v65;
        if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v64, 1uLL);
          v64 = v97;
        }
        v105 = v64 & 0xF;
        if ( v105 == v62 )
        {
          v26 = v64;
        }
        else
        {
          MiReleaseFreshPage(v94);
          v64 = v97;
        }
        v65 = v94;
        if ( v105 != v62 )
          v65 = v104;
        v97 = ++v64;
        v14 = v107-- == 1;
        v94 += 48LL;
      }
      while ( !v14 );
      v95 = v65;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v68 = v67->SchedulerAssist;
            v69 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v69 & v68[5]) == 0;
            v68[5] &= v69;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v67);
          }
        }
      }
      __writecr8(CurrentIrql);
      LODWORD(v93) = 0;
      goto LABEL_104;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && CurrentIrql <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v54);
        }
      }
    }
    __writecr8(CurrentIrql);
    MiReturnCommit(v23, 1LL);
    v57 = 1LL;
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_84;
    v58 = KeGetCurrentPrcb();
    v59 = (int)v58->CachedResidentAvailable;
    if ( (_DWORD)v59 == -1 )
      goto LABEL_84;
    if ( (unsigned __int64)(v59 + 1) <= 0x100 )
    {
      do
      {
        v60 = _InterlockedCompareExchange((volatile signed __int32 *)&v58->CachedResidentAvailable, v59 + 1, v59);
        v14 = (_DWORD)v59 == v60;
        LODWORD(v59) = v60;
        if ( v14 )
          goto LABEL_85;
      }
      while ( v60 != -1 && (unsigned __int64)(v60 + 1LL) <= 0x100 );
    }
    if ( (int)v59 > 192
      && (_DWORD)v59 == _InterlockedCompareExchange((volatile signed __int32 *)&v58->CachedResidentAvailable, 192, v59) )
    {
      v57 = (int)v59 - 192 + 1LL;
    }
    if ( v57 )
LABEL_84:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v57);
LABEL_85:
    LODWORD(v93) = -1073741801;
LABEL_104:
    v70 = v95;
    goto LABEL_108;
  }
  v70 = 48 * v26 - 0x58000000000LL;
  v71 = ((((v94 & 1) == 0) + 0x2000) << 17) | 8;
  if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
    v71 = (((v94 & 1) == 0) + 0x2000) << 17;
  LODWORD(v93) = MiFindContiguousPages(
                   v23,
                   v26,
                   v26,
                   0LL,
                   1uLL,
                   a5[34] >> 6,
                   v35,
                   0x80000000,
                   v71,
                   0LL,
                   (__int64 *)&v97);
LABEL_108:
  v72 = 0;
  MiRelockFaultState(v102 + 7, v111);
  if ( Buf2 )
  {
    *((_QWORD *)&v114 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL, (__int64)v74);
    v79 = Buf2;
    v98 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Buf2 + 6, 0x3FuLL) )
    {
      v80 = v79;
      do
      {
        do
          KeYieldProcessorEx(&v98, v76, v77, v78);
        while ( *((__int64 *)v80 + 3) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v80 + 6, 0x3FuLL) );
      v79 = Buf2;
    }
    v14 = memcmp(&Buf1, v79, 0x30uLL) == 0;
    v81 = Buf2;
    v72 = !v14;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v81, v82, v83, v84);
  }
  v99 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v99, v73, (__int64)v74, v75);
    while ( *((__int64 *)a5 + 3) < 0 );
  }
  if ( !v72 && !memcmp(v116, a5, 0x30uLL) && (*((_QWORD *)a5 + 3) & 0x4000000000000000LL) == 0 )
  {
    v85 = v112;
    if ( (unsigned int)MiIsFaultPteIntact((__int64)v102, *v102, v112, &v103) )
    {
      if ( (int)v93 < 0 )
      {
        MiRemoveLockedPageCharge((__int64)a5);
        return a5;
      }
      MiCopyPage(v26, v108, 0LL, (v103 & 0x40) != 0 ? 16 : 8);
      MiSwapHardFaultPage(v85, a5, v70);
      *(_WORD *)(v70 + 32) = 0;
      v86 = 1LL;
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_135;
      v87 = KeGetCurrentPrcb();
      v88 = (int)v87->CachedResidentAvailable;
      if ( (_DWORD)v88 == -1 )
        goto LABEL_135;
      if ( (unsigned __int64)(v88 + 1) <= 0x100 )
      {
        do
        {
          v89 = _InterlockedCompareExchange((volatile signed __int32 *)&v87->CachedResidentAvailable, v88 + 1, v88);
          v14 = (_DWORD)v88 == v89;
          LODWORD(v88) = v89;
          if ( v14 )
            goto LABEL_136;
        }
        while ( v89 != -1 && (unsigned __int64)(v89 + 1LL) <= 0x100 );
      }
      if ( (int)v88 > 192
        && (_DWORD)v88 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v87->CachedResidentAvailable,
                            192,
                            v88) )
      {
        v86 = (int)v88 - 192 + 1LL;
      }
      if ( v86 )
LABEL_135:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v86);
LABEL_136:
      *v109 = 1;
      return (unsigned __int8 *)v70;
    }
  }
  if ( (int)v93 >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage(v70);
    MiReturnCommit(v23, 1LL);
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_148;
    v74 = KeGetCurrentPrcb();
    v73 = (int)v74->CachedResidentAvailable;
    if ( (_DWORD)v73 == -1 )
      goto LABEL_148;
    v75 = 256LL;
    if ( (unsigned __int64)(v73 + 1) <= 0x100 )
    {
      do
      {
        v90 = _InterlockedCompareExchange((volatile signed __int32 *)&v74->CachedResidentAvailable, v73 + 1, v73);
        v14 = (_DWORD)v73 == v90;
        v73 = v90;
        if ( v14 )
          goto LABEL_149;
      }
      while ( v90 != -1 && (unsigned __int64)(v90 + 1LL) <= 0x100 );
    }
    if ( (int)v73 > 192
      && (_DWORD)v73 == _InterlockedCompareExchange((volatile signed __int32 *)&v74->CachedResidentAvailable, 192, v73) )
    {
      v22 = (int)v73 - 192 + 1LL;
    }
    if ( v22 )
LABEL_148:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v22);
LABEL_149:
    v100 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v100, v73, (__int64)v74, v75);
      while ( *((__int64 *)a5 + 3) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef((__int64)a5, v73, (__int64)v74, v75);
  return 0LL;
}

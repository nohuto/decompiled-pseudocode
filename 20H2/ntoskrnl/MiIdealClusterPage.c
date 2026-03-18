/*
 * XREFs of MiIdealClusterPage @ 0x140554344
 * Callers:
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140236AF4 (MiIsFaultPteIntact.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x1402CA924 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiReturnPfnReferenceCount @ 0x14032D51C (MiReturnPfnReferenceCount.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x140561CA0 (MiSwapHardFaultPage.c)
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
  unsigned __int64 v23; // r12
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
  unsigned int v34; // ebx
  signed __int32 v35; // r13d
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v39; // eax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v46; // eax
  __int64 v47; // r9
  unsigned int v48; // r11d
  __int64 LargePage; // rax
  __int64 v50; // rdi
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  unsigned __int64 v55; // r8
  struct _KPRCB *v56; // r9
  __int64 v57; // rdx
  signed __int32 v58; // eax
  __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  __int64 v61; // rdx
  ULONG_PTR v62; // rcx
  __int64 v63; // rax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  __int64 v68; // rdi
  int v69; // eax
  bool v70; // bl
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  void *v77; // rax
  void *v78; // r13
  void *v79; // rax
  __int64 v80; // rbx
  unsigned __int64 v81; // r8
  struct _KPRCB *v82; // r9
  __int64 v83; // rdx
  signed __int32 v84; // eax
  __int64 v85; // rdx
  struct _KPRCB *v86; // r8
  __int64 v87; // r9
  signed __int32 v88; // eax
  char v89; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v90[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  __int64 v93; // [rsp+78h] [rbp-88h]
  void *Buf2; // [rsp+80h] [rbp-80h]
  ULONG_PTR v95; // [rsp+88h] [rbp-78h] BYREF
  int v96; // [rsp+90h] [rbp-70h] BYREF
  int v97; // [rsp+94h] [rbp-6Ch] BYREF
  int v98; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v99; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v100; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v101; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v102; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v103; // [rsp+C0h] [rbp-40h]
  __int64 v104; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v106; // [rsp+D8h] [rbp-28h]
  _BYTE *v107; // [rsp+E0h] [rbp-20h]
  __int128 v108; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v109; // [rsp+F8h] [rbp-8h]
  __int64 v110; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+108h] [rbp+8h] BYREF
  __int128 v112; // [rsp+118h] [rbp+18h]
  __int128 v113; // [rsp+128h] [rbp+28h]
  _OWORD v114[3]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v115[128]; // [rsp+170h] [rbp+70h] BYREF

  v91 = a2;
  v100 = a1;
  v101 = a4;
  Buf2 = a6;
  v10 = *((_DWORD *)a1 + 20);
  v11 = a1[7];
  v12 = *a1;
  LODWORD(v92) = v10 >> 6;
  *a7 = 0;
  v107 = a7;
  v110 = a3;
  v13 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x100000) == 0;
  v90[0] = 0;
  v104 = 0LL;
  v95 = 0LL;
  Buf1 = 0LL;
  v102 = v11;
  v112 = 0LL;
  v103 = v13;
  v113 = 0LL;
  v105 = 16LL;
  v108 = 0LL;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v104);
    if ( !ProtoPteAddress || !v104 || ProtoPteAddress != a3 )
      return a5;
    v16 = *(_QWORD *)(v104 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v104 + 44) - (unsigned __int64)(*(_DWORD *)(v104 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 || a3 - 8 * v13 < v16 || a3 + 8 * (16 - v13) > v17 )
      return a5;
    v18 = *(_WORD *)(*(_QWORD *)v104 + 60LL) & 0x3FF;
  }
  else
  {
    v19 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
      return a5;
    v18 = *(unsigned __int16 *)(v11 + 174);
  }
  v20 = (__int64 *)v115;
  v21 = 16LL;
  v22 = 1LL;
  v23 = *(_QWORD *)(qword_140C4E4C8 + 8 * v18);
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
  v28 = (unsigned __int64 *)v115;
  v106 = v27;
  v29 = 0;
  while ( 1 )
  {
    v30 = *v28;
    v93 = v30;
    v99 = v30;
    if ( (v30 & 1) != 0 )
      break;
    ++v29;
    ++v28;
    if ( v29 >= 0x10 )
      goto LABEL_36;
  }
  v31 = v30;
  if ( MiPteInShadowRange((unsigned __int64)&v99)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v99 >> 3) & 0x1FF));
      if ( (v33 & 0x20) != 0 )
        v31 = v93 | 0x20;
      if ( (v33 & 0x42) != 0 )
        v31 |= 0x42uLL;
    }
    else
    {
      v31 = v99;
    }
  }
  v26 = (v31 >> 12) & 0xFFFFFFFFFLL;
  if ( (v26 & 0xF) != v29 )
    return a5;
  LOBYTE(v27) = v106;
LABEL_36:
  v93 = 0LL;
  v89 = 0;
  if ( v29 != 16 )
  {
    v26 += v13 - v29;
    if ( v26 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v26 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      return a5;
    v93 = 48 * v26 - 0x58000000000LL;
    if ( (unsigned __int8 *)v93 != a5 )
    {
      v34 = *((_DWORD *)MiSearchNumaNodeTable(v26) + 2);
      LODWORD(v91) = dword_140C4DD78 & v26;
      goto LABEL_46;
    }
LABEL_43:
    *v107 = 1;
    return a5;
  }
  if ( (v27 & 0xF) == v13 )
    goto LABEL_43;
  if ( (int)MiAcquireNonPagedResources(v23, 1uLL, 0LL, 0) < 0 )
    return a5;
  v89 = 1;
  MiInitializePageColorBase(v102, (*(_DWORD *)(v91 + 48) >> 12) & 0x3F, (__int64)&v108);
  v34 = HIDWORD(v108) >> byte_140C4DD0C;
  v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v108, 1u);
  LODWORD(v91) = HIDWORD(v108) | DWORD2(v108) & v35;
LABEL_46:
  *(_BYTE *)(*(_QWORD *)(v23 + 16) + 4544LL * v34 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
  {
    if ( v89 == 1 )
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
          v39 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v39;
          LODWORD(CachedResidentAvailable) = v39;
          if ( v14 )
            return a5;
        }
        while ( v39 != -1 && (unsigned __int64)(v39 + 1LL) <= 0x100 );
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
  v40 = *((_OWORD *)a5 + 1);
  v114[0] = *(_OWORD *)a5;
  v41 = *((_OWORD *)a5 + 2);
  v114[1] = v40;
  v114[2] = v41;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0);
    v42 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v43 = *((_OWORD *)Buf2 + 2);
    v112 = v42;
    v113 = v43;
    MiUnlockProtoPoolPage((__int64)Buf2, 0x11u);
  }
  v109 = MiReleaseFaultState((__int64)(v100 + 7), 1u, v90);
  if ( v89 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v90[0] = CurrentIrql;
    v46 = MiProtectionToCacheAttribute((v101 >> 5) & 0x1F);
    LargePage = MiGetLargePage(v23, v48, v46, v91, 4, v47);
    v92 = LargePage;
    v50 = LargePage;
    if ( LargePage )
    {
      MiConvertEntireLargePageToSmall(LargePage, 2, 2LL, 1LL, 0LL, 0LL);
      v59 = v50;
      v60 = v103;
      v61 = (unsigned __int128)((v59 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v62 = ((unsigned __int64)v61 >> 63) + (v61 >> 3);
      v63 = v93;
      v95 = v62;
      do
      {
        v102 = v63;
        if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v62, 1uLL);
          v62 = v95;
        }
        v103 = v62 & 0xF;
        if ( v103 == v60 )
        {
          v26 = v62;
        }
        else
        {
          MiReleaseFreshPage(v92);
          v62 = v95;
        }
        v63 = v92;
        if ( v103 != v60 )
          v63 = v102;
        v95 = ++v62;
        v14 = v105-- == 1;
        v92 += 48LL;
      }
      while ( !v14 );
      v93 = v63;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v64 = KeGetCurrentIrql();
          if ( v64 <= 0xFu && CurrentIrql <= 0xFu && v64 >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            v66 = v65->SchedulerAssist;
            v67 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v67 & v66[5]) == 0;
            v66[5] &= v67;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v65);
          }
        }
      }
      __writecr8(CurrentIrql);
      LODWORD(v91) = 0;
      goto LABEL_104;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v51 = KeGetCurrentIrql();
        if ( v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
    }
    __writecr8(CurrentIrql);
    MiReturnCommit(v23, 1LL);
    v55 = 1LL;
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_84;
    v56 = KeGetCurrentPrcb();
    v57 = (int)v56->CachedResidentAvailable;
    if ( (_DWORD)v57 == -1 )
      goto LABEL_84;
    if ( (unsigned __int64)(v57 + 1) <= 0x100 )
    {
      do
      {
        v58 = _InterlockedCompareExchange((volatile signed __int32 *)&v56->CachedResidentAvailable, v57 + 1, v57);
        v14 = (_DWORD)v57 == v58;
        LODWORD(v57) = v58;
        if ( v14 )
          goto LABEL_85;
      }
      while ( v58 != -1 && (unsigned __int64)(v58 + 1LL) <= 0x100 );
    }
    if ( (int)v57 > 192
      && (_DWORD)v57 == _InterlockedCompareExchange((volatile signed __int32 *)&v56->CachedResidentAvailable, 192, v57) )
    {
      v55 = (int)v57 - 192 + 1LL;
    }
    if ( v55 )
LABEL_84:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v55);
LABEL_85:
    LODWORD(v91) = -1073741801;
LABEL_104:
    v68 = v93;
    goto LABEL_108;
  }
  v68 = 48 * v26 - 0x58000000000LL;
  v69 = ((((v92 & 1) == 0) + 0x2000) << 17) | 8;
  if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
    v69 = (((v92 & 1) == 0) + 0x2000) << 17;
  LODWORD(v91) = MiFindContiguousPages(
                   v23,
                   v26,
                   v26,
                   0LL,
                   1uLL,
                   a5[34] >> 6,
                   v34,
                   0x80000000,
                   v69,
                   0LL,
                   (__int64 *)&v95);
LABEL_108:
  v70 = 0;
  MiRelockFaultState(v100 + 7, v109);
  if ( Buf2 )
  {
    *((_QWORD *)&v112 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL);
    v77 = Buf2;
    v96 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Buf2 + 6, 0x3FuLL) )
    {
      v78 = v77;
      do
      {
        do
          KeYieldProcessorEx(&v96, v74, v75, v76);
        while ( *((__int64 *)v78 + 3) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v78 + 6, 0x3FuLL) );
      v77 = Buf2;
    }
    v14 = memcmp(&Buf1, v77, 0x30uLL) == 0;
    v79 = Buf2;
    v70 = !v14;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v79);
  }
  v97 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v97, v71, v72, v73);
    while ( *((__int64 *)a5 + 3) < 0 );
  }
  if ( !v70 && !memcmp(v114, a5, 0x30uLL) && (*((_QWORD *)a5 + 3) & 0x4000000000000000LL) == 0 )
  {
    v80 = v110;
    if ( (unsigned int)MiIsFaultPteIntact((__int64)v100, *v100, v110, &v101) )
    {
      if ( (int)v91 < 0 )
      {
        MiRemoveLockedPageCharge((__int64)a5);
        return a5;
      }
      MiCopyPage(v26, v106, 0LL, (v101 & 0x40) != 0 ? 16 : 8);
      MiSwapHardFaultPage(v80, a5, v68);
      *(_WORD *)(v68 + 32) = 0;
      v81 = 1LL;
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_135;
      v82 = KeGetCurrentPrcb();
      v83 = (int)v82->CachedResidentAvailable;
      if ( (_DWORD)v83 == -1 )
        goto LABEL_135;
      if ( (unsigned __int64)(v83 + 1) <= 0x100 )
      {
        do
        {
          v84 = _InterlockedCompareExchange((volatile signed __int32 *)&v82->CachedResidentAvailable, v83 + 1, v83);
          v14 = (_DWORD)v83 == v84;
          LODWORD(v83) = v84;
          if ( v14 )
            goto LABEL_136;
        }
        while ( v84 != -1 && (unsigned __int64)(v84 + 1LL) <= 0x100 );
      }
      if ( (int)v83 > 192
        && (_DWORD)v83 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v82->CachedResidentAvailable,
                            192,
                            v83) )
      {
        v81 = (int)v83 - 192 + 1LL;
      }
      if ( v81 )
LABEL_135:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v81);
LABEL_136:
      *v107 = 1;
      return (unsigned __int8 *)v68;
    }
  }
  if ( (int)v91 >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage(v68);
    MiReturnCommit(v23, 1LL);
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_148;
    v86 = KeGetCurrentPrcb();
    v85 = (int)v86->CachedResidentAvailable;
    if ( (_DWORD)v85 == -1 )
      goto LABEL_148;
    v87 = 256LL;
    if ( (unsigned __int64)(v85 + 1) <= 0x100 )
    {
      do
      {
        v88 = _InterlockedCompareExchange((volatile signed __int32 *)&v86->CachedResidentAvailable, v85 + 1, v85);
        v14 = (_DWORD)v85 == v88;
        v85 = v88;
        if ( v14 )
          goto LABEL_149;
      }
      while ( v88 != -1 && (unsigned __int64)(v88 + 1LL) <= 0x100 );
    }
    if ( (int)v85 > 192
      && (_DWORD)v85 == _InterlockedCompareExchange((volatile signed __int32 *)&v86->CachedResidentAvailable, 192, v85) )
    {
      v22 = (int)v85 - 192 + 1LL;
    }
    if ( v22 )
LABEL_148:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v22);
LABEL_149:
    v98 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v98, v85, (__int64)v86, v87);
      while ( *((__int64 *)a5 + 3) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef((__int64)a5);
  return 0LL;
}

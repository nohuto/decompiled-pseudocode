/*
 * XREFs of MiIdealClusterPage @ 0x140550324
 * Callers:
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140282754 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiReturnPfnReferenceCount @ 0x14031F084 (MiReturnPfnReferenceCount.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     MiIsFaultPteIntact @ 0x140344F9C (MiIsFaultPteIntact.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x14055DC80 (MiSwapHardFaultPage.c)
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
  unsigned int v34; // ebx
  signed __int32 v35; // r13d
  __int64 v37; // r8
  __int64 v38; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v41; // eax
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rdx
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v51; // eax
  __int64 v52; // r9
  unsigned int v53; // r11d
  __int64 LargePage; // rax
  __int64 v55; // rdi
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  unsigned __int64 v60; // r8
  struct _KPRCB *v61; // r9
  __int64 v62; // rdx
  signed __int32 v63; // eax
  __int64 v64; // r8
  __int64 v65; // rdx
  unsigned __int64 v66; // rdi
  __int64 v67; // rdx
  ULONG_PTR v68; // rcx
  __int64 v69; // rax
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  __int64 v74; // rdi
  int v75; // eax
  bool v76; // bl
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  void *v83; // rax
  void *v84; // r13
  void *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // rbx
  unsigned __int64 v89; // r8
  struct _KPRCB *v90; // r9
  __int64 v91; // rdx
  signed __int32 v92; // eax
  __int64 v93; // rdx
  struct _KPRCB *v94; // r8
  __int64 v95; // r9
  signed __int32 v96; // eax
  char v97; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v98[7]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v99; // [rsp+68h] [rbp-98h]
  __int64 v100; // [rsp+70h] [rbp-90h]
  __int64 v101; // [rsp+78h] [rbp-88h]
  void *Buf2; // [rsp+80h] [rbp-80h]
  ULONG_PTR v103; // [rsp+88h] [rbp-78h] BYREF
  int v104; // [rsp+90h] [rbp-70h] BYREF
  int v105; // [rsp+94h] [rbp-6Ch] BYREF
  int v106; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v107; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v108; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v109; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v111; // [rsp+C0h] [rbp-40h]
  __int64 v112; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v114; // [rsp+D8h] [rbp-28h]
  _BYTE *v115; // [rsp+E0h] [rbp-20h]
  __int128 v116; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v117; // [rsp+F8h] [rbp-8h]
  __int64 v118; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+108h] [rbp+8h] BYREF
  __int128 v120; // [rsp+118h] [rbp+18h]
  __int128 v121; // [rsp+128h] [rbp+28h]
  _OWORD v122[3]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v123[128]; // [rsp+170h] [rbp+70h] BYREF

  v99 = a2;
  v108 = a1;
  v109 = a4;
  Buf2 = a6;
  v10 = *((_DWORD *)a1 + 20);
  v11 = a1[7];
  v12 = *a1;
  LODWORD(v100) = v10 >> 6;
  *a7 = 0;
  v115 = a7;
  v118 = a3;
  v13 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x100000) == 0;
  v98[0] = 0;
  v112 = 0LL;
  v103 = 0LL;
  Buf1 = 0LL;
  v110 = v11;
  v120 = 0LL;
  v111 = v13;
  v121 = 0LL;
  v113 = 16LL;
  v116 = 0LL;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v112);
    if ( !ProtoPteAddress || !v112 || ProtoPteAddress != a3 )
      return a5;
    v16 = *(_QWORD *)(v112 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v112 + 44) - (unsigned __int64)(*(_DWORD *)(v112 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 || a3 - 8 * v13 < v16 || a3 + 8 * (16 - v13) > v17 )
      return a5;
    v18 = *(_WORD *)(*(_QWORD *)v112 + 60LL) & 0x3FF;
  }
  else
  {
    v19 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
      return a5;
    v18 = *(unsigned __int16 *)(v11 + 174);
  }
  v20 = (__int64 *)v123;
  v21 = 16LL;
  v22 = 1LL;
  v23 = *(_QWORD *)(qword_140C4E588 + 8 * v18);
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
  v28 = (unsigned __int64 *)v123;
  v114 = v27;
  v29 = 0;
  while ( 1 )
  {
    v30 = *v28;
    v101 = v30;
    v107 = v30;
    if ( (v30 & 1) != 0 )
      break;
    ++v29;
    ++v28;
    if ( v29 >= 0x10 )
      goto LABEL_36;
  }
  v31 = v30;
  if ( MiPteInShadowRange((unsigned __int64)&v107)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v107 >> 3) & 0x1FF));
      if ( (v33 & 0x20) != 0 )
        v31 = v101 | 0x20;
      if ( (v33 & 0x42) != 0 )
        v31 |= 0x42uLL;
    }
    else
    {
      v31 = v107;
    }
  }
  v26 = (v31 >> 12) & 0xFFFFFFFFFLL;
  if ( (v26 & 0xF) != v29 )
    return a5;
  LOBYTE(v27) = v114;
LABEL_36:
  v101 = 0LL;
  v97 = 0;
  if ( v29 != 16 )
  {
    v26 += v13 - v29;
    if ( v26 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v26 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      return a5;
    v101 = 48 * v26 - 0x58000000000LL;
    if ( (unsigned __int8 *)v101 != a5 )
    {
      v34 = *((_DWORD *)MiSearchNumaNodeTable(v26) + 2);
      LODWORD(v99) = dword_140C4DE38 & v26;
      goto LABEL_46;
    }
LABEL_43:
    *v115 = 1;
    return a5;
  }
  if ( (v27 & 0xF) == v13 )
    goto LABEL_43;
  if ( (int)MiAcquireNonPagedResources(v23, 1uLL, 0LL, 0) < 0 )
    return a5;
  v97 = 1;
  MiInitializePageColorBase(v110, (*(_DWORD *)(v99 + 48) >> 12) & 0x3F, (__int64)&v116);
  v34 = HIDWORD(v116) >> byte_140C4DDCC;
  v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v116, 1u);
  LODWORD(v99) = HIDWORD(v116) | DWORD2(v116) & v35;
LABEL_46:
  *(_BYTE *)(*(_QWORD *)(v23 + 16) + 4544LL * v34 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
  {
    if ( v97 == 1 )
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
          v41 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v41;
          LODWORD(CachedResidentAvailable) = v41;
          if ( v14 )
            return a5;
        }
        while ( v41 != -1 && (unsigned __int64)(v41 + 1LL) <= 0x100 );
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
  v42 = *((_OWORD *)a5 + 1);
  v122[0] = *(_OWORD *)a5;
  v43 = *((_OWORD *)a5 + 2);
  v122[1] = v42;
  v122[2] = v43;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0LL, v37, v38);
    LOBYTE(v44) = 17;
    v45 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v46 = *((_OWORD *)Buf2 + 2);
    v120 = v45;
    v121 = v46;
    MiUnlockProtoPoolPage((__int64)Buf2, v44, v47, v48);
  }
  v117 = MiReleaseFaultState((__int64)(v108 + 7), 1u, v98);
  if ( v97 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v98[0] = CurrentIrql;
    v51 = MiProtectionToCacheAttribute((v109 >> 5) & 0x1F);
    LargePage = MiGetLargePage(v23, v53, v51, v99, 4, v52);
    v100 = LargePage;
    v55 = LargePage;
    if ( LargePage )
    {
      MiConvertEntireLargePageToSmall(LargePage, 2, 2LL, 1LL, 0LL, 0LL);
      v65 = v55;
      v66 = v111;
      v67 = (unsigned __int128)((v65 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v68 = ((unsigned __int64)v67 >> 63) + (v67 >> 3);
      v69 = v101;
      v103 = v68;
      do
      {
        v110 = v69;
        if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v68, 1uLL);
          v68 = v103;
        }
        v111 = v68 & 0xF;
        if ( v111 == v66 )
        {
          v26 = v68;
        }
        else
        {
          MiReleaseFreshPage(v100, v67, v64);
          v68 = v103;
        }
        v69 = v100;
        if ( v111 != v66 )
          v69 = v110;
        ++v68;
        v67 = v100 + 48;
        v103 = v68;
        v14 = v113-- == 1;
        v100 += 48LL;
      }
      while ( !v14 );
      v101 = v69;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v70 = KeGetCurrentIrql();
          if ( v70 <= 0xFu && CurrentIrql <= 0xFu && v70 >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            v73 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v73 & v72[5]) == 0;
            v72[5] &= v73;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v71);
          }
        }
      }
      __writecr8(CurrentIrql);
      LODWORD(v99) = 0;
      goto LABEL_104;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && CurrentIrql <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          v59 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v57);
        }
      }
    }
    __writecr8(CurrentIrql);
    MiReturnCommit(v23, 1LL);
    v60 = 1LL;
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_84;
    v61 = KeGetCurrentPrcb();
    v62 = (int)v61->CachedResidentAvailable;
    if ( (_DWORD)v62 == -1 )
      goto LABEL_84;
    if ( (unsigned __int64)(v62 + 1) <= 0x100 )
    {
      do
      {
        v63 = _InterlockedCompareExchange((volatile signed __int32 *)&v61->CachedResidentAvailable, v62 + 1, v62);
        v14 = (_DWORD)v62 == v63;
        LODWORD(v62) = v63;
        if ( v14 )
          goto LABEL_85;
      }
      while ( v63 != -1 && (unsigned __int64)(v63 + 1LL) <= 0x100 );
    }
    if ( (int)v62 > 192
      && (_DWORD)v62 == _InterlockedCompareExchange((volatile signed __int32 *)&v61->CachedResidentAvailable, 192, v62) )
    {
      v60 = (int)v62 - 192 + 1LL;
    }
    if ( v60 )
LABEL_84:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v60);
LABEL_85:
    LODWORD(v99) = -1073741801;
LABEL_104:
    v74 = v101;
    goto LABEL_108;
  }
  v74 = 48 * v26 - 0x58000000000LL;
  v75 = ((((v100 & 1) == 0) + 0x2000) << 17) | 8;
  if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
    v75 = (((v100 & 1) == 0) + 0x2000) << 17;
  LODWORD(v99) = MiFindContiguousPages(
                   v23,
                   v26,
                   v26,
                   0LL,
                   1uLL,
                   a5[34] >> 6,
                   v34,
                   0x80000000,
                   v75,
                   0LL,
                   (__int64 *)&v103);
LABEL_108:
  v76 = 0;
  MiRelockFaultState((__int64)(v108 + 7), v117);
  if ( Buf2 )
  {
    *((_QWORD *)&v120 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL, v78, v79);
    v83 = Buf2;
    v104 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Buf2 + 6, 0x3FuLL) )
    {
      v84 = v83;
      do
      {
        do
          KeYieldProcessorEx(&v104, v80, v81, v82);
        while ( *((__int64 *)v84 + 3) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v84 + 6, 0x3FuLL) );
      v83 = Buf2;
    }
    v14 = memcmp(&Buf1, v83, 0x30uLL) == 0;
    v85 = Buf2;
    v76 = !v14;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v85, v86, v87);
  }
  v105 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v105, v77, v78, v79);
    while ( *((__int64 *)a5 + 3) < 0 );
  }
  if ( !v76 && !memcmp(v122, a5, 0x30uLL) && (*((_QWORD *)a5 + 3) & 0x4000000000000000LL) == 0 )
  {
    v88 = v118;
    if ( (unsigned int)MiIsFaultPteIntact((__int64)v108, *v108, v118, &v109) )
    {
      if ( (int)v99 < 0 )
      {
        MiRemoveLockedPageCharge((__int64)a5);
        return a5;
      }
      MiCopyPage(v26, v114, 0LL, (v109 & 0x40) != 0 ? 16 : 8);
      MiSwapHardFaultPage(v88, a5, v74);
      *(_WORD *)(v74 + 32) = 0;
      v89 = 1LL;
      if ( (ULONG_PTR *)v23 != &MiSystemPartition )
        goto LABEL_135;
      v90 = KeGetCurrentPrcb();
      v91 = (int)v90->CachedResidentAvailable;
      if ( (_DWORD)v91 == -1 )
        goto LABEL_135;
      if ( (unsigned __int64)(v91 + 1) <= 0x100 )
      {
        do
        {
          v92 = _InterlockedCompareExchange((volatile signed __int32 *)&v90->CachedResidentAvailable, v91 + 1, v91);
          v14 = (_DWORD)v91 == v92;
          LODWORD(v91) = v92;
          if ( v14 )
            goto LABEL_136;
        }
        while ( v92 != -1 && (unsigned __int64)(v92 + 1LL) <= 0x100 );
      }
      if ( (int)v91 > 192
        && (_DWORD)v91 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v90->CachedResidentAvailable,
                            192,
                            v91) )
      {
        v89 = (int)v91 - 192 + 1LL;
      }
      if ( v89 )
LABEL_135:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v89);
LABEL_136:
      *v115 = 1;
      return (unsigned __int8 *)v74;
    }
  }
  if ( (int)v99 >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage(v74, v77, v78);
    MiReturnCommit(v23, 1LL);
    if ( (ULONG_PTR *)v23 != &MiSystemPartition )
      goto LABEL_148;
    v94 = KeGetCurrentPrcb();
    v93 = (int)v94->CachedResidentAvailable;
    if ( (_DWORD)v93 == -1 )
      goto LABEL_148;
    v95 = 256LL;
    if ( (unsigned __int64)(v93 + 1) <= 0x100 )
    {
      do
      {
        v96 = _InterlockedCompareExchange((volatile signed __int32 *)&v94->CachedResidentAvailable, v93 + 1, v93);
        v14 = (_DWORD)v93 == v96;
        v93 = v96;
        if ( v14 )
          goto LABEL_149;
      }
      while ( v96 != -1 && (unsigned __int64)(v96 + 1LL) <= 0x100 );
    }
    if ( (int)v93 > 192
      && (_DWORD)v93 == _InterlockedCompareExchange((volatile signed __int32 *)&v94->CachedResidentAvailable, 192, v93) )
    {
      v22 = (int)v93 - 192 + 1LL;
    }
    if ( v22 )
LABEL_148:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 7168), v22);
LABEL_149:
    v106 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a5 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v106, v93, (__int64)v94, v95);
      while ( *((__int64 *)a5 + 3) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef((__int64)a5);
  return 0LL;
}

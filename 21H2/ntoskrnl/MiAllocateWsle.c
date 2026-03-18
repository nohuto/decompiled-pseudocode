/*
 * XREFs of MiAllocateWsle @ 0x140322F10
 * Callers:
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiInitializeWorkingSetList @ 0x1402A0624 (MiInitializeWorkingSetList.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiCreateForkWsle @ 0x1405BA2B4 (MiCreateForkWsle.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029A6AC (MiReleaseWsSwapReservationPfn.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiAddWorkingSetEntries @ 0x1403234A0 (MiAddWorkingSetEntries.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiFillVirtualFaultInfo @ 0x14045C47C (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x14045C4F6 (MiGetVirtualFaultPageInfo.c)
 *     MiIncrementVmFaultCount @ 0x140583D88 (MiIncrementVmFaultCount.c)
 *     MiLogAllocateWsleEvent @ 0x140583DB8 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char a4,
        unsigned __int64 a5,
        char a6,
        __int64 a7)
{
  int v7; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // eax
  unsigned int v14; // eax
  char v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v19; // esi
  unsigned __int8 v20; // r13
  ULONG_PTR v21; // r10
  char v22; // al
  __int64 v23; // r8
  char v24; // di
  __int64 VirtualFaultPageInfo; // r12
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v31; // rax
  char v32; // cl
  int v33; // esi
  int v34; // eax
  ULONG_PTR v35; // rdi
  ULONG_PTR v36; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  ULONG_PTR v40; // rbx
  char v41; // dl
  __int64 v42; // rcx
  __int64 v43; // r10
  int v44; // edx
  int v45; // eax
  char v46; // al
  unsigned __int64 v47; // rax
  unsigned __int8 v48; // [rsp+30h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-48h]
  unsigned int v50; // [rsp+40h] [rbp-40h]
  unsigned __int64 v51; // [rsp+48h] [rbp-38h]
  int v52; // [rsp+50h] [rbp-30h] BYREF
  int v53; // [rsp+54h] [rbp-2Ch] BYREF
  int v54; // [rsp+58h] [rbp-28h] BYREF
  int v55; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 v56; // [rsp+60h] [rbp-20h]
  unsigned __int64 v57[3]; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR v60; // [rsp+D0h] [rbp+50h] BYREF

  v60 = (ULONG_PTR)a3;
  v7 = *(_DWORD *)(a1 + 184);
  v50 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  v51 = v9;
  v10 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1LL;
    v56 = 1LL;
    v50 = 1;
  }
  else
  {
    v56 = 0LL;
    v11 = 0LL;
    if ( (v7 & 7) == 0 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v10) = 0;
  v48 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v14 = Queue >> 9;
  }
  else
  {
    v14 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v32 = 2;
      if ( v14 < 2 )
        v32 = v14;
      LOBYTE(v14) = v32;
    }
  }
  v15 = a6;
  v16 = v14 & 7;
  v17 = a5;
  v18 = 5;
  v19 = 8 * v16;
  if ( v11 )
  {
    if ( (a6 & 2) != 0 )
    {
      LOBYTE(v10) = 9;
    }
    else if ( v16 < 5 )
    {
      LOBYTE(v10) = 7;
    }
    else if ( (a6 & 8) != 0 )
    {
      LOBYTE(v10) = 6;
    }
    else if ( (a5 & 1) != 0 && (a5 & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
    }
    v48 = v10;
    v20 = v10 | (16 * (a4 & 7));
  }
  else
  {
    v33 = 5;
    if ( v16 > 5 )
      v33 = v16;
    v20 = 0;
    v19 = 8 * v33;
  }
  if ( (a6 & 1) != 0 )
  {
    v35 = v60;
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52, v10, (__int64)a3, v11);
      while ( *(__int64 *)(v35 + 24) < 0 );
    }
    v36 = v60;
    v37 = MiReleaseWsSwapReservationPfn(v60);
    v38 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v36 + 40) >> 43) & 0x3FFLL));
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v37 )
      MiReleasePageFileInfo(v38, v37, 1);
    v17 = a5;
  }
  v21 = v60;
  BugCheckParameter2 = v60;
  v22 = *(_BYTE *)(v60 + 35);
  if ( (v22 & 8) == 0 )
    v18 = v22 & 7;
  if ( v18 < v19 >> 3 )
  {
    v53 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v53, v10, (__int64)a3, v11);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v15 = a6;
      v21 = BugCheckParameter2;
    }
    *(_BYTE *)(v21 + 35) = (v19 >> 3) | *(_BYTE *)(v21 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v60;
    v17 = a5;
    BugCheckParameter2 = v60;
  }
  if ( (*(_BYTE *)v21 & 1) == 0 )
  {
    v54 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v54, v10, (__int64)a3, v11);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v15 = a6;
      v21 = BugCheckParameter2;
    }
    if ( (*(_QWORD *)v60 & 1) == 0 )
      *(_QWORD *)v60 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v60;
    v17 = a5;
    BugCheckParameter2 = v60;
  }
  if ( (v17 & 1) == 0 )
    goto LABEL_35;
  v23 = 0x8000000000000000uLL;
  v24 = v7 & 7;
  if ( (v7 & 7) == 2 )
  {
    v17 |= 0x8000000000000000uLL;
    a5 = v17;
  }
  else if ( (MiFlags & 0x8000) != 0 )
  {
    v39 = v51;
    if ( (v51 < 0xFFFFF68000000000uLL || v51 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v17 & 0x8000000000000000uLL) == 0
      && ((MiFlags & 0x20000) != 0 || v24) )
    {
      v55 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v55, v39, v23, v11);
          while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
        v15 = a6;
      }
      v40 = v60;
      if ( !(unsigned int)MiGetPagePrivilege(v60, 1, 0LL) )
      {
        v41 = 38;
        if ( !v24 )
          v41 = 7;
        MiMarkPfnVerified(v40, v41);
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v60;
      v17 = a5;
      BugCheckParameter2 = v60;
    }
  }
  if ( (MiFlags & 0x4000) != 0 )
  {
    v31 = *(_QWORD *)(v21 + 40);
    if ( v31 < 0 && (((unsigned __int64)v31 >> 60) & 7) == 3 && (v24 == 4 || v24 == 1) )
    {
      *(_OWORD *)v57 = 0LL;
      if ( (MiGetPagePrivilege(v21, 0, v57) & 8) != 0 )
      {
        v34 = KeSetPagePrivilege(
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                v57,
                1024LL);
        if ( v34 < 0 )
          KeBugCheckEx(0x1Au, 0x515E4uLL, BugCheckParameter2, v34, 0LL);
      }
    }
  }
  if ( a7
    && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v51, v23)) != 0
    && ((v44 = *(_DWORD *)(v42 + 56), (v44 & 0x20) == 0)
     || _bittest64((const signed __int64 *)(v43 + 40), 0x28u)
     || *(__int64 *)(v43 + 8) <= 0) )
  {
    if ( (v44 & 0x10) != 0 && v48 < 6u )
      v20 = v20 & 0xF0 | 6;
  }
  else
  {
    VirtualFaultPageInfo = 0LL;
  }
  if ( v56 )
  {
    v17 = v17 & 0x80FFFFFFFFFFFFFFuLL | ((unsigned __int64)v20 << 56);
    a5 = v17;
    LOBYTE(v19) = v19 | 1;
  }
  v26 = v17;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C51864) && (v17 & 1) != 0 )
        v26 = v17 | 0x8000000000000000uLL;
      *(_QWORD *)a2 = v26;
      MiWritePteShadow(a2, v26);
      goto LABEL_33;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
    {
      v27 = 0x8000000000000000uLL;
      v17 = a5;
      v26 |= 0x8000000000000000uLL;
      BugCheckParameter2 = v60;
      goto LABEL_32;
    }
    v17 = a5;
    BugCheckParameter2 = v60;
  }
  v27 = 0x8000000000000000uLL;
LABEL_32:
  *(_QWORD *)a2 = v26;
LABEL_33:
  if ( !VirtualFaultPageInfo )
    goto LABEL_34;
  v45 = *(_DWORD *)(a7 + 56);
  if ( (v45 & 1) != 0 && (v17 & 0x42) == 0 )
    goto LABEL_34;
  if ( (v45 & 2) != 0 && (v17 & v27) != 0 )
    goto LABEL_34;
  LOBYTE(v19) = v19 | 4;
  if ( (v45 & 0x20) != 0 )
  {
    v46 = MiCompleteSecureProcessFault(&v60, &a5);
    v21 = v60;
    v17 = a5;
    BugCheckParameter2 = v60;
    LOBYTE(v19) = (v19 ^ (4 * v46)) & 4 ^ v19;
  }
  else
  {
    v21 = BugCheckParameter2;
  }
  if ( (v19 & 4) != 0 )
  {
    v47 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a5);
    MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v47 >> 12) & 0xFFFFFFFFFFLL, v17);
LABEL_34:
    v21 = BugCheckParameter2;
  }
LABEL_35:
  v28 = v56;
  if ( v56 && (v19 & 1) == 0 )
    *(_BYTE *)v56 = v20;
  if ( (v15 & 2) != 0 )
  {
    MiIncrementVmFaultCount(a1, 1LL);
  }
  else if ( (v15 & 4) == 0 )
  {
    v29 = v50;
    if ( *(__int64 *)(v21 + 40) >= 0 )
      v29 = v50 | 2;
    if ( v28 || (v7 & 7) == 0 )
      v29 = (unsigned int)v29 | 4;
    MiAddWorkingSetEntries(a1, v51, 1LL, v29);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(BugCheckParameter2, v7 & 7, v51);
  return 1LL;
}

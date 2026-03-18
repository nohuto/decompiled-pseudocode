/*
 * XREFs of MiAllocateWsle @ 0x140211190
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiCreateForkWsle @ 0x14055412C (MiCreateForkWsle.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x140211890 (MiAddWorkingSetEntries.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140306818 (MiMarkPfnVerified.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14032A1DC (MiReleaseWsSwapReservationPfn.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 *     MiIncrementVmFaultCount @ 0x14052A9F0 (MiIncrementVmFaultCount.c)
 *     MiLogAllocateWsleEvent @ 0x14052AA18 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x1405429C4 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x140542C4C (MiGetVirtualFaultPageInfo.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140549C90 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140549DFC (MiUnlockWorkingSetCoreExclusive.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        char a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  int v7; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // edx
  unsigned int v13; // edx
  char v14; // al
  unsigned int v15; // edx
  signed __int64 v16; // rbx
  unsigned int v17; // r12d
  unsigned int v18; // edi
  int v19; // edi
  unsigned __int8 v20; // r13
  __int64 v21; // rdx
  ULONG_PTR v22; // r14
  ULONG_PTR v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONG_PTR v26; // r14
  char v27; // al
  signed __int64 v28; // rcx
  char v29; // r15
  unsigned __int64 v30; // r12
  int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r11
  __int64 VirtualFaultPageInfo; // r15
  int v36; // edx
  signed __int64 v37; // rdx
  int v38; // eax
  char v39; // al
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r9
  unsigned __int8 v46; // [rsp+30h] [rbp-50h]
  unsigned int v47; // [rsp+34h] [rbp-4Ch]
  unsigned __int64 v48; // [rsp+38h] [rbp-48h]
  int v49; // [rsp+40h] [rbp-40h] BYREF
  int v50; // [rsp+44h] [rbp-3Ch] BYREF
  int v51; // [rsp+48h] [rbp-38h] BYREF
  int v52; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v53; // [rsp+50h] [rbp-30h]
  __int128 v54; // [rsp+58h] [rbp-28h] BYREF
  __int128 v55; // [rsp+68h] [rbp-18h] BYREF
  __int64 v56; // [rsp+78h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+50h] BYREF

  BugCheckParameter2 = a3;
  v7 = *(_DWORD *)(a1 + 184);
  v47 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  v48 = v9;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1LL;
    v53 = 1LL;
    v47 = 1;
  }
  else
  {
    v10 = 0LL;
    v53 = 0LL;
    if ( (v7 & 7) == 0 && (((unsigned __int8)*(_QWORD *)a3 >> 1) & 7) != 0 )
      *(_QWORD *)a3 &= 0xFFFFFFFFFFFFFFF1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  LOBYTE(a3) = 0;
  v46 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v13 = Queue >> 9;
  }
  else
  {
    v13 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v14 = 2;
      if ( v13 < 2 )
        v14 = v13;
      LOBYTE(v13) = v14;
    }
  }
  v15 = v13 & 7;
  v16 = a5;
  v17 = 5;
  v18 = 8 * v15;
  if ( v10 )
  {
    if ( (a6 & 2) != 0 )
    {
      LOBYTE(a3) = 9;
    }
    else if ( v15 >= 5 )
    {
      if ( (a6 & 8) != 0 )
      {
        LOBYTE(a3) = 6;
      }
      else
      {
        if ( (a5 & 1) == 0 )
        {
LABEL_26:
          v20 = a3 | (16 * (a4 & 7));
          goto LABEL_27;
        }
        a3 = (a5 & 0x20) == 0;
      }
    }
    else
    {
      LOBYTE(a3) = 7;
    }
    v46 = a3;
    goto LABEL_26;
  }
  v19 = 5;
  if ( v15 > 5 )
    v19 = v15;
  v20 = 0;
  v18 = 8 * v19;
LABEL_27:
  v21 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (a6 & 1) != 0 )
  {
    v22 = BugCheckParameter2;
    v49 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v49);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v23 = BugCheckParameter2;
    v24 = MiReleaseWsSwapReservationPfn(BugCheckParameter2, v21);
    v25 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v23 + 40) >> 39) & 0x3FFLL));
    v21 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
    {
      MiReleasePageFileInfo(v25, v24, 1LL);
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = a5;
  }
  v26 = BugCheckParameter2;
  v27 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v27 & 8) == 0 )
    v17 = v27 & 7;
  if ( v17 < v18 >> 3 )
  {
    v50 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(v26 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    *(_BYTE *)(v26 + 35) = (v18 >> 3) | *(_BYTE *)(v26 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 = a5;
    v26 = BugCheckParameter2;
  }
  if ( (*(_BYTE *)v26 & 1) == 0 )
  {
    v51 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v51);
        while ( *(__int64 *)(v26 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 = a5;
    v26 = BugCheckParameter2;
  }
  if ( (v16 & 1) == 0 )
  {
    v30 = v48;
    goto LABEL_110;
  }
  v28 = 0x8000000000000000uLL;
  v29 = v7 & 7;
  if ( (v7 & 7) == 2 )
  {
    v16 |= 0x8000000000000000uLL;
    a5 = v16;
LABEL_53:
    v30 = v48;
    goto LABEL_54;
  }
  if ( (MiFlags & 0x10000) == 0 )
    goto LABEL_53;
  v30 = v48;
  if ( (v48 < 0xFFFFF68000000000uLL || v48 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v16 & 0x8000000000000000uLL) == 0
    && ((MiFlags & 0x40000) != 0 || v29) )
  {
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    v32 = BugCheckParameter2;
    if ( !(unsigned int)MiGetPagePrivilege(BugCheckParameter2) )
    {
      v33 = 38LL;
      if ( !v29 )
        v33 = 7LL;
      MiMarkPfnVerified(v32, v33);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 = a5;
    v26 = BugCheckParameter2;
  }
LABEL_54:
  if ( (MiFlags & 0x8000) != 0
    && (MiFlags & 0x10000) != 0
    && (unsigned int)MI_PFN_IS_PROTO(v26, v21, a3)
    && ((*(_QWORD *)(v26 + 40) >> 60) & 7) == 3
    && (v29 == 4 || v29 == 1) )
  {
    v54 = 0LL;
    if ( (MiGetPagePrivilege(v28) & 8) != 0 )
    {
      v31 = KeSetPagePrivilege((__int64)(v26 + 0x58000000000LL) / 48, &v54, 1024LL);
      if ( v31 < 0 )
        KeBugCheckEx(0x1Au, 0x515E4uLL, v26, v31, 0LL);
    }
  }
  v34 = a7;
  if ( a7
    && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v30)) != 0
    && ((v36 = *(_DWORD *)(v34 + 56), (v36 & 0x20) == 0)
     || (*(_QWORD *)(v26 + 40) & 0x1000000000LL) != 0
     || (v28 = *(_QWORD *)(v26 + 8), v28 <= 0)) )
  {
    if ( (v36 & 0x10) != 0 && v46 < 6u )
      v20 = v20 & 0xF0 | 6;
  }
  else
  {
    VirtualFaultPageInfo = 0LL;
  }
  if ( v53 )
  {
    v28 = (unsigned __int64)v20 << 56;
    v16 = v16 & 0x80FFFFFFFFFFFFFFuLL | v28;
    a5 = v16;
    LOBYTE(v18) = v18 | 1;
  }
  v37 = v16;
  a3 = a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(v28, v16) )
    {
      if ( !HIBYTE(word_140C4DF48) && (v37 & 1) != 0 )
        v37 |= 0x8000000000000000uLL;
      *(_QWORD *)a3 = v37;
      MiWritePteShadow(a3, v37);
      goto LABEL_100;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v37 & 1) != 0 )
      v37 |= 0x8000000000000000uLL;
    v26 = BugCheckParameter2;
    v16 = a5;
  }
  *(_QWORD *)a3 = v37;
LABEL_100:
  if ( VirtualFaultPageInfo )
  {
    v38 = *(_DWORD *)(v34 + 56);
    if ( ((v38 & 1) == 0 || (v16 & 0x42) != 0) && ((v38 & 2) == 0 || v16 >= 0) )
    {
      LOBYTE(v18) = v18 | 4;
      if ( (v38 & 0x20) != 0 )
      {
        v39 = MiCompleteSecureProcessFault(&BugCheckParameter2, &a5, v34 + 48);
        v16 = a5;
        v26 = BugCheckParameter2;
        LOBYTE(v18) = (v18 ^ (4 * v39)) & 4 ^ v18;
      }
      if ( (v18 & 4) != 0 )
      {
        v40 = MI_READ_PTE_LOCK_FREE(&a5);
        MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v40 >> 12) & 0xFFFFFFFFFLL, v16);
      }
    }
  }
LABEL_110:
  v41 = v53;
  if ( v53 && (v18 & 1) == 0 )
    *(_BYTE *)v53 = v20;
  if ( (a6 & 2) != 0 )
  {
    v55 = 0LL;
    v56 = 0LL;
    MiLockWorkingSetCoreExclusive(a1, &v55);
    MiIncrementVmFaultCount(a1, 1LL);
    MiUnlockWorkingSetCoreExclusive(&v55);
  }
  else if ( (a6 & 4) == 0 )
  {
    v42 = MI_PFN_IS_PROTO(v26, v41, a3);
    v44 = v47 | 2;
    if ( v42 )
      v44 = v47;
    if ( v43 || (v7 & 7) == 0 )
      v44 = (unsigned int)v44 | 4;
    MiAddWorkingSetEntries(a1, v30, 1LL, v44);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v26, v7 & 7, v30);
  return 1LL;
}

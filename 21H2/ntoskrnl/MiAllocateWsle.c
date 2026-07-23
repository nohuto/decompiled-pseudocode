/*
 * XREFs of MiAllocateWsle @ 0x1402B65C0
 * Callers:
 *     MiInitializeWorkingSetList @ 0x1402A3394 (MiInitializeWorkingSetList.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiCreateForkWsle @ 0x140559E5C (MiCreateForkWsle.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiLockWorkingSetCoreExclusive @ 0x14024FB54 (MiLockWorkingSetCoreExclusive.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029645C (MiReleaseWsSwapReservationPfn.c)
 *     MiAddWorkingSetEntries @ 0x1402B6CC0 (MiAddWorkingSetEntries.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 *     MiIncrementVmFaultCount @ 0x140530750 (MiIncrementVmFaultCount.c)
 *     MiLogAllocateWsleEvent @ 0x140530778 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x140548724 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x1405489AC (MiGetVirtualFaultPageInfo.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14054FB2C (MiUnlockWorkingSetCoreExclusive.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  int v7; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  char v12; // r8
  unsigned int Queue; // edx
  unsigned int v14; // edx
  char v15; // al
  unsigned int v16; // edx
  signed __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v19; // edi
  int v20; // edi
  unsigned __int8 v21; // r13
  ULONG_PTR v22; // r14
  ULONG_PTR v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  ULONG_PTR v26; // r14
  char v27; // al
  char v28; // r15
  unsigned __int64 v29; // r12
  ULONG_PTR v30; // rcx
  int v31; // eax
  ULONG_PTR v32; // rbx
  char v33; // dl
  __int64 v34; // r11
  __int64 VirtualFaultPageInfo; // r15
  int v36; // edx
  __int64 v37; // rdx
  _QWORD *v38; // r8
  int v39; // eax
  char v40; // al
  unsigned __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r9
  char v46; // [rsp+30h] [rbp-50h]
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

  BugCheckParameter2 = (ULONG_PTR)a3;
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
    if ( (v7 & 7) == 0 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v46 = 0;
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
      v15 = 2;
      if ( v14 < 2 )
        v15 = v14;
      LOBYTE(v14) = v15;
    }
  }
  v16 = v14 & 7;
  v17 = a5;
  v18 = 5;
  v19 = 8 * v16;
  if ( v10 )
  {
    if ( (a6 & 2) != 0 )
    {
      v12 = 9;
    }
    else if ( v16 >= 5 )
    {
      if ( (a6 & 8) != 0 )
      {
        v12 = 6;
      }
      else
      {
        if ( (a5 & 1) == 0 )
        {
LABEL_26:
          v21 = v12 | (16 * (a4 & 7));
          goto LABEL_27;
        }
        v12 = (a5 & 0x20) == 0;
      }
    }
    else
    {
      v12 = 7;
    }
    v46 = v12;
    goto LABEL_26;
  }
  v20 = 5;
  if ( v16 > 5 )
    v20 = v16;
  v21 = 0;
  v19 = 8 * v20;
LABEL_27:
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
    v24 = MiReleaseWsSwapReservationPfn(BugCheckParameter2);
    v25 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v23 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v24 )
      MiReleasePageFileInfo(v25, v24, 1);
    v17 = a5;
  }
  v26 = BugCheckParameter2;
  v27 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v27 & 8) == 0 )
    v18 = v27 & 7;
  if ( v18 < v19 >> 3 )
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
    }
    *(_BYTE *)(v26 + 35) = (v19 >> 3) | *(_BYTE *)(v26 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = a5;
    v26 = BugCheckParameter2;
  }
  if ( (*(_BYTE *)v26 & 1) == 0 )
  {
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = a5;
    v26 = BugCheckParameter2;
  }
  if ( (v17 & 1) == 0 )
  {
    v29 = v48;
    goto LABEL_108;
  }
  v28 = v7 & 7;
  if ( (v7 & 7) == 2 )
  {
    v17 |= 0x8000000000000000uLL;
    a5 = v17;
LABEL_51:
    v29 = v48;
    goto LABEL_52;
  }
  if ( (MiFlags & 0x10000) == 0 )
    goto LABEL_51;
  v29 = v48;
  if ( (v48 < 0xFFFFF68000000000uLL || v48 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v17 & 0x8000000000000000uLL) == 0
    && ((MiFlags & 0x40000) != 0 || v28) )
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
      v33 = 38;
      if ( !v28 )
        v33 = 7;
      MiMarkPfnVerified(v32, v33);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = a5;
    v26 = BugCheckParameter2;
  }
LABEL_52:
  if ( (MiFlags & 0x8000) != 0
    && (MiFlags & 0x10000) != 0
    && (unsigned int)MI_PFN_IS_PROTO(v26)
    && ((*(_QWORD *)(v26 + 40) >> 60) & 7) == 3
    && (v28 == 4 || v28 == 1) )
  {
    v54 = 0LL;
    if ( (MiGetPagePrivilege(v30) & 8) != 0 )
    {
      v31 = KeSetPagePrivilege((__int64)(v26 + 0x58000000000LL) / 48, &v54, 1024LL);
      if ( v31 < 0 )
        KeBugCheckEx(0x1Au, 0x515E4uLL, v26, v31, 0LL);
    }
  }
  v34 = a7;
  if ( a7
    && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v29)) != 0
    && ((v36 = *(_DWORD *)(v34 + 56), (v36 & 0x20) == 0)
     || (*(_QWORD *)(v26 + 40) & 0x1000000000LL) != 0
     || *(__int64 *)(v26 + 8) <= 0) )
  {
    if ( (v36 & 0x10) != 0 && (unsigned __int8)v46 < 6u )
      v21 = v21 & 0xF0 | 6;
  }
  else
  {
    VirtualFaultPageInfo = 0LL;
  }
  if ( v53 )
  {
    v17 = v17 & 0x80FFFFFFFFFFFFFFuLL | ((unsigned __int64)v21 << 56);
    a5 = v17;
    LOBYTE(v19) = v19 | 1;
  }
  v37 = v17;
  v38 = (_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && (v37 & 1) != 0 )
        v37 |= 0x8000000000000000uLL;
      *v38 = v37;
      MiWritePteShadow((__int64)v38, v37);
      goto LABEL_98;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v37 & 1) != 0 )
      v37 |= 0x8000000000000000uLL;
    v26 = BugCheckParameter2;
    v17 = a5;
  }
  *v38 = v37;
LABEL_98:
  if ( VirtualFaultPageInfo )
  {
    v39 = *(_DWORD *)(v34 + 56);
    if ( ((v39 & 1) == 0 || (v17 & 0x42) != 0) && ((v39 & 2) == 0 || v17 >= 0) )
    {
      LOBYTE(v19) = v19 | 4;
      if ( (v39 & 0x20) != 0 )
      {
        v40 = MiCompleteSecureProcessFault(&BugCheckParameter2, &a5, v34 + 48);
        v17 = a5;
        v26 = BugCheckParameter2;
        LOBYTE(v19) = (v19 ^ (4 * v40)) & 4 ^ v19;
      }
      if ( (v19 & 4) != 0 )
      {
        v41 = MI_READ_PTE_LOCK_FREE(&a5);
        MiFillVirtualFaultInfo(VirtualFaultPageInfo, (v41 >> 12) & 0xFFFFFFFFFLL, v17);
      }
    }
  }
LABEL_108:
  if ( v53 && (v19 & 1) == 0 )
    *(_BYTE *)v53 = v21;
  if ( (a6 & 2) != 0 )
  {
    v55 = 0LL;
    v56 = 0LL;
    MiLockWorkingSetCoreExclusive(a1, (__int64)&v55);
    MiIncrementVmFaultCount(a1, 1LL);
    MiUnlockWorkingSetCoreExclusive(&v55);
  }
  else if ( (a6 & 4) == 0 )
  {
    v42 = MI_PFN_IS_PROTO(v26);
    v44 = v47 | 2;
    if ( v42 )
      v44 = v47;
    if ( v43 || (v7 & 7) == 0 )
      v44 = (unsigned int)v44 | 4;
    MiAddWorkingSetEntries(a1, v29, 1LL, v44);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v26, v7 & 7, v29);
  return 1LL;
}

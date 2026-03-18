/*
 * XREFs of MmCreateKernelShadowStack @ 0x1405A5990
 * Callers:
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     KiCreateKernelShadowStack @ 0x140961464 (KiCreateKernelShadowStack.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140429870 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x1405A5894 (MiUpdateKernelShadowStackOwnerData.c)
 *     VslAllocateKernelShadowStack @ 0x140931514 (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MmCreateKernelShadowStack(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 *a6)
{
  unsigned int v7; // r12d
  ULONG_PTR v8; // r15
  union _SLIST_HEADER *v10; // rsi
  struct _KPRCB *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  PSLIST_ENTRY v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rbp
  unsigned __int64 v20; // r8
  struct _KPRCB *CurrentPrcb; // r11
  __int64 CachedResidentAvailable; // rdx
  bool v23; // zf
  signed __int32 v24; // eax
  int v25; // edx
  unsigned __int64 v26; // r8
  struct _KPRCB *v27; // r11
  __int64 v28; // rdx
  signed __int32 v29; // eax
  int KernelShadowStack; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF

  v7 = a3;
  v8 = a2;
  if ( a1 )
    v10 = *(union _SLIST_HEADER **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  else
    v10 = (union _SLIST_HEADER *)&MiSystemPartition;
  if ( a2 > 2 )
  {
LABEL_20:
    if ( !(unsigned int)MiChargeCommit((__int64)v10, 1uLL, (v7 >> 1) & 1) )
      return (unsigned int)-1073741523;
    if ( !(unsigned int)MiChargeResident(&v10->Alignment, 1uLL, 0LL) )
    {
      v17 = -1073741670;
      goto LABEL_38;
    }
    v18 = MiReservePtes((__int64)&unk_140C52FF0, 3u);
    v19 = v18;
    if ( !v18 )
    {
LABEL_27:
      v20 = 1LL;
      v17 = -1073741670;
      if ( v10 == (union _SLIST_HEADER *)&MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v24 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v23 = (_DWORD)CachedResidentAvailable == v24;
              LODWORD(CachedResidentAvailable) = v24;
              if ( v23 )
                goto LABEL_38;
            }
            while ( v24 != -1 && (unsigned __int64)(v24 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v20 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
      }
      if ( v20 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[1060], v20);
LABEL_38:
      MiReturnCommit((__int64)v10, 1LL);
      return v17;
    }
    if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v10, v18 + 8, 1LL, a1, a4, v7, &v33) )
    {
      MiReleasePtes((__int64)&unk_140C52FF0, (_QWORD *)v19, 3u);
      goto LABEL_27;
    }
    if ( !MiIsPfnFromSlabAllocation(48 * v33 - 0x220000000000LL) )
    {
LABEL_51:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[1097], 1uLL);
      if ( (_BYTE)KiKernelCetEnabled )
      {
        KernelShadowStack = VslAllocateKernelShadowStack(
                              (__int64)(v19 << 25) >> 16,
                              v25,
                              v8,
                              (unsigned int)&v33,
                              BugCheckParameter4,
                              (__int64)a6);
        v17 = KernelShadowStack;
        if ( KernelShadowStack >= 0 )
        {
          *a5 = (__int64)((v19 << 25) + 805306368) >> 16;
          return 0;
        }
        if ( KernelShadowStack == -1073741800
          || KernelShadowStack == -1073741811
          || KernelShadowStack == -1073741790
          || KernelShadowStack == -1073741757 )
        {
          KeBugCheckEx(0x1Au, 0x3500uLL, v19, v8, KernelShadowStack);
        }
      }
      else
      {
        v17 = -1073741637;
      }
      MiDeleteKernelShadowStack((_QWORD *)v19, v25, 0LL);
      return v17;
    }
    v26 = 1LL;
    if ( v10 != (union _SLIST_HEADER *)&MiSystemPartition )
      goto LABEL_49;
    v27 = KeGetCurrentPrcb();
    v28 = (int)v27->CachedResidentAvailable;
    if ( (_DWORD)v28 == -1 )
      goto LABEL_49;
    if ( (unsigned __int64)(v28 + 1) <= 0x100 )
    {
      do
      {
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)&v27->CachedResidentAvailable, v28 + 1, v28);
        v23 = (_DWORD)v28 == v29;
        LODWORD(v28) = v29;
        if ( v23 )
          goto LABEL_50;
      }
      while ( v29 != -1 && (unsigned __int64)(v29 + 1LL) <= 0x100 );
    }
    if ( (int)v28 <= 192
      || (_DWORD)v28 != _InterlockedCompareExchange((volatile signed __int32 *)&v27->CachedResidentAvailable, 192, v28)
      || (v26 = (int)v28 - 192 + 1LL, (_DWORD)v28 != 191LL) )
    {
LABEL_49:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[1060], v26);
    }
LABEL_50:
    MiReturnCommit((__int64)v10, 1LL);
    goto LABEL_51;
  }
  if ( (a3 & 0x10) == 0
    || a2 != 2
    || (v11 = KeGetCurrentPrcb(), v11->SchedulerSubNode->Affinity.Reserved[0] != a4)
    || !v11->CachedShadowStack
    || v10 != (union _SLIST_HEADER *)&MiSystemPartition
    || (v12 = a6, v13 = _InterlockedExchange64((volatile __int64 *)&v11->CachedShadowStack, 0LL), (*v12 = v13) == 0) )
  {
    v14 = v10[1].Alignment + 24512LL * a4 + 32 * (v8 + 721);
    if ( FirstEntrySList((PSLIST_HEADER)v14) )
    {
      v15 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v14);
      if ( v15 )
      {
        if ( !FirstEntrySList((PSLIST_HEADER)v14) && !*(_BYTE *)(v14 + 28) )
          *(_BYTE *)(v14 + 28) = 1;
        *a6 = (__int64)v15[1].Next;
        RtlpInterlockedPushEntrySList(v10 + 28, v15);
        goto LABEL_17;
      }
    }
    ++*(_DWORD *)(v14 + 20);
    goto LABEL_20;
  }
LABEL_17:
  v16 = (*a6 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  *a5 = v16;
  MiUpdateKernelShadowStackOwnerData(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000018LL, (__int64)v11, a3, a1);
  return 0;
}

/*
 * XREFs of MiWaitForInPageComplete @ 0x140325F40
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1403078E8 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 * Callees:
 *     PfHardFaultLog @ 0x140238C50 (PfHardFaultLog.c)
 *     MiStoreFaultComplete @ 0x14024B0D0 (MiStoreFaultComplete.c)
 *     MiPrefetchRestOfCluster @ 0x14024FB84 (MiPrefetchRestOfCluster.c)
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiDereferenceControlAreaProbe @ 0x140302800 (MiDereferenceControlAreaProbe.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     ExReleaseSpinLockExclusive @ 0x140346A40 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiExceptionForMappedVa @ 0x14052D268 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x140530F30 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, int *a3)
{
  __int64 v3; // rdi
  ULONG_PTR v4; // r13
  __int64 v5; // r15
  __int64 v6; // r8
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rbp
  ULONG_PTR *v12; // r12
  ULONG_PTR v13; // rcx
  int v14; // esi
  __int64 v15; // rbp
  void (__fastcall __noreturn *Blink)(); // rdi
  __int64 v17; // rax
  int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rbp
  KIRQL v25; // di
  int v26; // ebp
  int v27; // eax
  NTSTATUS v28; // esi
  int v29; // edx
  int *v30; // rax
  int v31; // edi
  bool v32; // zf
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rcx
  unsigned int v35; // r12d
  void *v36; // rdi
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rdx
  _DWORD *v42; // r9
  __int64 v43; // r8
  unsigned __int64 v44; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v47; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 result; // rax
  ULONG_PTR v50; // rdi
  int v51; // [rsp+60h] [rbp-88h]
  __int64 v52; // [rsp+68h] [rbp-80h]
  BOOL IsRetryIoStatus; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-78h]
  ULONG_PTR v55; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v56; // [rsp+80h] [rbp-68h]
  __int64 v57; // [rsp+88h] [rbp-60h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-58h]
  unsigned int v60; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v61; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v62; // [rsp+F8h] [rbp+10h] BYREF
  int *v63; // [rsp+100h] [rbp+18h]
  unsigned int v64; // [rsp+108h] [rbp+20h] BYREF

  v63 = a3;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = a2 + 272;
  v62 = 0;
  v5 = 0LL;
  v64 = 0;
  v6 = a1;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 248);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v10 = *(_QWORD *)(a2 + 256);
  v55 = -1LL;
  v11 = *(_QWORD *)(v8 + 40);
  if ( v10 )
    v4 = v10;
  v52 = v3;
  v57 = v8;
  v12 = (ULONG_PTR *)(v4 + 48);
  if ( (v11 & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
  {
    v13 = (v8 + 0x58000000000LL) / 48;
    v56 = v13;
    if ( v13 < 0xFFFFFFFFFLL )
    {
      v14 = ~(*(_DWORD *)(v6 + 80) << 11) & 0x20000 | 0x40000000;
      v15 = *(_QWORD *)(qword_140C4E688 + 8 * ((v11 >> 39) & 0x3FF));
      Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
      v17 = MiSearchNumaNodeTable(v13);
      v18 = v14 | 8;
      v19 = *(_DWORD *)(v17 + 8);
      if ( Blink != KeSwapProcessOrStack )
        v18 = v14;
      MiFindContiguousPages(
        v15,
        v56 + 1,
        0xFFFFFFFFFuLL,
        0LL,
        1uLL,
        *(unsigned __int8 *)(v57 + 34) >> 6,
        v19,
        0x80000000,
        v18,
        0LL,
        (__int64 *)&v55);
      v6 = a1;
      v3 = v52;
    }
  }
  v20 = *(_QWORD *)(v6 + 16);
  if ( (v20 & 1) != 0 )
  {
    v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v21 == 2 )
    {
      if ( v3 )
        MiPrefetchRestOfCluster(a2, v21, v3);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v3 && (*(_BYTE *)(v3 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v3) + 4) )
    KiUnstackDetachProcess(a2 + 104, 0LL);
  if ( (*(_WORD *)(v4 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v4);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v23 = *(_DWORD *)(a2 + 192);
  if ( (v23 & 0x10) != 0 )
  {
    v24 = *(_QWORD *)(a2 + 336);
    if ( v24 )
    {
      v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v24 + 232));
      RtlAvlRemoveNode((unsigned __int64 *)(v24 + 240), (unsigned __int64 *)(a2 + 352));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v24 + 232), v25);
      v23 = *(_DWORD *)(a2 + 192);
      v3 = v52;
    }
  }
  v26 = 0;
  v60 = *(_DWORD *)(a2 + 184);
  v56 = (unsigned __int64)&v12[((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
                               + (unsigned __int64)*(unsigned int *)(v4 + 40)
                               + 4095) >> 12)
                             - 1];
  if ( (v23 & 0x100) != 0 )
    MiStoreFaultComplete(a2, &v64);
  v27 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v27 >= 0 )
    {
      v26 = MiValidateInPage(a2);
      if ( v26 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    MiDereferenceControlAreaProbe(*(volatile signed __int64 **)(a2 + 208), 0);
  }
  else if ( v27 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    v26 = MiValidatePagefilePageHash(a2);
  }
  v28 = *(_DWORD *)(a2 + 80);
  v29 = v64 & 1;
  v51 = v29;
  if ( (v64 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v60 >> 12) + ((v60 & 0xFFF) != 0));
    if ( v3 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 8) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 168));
    }
  }
  v30 = v63;
  v31 = 2 * v29;
  if ( *(_QWORD *)v63 )
  {
    PfHardFaultLog(*(_QWORD **)v63, v31, v22);
    v30 = v63;
  }
  v32 = (*(_BYTE *)(v4 + 10) & 1) == 0;
  *v30 = v31;
  if ( !v32 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  IsRetryIoStatus = 0;
  *(_DWORD *)(a2 + 188) = -1;
  if ( v28 < 0 )
  {
    if ( v28 != -1073741807 )
    {
      if ( v28 == -2147483626 )
        goto LABEL_75;
      IsRetryIoStatus = MiIsRetryIoStatus(v28, *(unsigned int *)(v4 + 40));
      if ( IsRetryIoStatus && !dword_140C4ED00 && (!v51 || (v64 & 2) != 0) )
        dword_140C4ED00 = 32;
      if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
      {
        v28 = -1073741801;
        goto LABEL_75;
      }
      goto LABEL_53;
    }
    if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v37 = 1LL;
    v38 = (v56 - (unsigned __int64)v12 + 8) >> 3;
    if ( (unsigned __int64)v12 > v56 )
      v38 = 0LL;
    if ( v38 )
    {
      do
      {
        MiZeroPhysicalPage(*v12, 3, *(unsigned __int8 *)(48 * *v12 - 0x58000000000LL + 34) >> 6);
        ++v37;
        ++v12;
      }
      while ( v37 <= v38 );
    }
    v28 = 0;
  }
  else
  {
    v33 = *(_QWORD *)(a2 + 88);
    if ( v33 != v60 )
    {
      if ( v33 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v51 )
          KeBugCheckEx(0x7Au, 4uLL, v33, a2, BugCheckParameter4);
        v34 = 8
            * ((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
              - (unsigned __int64)(v60 - *(_DWORD *)(v4 + 40))
              + v33
              + 4095) >> 12)
            + 40;
        v61 = v34;
        v35 = v33 & 0xFFF;
        if ( v35 )
        {
          v36 = (void *)(v35 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v34 + v4), &v62, 0x80000000LL));
          memset(v36, 0, 4096 - v35);
          MiUnmapPageInHyperSpaceWorker(v36, v62, 0x80000000LL);
          v34 = v61;
        }
        if ( v34 + v4 + 8 <= v56 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v34 - 48) >> 3) + 1;
      }
      else
      {
        v28 = -1073741801;
      }
    }
    if ( v26 == -1073741761 )
    {
LABEL_53:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v50 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) == 1 )
            v7 = MI_READ_PTE_LOCK_FREE(v50);
          MiFlushAllFilesystemPages(1LL);
          if ( v26 >= 0 )
            v26 = v28;
          KeBugCheckEx(0x7Au, v50, v26, v7, BugCheckParameter4);
        }
        if ( v26 != -1073741761 )
          v28 = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v55 != -1LL )
  {
    v39 = v57;
    MiCopyPage(v55, (v57 + 0x58000000000LL) / 48, 0LL, 1);
    v5 = 48 * v55 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v5 + 16, v40);
    v43 = *(_QWORD *)(v5 + 40) >> 60;
    LOBYTE(v43) = v43 & 7;
    if ( (_BYTE)v43 == 3 )
    {
      v44 = (unsigned __int8)MiLockPageInline(v5, v41, v43, v42);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v39 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v44 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = (v47 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v47;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v44);
    }
  }
  result = v64;
  *(_DWORD *)(a2 + 112) = v64;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v28;
  return result;
}

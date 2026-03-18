/*
 * XREFs of MiWaitForInPageComplete @ 0x14025D620
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14025AD4C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     MiDereferenceControlAreaProbe @ 0x14025DF5C (MiDereferenceControlAreaProbe.c)
 *     PfHardFaultLog @ 0x14025F7B8 (PfHardFaultLog.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsRetryIoStatus @ 0x1402F8164 (MiIsRetryIoStatus.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusive @ 0x14032EF20 (ExReleaseSpinLockExclusive.c)
 *     MiStoreFaultComplete @ 0x14035AA50 (MiStoreFaultComplete.c)
 *     MiPrefetchRestOfCluster @ 0x14035EA24 (MiPrefetchRestOfCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiExceptionForMappedVa @ 0x140527B58 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x14052B820 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MiValidatePagefilePageHash @ 0x14055827C (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  __int64 v3; // rdi
  ULONG_PTR v4; // r13
  __int64 v5; // r15
  __int64 v6; // r8
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // r9
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // rbp
  ULONG_PTR *v13; // r12
  ULONG_PTR v14; // rcx
  int v15; // esi
  __int64 v16; // rbp
  void (__fastcall __noreturn *Blink)(); // rdi
  _QWORD *v18; // rax
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rdx
  _BYTE *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rbp
  KIRQL v27; // di
  int v28; // ebp
  int v29; // eax
  int v30; // esi
  int v31; // edx
  unsigned int *v32; // rax
  unsigned int v33; // edi
  bool v34; // zf
  ULONG_PTR v35; // r12
  unsigned __int64 v36; // rcx
  unsigned int v37; // r12d
  void *v38; // rdi
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // rbp
  unsigned __int64 v42; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v45; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 result; // rax
  ULONG_PTR v48; // rdi
  int v49; // [rsp+60h] [rbp-88h]
  __int64 v50; // [rsp+68h] [rbp-80h]
  int IsRetryIoStatus; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-78h]
  __int64 v53; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v54; // [rsp+80h] [rbp-68h]
  __int64 v55; // [rsp+88h] [rbp-60h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-58h]
  unsigned int v58; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v59; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v60; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int *v61; // [rsp+100h] [rbp+18h]
  unsigned int v62; // [rsp+108h] [rbp+20h]

  v61 = a3;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = a2 + 272;
  v60 = 0;
  v5 = 0LL;
  v62 = 0;
  v6 = a1;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 248);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v10 = 0x2AAAAAAAAAAAAAABLL;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v11 = *(_QWORD *)(a2 + 256);
  v53 = -1LL;
  v12 = *(_QWORD *)(v8 + 40);
  if ( v11 )
    v4 = v11;
  v50 = v3;
  v55 = v8;
  v13 = (ULONG_PTR *)(v4 + 48);
  if ( (v12 & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
  {
    v14 = (v8 + 0x58000000000LL) / 48;
    v54 = v14;
    if ( v14 < 0xFFFFFFFFFLL )
    {
      v15 = ~(*(_DWORD *)(v6 + 80) << 11) & 0x20000 | 0x40000000;
      v16 = *(_QWORD *)(qword_140C4E448 + 8 * ((v12 >> 39) & 0x3FF));
      Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
      v18 = MiSearchNumaNodeTable(v14);
      v19 = v15 | 8;
      v20 = *((_DWORD *)v18 + 2);
      if ( Blink != KeSwapProcessOrStack )
        v19 = v15;
      MiFindContiguousPages(
        v16,
        v54 + 1,
        0xFFFFFFFFFuLL,
        0LL,
        1uLL,
        *(unsigned __int8 *)(v55 + 34) >> 6,
        v20,
        0x80000000,
        v19,
        0LL,
        &v53);
      v6 = a1;
      v3 = v50;
    }
  }
  v21 = *(_QWORD *)(v6 + 16);
  if ( (v21 & 1) != 0 )
  {
    v22 = (_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v22 == 2 )
    {
      if ( v3 )
        MiPrefetchRestOfCluster(a2, v22, v3, v10);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v3 && (*(_BYTE *)(v3 + 187) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(v3, v23) + 32) )
    KiUnstackDetachProcess(a2 + 104, 0LL);
  if ( (*(_WORD *)(v4 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v4, v23, v24);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v25 = *(_DWORD *)(a2 + 192);
  if ( (v25 & 0x10) != 0 )
  {
    v26 = *(_QWORD *)(a2 + 336);
    if ( v26 )
    {
      v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v26 + 232));
      RtlAvlRemoveNode((unsigned __int64 *)(v26 + 240), (unsigned __int64 *)(a2 + 352));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v26 + 232), v27);
      v25 = *(_DWORD *)(a2 + 192);
      v3 = v50;
    }
  }
  v28 = 0;
  v58 = *(_DWORD *)(a2 + 184);
  v54 = (unsigned __int64)&v13[((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
                               + (unsigned __int64)*(unsigned int *)(v4 + 40)
                               + 4095) >> 12)
                             - 1];
  if ( (v25 & 0x100) != 0 )
    MiStoreFaultComplete(a2);
  v29 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v29 >= 0 )
    {
      v28 = MiValidateInPage(a2);
      if ( v28 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    MiDereferenceControlAreaProbe(*(_QWORD *)(a2 + 208), 0LL);
  }
  else if ( v29 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    v28 = MiValidatePagefilePageHash(a2);
  }
  v30 = *(_DWORD *)(a2 + 80);
  v31 = v62 & 1;
  v49 = v31;
  if ( (v62 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v58 >> 12) + ((v58 & 0xFFF) != 0));
    if ( v3 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 8) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 168));
    }
  }
  v32 = v61;
  v33 = 2 * v31;
  if ( *(_QWORD *)v61 )
  {
    PfHardFaultLog(*(_QWORD *)v61, v33);
    v32 = v61;
  }
  v34 = (*(_BYTE *)(v4 + 10) & 1) == 0;
  *v32 = v33;
  if ( !v34 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  IsRetryIoStatus = 0;
  *(_DWORD *)(a2 + 188) = -1;
  if ( v30 < 0 )
  {
    if ( v30 != -1073741807 )
    {
      if ( v30 == -2147483626 )
        goto LABEL_75;
      IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v30, *(unsigned int *)(v4 + 40));
      if ( IsRetryIoStatus && !dword_140C4EAC0 && (!v49 || (v62 & 2) != 0) )
        dword_140C4EAC0 = 32;
      if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
      {
        v30 = -1073741801;
        goto LABEL_75;
      }
      goto LABEL_53;
    }
    if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v39 = 1LL;
    v40 = (v54 - (unsigned __int64)v13 + 8) >> 3;
    if ( (unsigned __int64)v13 > v54 )
      v40 = 0LL;
    if ( v40 )
    {
      do
      {
        MiZeroPhysicalPage(*v13);
        ++v39;
        ++v13;
      }
      while ( v39 <= v40 );
    }
    v30 = 0;
  }
  else
  {
    v35 = *(_QWORD *)(a2 + 88);
    if ( v35 != v58 )
    {
      if ( v35 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v49 )
          KeBugCheckEx(0x7Au, 4uLL, v35, a2, BugCheckParameter4);
        v36 = 8
            * ((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
              - (unsigned __int64)(v58 - *(_DWORD *)(v4 + 40))
              + v35
              + 4095) >> 12)
            + 40;
        v59 = v36;
        v37 = v35 & 0xFFF;
        if ( v37 )
        {
          v38 = (void *)(v37 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v36 + v4), &v60, 0x80000000LL));
          memset(v38, 0, 4096 - v37);
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, v60, 0x80000000);
          v36 = v59;
        }
        if ( v36 + v4 + 8 <= v54 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v36 - 48) >> 3) + 1;
      }
      else
      {
        v30 = -1073741801;
      }
    }
    if ( v28 == -1073741761 )
    {
LABEL_53:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v48 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) == 1 )
            v7 = MI_READ_PTE_LOCK_FREE(v48);
          MiFlushAllFilesystemPages(1LL);
          if ( v28 >= 0 )
            v28 = v30;
          KeBugCheckEx(0x7Au, v48, v28, v7, BugCheckParameter4);
        }
        if ( v28 != -1073741761 )
          v30 = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v53 != -1 )
  {
    v41 = v55;
    MiCopyPage(v53, (v55 + 0x58000000000LL) / 48, 0LL, 1LL);
    v5 = 48 * v53 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v5 + 16);
    if ( ((*(_QWORD *)(v5 + 40) >> 60) & 7) == 3 )
    {
      v42 = (unsigned __int8)MiLockPageInline(v5);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v41 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v42 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v34 = (v45 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v45;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v42);
    }
  }
  result = v62;
  *(_DWORD *)(a2 + 112) = v62;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v30;
  return result;
}

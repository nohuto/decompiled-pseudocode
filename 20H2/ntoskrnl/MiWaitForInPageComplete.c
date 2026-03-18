/*
 * XREFs of MiWaitForInPageComplete @ 0x1402D0710
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1402CFEBC (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 *     MiDereferenceControlAreaProbe @ 0x1402D104C (MiDereferenceControlAreaProbe.c)
 *     PfHardFaultLog @ 0x1402D10AC (PfHardFaultLog.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140302B30 (ExReleaseSpinLockExclusive.c)
 *     MiStoreFaultComplete @ 0x14032B5C0 (MiStoreFaultComplete.c)
 *     MiPrefetchRestOfCluster @ 0x14032F714 (MiPrefetchRestOfCluster.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiIsRetryIoStatus @ 0x14034450C (MiIsRetryIoStatus.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiExceptionForMappedVa @ 0x14052B528 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x14052F1F0 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MiValidatePagefilePageHash @ 0x14055BC4C (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  __int64 v3; // rdi
  ULONG_PTR v4; // r13
  ULONG_PTR v5; // r15
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
  int v20; // eax
  __int64 v21; // rdx
  _BYTE *v22; // rdx
  int v23; // edx
  __int64 v24; // rbp
  KIRQL v25; // di
  int v26; // ebp
  int v27; // eax
  int v28; // esi
  int v29; // edx
  unsigned int *v30; // rax
  unsigned int v31; // edi
  bool v32; // zf
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rcx
  unsigned int v35; // r12d
  void *v36; // rdi
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // rbp
  unsigned __int64 v40; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v43; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 result; // rax
  ULONG_PTR v46; // rdi
  int v47; // [rsp+60h] [rbp-88h]
  __int64 v48; // [rsp+68h] [rbp-80h]
  int IsRetryIoStatus; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-78h]
  ULONG_PTR v51; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-68h]
  __int64 v53; // [rsp+88h] [rbp-60h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-58h]
  unsigned int v56; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v57; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v58; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int *v59; // [rsp+100h] [rbp+18h]
  unsigned int v60; // [rsp+108h] [rbp+20h]

  v59 = a3;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = a2 + 272;
  v58 = 0;
  v5 = 0LL;
  v60 = 0;
  v6 = a1;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 248);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v10 = 0x2AAAAAAAAAAAAAABLL;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v11 = *(_QWORD *)(a2 + 256);
  v51 = -1LL;
  v12 = *(_QWORD *)(v8 + 40);
  if ( v11 )
    v4 = v11;
  v48 = v3;
  v53 = v8;
  v13 = (ULONG_PTR *)(v4 + 48);
  if ( (v12 & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
  {
    v14 = (v8 + 0x58000000000LL) / 48;
    v52 = v14;
    if ( v14 < 0xFFFFFFFFFLL )
    {
      v15 = ~(*(_DWORD *)(v6 + 80) << 11) & 0x20000 | 0x40000000;
      v16 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v12 >> 39) & 0x3FF));
      Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
      v18 = MiSearchNumaNodeTable(v14);
      v19 = v15 | 8;
      v20 = *((_DWORD *)v18 + 2);
      if ( Blink != KeSwapProcessOrStack )
        v19 = v15;
      MiFindContiguousPages(
        v16,
        v52 + 1,
        -1,
        0,
        1LL,
        *(unsigned __int8 *)(v53 + 34) >> 6,
        v20,
        0x80000000,
        v19,
        0LL,
        (__int64)&v51);
      v6 = a1;
      v3 = v48;
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
  if ( v3 && (*(_BYTE *)(v3 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v3) + 4) )
    KiUnstackDetachProcess(a2 + 104, 0);
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
      v3 = v48;
    }
  }
  v26 = 0;
  v56 = *(_DWORD *)(a2 + 184);
  v52 = (unsigned __int64)&v13[((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
                               + (unsigned __int64)*(unsigned int *)(v4 + 40)
                               + 4095) >> 12)
                             - 1];
  if ( (v23 & 0x100) != 0 )
    MiStoreFaultComplete(a2);
  v27 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v27 >= 0 )
    {
      v26 = MiValidateInPage(a2);
      if ( v26 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    MiDereferenceControlAreaProbe(*(_QWORD *)(a2 + 208), 0LL);
  }
  else if ( v27 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    v26 = MiValidatePagefilePageHash(a2);
  }
  v28 = *(_DWORD *)(a2 + 80);
  v29 = v60 & 1;
  v47 = v29;
  if ( (v60 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v56 >> 12) + ((v56 & 0xFFF) != 0));
    if ( v3 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 8) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 168));
    }
  }
  v30 = v59;
  v31 = 2 * v29;
  if ( *(_QWORD *)v59 )
  {
    PfHardFaultLog(*(_QWORD *)v59, v31);
    v30 = v59;
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
      IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v28, *(unsigned int *)(v4 + 40));
      if ( IsRetryIoStatus && !dword_140C4EB40 && (!v47 || (v60 & 2) != 0) )
        dword_140C4EB40 = 32;
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
    v38 = (v52 - (unsigned __int64)v13 + 8) >> 3;
    if ( (unsigned __int64)v13 > v52 )
      v38 = 0LL;
    if ( v38 )
    {
      do
      {
        MiZeroPhysicalPage(*v13);
        ++v37;
        ++v13;
      }
      while ( v37 <= v38 );
    }
    v28 = 0;
  }
  else
  {
    v33 = *(_QWORD *)(a2 + 88);
    if ( v33 != v56 )
    {
      if ( v33 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v47 )
          KeBugCheckEx(0x7Au, 4uLL, v33, a2, BugCheckParameter4);
        v34 = 8
            * ((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
              - (unsigned __int64)(v56 - *(_DWORD *)(v4 + 40))
              + v33
              + 4095) >> 12)
            + 40;
        v57 = v34;
        v35 = v33 & 0xFFF;
        if ( v35 )
        {
          v36 = (void *)(v35 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v34 + v4), &v58, 0x80000000LL));
          memset(v36, 0, 4096 - v35);
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v36, v58, 0x80000000);
          v34 = v57;
        }
        if ( v34 + v4 + 8 <= v52 )
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
          v46 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) == 1 )
            v7 = MI_READ_PTE_LOCK_FREE(v46);
          MiFlushAllFilesystemPages(1LL);
          if ( v26 >= 0 )
            v26 = v28;
          KeBugCheckEx(0x7Au, v46, v26, v7, BugCheckParameter4);
        }
        if ( v26 != -1073741761 )
          v28 = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v51 != -1LL )
  {
    v39 = v53;
    MiCopyPage(v51, (v53 + 0x58000000000LL) / 48, 0LL, 1);
    v5 = 48 * v51 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v5 + 16));
    if ( ((*(_QWORD *)(v5 + 40) >> 60) & 7) == 3 )
    {
      v40 = (unsigned __int8)MiLockPageInline(v5);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v39 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v40 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = (v43 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v43;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v40);
    }
  }
  result = v60;
  *(_DWORD *)(a2 + 112) = v60;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v28;
  return result;
}

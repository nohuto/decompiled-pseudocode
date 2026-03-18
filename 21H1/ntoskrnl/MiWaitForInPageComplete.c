/*
 * XREFs of MiWaitForInPageComplete @ 0x1402B6650
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1402B3D7C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 *     MiDereferenceControlAreaProbe @ 0x1402B6F8C (MiDereferenceControlAreaProbe.c)
 *     PfHardFaultLog @ 0x1402B87E8 (PfHardFaultLog.c)
 *     ExReleaseSpinLockExclusive @ 0x1402F3180 (ExReleaseSpinLockExclusive.c)
 *     MiStoreFaultComplete @ 0x14031CE70 (MiStoreFaultComplete.c)
 *     MiPrefetchRestOfCluster @ 0x140320F64 (MiPrefetchRestOfCluster.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsRetryIoStatus @ 0x140354144 (MiIsRetryIoStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiExceptionForMappedVa @ 0x140527508 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x14052B1D0 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiValidatePagefilePageHash @ 0x140557C2C (MiValidatePagefilePageHash.c)
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
  _DWORD *v23; // r9
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
  __int64 v42; // rdx
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
  int IsRetryIoStatus; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-78h]
  ULONG_PTR v55; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v56; // [rsp+80h] [rbp-68h]
  __int64 v57; // [rsp+88h] [rbp-60h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-58h]
  unsigned int v60; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v61; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v62; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int *v63; // [rsp+100h] [rbp+18h]
  unsigned int v64; // [rsp+108h] [rbp+20h]

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
  v10 = 0x2AAAAAAAAAAAAAABLL;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v11 = *(_QWORD *)(a2 + 256);
  v55 = -1LL;
  v12 = *(_QWORD *)(v8 + 40);
  if ( v11 )
    v4 = v11;
  v52 = v3;
  v57 = v8;
  v13 = (ULONG_PTR *)(v4 + 48);
  if ( (v12 & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
  {
    v14 = (v8 + 0x58000000000LL) / 48;
    v56 = v14;
    if ( v14 < 0xFFFFFFFFFLL )
    {
      v15 = ~(*(_DWORD *)(v6 + 80) << 11) & 0x20000 | 0x40000000;
      v16 = *(_QWORD *)(qword_140C4E588 + 8 * ((v12 >> 39) & 0x3FF));
      Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
      v18 = MiSearchNumaNodeTable(v14);
      v19 = v15 | 8;
      v20 = *((_DWORD *)v18 + 2);
      if ( Blink != KeSwapProcessOrStack )
        v19 = v15;
      MiFindContiguousPages(
        v16,
        v56 + 1,
        0xFFFFFFFFFuLL,
        0LL,
        1uLL,
        *(unsigned __int8 *)(v57 + 34) >> 6,
        v20,
        0x80000000,
        v19,
        0LL,
        (__int64 *)&v55);
      v6 = a1;
      v3 = v52;
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
    KiUnstackDetachProcess(a2 + 104, 0LL, v24, v23);
  if ( (*(_WORD *)(v4 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v4);
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
      v3 = v52;
    }
  }
  v28 = 0;
  v60 = *(_DWORD *)(a2 + 184);
  v56 = (unsigned __int64)&v13[((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
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
  v31 = v64 & 1;
  v51 = v31;
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
  v32 = v63;
  v33 = 2 * v31;
  if ( *(_QWORD *)v63 )
  {
    PfHardFaultLog(*(_QWORD *)v63, v33);
    v32 = v63;
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
      if ( IsRetryIoStatus && !dword_140C4EC00 && (!v51 || (v64 & 2) != 0) )
        dword_140C4EC00 = 32;
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
    v40 = (v56 - (unsigned __int64)v13 + 8) >> 3;
    if ( (unsigned __int64)v13 > v56 )
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
    if ( v35 != v60 )
    {
      if ( v35 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v51 )
          KeBugCheckEx(0x7Au, 4uLL, v35, a2, BugCheckParameter4);
        v36 = 8
            * ((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
              - (unsigned __int64)(v60 - *(_DWORD *)(v4 + 40))
              + v35
              + 4095) >> 12)
            + 40;
        v61 = v36;
        v37 = v35 & 0xFFF;
        if ( v37 )
        {
          v38 = (void *)(v37 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v36 + v4), &v62, 0x80000000LL, v23));
          memset(v38, 0, 4096 - v37);
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, v62, 0x80000000);
          v36 = v61;
        }
        if ( v36 + v4 + 8 <= v56 )
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
          v50 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) == 1 )
            v7 = MI_READ_PTE_LOCK_FREE(v50);
          MiFlushAllFilesystemPages(1LL);
          if ( v28 >= 0 )
            v28 = v30;
          KeBugCheckEx(0x7Au, v50, v28, v7, BugCheckParameter4);
        }
        if ( v28 != -1073741761 )
          v30 = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v55 != -1LL )
  {
    v41 = v57;
    MiCopyPage(v55, (v57 + 0x58000000000LL) / 48, 0LL, 1);
    v5 = 48 * v55 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v5 + 16));
    v43 = *(_QWORD *)(v5 + 40) >> 60;
    LOBYTE(v43) = v43 & 7;
    if ( (_BYTE)v43 == 3 )
    {
      v44 = (unsigned __int8)MiLockPageInline(v5, v42, v43);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v41 + 8);
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
            v34 = (v47 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v47;
            if ( v34 )
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
  *(_DWORD *)(a2 + 80) = v30;
  return result;
}

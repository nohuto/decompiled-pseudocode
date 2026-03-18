/*
 * XREFs of PfFileInfoNotify @ 0x1402A0D50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PfLogDeleteHelper @ 0x140244700 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14024487C (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14024496C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140244A48 (PfFbLogEntryComplete.c)
 *     PfSnReferenceProcessTrace @ 0x1402A1A10 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1402D2898 (PfSnLogPageFaultCommon.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     PfSnCheckLoggingForThread @ 0x140356D4C (PfSnCheckLoggingForThread.c)
 *     _wcsupr @ 0x1403D1A80 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     PfSnLogStreamCreate @ 0x14068221C (PfSnLogStreamCreate.c)
 *     PfpRpFileKeyUpdate @ 0x140691EF0 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x1406BCACC (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x1406D4A64 (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1)
{
  _DWORD *v1; // rsi
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbx
  unsigned __int64 *v17; // rdi
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rdx
  PSLIST_ENTRY j; // rcx
  int v22; // r14d
  unsigned __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v28; // r14
  unsigned __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // r13
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // edx
  const void *v38; // r12
  int v39; // ebx
  unsigned int v40; // r13d
  unsigned int v41; // r15d
  unsigned int *v42; // rdi
  int v43; // r9d
  wchar_t *v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  int v47; // r15d
  _QWORD *v48; // rcx
  int *v49; // r8
  unsigned __int64 v50; // rdx
  int v51; // ecx
  __int64 v52; // rdx
  int v53; // ecx
  int *v54; // rcx
  int v55; // edx
  int v56; // eax
  unsigned int v57; // r13d
  unsigned int *v58; // rdi
  __int16 v59; // cx
  int v60; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v62; // r12d
  struct _KTHREAD *v63; // rax
  struct _KTHREAD *v64; // r14
  __int64 SessionId; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r15
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  struct _KTHREAD *v73; // rbx
  unsigned __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rdx
  int v84; // ecx
  struct _KTHREAD *v85; // rax
  unsigned int v86; // r12d
  struct _KTHREAD *v87; // rax
  __int64 i; // r14
  struct _KTHREAD *v89; // r14
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r15
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  struct _KTHREAD *v99; // rbx
  unsigned __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r15
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  struct _SLIST_ENTRY *v109; // rcx
  int v110; // [rsp+30h] [rbp-69h] BYREF
  int v111; // [rsp+34h] [rbp-65h]
  int v112; // [rsp+38h] [rbp-61h] BYREF
  int v113; // [rsp+3Ch] [rbp-5Dh]
  int v114; // [rsp+40h] [rbp-59h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-51h] BYREF
  unsigned int *v116; // [rsp+50h] [rbp-49h] BYREF
  int v117; // [rsp+58h] [rbp-41h] BYREF
  int v118; // [rsp+5Ch] [rbp-3Dh]
  __int64 v119; // [rsp+60h] [rbp-39h]
  unsigned __int64 v120; // [rsp+68h] [rbp-31h]
  _QWORD v121[2]; // [rsp+70h] [rbp-29h] BYREF
  int v122; // [rsp+80h] [rbp-19h]
  int v123; // [rsp+84h] [rbp-15h]
  __int128 v124; // [rsp+88h] [rbp-11h]
  __int128 v125; // [rsp+98h] [rbp-1h]
  unsigned __int64 v126; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v129; // [rsp+100h] [rbp+67h]
  unsigned __int8 v130; // [rsp+100h] [rbp+67h]
  unsigned __int8 v131; // [rsp+100h] [rbp+67h]
  __int64 v132; // [rsp+108h] [rbp+6Fh]
  int v133; // [rsp+110h] [rbp+77h] BYREF
  int v134; // [rsp+118h] [rbp+7Fh]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)a1 == 15;
  v118 = 0;
  v123 = 0;
  ListEntry = 0LL;
  v116 = 0LL;
  if ( !v2 )
  {
    v22 = -1073741811;
    goto LABEL_62;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 4);
    if ( v34 == 7 )
    {
      v1[4] = _InterlockedIncrement(&dword_140CEC050);
    }
    else
    {
      v60 = v34 - 10;
      if ( !v60 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50288, 0LL);
        v62 = -1;
        if ( qword_140C50278 )
        {
          v22 = -1073741791;
        }
        else
        {
          v63 = KeGetCurrentThread();
          --v63->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50290, 0LL);
          dword_140C502A8 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50290);
          v112 = 0;
          v64 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50290) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)v64->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v64->SpecialApcDisable;
          ++v64->AbAllocationRegionCount;
          LODWORD(v66) = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v64->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v67, v66);
          v111 = v67;
          if ( v2 )
            goto LABEL_85;
          while ( 1 )
          {
            v68 = (__int64)&v64->LockEntries[v67];
            v66 = ~(1 << v67) & (unsigned int)v66;
            if ( (*(_BYTE *)(v68 + 26) & 1) != 0
              && (*(_DWORD *)(v68 + 32) & 1) == 0
              && (*(_QWORD *)(v68 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50290 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v68 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v68 + 26) &= ~1u;
              if ( *(_QWORD *)(v68 + 32) )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v67, v66);
            v111 = v67;
            if ( v2 )
              goto LABEL_85;
          }
          if ( !v68 )
          {
LABEL_85:
            if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&qword_140C50290, (unsigned int)SessionId, 0LL);
          }
          else
          {
            *(_BYTE *)(v68 + 32) |= 2u;
            if ( *(__int64 *)(v68 + 32) < 0 )
              KiAbEntryRemoveFromTree(v68, v66, SessionId);
            v112 = *(_DWORD *)(v68 + 88) & 0x1FFFF;
            *(_DWORD *)(v68 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v68 + 25) &= ~1u;
            *(_QWORD *)(v68 + 32) = 0LL;
            v82 = (signed __int64)(v68 - (unsigned __int64)v64->LockEntries) / 96;
            if ( AbAllocationRegionCount == 1 )
              v64->AbEntrySummary |= 1 << v82;
            else
              _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v82);
          }
          --v64->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v64, (__int64)&qword_140C50290, &v112);
          v2 = v64->SpecialApcDisable++ == -1;
          if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
            KiCheckForKernelApcDelivery(v70, v69, v71, v72);
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_140C50278 = *((_QWORD *)v1 + 2);
          v22 = 0;
          _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50288);
        v114 = 0;
        v73 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50288) == 1 )
          v62 = MmGetSessionIdEx((__int64)v73->ApcState.Process);
        --v73->SpecialApcDisable;
        ++v73->AbAllocationRegionCount;
        v74 = (unsigned __int64)&qword_140C50288 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v75) = ((char)v73->AbEntrySummary | (char)v73->AbOrphanedEntrySummary) ^ 0x3F;
        v129 = v73->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v76, v75);
        v113 = v76;
        if ( v2 )
          goto LABEL_97;
        while ( 1 )
        {
          v77 = (__int64)&v73->LockEntries[v76];
          v75 = ~(1 << v76) & (unsigned int)v75;
          if ( (*(_BYTE *)(v77 + 26) & 1) != 0
            && (*(_DWORD *)(v77 + 32) & 1) == 0
            && (*(_QWORD *)(v77 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v74
            && *(_DWORD *)(v77 + 40) == v62 )
          {
            *(_BYTE *)(v77 + 26) &= ~1u;
            if ( *(_QWORD *)(v77 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v76, v75);
          v113 = v76;
          if ( v2 )
            goto LABEL_97;
        }
        if ( !v77 )
        {
LABEL_97:
          if ( (*((_DWORD *)&v73->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v73, (ULONG_PTR)&qword_140C50288, v62, 0LL);
        }
        else
        {
          *(_BYTE *)(v77 + 32) |= 2u;
          if ( *(__int64 *)(v77 + 32) < 0 )
            KiAbEntryRemoveFromTree(v77, v75, v74);
          v114 = *(_DWORD *)(v77 + 88) & 0x1FFFF;
          *(_DWORD *)(v77 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v77 + 25) &= ~1u;
          *(_QWORD *)(v77 + 32) = 0LL;
          v83 = (signed __int64)(v77 - (unsigned __int64)v73->LockEntries) / 96;
          if ( v129 == 1 )
            v73->AbEntrySummary |= 1 << v83;
          else
            _InterlockedOr8((volatile signed __int8 *)&v73->AbOrphanedEntrySummary, 1 << v83);
        }
        --v73->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v73, (__int64)&qword_140C50288, &v114);
        v2 = v73->SpecialApcDisable++ == -1;
        if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v73->ApcState.ApcListHead[0].Flink != &v73->152 )
          KiCheckForKernelApcDelivery(v79, v78, v80, v81);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v84 = v60 - 1;
      if ( !v84 )
      {
        v85 = KeGetCurrentThread();
        --v85->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50288, 0LL);
        v86 = -1;
        if ( qword_140C50278 )
        {
          v87 = KeGetCurrentThread();
          --v87->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50290, 0LL);
          dword_140C502A8 |= 1u;
          for ( i = qword_140C50298; (__int64 *)i != &qword_140C50298; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50290);
          v133 = 0;
          v89 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50290) == 1 )
            v90 = (unsigned int)MmGetSessionIdEx((__int64)v89->ApcState.Process);
          else
            v90 = 0xFFFFFFFFLL;
          --v89->SpecialApcDisable;
          ++v89->AbAllocationRegionCount;
          LODWORD(v91) = ((char)v89->AbEntrySummary | (char)v89->AbOrphanedEntrySummary) ^ 0x3F;
          v130 = v89->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v92, v91);
          if ( v2 )
            goto LABEL_148;
          while ( 1 )
          {
            v93 = (__int64)&v89->LockEntries[v92];
            v91 = ~(1 << v92) & (unsigned int)v91;
            if ( (*(_BYTE *)(v93 + 26) & 1) != 0
              && (*(_DWORD *)(v93 + 32) & 1) == 0
              && (*(_QWORD *)(v93 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50290 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v93 + 40) == (_DWORD)v90 )
            {
              *(_BYTE *)(v93 + 26) &= ~1u;
              if ( *(_QWORD *)(v93 + 32) )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v92, v91);
            if ( v2 )
              goto LABEL_148;
          }
          if ( !v93 )
          {
LABEL_148:
            if ( (*((_DWORD *)&v89->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v89, (ULONG_PTR)&qword_140C50290, (unsigned int)v90, 0LL);
          }
          else
          {
            *(_BYTE *)(v93 + 32) |= 2u;
            if ( *(__int64 *)(v93 + 32) < 0 )
              KiAbEntryRemoveFromTree(v93, v91, v90);
            v133 = *(_DWORD *)(v93 + 88) & 0x1FFFF;
            *(_DWORD *)(v93 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v93 + 25) &= ~1u;
            *(_QWORD *)(v93 + 32) = 0LL;
            v94 = (signed __int64)(v93 - (unsigned __int64)v89->LockEntries) / 96;
            if ( v130 == 1 )
              v89->AbEntrySummary |= 1 << v94;
            else
              _InterlockedOr8((volatile signed __int8 *)&v89->AbOrphanedEntrySummary, 1 << v94);
          }
          --v89->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v89, (__int64)&qword_140C50290, &v133);
          v2 = v89->SpecialApcDisable++ == -1;
          if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v89->ApcState.ApcListHead[0].Flink != &v89->152 )
            KiCheckForKernelApcDelivery(v96, v95, v97, v98);
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&RunRef);
          ExRundownCompleted((PEX_RUNDOWN_REF)&RunRef);
          qword_140C50278 = 0LL;
          v22 = 0;
        }
        else
        {
          v22 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50288);
        v110 = 0;
        v99 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50288) == 1 )
          v86 = MmGetSessionIdEx((__int64)v99->ApcState.Process);
        --v99->SpecialApcDisable;
        ++v99->AbAllocationRegionCount;
        v100 = (unsigned __int64)&qword_140C50288 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v101) = ((char)v99->AbEntrySummary | (char)v99->AbOrphanedEntrySummary) ^ 0x3F;
        v131 = v99->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v102, v101);
        v134 = v102;
        if ( v2 )
          goto LABEL_172;
        while ( 1 )
        {
          v103 = (__int64)&v99->LockEntries[v102];
          v101 = ~(1 << v102) & (unsigned int)v101;
          if ( (*(_BYTE *)(v103 + 26) & 1) != 0
            && (*(_DWORD *)(v103 + 32) & 1) == 0
            && (*(_QWORD *)(v103 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v100
            && *(_DWORD *)(v103 + 40) == v86 )
          {
            *(_BYTE *)(v103 + 26) &= ~1u;
            if ( *(_QWORD *)(v103 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v102, v101);
          v134 = v102;
          if ( v2 )
            goto LABEL_172;
        }
        if ( !v103 )
        {
LABEL_172:
          if ( (*((_DWORD *)&v99->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v99, (ULONG_PTR)&qword_140C50288, v86, 0LL);
        }
        else
        {
          *(_BYTE *)(v103 + 32) |= 2u;
          if ( *(__int64 *)(v103 + 32) < 0 )
            KiAbEntryRemoveFromTree(v103, v101, v100);
          v110 = *(_DWORD *)(v103 + 88) & 0x1FFFF;
          *(_DWORD *)(v103 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v103 + 25) &= ~1u;
          *(_QWORD *)(v103 + 32) = 0LL;
          v104 = (signed __int64)(v103 - (unsigned __int64)v99->LockEntries) / 96;
          if ( v131 == 1 )
            v99->AbEntrySummary |= 1 << v104;
          else
            _InterlockedOr8((volatile signed __int8 *)&v99->AbOrphanedEntrySummary, 1 << v104);
        }
        --v99->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v99, (__int64)&qword_140C50288, &v110);
        v2 = v99->SpecialApcDisable++ == -1;
        if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v99->ApcState.ApcListHead[0].Flink != &v99->152 )
          KiCheckForKernelApcDelivery(v106, v105, v107, v108);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v84 != 1 )
      {
LABEL_123:
        v22 = -1073741637;
        goto LABEL_62;
      }
      if ( (dword_140C503D0 & 2) != 0 )
      {
        v22 = -1073741431;
        goto LABEL_62;
      }
    }
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v46 = *(_DWORD *)(a1 + 4);
    if ( v46 == 2 )
    {
      PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else if ( v46 )
    {
      if ( v46 == 3 )
        PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (v1[2] & 1) == 0 )
    return 0;
  if ( dword_140C4FC60 >= (unsigned int)dword_140C4FC64 )
  {
    v53 = v1[1];
    v4 = v53;
    if ( v53 != 4 && v53 != 2 && v53 != 3 )
    {
      v22 = -1073741697;
      goto LABEL_62;
    }
  }
  else
  {
    v4 = v1[1];
  }
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)v1 + 2);
    v6 = *((unsigned int *)v5 + 4) + 4095LL;
    v7 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v28 = v5[4];
      v29 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
      v30 = v5[1];
      v31 = v5[3];
      v132 = *v5;
      v32 = PfSnReferenceProcessTrace(*(_QWORD *)(v28 + 544));
      v33 = (struct _EX_RUNDOWN_REF *)v32;
      if ( v32 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v28, v32, 0LL) )
        {
          v47 = v30 & 0xFFFFF000;
          if ( v7 )
          {
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v33, v132, v31, v47, 0) < 0 )
                break;
              v47 += 4096;
              --v29;
            }
            while ( v29 );
            v1 = (_DWORD *)a1;
          }
        }
        ExReleaseRundownProtection_0(v33 + 45);
      }
    }
    if ( dword_140C4FC60 < (unsigned int)dword_140C4FC64 )
    {
      v8 = *((_QWORD *)v1 + 2);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1296) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 1124) & 0x100000) != 0 )
      {
        v56 = 2;
        if ( v14 < 2 )
          v56 = (*(_DWORD *)(v9 + 1296) >> 12) & 7;
        v14 = v56;
      }
      if ( v14 < dword_140C4E6AC )
      {
        v22 = 0;
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(v13 + 1088);
      *(_QWORD *)&v125 = v7 | (v10 << 63);
      v16 = 0LL;
      v17 = 0LL;
      v18 = (v15 ^ *(_QWORD *)(v13 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v124 = v12;
      *((_QWORD *)&v125 + 1) = v18;
      v126 = __PAIR64__(v15, dword_140CEC050);
      *((_QWORD *)&v124 + 1) = v11 >> 12;
      v19 = dword_140C5015C
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection_0(&stru_140C4FBA0) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140C4FBC0); !j; j = RtlpInterlockedPopEntrySList(&stru_140C4FBC0) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140C4FBB0);
            if ( j )
              break;
            v22 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140C4FBF8)(&stru_140C4FBA0);
            if ( v22 < 0 )
              goto LABEL_190;
          }
          v20 = *((_QWORD *)&j[1].Next + 1);
          if ( (__int64)j[2].Next - v20 >= 64 )
          {
            v17 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v16 = j;
            v22 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          ((void (*)(void))qword_140C4FC00)();
          if ( !ExAcquireRundownProtection_0(&stru_140C4FBA0) )
            goto LABEL_185;
        }
        RtlpInterlockedPushEntrySList(&stru_140C4FBB0, j);
        v22 = -1073741789;
LABEL_190:
        ++dword_140C4FC0C;
        dword_140C4FC10 += 64;
        ExReleaseRundownProtection_0(&stru_140C4FBA0);
LABEL_16:
        if ( v22 >= 0 )
        {
          v23 = *v17;
          v24 = v124;
          *((_DWORD *)v17 + 2) = v19;
          v25 = v125;
          *v17 = v23 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v17 + 1) = v24;
          *(_QWORD *)&v24 = v126;
          *((_OWORD *)v17 + 2) = v25;
          v17[6] = v24;
          *((_QWORD *)&v16[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v16[2].Next + 2);
          Next = v16[1].Next;
          if ( (__int64)v16[2].Next - *((_QWORD *)&v16[1].Next + 1) < SLODWORD(Next[5].Next) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v16);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v16);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
          }
          v22 = 0;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_185:
        v22 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FD50 + 1, 1u);
      if ( v16 )
      {
        v109 = v16;
LABEL_188:
        PfFbLogEntryComplete(v109, v20, 0LL);
      }
LABEL_20:
      if ( v22 >= 0 )
        return (unsigned int)v22;
      goto LABEL_62;
    }
    v22 = -1073741697;
LABEL_62:
    if ( (int)v1[1] <= 3 )
      ++dword_140C4FD64;
    return (unsigned int)v22;
  }
  switch ( v4 )
  {
    case 0:
      v57 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v41 = (v57 + 65) & 0xFFFFFFF8;
      v22 = PfFbLogEntryReserve(&stru_140C4FB20, &ListEntry, &v116, v41);
      if ( v22 < 0 )
        goto LABEL_180;
      v58 = v116;
      *v116 = (8 * v41) | *v116 & 0x80000002 | 2;
      v58[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 52LL);
      v58[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL);
      *((_QWORD *)v58 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v58[9] ^= (v58[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF;
      v58[9] ^= ((unsigned __int8)v58[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v58 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v58[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 24LL);
      v59 = 2 * *(_WORD *)(*((_QWORD *)v1 + 2) + 30LL);
      *((_WORD *)v58 + 20) = v59;
      *((_WORD *)v58 + 21) = v59;
      memmove(v58 + 14, *(const void **)(*((_QWORD *)v1 + 2) + 40LL), v57);
      v44 = (wchar_t *)(v58 + 14);
      *((_WORD *)v58 + *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL) + 28) = 0;
      goto LABEL_33;
    case 1:
      PfLogDeleteHelper(2, *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL), *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL), 0);
      return 0;
    case 2:
      v35 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v35 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v35 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C501D8, v35, 1LL);
      if ( dword_140C4FC60 >= (unsigned int)dword_140C4FC64 )
      {
        v22 = -1073741697;
        goto LABEL_62;
      }
      v36 = *((_QWORD *)v1 + 2);
      v37 = *(_DWORD *)(v36 + 32);
      v38 = (const void *)(*(_QWORD *)(v36 + 24) + 2LL * (unsigned __int16)v37);
      v39 = HIWORD(v37) - (unsigned __int16)v37;
      v40 = 2 * v39;
      v41 = (2 * v39 + 53) & 0xFFFFFFF8;
      v22 = PfFbLogEntryReserve(&stru_140C4FB20, &ListEntry, &v116, v41);
      if ( v22 >= 0 )
      {
        v42 = v116;
        *v116 = *v116 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
        v42[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 40LL);
        v42[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL);
        *((_QWORD *)v42 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
        v42[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL);
        *((_QWORD *)v42 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
        v42[10] ^= (v42[10] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL)) & 1;
        v43 = v42[10] ^ ((unsigned __int8)v42[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3)) & 2;
        v42[10] = v43;
        v42[10] = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL))) & 4;
        *((_WORD *)v42 + 21) = v39;
        memmove(v42 + 11, v38, v40);
        v44 = (wchar_t *)(v42 + 11);
        *((_WORD *)v42 + *((unsigned __int16 *)v42 + 21) + 22) = 0;
LABEL_33:
        wcsupr(v44);
        PfFbLogEntryComplete(ListEntry, v45, v41);
        return 0;
      }
LABEL_180:
      v109 = ListEntry;
      if ( !ListEntry )
        goto LABEL_20;
      goto LABEL_188;
    case 3:
      v52 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v52 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v52 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C501D8, v52, 0LL);
      if ( dword_140C4FC60 < (unsigned int)dword_140C4FC64 )
      {
        PfLogDeleteHelper(
          0,
          *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL),
          *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL),
          (*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3) & 1);
        return 0;
      }
      v22 = -1073741697;
      goto LABEL_62;
    case 8:
      v54 = (int *)*((_QWORD *)v1 + 2);
      v49 = &v117;
      v118 = 0;
      v55 = *v54;
      v117 = v54[1];
      v119 = *((_QWORD *)v54 + 1);
      v120 = (*((_QWORD *)v54 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v55 & 3));
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 24;
      goto LABEL_52;
    case 13:
      v48 = (_QWORD *)*((_QWORD *)v1 + 2);
      if ( !v48[1] )
      {
        v22 = -1073741747;
        goto LABEL_62;
      }
      v121[1] = v48[1];
      v49 = (int *)v121;
      v122 = dword_140CEC050;
      v121[0] = *v48;
      v123 = 0;
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 31;
LABEL_52:
      PfLogEvent(v51, dword_140C5015C + (v50 >> 10), v49, 0x18u);
      v22 = 0;
      break;
    default:
      goto LABEL_123;
  }
  return (unsigned int)v22;
}

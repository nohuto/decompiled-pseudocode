/*
 * XREFs of PfFileInfoNotify @ 0x1402B5440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     PfSnReferenceProcessTrace @ 0x1402B6100 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1402B632C (PfSnLogPageFaultCommon.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     PfLogDeleteHelper @ 0x1402D59DC (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x1402D5B58 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x1402D5C48 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1402D5D24 (PfFbLogEntryComplete.c)
 *     PfSnCheckLoggingForThread @ 0x140324330 (PfSnCheckLoggingForThread.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     _wcsupr @ 0x1403CDFB0 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PfSnNameRemoveAll @ 0x1405EF480 (PfSnNameRemoveAll.c)
 *     PfpRpFileKeyUpdate @ 0x14063DD50 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x14064FC74 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x140651EAC (PfSnLogVolumeCreate.c)
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
  PSLIST_ENTRY v15; // rbx
  unsigned __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // r15d
  PSLIST_ENTRY j; // rcx
  int v20; // r14d
  unsigned __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rax
  struct _EX_RUNDOWN_REF *v31; // rdi
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // edx
  const void *v36; // r12
  int v37; // ebx
  unsigned int v38; // r13d
  unsigned int *v39; // rdi
  int v40; // r9d
  wchar_t *v41; // rcx
  int v42; // eax
  int v43; // r15d
  _QWORD *v44; // rcx
  int *v45; // r8
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // ecx
  int *v50; // rcx
  int v51; // edx
  int v52; // eax
  unsigned int v53; // r13d
  unsigned int *v54; // rdi
  __int16 v55; // cx
  int v56; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v58; // r12d
  struct _KTHREAD *v59; // rax
  struct _KTHREAD *v60; // r14
  unsigned int SessionId; // r8d
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // r15
  __int64 v65; // rcx
  struct _KTHREAD *v66; // rbx
  unsigned int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // r15
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  int v73; // ecx
  struct _KTHREAD *v74; // rax
  unsigned int v75; // r12d
  struct _KTHREAD *v76; // rax
  __int64 i; // r14
  struct _KTHREAD *v78; // r14
  unsigned int v79; // r8d
  unsigned int v80; // edx
  __int64 v81; // rcx
  __int64 v82; // r15
  __int64 v83; // rdx
  __int64 v84; // rcx
  struct _KTHREAD *v85; // rbx
  unsigned int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // [rsp+30h] [rbp-69h] BYREF
  int v92; // [rsp+34h] [rbp-65h]
  int v93; // [rsp+38h] [rbp-61h] BYREF
  int v94; // [rsp+3Ch] [rbp-5Dh]
  int v95; // [rsp+40h] [rbp-59h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-51h]
  unsigned int *v97; // [rsp+50h] [rbp-49h]
  int v98; // [rsp+58h] [rbp-41h] BYREF
  int v99; // [rsp+5Ch] [rbp-3Dh]
  __int64 v100; // [rsp+60h] [rbp-39h]
  unsigned __int64 v101; // [rsp+68h] [rbp-31h]
  _QWORD v102[2]; // [rsp+70h] [rbp-29h] BYREF
  int v103; // [rsp+80h] [rbp-19h]
  int v104; // [rsp+84h] [rbp-15h]
  __int128 v105; // [rsp+88h] [rbp-11h]
  __int128 v106; // [rsp+98h] [rbp-1h]
  __int64 v107; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v110; // [rsp+100h] [rbp+67h]
  unsigned __int8 v111; // [rsp+100h] [rbp+67h]
  unsigned __int8 v112; // [rsp+100h] [rbp+67h]
  __int64 v113; // [rsp+108h] [rbp+6Fh]
  int v114; // [rsp+110h] [rbp+77h] BYREF
  int v115; // [rsp+118h] [rbp+7Fh]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)a1 == 15;
  v99 = 0;
  v104 = 0;
  ListEntry = 0LL;
  v97 = 0LL;
  if ( !v2 )
  {
    v20 = -1073741811;
    goto LABEL_62;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v32 = *(_DWORD *)(a1 + 4);
    if ( v32 == 7 )
    {
      v1[4] = _InterlockedIncrement(&dword_140CEC0D0);
    }
    else
    {
      v56 = v32 - 10;
      if ( !v56 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50348, 0LL);
        v58 = -1;
        if ( qword_140C50338 )
        {
          v20 = -1073741791;
        }
        else
        {
          v59 = KeGetCurrentThread();
          --v59->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50350, 0LL);
          dword_140C50368 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50350, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50350);
          v93 = 0;
          v60 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50350) == 1 )
            SessionId = MmGetSessionIdEx((__int64)v60->ApcState.Process);
          else
            SessionId = -1;
          --v60->SpecialApcDisable;
          ++v60->AbAllocationRegionCount;
          v62 = ((char)v60->AbEntrySummary | (char)v60->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v60->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v63, v62);
          v92 = v63;
          if ( v2 )
            goto LABEL_85;
          while ( 1 )
          {
            v64 = (__int64)&v60->LockEntries[v63];
            v62 &= ~(1 << v63);
            if ( (*(_BYTE *)(v64 + 26) & 1) != 0
              && (*(_DWORD *)(v64 + 32) & 1) == 0
              && (*(_QWORD *)(v64 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50350 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v64 + 40) == SessionId )
            {
              *(_BYTE *)(v64 + 26) &= ~1u;
              if ( *(_QWORD *)(v64 + 32) )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v63, v62);
            v92 = v63;
            if ( v2 )
              goto LABEL_85;
          }
          if ( !v64 )
          {
LABEL_85:
            if ( (*((_DWORD *)&v60->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v60, (ULONG_PTR)&qword_140C50350, SessionId, 0LL);
          }
          else
          {
            *(_BYTE *)(v64 + 32) |= 2u;
            if ( *(__int64 *)(v64 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v64);
            v93 = *(_DWORD *)(v64 + 88) & 0x1FFFF;
            *(_DWORD *)(v64 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v64 + 25) &= ~1u;
            *(_QWORD *)(v64 + 32) = 0LL;
            v71 = (signed __int64)(v64 - (unsigned __int64)v60->LockEntries) / 96;
            if ( AbAllocationRegionCount == 1 )
              v60->AbEntrySummary |= 1 << v71;
            else
              _InterlockedOr8((volatile signed __int8 *)&v60->AbOrphanedEntrySummary, 1 << v71);
          }
          --v60->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v60, (__int64)&qword_140C50350, &v93);
          v2 = v60->SpecialApcDisable++ == -1;
          if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v60->ApcState.ApcListHead[0].Flink != &v60->152 )
            KiCheckForKernelApcDelivery(v65);
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_140C50338 = *((_QWORD *)v1 + 2);
          v20 = 0;
          _InterlockedExchange64((volatile __int64 *)&stru_140C50340, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50348, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50348);
        v95 = 0;
        v66 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50348) == 1 )
          v58 = MmGetSessionIdEx((__int64)v66->ApcState.Process);
        --v66->SpecialApcDisable;
        ++v66->AbAllocationRegionCount;
        v67 = ((char)v66->AbEntrySummary | (char)v66->AbOrphanedEntrySummary) ^ 0x3F;
        v110 = v66->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v68, v67);
        v94 = v68;
        if ( v2 )
          goto LABEL_97;
        while ( 1 )
        {
          v69 = (__int64)&v66->LockEntries[v68];
          v67 &= ~(1 << v68);
          if ( (*(_BYTE *)(v69 + 26) & 1) != 0
            && (*(_DWORD *)(v69 + 32) & 1) == 0
            && (*(_QWORD *)(v69 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50348 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v69 + 40) == v58 )
          {
            *(_BYTE *)(v69 + 26) &= ~1u;
            if ( *(_QWORD *)(v69 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v68, v67);
          v94 = v68;
          if ( v2 )
            goto LABEL_97;
        }
        if ( !v69 )
        {
LABEL_97:
          if ( (*((_DWORD *)&v66->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v66, (ULONG_PTR)&qword_140C50348, v58, 0LL);
        }
        else
        {
          *(_BYTE *)(v69 + 32) |= 2u;
          if ( *(__int64 *)(v69 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v69);
          v95 = *(_DWORD *)(v69 + 88) & 0x1FFFF;
          *(_DWORD *)(v69 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v69 + 25) &= ~1u;
          *(_QWORD *)(v69 + 32) = 0LL;
          v72 = (signed __int64)(v69 - (unsigned __int64)v66->LockEntries) / 96;
          if ( v110 == 1 )
            v66->AbEntrySummary |= 1 << v72;
          else
            _InterlockedOr8((volatile signed __int8 *)&v66->AbOrphanedEntrySummary, 1 << v72);
        }
        --v66->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v66, (__int64)&qword_140C50348, &v95);
        v2 = v66->SpecialApcDisable++ == -1;
        if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
          KiCheckForKernelApcDelivery(v70);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v73 = v56 - 1;
      if ( !v73 )
      {
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50348, 0LL);
        v75 = -1;
        if ( qword_140C50338 )
        {
          v76 = KeGetCurrentThread();
          --v76->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50350, 0LL);
          dword_140C50368 |= 1u;
          for ( i = qword_140C50358; (__int64 *)i != &qword_140C50358; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50350, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50350);
          v114 = 0;
          v78 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50350) == 1 )
            v79 = MmGetSessionIdEx((__int64)v78->ApcState.Process);
          else
            v79 = -1;
          --v78->SpecialApcDisable;
          ++v78->AbAllocationRegionCount;
          v80 = ((char)v78->AbEntrySummary | (char)v78->AbOrphanedEntrySummary) ^ 0x3F;
          v111 = v78->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v81, v80);
          if ( v2 )
            goto LABEL_148;
          while ( 1 )
          {
            v82 = (__int64)&v78->LockEntries[v81];
            v80 &= ~(1 << v81);
            if ( (*(_BYTE *)(v82 + 26) & 1) != 0
              && (*(_DWORD *)(v82 + 32) & 1) == 0
              && (*(_QWORD *)(v82 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50350 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v82 + 40) == v79 )
            {
              *(_BYTE *)(v82 + 26) &= ~1u;
              if ( *(_QWORD *)(v82 + 32) )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v81, v80);
            if ( v2 )
              goto LABEL_148;
          }
          if ( !v82 )
          {
LABEL_148:
            if ( (*((_DWORD *)&v78->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v78, (ULONG_PTR)&qword_140C50350, v79, 0LL);
          }
          else
          {
            *(_BYTE *)(v82 + 32) |= 2u;
            if ( *(__int64 *)(v82 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v82);
            v114 = *(_DWORD *)(v82 + 88) & 0x1FFFF;
            *(_DWORD *)(v82 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v82 + 25) &= ~1u;
            *(_QWORD *)(v82 + 32) = 0LL;
            v83 = (signed __int64)(v82 - (unsigned __int64)v78->LockEntries) / 96;
            if ( v111 == 1 )
              v78->AbEntrySummary |= 1 << v83;
            else
              _InterlockedOr8((volatile signed __int8 *)&v78->AbOrphanedEntrySummary, 1 << v83);
          }
          --v78->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v78, (__int64)&qword_140C50350, &v114);
          v2 = v78->SpecialApcDisable++ == -1;
          if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v78->ApcState.ApcListHead[0].Flink != &v78->152 )
            KiCheckForKernelApcDelivery(v84);
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50340);
          ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50340);
          qword_140C50338 = 0LL;
          v20 = 0;
        }
        else
        {
          v20 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50348, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50348);
        v91 = 0;
        v85 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50348) == 1 )
          v75 = MmGetSessionIdEx((__int64)v85->ApcState.Process);
        --v85->SpecialApcDisable;
        ++v85->AbAllocationRegionCount;
        v86 = ((char)v85->AbEntrySummary | (char)v85->AbOrphanedEntrySummary) ^ 0x3F;
        v112 = v85->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v87, v86);
        v115 = v87;
        if ( v2 )
          goto LABEL_172;
        while ( 1 )
        {
          v88 = (__int64)&v85->LockEntries[v87];
          v86 &= ~(1 << v87);
          if ( (*(_BYTE *)(v88 + 26) & 1) != 0
            && (*(_DWORD *)(v88 + 32) & 1) == 0
            && (*(_QWORD *)(v88 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50348 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v88 + 40) == v75 )
          {
            *(_BYTE *)(v88 + 26) &= ~1u;
            if ( *(_QWORD *)(v88 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v87, v86);
          v115 = v87;
          if ( v2 )
            goto LABEL_172;
        }
        if ( !v88 )
        {
LABEL_172:
          if ( (*((_DWORD *)&v85->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v85, (ULONG_PTR)&qword_140C50348, v75, 0LL);
        }
        else
        {
          *(_BYTE *)(v88 + 32) |= 2u;
          if ( *(__int64 *)(v88 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v88);
          v91 = *(_DWORD *)(v88 + 88) & 0x1FFFF;
          *(_DWORD *)(v88 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v88 + 25) &= ~1u;
          *(_QWORD *)(v88 + 32) = 0LL;
          v89 = (signed __int64)(v88 - (unsigned __int64)v85->LockEntries) / 96;
          if ( v112 == 1 )
            v85->AbEntrySummary |= 1 << v89;
          else
            _InterlockedOr8((volatile signed __int8 *)&v85->AbOrphanedEntrySummary, 1 << v89);
        }
        --v85->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v85, (__int64)&qword_140C50348, &v91);
        v2 = v85->SpecialApcDisable++ == -1;
        if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v85->ApcState.ApcListHead[0].Flink != &v85->152 )
          KiCheckForKernelApcDelivery(v90);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v73 != 1 )
      {
LABEL_123:
        v20 = -1073741637;
        goto LABEL_62;
      }
      if ( (dword_140C50490 & 2) != 0 )
      {
        v20 = -1073741431;
        goto LABEL_62;
      }
    }
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v42 = *(_DWORD *)(a1 + 4);
    if ( v42 == 2 )
    {
      PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else if ( v42 )
    {
      if ( v42 == 3 )
        PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (v1[2] & 1) == 0 )
    return 0;
  if ( dword_140C4FD20 >= (unsigned int)dword_140C4FD24 )
  {
    v49 = v1[1];
    v4 = v49;
    if ( v49 != 4 && v49 != 2 && v49 != 3 )
    {
      v20 = -1073741697;
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
      v26 = v5[4];
      v27 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
      v28 = v5[1];
      v29 = v5[3];
      v113 = *v5;
      v30 = PfSnReferenceProcessTrace(*(_QWORD *)(v26 + 544));
      v31 = (struct _EX_RUNDOWN_REF *)v30;
      if ( v30 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v26, v30, 0LL) )
        {
          v43 = v28 & 0xFFFFF000;
          if ( v7 )
          {
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v31, v113, v29, v43, 0) < 0 )
                break;
              v43 += 4096;
              --v27;
            }
            while ( v27 );
            v1 = (_DWORD *)a1;
          }
        }
        ExReleaseRundownProtection_0(v31 + 45);
      }
    }
    if ( dword_140C4FD20 < (unsigned int)dword_140C4FD24 )
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
        v52 = 2;
        if ( v14 < 2 )
          v52 = (*(_DWORD *)(v9 + 1296) >> 12) & 7;
        v14 = v52;
      }
      if ( v14 < dword_140C4E76C )
      {
        v20 = 0;
        goto LABEL_20;
      }
      *(_QWORD *)&v105 = v12;
      *(_QWORD *)&v106 = v7 | (v10 << 63);
      v15 = 0LL;
      v16 = 0LL;
      v17 = v13 ^ *(_QWORD *)(v13 + 1128);
      *((_QWORD *)&v105 + 1) = v11 >> 12;
      *((_QWORD *)&v106 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
      LODWORD(v107) = dword_140CEC0D0;
      HIDWORD(v107) = *(_DWORD *)(v13 + 1088);
      v18 = dword_140C5021C
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection_0(&stru_140C4FC60) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140C4FC80); !j; j = RtlpInterlockedPopEntrySList(&stru_140C4FC80) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140C4FC70);
            if ( j )
              break;
            v20 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140C4FCB8)(&stru_140C4FC60);
            if ( v20 < 0 )
              goto LABEL_188;
          }
          if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
          {
            v16 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v15 = j;
            v20 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          ((void (*)(void))qword_140C4FCC0)();
          if ( !ExAcquireRundownProtection_0(&stru_140C4FC60) )
            goto LABEL_184;
        }
        RtlpInterlockedPushEntrySList(&stru_140C4FC70, j);
        v20 = -1073741789;
LABEL_188:
        ++dword_140C4FCCC;
        dword_140C4FCD0 += 64;
        ExReleaseRundownProtection_0(&stru_140C4FC60);
LABEL_16:
        if ( v20 >= 0 )
        {
          v21 = *v16;
          v22 = v105;
          *((_DWORD *)v16 + 2) = v18;
          v23 = v106;
          *v16 = v21 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v16 + 1) = v22;
          *(_QWORD *)&v22 = v107;
          *((_OWORD *)v16 + 2) = v23;
          v16[6] = v22;
          *((_QWORD *)&v15[1].Next + 1) += 64LL;
          ++*((_DWORD *)&v15[2].Next + 2);
          Next = v15[1].Next;
          if ( (__int64)v15[2].Next - *((_QWORD *)&v15[1].Next + 1) < SLODWORD(Next[5].Next) )
          {
            ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v15);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v15);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
          }
          v20 = 0;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_184:
        v20 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FE10 + 1, 1u);
      if ( v15 )
        PfFbLogEntryComplete(v15);
LABEL_20:
      if ( v20 >= 0 )
        return (unsigned int)v20;
      goto LABEL_62;
    }
    v20 = -1073741697;
LABEL_62:
    if ( (int)v1[1] <= 3 )
      ++dword_140C4FE24;
    return (unsigned int)v20;
  }
  switch ( v4 )
  {
    case 0:
      v53 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v20 = PfFbLogEntryReserve(&stru_140C4FBE0);
      if ( v20 < 0 )
        goto LABEL_20;
      v54 = v97;
      *v97 = (8 * ((v53 + 65) & 0xFFFFFFF8)) | *v97 & 0x80000002 | 2;
      v54[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 52LL);
      v54[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL);
      *((_QWORD *)v54 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v54[9] ^= (v54[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF;
      v54[9] ^= ((unsigned __int8)v54[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v54 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v54[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 24LL);
      v55 = 2 * *(_WORD *)(*((_QWORD *)v1 + 2) + 30LL);
      *((_WORD *)v54 + 20) = v55;
      *((_WORD *)v54 + 21) = v55;
      memmove(v54 + 14, *(const void **)(*((_QWORD *)v1 + 2) + 40LL), v53);
      v41 = (wchar_t *)(v54 + 14);
      *((_WORD *)v54 + *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL) + 28) = 0;
      goto LABEL_33;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 56LL));
      return 0;
    case 2:
      v33 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v33 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v33 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C50298, v33, 1LL);
      if ( dword_140C4FD20 >= (unsigned int)dword_140C4FD24 )
      {
        v20 = -1073741697;
        goto LABEL_62;
      }
      v34 = *((_QWORD *)v1 + 2);
      v35 = *(_DWORD *)(v34 + 32);
      v36 = (const void *)(*(_QWORD *)(v34 + 24) + 2LL * (unsigned __int16)v35);
      v37 = HIWORD(v35) - (unsigned __int16)v35;
      v38 = 2 * v37;
      v20 = PfFbLogEntryReserve(&stru_140C4FBE0);
      if ( v20 < 0 )
        goto LABEL_20;
      v39 = v97;
      *v97 = *v97 & 0x80000000 | (8 * ((v38 + 53) & 0xFFFFFF8));
      v39[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 40LL);
      v39[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL);
      *((_QWORD *)v39 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v39[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL);
      *((_QWORD *)v39 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v39[10] ^= (v39[10] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL)) & 1;
      v40 = v39[10] ^ ((unsigned __int8)v39[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3)) & 2;
      v39[10] = v40;
      v39[10] = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL))) & 4;
      *((_WORD *)v39 + 21) = v37;
      memmove(v39 + 11, v36, v38);
      v41 = (wchar_t *)(v39 + 11);
      *((_WORD *)v39 + *((unsigned __int16 *)v39 + 21) + 22) = 0;
LABEL_33:
      wcsupr(v41);
      PfFbLogEntryComplete(ListEntry);
      return 0;
    case 3:
      v48 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v48 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C50298, v48, 0LL);
      if ( dword_140C4FD20 < (unsigned int)dword_140C4FD24 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 44LL));
        return 0;
      }
      v20 = -1073741697;
      goto LABEL_62;
    case 8:
      v50 = (int *)*((_QWORD *)v1 + 2);
      v45 = &v98;
      v99 = 0;
      v51 = *v50;
      v98 = v50[1];
      v100 = *((_QWORD *)v50 + 1);
      v101 = (*((_QWORD *)v50 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v51 & 3));
      v46 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v47 = 24LL;
      goto LABEL_52;
    case 13:
      v44 = (_QWORD *)*((_QWORD *)v1 + 2);
      if ( !v44[1] )
      {
        v20 = -1073741747;
        goto LABEL_62;
      }
      v102[1] = v44[1];
      v45 = (int *)v102;
      v103 = dword_140CEC0D0;
      v102[0] = *v44;
      v104 = 0;
      v46 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v47 = 31LL;
LABEL_52:
      PfLogEvent(v47, dword_140C5021C + (unsigned int)(v46 >> 10), v45);
      v20 = 0;
      break;
    default:
      goto LABEL_123;
  }
  return (unsigned int)v20;
}

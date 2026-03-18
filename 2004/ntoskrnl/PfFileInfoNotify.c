/*
 * XREFs of PfFileInfoNotify @ 0x14025C410
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     PfSnReferenceProcessTrace @ 0x14025D0D0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x14025D2FC (PfSnLogPageFaultCommon.c)
 *     PfLogDeleteHelper @ 0x14026C03C (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14026C1B8 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14026C2A8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14026C384 (PfFbLogEntryComplete.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     PfSnCheckLoggingForThread @ 0x140329450 (PfSnCheckLoggingForThread.c)
 *     _wcsupr @ 0x1403CEDF0 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x140608C00 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x140698990 (PfSnNameRemoveAll.c)
 *     PfSnLogStreamCreate @ 0x1406B7E04 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x14070137C (PfSnLogVolumeCreate.c)
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
  __int64 SessionId; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r15
  struct _KTHREAD *v65; // rbx
  unsigned __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // ecx
  struct _KTHREAD *v73; // rax
  unsigned int v74; // r12d
  struct _KTHREAD *v75; // rax
  __int64 i; // r14
  struct _KTHREAD *v77; // r14
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r15
  __int64 v82; // rdx
  struct _KTHREAD *v83; // rbx
  unsigned __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r15
  __int64 v88; // rdx
  int v89; // [rsp+30h] [rbp-69h] BYREF
  int v90; // [rsp+34h] [rbp-65h]
  int v91; // [rsp+38h] [rbp-61h] BYREF
  int v92; // [rsp+3Ch] [rbp-5Dh]
  int v93; // [rsp+40h] [rbp-59h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-51h]
  unsigned int *v95; // [rsp+50h] [rbp-49h]
  int v96; // [rsp+58h] [rbp-41h] BYREF
  int v97; // [rsp+5Ch] [rbp-3Dh]
  __int64 v98; // [rsp+60h] [rbp-39h]
  unsigned __int64 v99; // [rsp+68h] [rbp-31h]
  _QWORD v100[2]; // [rsp+70h] [rbp-29h] BYREF
  int v101; // [rsp+80h] [rbp-19h]
  int v102; // [rsp+84h] [rbp-15h]
  __int128 v103; // [rsp+88h] [rbp-11h]
  __int128 v104; // [rsp+98h] [rbp-1h]
  __int64 v105; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v108; // [rsp+100h] [rbp+67h]
  unsigned __int8 v109; // [rsp+100h] [rbp+67h]
  unsigned __int8 v110; // [rsp+100h] [rbp+67h]
  __int64 v111; // [rsp+108h] [rbp+6Fh]
  int v112; // [rsp+110h] [rbp+77h] BYREF
  int v113; // [rsp+118h] [rbp+7Fh]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)a1 == 15;
  v97 = 0;
  v102 = 0;
  ListEntry = 0LL;
  v95 = 0LL;
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
      v1[4] = _InterlockedIncrement(&dword_140CEBF90);
    }
    else
    {
      v56 = v32 - 10;
      if ( !v56 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50208, 0LL);
        v58 = -1;
        if ( qword_140C501F8 )
        {
          v20 = -1073741791;
        }
        else
        {
          v59 = KeGetCurrentThread();
          --v59->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50210, 0LL);
          dword_140C50228 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50210, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50210);
          v91 = 0;
          v60 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50210) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)v60->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v60->SpecialApcDisable;
          ++v60->AbAllocationRegionCount;
          LODWORD(v62) = ((char)v60->AbEntrySummary | (char)v60->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v60->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v63, v62);
          v90 = v63;
          if ( v2 )
            goto LABEL_85;
          while ( 1 )
          {
            v64 = (__int64)&v60->LockEntries[v63];
            v62 = ~(1 << v63) & (unsigned int)v62;
            if ( (*(_BYTE *)(v64 + 26) & 1) != 0
              && (*(_DWORD *)(v64 + 32) & 1) == 0
              && (*(_QWORD *)(v64 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50210 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v64 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v64 + 26) &= ~1u;
              if ( *(_QWORD *)(v64 + 32) )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v63, v62);
            v90 = v63;
            if ( v2 )
              goto LABEL_85;
          }
          if ( !v64 )
          {
LABEL_85:
            if ( (*((_DWORD *)&v60->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v60, (ULONG_PTR)&qword_140C50210, (unsigned int)SessionId, 0LL);
          }
          else
          {
            *(_BYTE *)(v64 + 32) |= 2u;
            if ( *(__int64 *)(v64 + 32) < 0 )
              KiAbEntryRemoveFromTree(v64, v62, SessionId);
            v91 = *(_DWORD *)(v64 + 88) & 0x1FFFF;
            *(_DWORD *)(v64 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v64 + 25) &= ~1u;
            *(_QWORD *)(v64 + 32) = 0LL;
            v70 = (signed __int64)(v64 - (unsigned __int64)v60->LockEntries) / 96;
            if ( AbAllocationRegionCount == 1 )
              v60->AbEntrySummary |= 1 << v70;
            else
              _InterlockedOr8((volatile signed __int8 *)&v60->AbOrphanedEntrySummary, 1 << v70);
          }
          --v60->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v60, (__int64)&qword_140C50210, &v91);
          v2 = v60->SpecialApcDisable++ == -1;
          if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v60->ApcState.ApcListHead[0].Flink != &v60->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_140C501F8 = *((_QWORD *)v1 + 2);
          v20 = 0;
          _InterlockedExchange64((volatile __int64 *)&stru_140C50200, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50208, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50208);
        v93 = 0;
        v65 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50208) == 1 )
          v58 = MmGetSessionIdEx((__int64)v65->ApcState.Process);
        --v65->SpecialApcDisable;
        ++v65->AbAllocationRegionCount;
        v66 = (unsigned __int64)&qword_140C50208 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v67) = ((char)v65->AbEntrySummary | (char)v65->AbOrphanedEntrySummary) ^ 0x3F;
        v108 = v65->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v68, v67);
        v92 = v68;
        if ( v2 )
          goto LABEL_97;
        while ( 1 )
        {
          v69 = (__int64)&v65->LockEntries[v68];
          v67 = ~(1 << v68) & (unsigned int)v67;
          if ( (*(_BYTE *)(v69 + 26) & 1) != 0
            && (*(_DWORD *)(v69 + 32) & 1) == 0
            && (*(_QWORD *)(v69 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v66
            && *(_DWORD *)(v69 + 40) == v58 )
          {
            *(_BYTE *)(v69 + 26) &= ~1u;
            if ( *(_QWORD *)(v69 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v68, v67);
          v92 = v68;
          if ( v2 )
            goto LABEL_97;
        }
        if ( !v69 )
        {
LABEL_97:
          if ( (*((_DWORD *)&v65->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v65, (ULONG_PTR)&qword_140C50208, v58, 0LL);
        }
        else
        {
          *(_BYTE *)(v69 + 32) |= 2u;
          if ( *(__int64 *)(v69 + 32) < 0 )
            KiAbEntryRemoveFromTree(v69, v67, v66);
          v93 = *(_DWORD *)(v69 + 88) & 0x1FFFF;
          *(_DWORD *)(v69 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v69 + 25) &= ~1u;
          *(_QWORD *)(v69 + 32) = 0LL;
          v71 = (signed __int64)(v69 - (unsigned __int64)v65->LockEntries) / 96;
          if ( v108 == 1 )
            v65->AbEntrySummary |= 1 << v71;
          else
            _InterlockedOr8((volatile signed __int8 *)&v65->AbOrphanedEntrySummary, 1 << v71);
        }
        --v65->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v65, (__int64)&qword_140C50208, &v93);
        v2 = v65->SpecialApcDisable++ == -1;
        if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v65->ApcState.ApcListHead[0].Flink != &v65->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v72 = v56 - 1;
      if ( !v72 )
      {
        v73 = KeGetCurrentThread();
        --v73->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50208, 0LL);
        v74 = -1;
        if ( qword_140C501F8 )
        {
          v75 = KeGetCurrentThread();
          --v75->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50210, 0LL);
          dword_140C50228 |= 1u;
          for ( i = qword_140C50218; (__int64 *)i != &qword_140C50218; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50210, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50210);
          v112 = 0;
          v77 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50210) == 1 )
            v78 = (unsigned int)MmGetSessionIdEx((__int64)v77->ApcState.Process);
          else
            v78 = 0xFFFFFFFFLL;
          --v77->SpecialApcDisable;
          ++v77->AbAllocationRegionCount;
          LODWORD(v79) = ((char)v77->AbEntrySummary | (char)v77->AbOrphanedEntrySummary) ^ 0x3F;
          v109 = v77->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v80, v79);
          if ( v2 )
            goto LABEL_148;
          while ( 1 )
          {
            v81 = (__int64)&v77->LockEntries[v80];
            v79 = ~(1 << v80) & (unsigned int)v79;
            if ( (*(_BYTE *)(v81 + 26) & 1) != 0
              && (*(_DWORD *)(v81 + 32) & 1) == 0
              && (*(_QWORD *)(v81 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50210 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v81 + 40) == (_DWORD)v78 )
            {
              *(_BYTE *)(v81 + 26) &= ~1u;
              if ( *(_QWORD *)(v81 + 32) )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v80, v79);
            if ( v2 )
              goto LABEL_148;
          }
          if ( !v81 )
          {
LABEL_148:
            if ( (*((_DWORD *)&v77->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v77, (ULONG_PTR)&qword_140C50210, (unsigned int)v78, 0LL);
          }
          else
          {
            *(_BYTE *)(v81 + 32) |= 2u;
            if ( *(__int64 *)(v81 + 32) < 0 )
              KiAbEntryRemoveFromTree(v81, v79, v78);
            v112 = *(_DWORD *)(v81 + 88) & 0x1FFFF;
            *(_DWORD *)(v81 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v81 + 25) &= ~1u;
            *(_QWORD *)(v81 + 32) = 0LL;
            v82 = (signed __int64)(v81 - (unsigned __int64)v77->LockEntries) / 96;
            if ( v109 == 1 )
              v77->AbEntrySummary |= 1 << v82;
            else
              _InterlockedOr8((volatile signed __int8 *)&v77->AbOrphanedEntrySummary, 1 << v82);
          }
          --v77->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v77, (__int64)&qword_140C50210, &v112);
          v2 = v77->SpecialApcDisable++ == -1;
          if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v77->ApcState.ApcListHead[0].Flink != &v77->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50200);
          ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50200);
          qword_140C501F8 = 0LL;
          v20 = 0;
        }
        else
        {
          v20 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50208, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50208);
        v89 = 0;
        v83 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C50208) == 1 )
          v74 = MmGetSessionIdEx((__int64)v83->ApcState.Process);
        --v83->SpecialApcDisable;
        ++v83->AbAllocationRegionCount;
        v84 = (unsigned __int64)&qword_140C50208 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v85) = ((char)v83->AbEntrySummary | (char)v83->AbOrphanedEntrySummary) ^ 0x3F;
        v110 = v83->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v86, v85);
        v113 = v86;
        if ( v2 )
          goto LABEL_172;
        while ( 1 )
        {
          v87 = (__int64)&v83->LockEntries[v86];
          v85 = ~(1 << v86) & (unsigned int)v85;
          if ( (*(_BYTE *)(v87 + 26) & 1) != 0
            && (*(_DWORD *)(v87 + 32) & 1) == 0
            && (*(_QWORD *)(v87 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v84
            && *(_DWORD *)(v87 + 40) == v74 )
          {
            *(_BYTE *)(v87 + 26) &= ~1u;
            if ( *(_QWORD *)(v87 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v86, v85);
          v113 = v86;
          if ( v2 )
            goto LABEL_172;
        }
        if ( !v87 )
        {
LABEL_172:
          if ( (*((_DWORD *)&v83->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v83, (ULONG_PTR)&qword_140C50208, v74, 0LL);
        }
        else
        {
          *(_BYTE *)(v87 + 32) |= 2u;
          if ( *(__int64 *)(v87 + 32) < 0 )
            KiAbEntryRemoveFromTree(v87, v85, v84);
          v89 = *(_DWORD *)(v87 + 88) & 0x1FFFF;
          *(_DWORD *)(v87 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v87 + 25) &= ~1u;
          *(_QWORD *)(v87 + 32) = 0LL;
          v88 = (signed __int64)(v87 - (unsigned __int64)v83->LockEntries) / 96;
          if ( v110 == 1 )
            v83->AbEntrySummary |= 1 << v88;
          else
            _InterlockedOr8((volatile signed __int8 *)&v83->AbOrphanedEntrySummary, 1 << v88);
        }
        --v83->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v83, (__int64)&qword_140C50208, &v89);
        v2 = v83->SpecialApcDisable++ == -1;
        if ( v2 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v83->ApcState.ApcListHead[0].Flink != &v83->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v72 != 1 )
      {
LABEL_123:
        v20 = -1073741637;
        goto LABEL_62;
      }
      if ( (dword_140C50350 & 2) != 0 )
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
  if ( dword_140C4FBE0 >= (unsigned int)dword_140C4FBE4 )
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
      v111 = *v5;
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
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v31, v111, v29, v43, 0) < 0 )
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
    if ( dword_140C4FBE0 < (unsigned int)dword_140C4FBE4 )
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
      if ( v14 < dword_140C4E62C )
      {
        v20 = 0;
        goto LABEL_20;
      }
      *(_QWORD *)&v103 = v12;
      *(_QWORD *)&v104 = v7 | (v10 << 63);
      v15 = 0LL;
      v16 = 0LL;
      v17 = v13 ^ *(_QWORD *)(v13 + 1128);
      *((_QWORD *)&v103 + 1) = v11 >> 12;
      *((_QWORD *)&v104 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
      LODWORD(v105) = dword_140CEBF90;
      HIDWORD(v105) = *(_DWORD *)(v13 + 1088);
      v18 = dword_140C500DC
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection_0(&stru_140C4FB20) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140C4FB40); !j; j = RtlpInterlockedPopEntrySList(&stru_140C4FB40) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140C4FB30);
            if ( j )
              break;
            v20 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140C4FB78)(&stru_140C4FB20);
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
          ((void (*)(void))qword_140C4FB80)();
          if ( !ExAcquireRundownProtection_0(&stru_140C4FB20) )
            goto LABEL_184;
        }
        RtlpInterlockedPushEntrySList(&stru_140C4FB30, j);
        v20 = -1073741789;
LABEL_188:
        ++dword_140C4FB8C;
        dword_140C4FB90 += 64;
        ExReleaseRundownProtection_0(&stru_140C4FB20);
LABEL_16:
        if ( v20 >= 0 )
        {
          v21 = *v16;
          v22 = v103;
          *((_DWORD *)v16 + 2) = v18;
          v23 = v104;
          *v16 = v21 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v16 + 1) = v22;
          *(_QWORD *)&v22 = v105;
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
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FCD0 + 1, 1u);
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
      ++dword_140C4FCE4;
    return (unsigned int)v20;
  }
  switch ( v4 )
  {
    case 0:
      v53 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v20 = PfFbLogEntryReserve(&stru_140C4FAA0);
      if ( v20 < 0 )
        goto LABEL_20;
      v54 = v95;
      *v95 = (8 * ((v53 + 65) & 0xFFFFFFF8)) | *v95 & 0x80000002 | 2;
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
      PfpRpFileKeyUpdate(&unk_140C50158, v33, 1LL);
      if ( dword_140C4FBE0 >= (unsigned int)dword_140C4FBE4 )
      {
        v20 = -1073741697;
        goto LABEL_62;
      }
      v34 = *((_QWORD *)v1 + 2);
      v35 = *(_DWORD *)(v34 + 32);
      v36 = (const void *)(*(_QWORD *)(v34 + 24) + 2LL * (unsigned __int16)v35);
      v37 = HIWORD(v35) - (unsigned __int16)v35;
      v38 = 2 * v37;
      v20 = PfFbLogEntryReserve(&stru_140C4FAA0);
      if ( v20 < 0 )
        goto LABEL_20;
      v39 = v95;
      *v95 = *v95 & 0x80000000 | (8 * ((v38 + 53) & 0xFFFFFF8));
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
      PfpRpFileKeyUpdate(&unk_140C50158, v48, 0LL);
      if ( dword_140C4FBE0 < (unsigned int)dword_140C4FBE4 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 44LL));
        return 0;
      }
      v20 = -1073741697;
      goto LABEL_62;
    case 8:
      v50 = (int *)*((_QWORD *)v1 + 2);
      v45 = &v96;
      v97 = 0;
      v51 = *v50;
      v96 = v50[1];
      v98 = *((_QWORD *)v50 + 1);
      v99 = (*((_QWORD *)v50 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v51 & 3));
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
      v100[1] = v44[1];
      v45 = (int *)v100;
      v101 = dword_140CEBF90;
      v100[0] = *v44;
      v102 = 0;
      v46 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v47 = 31LL;
LABEL_52:
      PfLogEvent(v47, dword_140C500DC + (unsigned int)(v46 >> 10), v45);
      v20 = 0;
      break;
    default:
      goto LABEL_123;
  }
  return (unsigned int)v20;
}

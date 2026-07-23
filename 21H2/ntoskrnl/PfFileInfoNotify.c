/*
 * XREFs of PfFileInfoNotify @ 0x140328350
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PfLogDeleteHelper @ 0x140273960 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x140273ADC (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x140273BCC (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140273CA8 (PfFbLogEntryComplete.c)
 *     PfSnCheckLoggingForThread @ 0x1402A3B5C (PfSnCheckLoggingForThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     PfSnLogPageFaultCommon @ 0x140325D9C (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x140329010 (PfSnReferenceProcessTrace.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     _wcsupr @ 0x1403D2560 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PfSnNameRemoveAll @ 0x1405F78D4 (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x1406115E4 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x14067AF24 (PfSnLogStreamCreate.c)
 *     PfpRpFileKeyUpdate @ 0x1406F0FC0 (PfpRpFileKeyUpdate.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1)
{
  _DWORD *v1; // rsi
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
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
  unsigned __int64 v31; // r13
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
  unsigned __int64 v47; // r15
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
  struct _KTHREAD *v61; // rax
  unsigned int v62; // r12d
  struct _KTHREAD *v63; // rax
  struct _KTHREAD *v64; // r14
  unsigned int v65; // r8d
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // r15
  struct _KTHREAD *v69; // rbx
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rdx
  int v75; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v77; // r12d
  struct _KTHREAD *v78; // rax
  __int64 i; // r14
  struct _KTHREAD *v80; // r14
  unsigned int SessionId; // r8d
  unsigned int v82; // edx
  __int64 v83; // rcx
  __int64 v84; // r15
  __int64 v85; // rdx
  struct _KTHREAD *v86; // rbx
  unsigned int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // r15
  __int64 v90; // rdx
  _SLIST_ENTRY *v91; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-51h] BYREF
  unsigned int *v93; // [rsp+50h] [rbp-49h] BYREF
  int v94; // [rsp+58h] [rbp-41h] BYREF
  int v95; // [rsp+5Ch] [rbp-3Dh]
  __int64 v96; // [rsp+60h] [rbp-39h]
  unsigned __int64 v97; // [rsp+68h] [rbp-31h]
  _QWORD v98[2]; // [rsp+70h] [rbp-29h] BYREF
  int v99; // [rsp+80h] [rbp-19h]
  int v100; // [rsp+84h] [rbp-15h]
  __int128 v101; // [rsp+88h] [rbp-11h]
  __int128 v102; // [rsp+98h] [rbp-1h]
  unsigned __int64 v103; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 v105; // [rsp+100h] [rbp+67h]
  unsigned __int8 v106; // [rsp+100h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v108; // [rsp+100h] [rbp+67h]
  __int64 v109; // [rsp+108h] [rbp+6Fh]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)a1 == 15;
  v95 = 0;
  v100 = 0;
  ListEntry = 0LL;
  v93 = 0LL;
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
      v1[4] = _InterlockedIncrement(&dword_140CEC390);
      return 0;
    }
    v60 = v34 - 10;
    if ( v60 )
    {
      v75 = v60 - 1;
      if ( v75 )
      {
        if ( v75 != 1 )
        {
LABEL_123:
          v22 = -1073741637;
          goto LABEL_62;
        }
        if ( (dword_140C50590 & 2) != 0 )
        {
          v22 = -1073741431;
          goto LABEL_62;
        }
        return 0;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50448, 0LL);
      v77 = -1;
      if ( qword_140C50438 )
      {
        v78 = KeGetCurrentThread();
        --v78->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50450, 0LL);
        dword_140C50468 |= 1u;
        for ( i = qword_140C50458; (__int64 *)i != &qword_140C50458; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50450);
        v80 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_140C50450) == 1 )
          SessionId = MmGetSessionIdEx(v80->ApcState.Process);
        else
          SessionId = -1;
        --v80->SpecialApcDisable;
        ++v80->AbAllocationRegionCount;
        v82 = ((char)v80->AbEntrySummary | (char)v80->AbOrphanedEntrySummary) ^ 0x3F;
        AbAllocationRegionCount = v80->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v83, v82);
        if ( v2 )
          goto LABEL_148;
        while ( 1 )
        {
          v84 = (__int64)&v80->LockEntries[v83];
          v82 &= ~(1 << v83);
          if ( (*(_BYTE *)(v84 + 26) & 1) != 0
            && (*(_DWORD *)(v84 + 32) & 1) == 0
            && (*(_QWORD *)(v84 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50450 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v84 + 40) == SessionId )
          {
            *(_BYTE *)(v84 + 26) &= ~1u;
            if ( *(_QWORD *)(v84 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v83, v82);
          if ( v2 )
            goto LABEL_148;
        }
        if ( !v84 )
        {
LABEL_148:
          if ( (*((_DWORD *)&v80->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v80, (ULONG_PTR)&qword_140C50450, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v84 + 32) |= 2u;
          if ( *(__int64 *)(v84 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v84);
          *(_DWORD *)(v84 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v84 + 25) &= ~1u;
          *(_QWORD *)(v84 + 32) = 0LL;
          v85 = (signed __int64)(v84 - (unsigned __int64)v80->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v80->AbEntrySummary |= 1 << v85;
          else
            _InterlockedOr8((volatile signed __int8 *)&v80->AbOrphanedEntrySummary, 1 << v85);
        }
        --v80->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v80);
        v2 = v80->SpecialApcDisable++ == -1;
        if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v80->ApcState.ApcListHead[0].Flink != &v80->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50440);
        ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50440);
        qword_140C50438 = 0LL;
        v22 = 0;
      }
      else
      {
        v22 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C50448);
      v86 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_140C50448) == 1 )
        v77 = MmGetSessionIdEx(v86->ApcState.Process);
      --v86->SpecialApcDisable;
      ++v86->AbAllocationRegionCount;
      v87 = ((char)v86->AbEntrySummary | (char)v86->AbOrphanedEntrySummary) ^ 0x3F;
      v108 = v86->AbAllocationRegionCount;
      v2 = !_BitScanReverse((unsigned int *)&v88, v87);
      if ( v2 )
        goto LABEL_172;
      while ( 1 )
      {
        v89 = (__int64)&v86->LockEntries[v88];
        v87 &= ~(1 << v88);
        if ( (*(_BYTE *)(v89 + 26) & 1) != 0
          && (*(_DWORD *)(v89 + 32) & 1) == 0
          && (*(_QWORD *)(v89 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50448 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v89 + 40) == v77 )
        {
          *(_BYTE *)(v89 + 26) &= ~1u;
          if ( *(_QWORD *)(v89 + 32) )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v88, v87);
        if ( v2 )
          goto LABEL_172;
      }
      if ( !v89 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v86->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v86, (ULONG_PTR)&qword_140C50448, v77, 0LL);
      }
      else
      {
        *(_BYTE *)(v89 + 32) |= 2u;
        if ( *(__int64 *)(v89 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v89);
        *(_DWORD *)(v89 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v89 + 25) &= ~1u;
        *(_QWORD *)(v89 + 32) = 0LL;
        v90 = (signed __int64)(v89 - (unsigned __int64)v86->LockEntries) / 96;
        if ( v108 == 1 )
          v86->AbEntrySummary |= 1 << v90;
        else
          _InterlockedOr8((volatile signed __int8 *)&v86->AbOrphanedEntrySummary, 1 << v90);
      }
      --v86->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v86);
      v2 = v86->SpecialApcDisable++ == -1;
      if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      v61 = KeGetCurrentThread();
      --v61->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50448, 0LL);
      v62 = -1;
      if ( qword_140C50438 )
      {
        v22 = -1073741791;
      }
      else
      {
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50450, 0LL);
        dword_140C50468 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50450);
        v64 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_140C50450) == 1 )
          v65 = MmGetSessionIdEx(v64->ApcState.Process);
        else
          v65 = -1;
        --v64->SpecialApcDisable;
        ++v64->AbAllocationRegionCount;
        v66 = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
        v105 = v64->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v67, v66);
        if ( v2 )
          goto LABEL_85;
        while ( 1 )
        {
          v68 = (__int64)&v64->LockEntries[v67];
          v66 &= ~(1 << v67);
          if ( (*(_BYTE *)(v68 + 26) & 1) != 0
            && (*(_DWORD *)(v68 + 32) & 1) == 0
            && (*(_QWORD *)(v68 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50450 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v68 + 40) == v65 )
          {
            *(_BYTE *)(v68 + 26) &= ~1u;
            if ( *(_QWORD *)(v68 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v67, v66);
          if ( v2 )
            goto LABEL_85;
        }
        if ( !v68 )
        {
LABEL_85:
          if ( (*((_DWORD *)&v64->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&qword_140C50450, v65, 0LL);
        }
        else
        {
          *(_BYTE *)(v68 + 32) |= 2u;
          if ( *(__int64 *)(v68 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v68);
          *(_DWORD *)(v68 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v68 + 25) &= ~1u;
          *(_QWORD *)(v68 + 32) = 0LL;
          v73 = (signed __int64)(v68 - (unsigned __int64)v64->LockEntries) / 96;
          if ( v105 == 1 )
            v64->AbEntrySummary |= 1 << v73;
          else
            _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v73);
        }
        --v64->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v64);
        v2 = v64->SpecialApcDisable++ == -1;
        if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        qword_140C50438 = *((_QWORD *)v1 + 2);
        v22 = 0;
        _InterlockedExchange64((volatile __int64 *)&stru_140C50440, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C50448);
      v69 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_140C50448) == 1 )
        v62 = MmGetSessionIdEx(v69->ApcState.Process);
      --v69->SpecialApcDisable;
      ++v69->AbAllocationRegionCount;
      v70 = ((char)v69->AbEntrySummary | (char)v69->AbOrphanedEntrySummary) ^ 0x3F;
      v106 = v69->AbAllocationRegionCount;
      v2 = !_BitScanReverse((unsigned int *)&v71, v70);
      if ( v2 )
        goto LABEL_97;
      while ( 1 )
      {
        v72 = (__int64)&v69->LockEntries[v71];
        v70 &= ~(1 << v71);
        if ( (*(_BYTE *)(v72 + 26) & 1) != 0
          && (*(_DWORD *)(v72 + 32) & 1) == 0
          && (*(_QWORD *)(v72 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C50448 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v72 + 40) == v62 )
        {
          *(_BYTE *)(v72 + 26) &= ~1u;
          if ( *(_QWORD *)(v72 + 32) )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v71, v70);
        if ( v2 )
          goto LABEL_97;
      }
      if ( !v72 )
      {
LABEL_97:
        if ( (*((_DWORD *)&v69->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v69, (ULONG_PTR)&qword_140C50448, v62, 0LL);
      }
      else
      {
        *(_BYTE *)(v72 + 32) |= 2u;
        if ( *(__int64 *)(v72 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v72);
        *(_DWORD *)(v72 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v72 + 25) &= ~1u;
        *(_QWORD *)(v72 + 32) = 0LL;
        v74 = (signed __int64)(v72 - (unsigned __int64)v69->LockEntries) / 96;
        if ( v106 == 1 )
          v69->AbEntrySummary |= 1 << v74;
        else
          _InterlockedOr8((volatile signed __int8 *)&v69->AbOrphanedEntrySummary, 1 << v74);
      }
      --v69->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v69);
      v2 = v69->SpecialApcDisable++ == -1;
      if ( v2 && ($C459BD0D405E8E46662177FB3D0A143F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
        KiCheckForKernelApcDelivery();
    }
    KeLeaveCriticalRegion();
    goto LABEL_20;
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
  if ( dword_140C4FE20 >= (unsigned int)dword_140C4FE24 )
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
    v5 = *((_QWORD *)v1 + 2);
    v6 = *(unsigned int *)(v5 + 16) + 4095LL;
    v7 = (v6 + (unsigned __int64)(*(_DWORD *)(v5 + 8) & 0xFFF)) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v28 = *(_QWORD *)(v5 + 32);
      v29 = (v6 + (unsigned __int64)(*(_DWORD *)(v5 + 8) & 0xFFF)) >> 12;
      v30 = *(_QWORD *)(v5 + 8);
      v31 = *(_QWORD *)(v5 + 24);
      v109 = *(_QWORD *)v5;
      v32 = PfSnReferenceProcessTrace(*(_QWORD *)(v28 + 544));
      v33 = (struct _EX_RUNDOWN_REF *)v32;
      if ( v32 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v28, v32, 0) )
        {
          v47 = v30 & 0xFFFFFFFFFFFFF000uLL;
          if ( v7 )
          {
            do
            {
              if ( (int)PfSnLogPageFaultCommon((__int64)v33, v109, v31, v47, 0) < 0 )
                break;
              v47 += 4096LL;
              --v29;
            }
            while ( v29 );
            v1 = (_DWORD *)a1;
          }
        }
        ExReleaseRundownProtection(v33 + 45);
      }
    }
    if ( dword_140C4FE20 < (unsigned int)dword_140C4FE24 )
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
      if ( v14 < dword_140C4E86C )
      {
        v22 = 0;
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(v13 + 1088);
      *(_QWORD *)&v102 = v7 | (v10 << 63);
      v16 = 0LL;
      v17 = 0LL;
      v18 = (v15 ^ *(_QWORD *)(v13 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)&v101 = v12;
      *((_QWORD *)&v102 + 1) = v18;
      v103 = __PAIR64__(v15, dword_140CEC390);
      *((_QWORD *)&v101 + 1) = v11 >> 12;
      v19 = dword_140C5031C
          + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
      if ( ExAcquireRundownProtection(&stru_140C4FD60) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_140C4FD80); !j; j = RtlpInterlockedPopEntrySList(&stru_140C4FD80) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_140C4FD70);
            if ( j )
              break;
            v22 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140C4FDB8)(&stru_140C4FD60);
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
          ((void (*)(void))qword_140C4FDC0)();
          if ( !ExAcquireRundownProtection(&stru_140C4FD60) )
            goto LABEL_185;
        }
        RtlpInterlockedPushEntrySList(&stru_140C4FD70, j);
        v22 = -1073741789;
LABEL_190:
        ++dword_140C4FDCC;
        dword_140C4FDD0 += 64;
        ExReleaseRundownProtection(&stru_140C4FD60);
LABEL_16:
        if ( v22 >= 0 )
        {
          v23 = *v17;
          v24 = v101;
          *((_DWORD *)v17 + 2) = v19;
          v25 = v102;
          *v17 = v23 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v17 + 1) = v24;
          *(_QWORD *)&v24 = v103;
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
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
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
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FF10 + 1, 1u);
      if ( v16 )
      {
        v91 = v16;
LABEL_188:
        PfFbLogEntryComplete(v91, v20, 0LL);
      }
LABEL_20:
      if ( v22 >= 0 )
        return (unsigned int)v22;
      goto LABEL_62;
    }
    v22 = -1073741697;
LABEL_62:
    if ( (int)v1[1] <= 3 )
      ++dword_140C4FF24;
    return (unsigned int)v22;
  }
  switch ( v4 )
  {
    case 0:
      v57 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v41 = (v57 + 65) & 0xFFFFFFF8;
      v22 = PfFbLogEntryReserve(&stru_140C4FCE0, &ListEntry, &v93, v41);
      if ( v22 < 0 )
        goto LABEL_180;
      v58 = v93;
      *v93 = (8 * v41) | *v93 & 0x80000002 | 2;
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
      PfpRpFileKeyUpdate(&unk_140C50398, v35, 1LL);
      if ( dword_140C4FE20 >= (unsigned int)dword_140C4FE24 )
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
      v22 = PfFbLogEntryReserve(&stru_140C4FCE0, &ListEntry, &v93, v41);
      if ( v22 >= 0 )
      {
        v42 = v93;
        *v93 = *v93 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
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
      v91 = ListEntry;
      if ( !ListEntry )
        goto LABEL_20;
      goto LABEL_188;
    case 3:
      v52 = *((_QWORD *)v1 + 2);
      if ( HIWORD(*(_DWORD *)(v52 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v52 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C50398, v52, 0LL);
      if ( dword_140C4FE20 < (unsigned int)dword_140C4FE24 )
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
      v49 = &v94;
      v95 = 0;
      v55 = *v54;
      v94 = v54[1];
      v96 = *((_QWORD *)v54 + 1);
      v97 = (*((_QWORD *)v54 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v55 & 3));
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
      v98[1] = v48[1];
      v49 = (int *)v98;
      v99 = dword_140CEC390;
      v98[0] = *v48;
      v100 = 0;
      v50 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v51 = 31;
LABEL_52:
      PfLogEvent(v51, dword_140C5031C + (v50 >> 10), v49, 0x18u);
      v22 = 0;
      break;
    default:
      goto LABEL_123;
  }
  return (unsigned int)v22;
}

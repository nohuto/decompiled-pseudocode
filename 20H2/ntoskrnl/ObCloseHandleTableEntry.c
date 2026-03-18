/*
 * XREFs of ObCloseHandleTableEntry @ 0x1406160E0
 * Callers:
 *     NtClose @ 0x140611680 (NtClose.c)
 *     ObpCloseHandle @ 0x140627DB0 (ObpCloseHandle.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     ObpReleaseLookupContext @ 0x14020AE7C (ObpReleaseLookupContext.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExSweepSingleHandle @ 0x140264CC4 (ExSweepSingleHandle.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     ObpLockDirectoryExclusive @ 0x14030FB48 (ObpLockDirectoryExclusive.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F7730 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x1405143E0 (KeRaiseUserException.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406B51E8 (ObpLookupDirectoryEntryEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406BB4A4 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406BB720 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1406C0530 (ObpDeleteDirectoryEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x140923B20 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x140939EAC (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x14094F360 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  _KPROCESS *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r12
  unsigned __int8 (__fastcall *v14)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD); // r10
  int v16; // edx
  __int64 v17; // rdx
  _QWORD *HandleExtraInfo; // rax
  unsigned int Number; // eax
  ULONG_PTR v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r13d
  unsigned __int64 v25; // rcx
  __int64 v26; // r14
  ULONG_PTR v27; // r15
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  void (__fastcall *v32)(_KPROCESS *, unsigned __int64, _QWORD, ULONG_PTR); // r10
  char v33; // r14
  struct _LIST_ENTRY *v34; // rsi
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *i; // rdi
  struct _KTHREAD *v42; // rax
  struct _DMA_ADAPTER *v43; // r10
  struct _KTHREAD *v45; // rax
  struct _DMA_ADAPTER *v46; // rsi
  struct _OBJECT_TYPE *v47; // r13
  struct _DMA_ADAPTER *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  signed __int32 v51[8]; // [rsp+0h] [rbp-E9h] BYREF
  char v52; // [rsp+30h] [rbp-B9h]
  char v53; // [rsp+31h] [rbp-B8h]
  int v54; // [rsp+34h] [rbp-B5h]
  unsigned __int64 v55; // [rsp+38h] [rbp-B1h]
  int v56; // [rsp+40h] [rbp-A9h]
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-A1h]
  __int64 v58; // [rsp+50h] [rbp-99h]
  __int64 v59[2]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v60; // [rsp+68h] [rbp-81h]
  int v61; // [rsp+70h] [rbp-79h]
  __int16 v62; // [rsp+74h] [rbp-75h]
  __int16 v63; // [rsp+76h] [rbp-73h]
  int v64; // [rsp+78h] [rbp-71h]
  int v65; // [rsp+7Ch] [rbp-6Dh]
  _OWORD v66[3]; // [rsp+80h] [rbp-69h] BYREF
  _OWORD v67[3]; // [rsp+B0h] [rbp-39h] BYREF

  v7 = (_KPROCESS *)a3;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  BugCheckParameter1 = a3;
  memset(v66, 0, sizeof(v66));
  v11 = v8 + 48;
  v58 = BYTE1(v8);
  v12 = BYTE1(v8) ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24);
  v52 = 0;
  v13 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
  if ( v14 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != v7 )
    {
      KiStackAttachProcess(v7, 0, (__int64)v66);
      v14 = *(unsigned __int8 (__fastcall **)(_KPROCESS *, unsigned __int64, ULONG_PTR, _QWORD))(v13 + 168);
      v52 = 1;
    }
    if ( !v14(v7, v8 + 48, a4, a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v52 )
        KiUnstackDetachProcess((__int64)v66, 0);
      return 3221226037LL;
    }
    v11 = v8 + 48;
  }
  v16 = ((__int64)*(unsigned int *)a2 >> 17) & 7 | 8;
  if ( (a2[1] & 0x2000000) == 0 )
    v16 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  v56 = v16;
  if ( (v16 & 1) == 0 || a6 )
  {
    if ( (xmmword_140CFC490 & 0x40) != 0 )
    {
      v17 = a4;
      if ( v7 == PsInitialSystemProcess )
        v17 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v17, v11, v13);
    }
    if ( a6 )
    {
      v54 = ExSweepSingleHandle(a1, a2);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      v54 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v51, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v55 = a4 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v55, v11, a4);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = 0LL;
      v53 = *(_BYTE *)(a1 + 44) & 1;
      if ( v53 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v20 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v20, 0LL);
      if ( v53 )
      {
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 )
          *(_QWORD *)(v21 + 8) = a2;
        else
          *(_QWORD *)(v20 + 8) = a2;
        *(_QWORD *)(v20 + 16) = a2;
      }
      else
      {
        v22 = *(_QWORD *)(v20 + 8);
        *((_QWORD *)a2 + 1) = v22;
        if ( !v22 )
          *(_QWORD *)(v20 + 16) = a2;
        *(_QWORD *)(v20 + 8) = a2;
      }
      --*(_DWORD *)(v20 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20);
      KeAbPostRelease(v20);
      v7 = (_KPROCESS *)BugCheckParameter1;
    }
    KeLeaveCriticalRegion();
    if ( (v56 & 4) != 0 )
    {
      LOBYTE(v23) = 1;
      SeCloseObjectAuditAlarm(v8 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v23);
    }
    v24 = 0;
    v25 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v58 ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24);
    memset(v67, 0, sizeof(v67));
    v26 = ObTypeIndexTable[v25];
    v55 = v26;
    if ( (*(_BYTE *)(v26 + 66) & 0x10) == 0 && (*(_BYTE *)(v8 + 27) & 8) == 0 )
    {
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_77:
      v32 = *(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, ULONG_PTR))(v26 + 128);
      if ( v32 )
      {
        v33 = 0;
        v34 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process != v7 )
        {
          v33 = 1;
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)v7);
          v34 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess(v7, 0, (__int64)v67);
          v32 = *(void (__fastcall **)(_KPROCESS *, unsigned __int64, _QWORD, ULONG_PTR))(v55 + 128);
        }
        v32(v7, v8 + 48, v24, v27);
        if ( v33 )
        {
          KiUnstackDetachProcess((__int64)v67, 0);
          PsDetachSiloFromCurrentThread(v34);
        }
      }
      if ( v27 == 1 )
      {
        v36 = *(_BYTE *)(v8 + 26);
        v60 = 0LL;
        v61 = 0;
        v62 = 0;
        v65 = 0;
        if ( (v36 & 2) != 0 )
        {
          v37 = ObpInfoMaskToOffset[v36 & 3];
          v38 = v8 - v37;
          if ( v8 != v37 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
            for ( i = *(struct _DMA_ADAPTER **)v38; *(_QWORD *)v38; i = *(struct _DMA_ADAPTER **)v38 )
            {
              if ( (*(_BYTE *)(v8 + 27) & 0x10) != 0 || *(_QWORD *)(v8 + 8) )
                break;
              ObfReferenceObject(i);
              ExReleasePushLockEx(v8 + 16, 0LL);
              KeLeaveCriticalRegion();
              v63 = 0;
              v64 = -60876;
              *(_OWORD *)v59 = 0LL;
              ObpLockDirectoryExclusive((__int64)v59, i);
              v42 = KeGetCurrentThread();
              --v42->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
              v43 = *(struct _DMA_ADAPTER **)v38;
              if ( *(struct _DMA_ADAPTER **)v38 == i && (*(_BYTE *)(v8 + 27) & 0x10) == 0 && !*(_QWORD *)(v8 + 8) )
              {
                v46 = 0LL;
                if ( !*(_DWORD *)(v38 + 24) )
                {
                  v47 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v58 ^ (unsigned __int64)*(unsigned __int8 *)(v8 + 24)];
                  if ( v47 == ObpSymbolicLinkObjectType )
                  {
                    ObpDeleteSymbolicLinkName(v8 + 48);
                    v43 = *(struct _DMA_ADAPTER **)v38;
                  }
                  v48 = (struct _DMA_ADAPTER *)ObpLookupDirectoryEntryEx(v43, 0, (__int64)v59);
                  v46 = v48;
                  if ( v47 == ObpDirectoryObjectType )
                    ObfReferenceObject(v48);
                  else
                    v46 = 0LL;
                  ObpDeleteDirectoryEntry(v59, v49, v50);
                }
                ObpReleaseLookupContext((__int64)v59);
                ExReleasePushLockEx(v8 + 16, 0LL);
                KeLeaveCriticalRegion();
                HalPutDmaAdapter(i);
                if ( v46 )
                {
                  ObpMarkDirectoryTreeTemporary(v46);
                  HalPutDmaAdapter(v46);
                }
                goto LABEL_99;
              }
              ObpReleaseLookupContext((__int64)v59);
              ExReleasePushLockEx(v8 + 16, 0LL);
              KeLeaveCriticalRegion();
              HalPutDmaAdapter(i);
              v45 = KeGetCurrentThread();
              --v45->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
            }
            ExReleasePushLockEx(v8 + 16, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
LABEL_99:
      _InterlockedDecrement((volatile signed __int32 *)(v55 + 48));
      if ( v52 )
        KiUnstackDetachProcess((__int64)v66, 0);
      if ( v54 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v8, -v54);
      ObfDereferenceObjectWithTag((PVOID)(v8 + 48), 0x6E48624Fu);
      return 0LL;
    }
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
    BugCheckParameter1 = *(_QWORD *)(v8 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v8 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v26 + 66) & 0x10) == 0 )
    {
LABEL_76:
      ExReleasePushLockEx(v8 + 16, 0LL);
      KeLeaveCriticalRegion();
      v27 = BugCheckParameter1;
      goto LABEL_77;
    }
    if ( (*(_BYTE *)(v8 + 26) & 4) != 0 )
      v29 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
    else
      v29 = 0LL;
    if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
    {
      v30 = *(_DWORD *)(v29 + 8);
      v24 = v30 & 0xFFFFFF;
    }
    else
    {
      v31 = **(_DWORD **)v29;
      v29 = *(_QWORD *)v29 + 8LL;
      if ( !v31 )
      {
LABEL_73:
        if ( !*(_BYTE *)(v29 + 11) && (*(_DWORD *)(v29 + 8) & 0xFFFFFF) == 0 )
          *(_QWORD *)v29 = 0LL;
        goto LABEL_76;
      }
      while ( 1 )
      {
        v30 = *(_DWORD *)(v29 + 8);
        if ( (v30 & 0xFFFFFF) != 0 && *(_KPROCESS **)v29 == v7 )
          break;
        v29 += 16LL;
        if ( !--v31 )
          goto LABEL_73;
      }
      v24 = *(_DWORD *)(v29 + 8) & 0xFFFFFF;
    }
    *(_DWORD *)(v29 + 8) = v30 ^ (v30 ^ (v30 - 1)) & 0xFFFFFF;
    goto LABEL_73;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v51, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v52 )
    KiUnstackDetachProcess((__int64)v66, 0);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[9]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}

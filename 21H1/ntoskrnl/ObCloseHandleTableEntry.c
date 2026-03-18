/*
 * XREFs of ObCloseHandleTableEntry @ 0x140628AD0
 * Callers:
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ObpCloseHandle @ 0x140637590 (ObpCloseHandle.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExSweepSingleHandle @ 0x14023F444 (ExSweepSingleHandle.c)
 *     ObpReleaseLookupContext @ 0x14025B298 (ObpReleaseLookupContext.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     ObpLockDirectoryExclusive @ 0x1402FCD98 (ObpLockDirectoryExclusive.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeRaiseUserException @ 0x140510460 (KeRaiseUserException.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BC4C8 (ObpLookupDirectoryEntryEx.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406C16B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C192C (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x1406CAC40 (ObpDeleteDirectoryEntry.c)
 *     SeCloseObjectAuditAlarm @ 0x14091CBF0 (SeCloseObjectAuditAlarm.c)
 *     EtwpTraceHandle @ 0x140932DDC (EtwpTraceHandle.c)
 *     ExpGetHandleExtraInfo @ 0x140948200 (ExpGetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObCloseHandleTableEntry(
        __int64 a1,
        volatile signed __int64 *a2,
        _KPROCESS *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  unsigned __int64 v7; // r14
  char v8; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int8 (__fastcall *v13)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD); // r10
  int v14; // r12d
  PADAPTER_OBJECT v15; // rbx
  int v16; // r15d
  unsigned int Number; // eax
  ULONG_PTR v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned int v22; // r12d
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  void (__fastcall *v25)(ULONG_PTR, unsigned __int64, _QWORD, unsigned __int64); // r10
  char v26; // si
  struct _LIST_ENTRY *v27; // r13
  char v28; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rdx
  int v32; // ecx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  _DWORD *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rsi
  struct _KTHREAD *v37; // rax
  struct _DMA_ADAPTER *v38; // r13
  char v39; // al
  int v40; // r8d
  struct _KTHREAD *v41; // rax
  struct _DMA_ADAPTER *v42; // r10
  __int64 v44; // rdx
  struct _DMA_ADAPTER *v45; // rsi
  __int64 v46; // r8
  struct _DMA_ADAPTER *v47; // rdi
  __int64 v48; // r8
  _DWORD *v49; // r9
  __int64 v50; // r8
  _DWORD *v51; // r9
  __int64 v52; // rdx
  _QWORD *HandleExtraInfo; // rax
  __int64 v54; // rax
  signed __int32 v55[8]; // [rsp+0h] [rbp-E9h] BYREF
  char v56; // [rsp+30h] [rbp-B9h]
  char v57; // [rsp+31h] [rbp-B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-B1h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-A9h]
  unsigned __int64 v60; // [rsp+48h] [rbp-A1h]
  unsigned __int64 v61; // [rsp+50h] [rbp-99h]
  __int64 v62[2]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v63; // [rsp+68h] [rbp-81h]
  int v64; // [rsp+70h] [rbp-79h]
  __int16 v65; // [rsp+74h] [rbp-75h]
  __int16 v66; // [rsp+76h] [rbp-73h]
  int v67; // [rsp+78h] [rbp-71h]
  int v68; // [rsp+7Ch] [rbp-6Dh]
  _OWORD v69[3]; // [rsp+80h] [rbp-69h] BYREF
  _OWORD v70[3]; // [rsp+B0h] [rbp-39h] BYREF

  v7 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  DmaAdapter = (PADAPTER_OBJECT)a4;
  memset(v69, 0, sizeof(v69));
  v8 = 0;
  v61 = BYTE1(v7);
  v11 = BYTE1(v7) ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24);
  BugCheckParameter1 = (ULONG_PTR)a3;
  v56 = 0;
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v11];
  v13 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD))(v12 + 168);
  if ( v13 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KiStackAttachProcess(a3, 0LL, (__int64)v69, a3);
      v13 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, unsigned __int64, ULONG_PTR, _QWORD))(v12 + 168);
      v8 = 1;
      v56 = 1;
    }
    if ( !v13(BugCheckParameter1, v7 + 48, a4, a5) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v55, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v8 )
        KiUnstackDetachProcess((__int64)v69, 0LL, v48, v49);
      return 3221226037LL;
    }
  }
  v14 = ((__int64)*(unsigned int *)a2 >> 17) & 7 | 8;
  if ( (a2[1] & 0x2000000) == 0 )
    LOBYTE(v14) = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (v14 & 1) == 0 || a6 )
  {
    if ( (xmmword_140CFC490 & 0x40) != 0 )
    {
      v52 = a4;
      if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        v52 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v52, v7 + 48, v12);
    }
    if ( a6 )
    {
      v16 = ExSweepSingleHandle(a1, a2);
    }
    else
    {
      v15 = DmaAdapter;
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), DmaAdapter, 2LL);
      v16 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v55, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      v60 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v60);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      *((_QWORD *)a2 + 1) = 0LL;
      v57 = *(_BYTE *)(a1 + 44) & 1;
      if ( v57 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v18 = a1 + ((Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v18, 0LL);
      if ( v57 )
      {
        v54 = *(_QWORD *)(v18 + 16);
        if ( v54 )
          *(_QWORD *)(v54 + 8) = a2;
        else
          *(_QWORD *)(v18 + 8) = a2;
        *(_QWORD *)(v18 + 16) = a2;
      }
      else
      {
        v19 = *(_QWORD *)(v18 + 8);
        *((_QWORD *)a2 + 1) = v19;
        if ( !v19 )
          *(_QWORD *)(v18 + 16) = a2;
        *(_QWORD *)(v18 + 8) = a2;
      }
      --*(_DWORD *)(v18 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18);
      KeAbPostRelease(v18);
    }
    KeLeaveCriticalRegion();
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v20) = 1;
      SeCloseObjectAuditAlarm(v7 + 48, (unsigned __int64)DmaAdapter & 0xFFFFFFFFFFFFFFFCuLL, v20);
    }
    v22 = 0;
    v23 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v61 ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24);
    memset(v70, 0, sizeof(v70));
    v24 = ObTypeIndexTable[v23];
    if ( (*(_BYTE *)(v24 + 66) & 0x10) == 0 && (*(_BYTE *)(v7 + 27) & 8) == 0 )
    {
      v60 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_26;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
    v60 = *(_QWORD *)(v7 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v7 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v24 + 66) & 0x10) == 0 )
    {
LABEL_49:
      ExReleasePushLockEx(v7 + 16, 0LL);
      KeLeaveCriticalRegion();
LABEL_26:
      v25 = *(void (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD, unsigned __int64))(v24 + 128);
      if ( v25 )
      {
        v26 = 0;
        v27 = 0LL;
        if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
        {
          v25(BugCheckParameter1, v7 + 48, v22, v60);
        }
        else
        {
          v26 = 1;
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(BugCheckParameter1);
          v27 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v70, v34);
          (*(void (__fastcall **)(ULONG_PTR, unsigned __int64, _QWORD, unsigned __int64))(v24 + 128))(
            BugCheckParameter1,
            v7 + 48,
            v22,
            v60);
        }
        if ( v26 )
        {
          KiUnstackDetachProcess((__int64)v70, 0LL, v20, v21);
          PsDetachSiloFromCurrentThread(v27);
        }
      }
      v28 = *(_BYTE *)(v7 + 26);
      v63 = 0LL;
      v64 = 0;
      v65 = 0;
      v68 = 0;
      if ( (v28 & 2) != 0 )
      {
        v35 = ObpInfoMaskToOffset[v28 & 3];
        v36 = v7 - v35;
        if ( v7 != v35 )
        {
          while ( 1 )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
            v38 = *(struct _DMA_ADAPTER **)v36;
            if ( !*(_QWORD *)v36
              || ((*(_BYTE *)(v7 + 27) & 0x10) != 0 || *(_QWORD *)(v7 + 8) ? (v39 = 0) : (v39 = 1), !v39) )
            {
              ExReleasePushLockEx(v7 + 16, 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_32;
            }
            ObfReferenceObject(*(PVOID *)v36);
            ExReleasePushLockEx(v7 + 16, 0LL);
            KeLeaveCriticalRegion();
            v66 = 0;
            v67 = -60876;
            *(_OWORD *)v62 = 0LL;
            ObpLockDirectoryExclusive((__int64)v62, v38);
            v41 = KeGetCurrentThread();
            --v41->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v7 + 16, 0LL);
            v42 = *(struct _DMA_ADAPTER **)v36;
            if ( *(struct _DMA_ADAPTER **)v36 == v38 && (*(_BYTE *)(v7 + 27) & 0x10) == 0 && !*(_QWORD *)(v7 + 8) )
              break;
            ObpReleaseLookupContext((__int64)v62);
            ExReleasePushLockEx(v7 + 16, 0LL);
            KeLeaveCriticalRegion();
            HalPutDmaAdapter(v38);
          }
          DmaAdapter = 0LL;
          if ( !*(_DWORD *)(v36 + 24) )
          {
            v61 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v61 ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24)];
            if ( (POBJECT_TYPE)v61 == ObpSymbolicLinkObjectType )
            {
              ObpDeleteSymbolicLinkName(v7 + 48);
              v42 = *(struct _DMA_ADAPTER **)v36;
            }
            v45 = (struct _DMA_ADAPTER *)ObpLookupDirectoryEntryEx(v42, 0, (__int64)v62);
            DmaAdapter = v45;
            if ( (POBJECT_TYPE)v61 == ObpDirectoryObjectType )
              ObfReferenceObject(v45);
            else
              DmaAdapter = 0LL;
            ObpDeleteDirectoryEntry(v62, v44, v46);
          }
          ObpReleaseLookupContext((__int64)v62);
          ExReleasePushLockEx(v7 + 16, 0LL);
          KeLeaveCriticalRegion();
          HalPutDmaAdapter(v38);
          v47 = DmaAdapter;
          if ( DmaAdapter )
          {
            ObpMarkDirectoryTreeTemporary(DmaAdapter);
            HalPutDmaAdapter(v47);
          }
        }
      }
LABEL_32:
      _InterlockedDecrement((volatile signed __int32 *)(v24 + 48));
      if ( v56 )
        KiUnstackDetachProcess((__int64)v69, 0LL, v20, v21);
      if ( v16 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v7, -v16);
      ObfDereferenceObjectWithTag((PVOID)(v7 + 48), 0x6E48624Fu);
      return 0LL;
    }
    if ( (*(_BYTE *)(v7 + 26) & 4) != 0 )
      v31 = v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 7];
    else
      v31 = 0LL;
    if ( (*(_BYTE *)(v7 + 27) & 0x40) != 0 )
    {
      v32 = *(_DWORD *)(v31 + 8);
      v22 = v32 & 0xFFFFFF;
    }
    else
    {
      v40 = **(_DWORD **)v31;
      v31 = *(_QWORD *)v31 + 8LL;
      if ( !v40 )
        goto LABEL_46;
      while ( 1 )
      {
        v32 = *(_DWORD *)(v31 + 8);
        if ( (v32 & 0xFFFFFF) != 0 && *(_QWORD *)v31 == BugCheckParameter1 )
          break;
        v31 += 16LL;
        if ( !--v40 )
          goto LABEL_46;
      }
      v22 = *(_DWORD *)(v31 + 8) & 0xFFFFFF;
    }
    *(_DWORD *)(v31 + 8) = v32 ^ (v32 ^ (v32 - 1)) & 0xFFFFFF;
LABEL_46:
    if ( !*(_BYTE *)(v31 + 11) && (*(_DWORD *)(v31 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v31 = 0LL;
    goto LABEL_49;
  }
  if ( !a5 )
    KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v55, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v56 )
    KiUnstackDetachProcess((__int64)v69, 0LL, v50, v51);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (NtGlobalFlag & 0x400000) == 0
    && !KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[9]
    && !*(_QWORD *)(a1 + 96) )
  {
    return 3221226037LL;
  }
  return KeRaiseUserException(0xC0000235);
}

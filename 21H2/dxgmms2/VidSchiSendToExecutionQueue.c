/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0008AF0
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007F970 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0086C40 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0089B80 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0006E90 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiUpdateContextStatus @ 0x1C00070D0 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B670 (VidSchiProfilePerformanceTick.c)
 *     VidSchiFillPreemptCommandData @ 0x1C0015674 (VidSchiFillPreemptCommandData.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015CB0 (VidSchMarkDeviceAsError.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C0016180 (VidMmFreeDeferredDmaBufferMapping.c)
 *     VidSchiFillSubmitCommandData @ 0x1C0016B38 (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002D230 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CAD8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C007BBA0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  __int64 v2; // r13
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  _BYTE *v8; // rsi
  const char *v9; // rdx
  __int64 v10; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  _BYTE *v15; // rax
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  LARGE_INTEGER *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // esi
  LARGE_INTEGER v27; // r12
  LARGE_INTEGER *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int32 v33; // r10d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  bool v55; // r14
  char v56; // r14
  KIRQL v57; // r13
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // esi
  __int64 v62; // r8
  __int64 v63; // r8
  bool v64; // al
  _QWORD *v65; // rax
  void *v66; // rcx
  _QWORD *v67; // rax
  void *v68; // rcx
  _QWORD *v69; // rax
  void *v70; // rcx
  _QWORD *v71; // rax
  void *v72; // rcx
  KIRQL v73; // [rsp+50h] [rbp-79h]
  char v74; // [rsp+51h] [rbp-78h] BYREF
  char v75; // [rsp+52h] [rbp-77h]
  int v76; // [rsp+54h] [rbp-75h]
  __int64 v77; // [rsp+58h] [rbp-71h]
  LARGE_INTEGER v78; // [rsp+60h] [rbp-69h]
  __int64 v79; // [rsp+68h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-59h] BYREF
  __int128 v81; // [rsp+90h] [rbp-39h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-29h]
  __int128 v83; // [rsp+B0h] [rbp-19h]
  __int128 v84; // [rsp+C0h] [rbp-9h]
  __int128 v85; // [rsp+D0h] [rbp+7h]
  __int128 v86; // [rsp+E0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v75 = a2;
  v76 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v77 = v5;
  v6 = *(_QWORD *)(v4 + 24);
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v7 = *(unsigned int *)(v4 + 488);
  v8 = (_BYTE *)(v4 + 56 * (v7 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 232LL) )
  {
    v9 = "System";
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 40);
    if ( v10 && *(_QWORD *)(v10 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v10 + 2648));
      v9 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        *v8 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v9 = "Unknown";
    }
  }
  v12 = 16LL;
  v13 = v9 - v8;
  do
  {
    if ( v12 == -2147483630 )
      break;
    v14 = v8[v13];
    if ( !v14 )
      break;
    *v8++ = v14;
    --v12;
  }
  while ( v12 );
  v15 = v8 - 1;
  if ( v12 )
    v15 = v8;
  *v15 = 0;
LABEL_16:
  v16 = 56 * v7 + v4 + 520;
  *(_DWORD *)v16 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v16 + 16) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v16 + 20) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v16 + 24) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v16 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 488) = ((_BYTE)v7 + 1) & 0xF;
  v17 = *(_DWORD *)(a1 + 92);
  if ( (v17 & 4) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v18 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v18 + 392) >= 4 || *(_BYTE *)(v6 + 148)) )
    {
      *(_DWORD *)(a1 + 92) = v17 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 804));
      VidSchIsVSyncEnabled(v6, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL));
    }
  }
  v73 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  v19 = *(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196);
  v79 = v19;
  *(_OWORD *)v19 = 0LL;
  *(_OWORD *)(v19 + 16) = 0LL;
  *(_OWORD *)(v19 + 32) = 0LL;
  *(_OWORD *)(v19 + 48) = 0LL;
  *(_OWORD *)(v19 + 64) = 0LL;
  *(_OWORD *)(v19 + 80) = 0LL;
  *(_OWORD *)(v19 + 96) = 0LL;
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2884));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 720));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v78 = PerformanceCounter;
  *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
  v21 = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2880)) == 1 )
  {
    v22 = *(unsigned int *)(v2 + 404);
    v23 = gulPriorityToYieldPriorityBand[v22];
    if ( gulPriorityToYieldPriorityBand[v22] )
    {
      v24 = (LARGE_INTEGER *)(v4 + 1928 + 8 * v23);
      do
      {
        if ( v24[-4].QuadPart )
          *v24 = v21;
        --v24;
        --v23;
      }
      while ( v23 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 788)) == 1 )
  {
    if ( v5 == *(_QWORD *)(v6 + 232) )
      VidSchiUpdateContextStatus(v2, 1uLL, 5858LL);
    *(_DWORD *)(v2 + 184) |= 2u;
    v25 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v25 + 1768) == 1 )
      *(_DWORD *)(v4 + 1764) |= 1 << *(_DWORD *)(v2 + 404);
    v76 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2892));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2896));
    v26 = *(_DWORD *)(v4 + 1552);
    if ( v26 != *(_DWORD *)(v4 + 1544) )
    {
      v27 = v78;
      do
      {
        v28 = *(LARGE_INTEGER **)(v4 + 8LL * v26 + 1560);
        if ( (v28[23].LowPart & 8) == 0 )
        {
          VidSchiUpdateContextStatus(*(_QWORD *)(v4 + 8LL * v26 + 1560), 2uLL, 5919LL);
          if ( v26 == *(_DWORD *)(v4 + 1552) && !v28[63].QuadPart )
            v28[63] = v27;
        }
        v26 = ((_BYTE)v26 + 1) & 0xF;
      }
      while ( v26 != *(_DWORD *)(v4 + 1544) );
      v19 = v79;
      v5 = v77;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v29 = *(_QWORD *)(v6 + 624);
    v30 = 8LL * *(unsigned __int16 *)(v4 + 4);
    v31 = *(unsigned __int16 *)(v4 + 4);
    if ( v31 < *(_DWORD *)(v6 + 696) )
      v29 += v30;
    ++*(_QWORD *)(*(_QWORD *)v29 + 104LL);
    v32 = *(_QWORD *)(v6 + 624) + v30;
    if ( v31 >= *(_DWORD *)(v6 + 696) )
      v32 = *(_QWORD *)(v6 + 624);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)v32 + 104LL);
    VidSchiFillPreemptCommandData(a1, &v81);
    _InterlockedExchange((volatile __int32 *)(v4 + 160), v33);
    RtlClearBitEx(v6 + 480, *(unsigned __int16 *)(v4 + 4));
  }
  else
  {
    v36 = *(_QWORD *)(a1 + 56);
    if ( v36 )
    {
      VidSchiProfilePerformanceTick(6, v6, 0, 0, 0LL, v36, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
      if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
      {
        v38 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL);
        v39 = v38;
        v40 = *(_QWORD *)(v6 + 8 * v38 + 3104);
        if ( ((*(_DWORD *)(v40 + 4) - 3) & 0xFFFFFFFD) == 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
          v65[3] = 281LL;
          v65[4] = 3072LL;
          v65[5] = *(_QWORD *)(a1 + 56);
          v65[6] = v39;
          v65[7] = *(int *)(v40 + 4);
          WdLogEvent5_WdCriticalError(v65);
          VidMmFreeDeferredDmaBufferMapping(v66);
          __debugbreak();
        }
        v5 = v77;
      }
      v41 = *(_QWORD *)(a1 + 56);
      v42 = *(_QWORD *)(v41 + 88);
      v43 = *(_QWORD *)(v42 + 160);
      if ( v43 && *(_QWORD *)(v41 + 112) <= v43 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42);
        v67[3] = 281LL;
        v67[4] = 1792LL;
        v67[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL);
        v67[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 160LL);
        v67[7] = 0LL;
        WdLogEvent5_WdCriticalError(v67);
        VidMmFreeDeferredDmaBufferMapping(v68);
        __debugbreak();
      }
      *(_QWORD *)(v42 + 152) = *(_QWORD *)(v41 + 112);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    }
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, (__int64)&v81);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiFillSubmitCommandData)(a1, &v81, (LARGE_INTEGER)v21.QuadPart);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v44 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v44[3] = a1;
    v44[4] = *(_QWORD *)(a1 + 104);
    v44[5] = *(_QWORD *)(a1 + 56);
    v44[6] = *(int *)(a1 + 88);
    v45 = *(_QWORD *)(a1 + 56);
    if ( v45 )
      v45 = *(_QWORD *)(v45 + 112);
    v44[7] = v45;
    WdLogEvent5_WdEvent(v44);
  }
  v46 = *(unsigned int *)(v4 + 1544);
  v47 = v4 + 8 * v46;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 1560), v2, 0LL) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v47, v34, v35);
    *(_QWORD *)(v48 + 24) = v6;
    *(_QWORD *)(v48 + 32) = a1;
    WdLogEvent5_WdAssertion(v48);
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v46 + 1) & 0xF);
  if ( v76 )
  {
    v49 = *(_QWORD *)(v2 + 96);
    v74 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v49 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v49 + 24) + 32LL),
      &v74);
  }
  else if ( bTracingEnabled )
  {
    v50 = *(_QWORD *)(v2 + 56);
    if ( !v50 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v50) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq_EtwWriteTransfer(
        v47,
        v34,
        v35,
        v50,
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 2008),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  VidSchiProfilePerformanceTick(7, v6, v4, 0, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v52 = *(unsigned int *)(v4 + 1400);
  v53 = v52;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v52 + 1416), a1, 0LL) )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51);
    v69[6] = v4 + 1416 + 8 * v53;
    v69[3] = 281LL;
    v69[4] = 2048LL;
    v69[5] = v53;
    v69[7] = a1;
    WdLogEvent5_WdCriticalError(v69);
    VidMmFreeDeferredDmaBufferMapping(v70);
    __debugbreak();
  }
  _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v52 + 1) & 0xF);
  if ( *(_DWORD *)(v6 + 2916)
    || (v54 = *(_QWORD *)(a1 + 56)) != 0 && (*(_DWORD *)(v54 + 76) & 0x80u) != 0
    || (*(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0))
    && !*(_DWORD *)(a1 + 88) )
  {
    KeLowerIrql(v73);
    *(_DWORD *)v19 = 7;
    *(_QWORD *)(v19 + 16) = *(_QWORD *)(v4 + 152);
    *(_BYTE *)(v19 + 24) = *(_BYTE *)(v6 + 2940) & 1;
    *(_BYTE *)(v19 + 25) = *(_DWORD *)(v6 + 2916) != 0;
    v64 = *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0);
    *(_BYTE *)(v19 + 26) = v64;
    if ( (*(_BYTE *)(v6 + 2940) & 1) != 0 || *(_DWORD *)(v6 + 2916) )
      v63 = 0LL;
    else
      LOBYTE(v63) = 1;
    VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v63);
  }
  else
  {
    *(_DWORD *)(a1 + 92) |= 0x20u;
    v55 = 1;
    if ( *(_DWORD *)(a1 + 88) == 3 )
    {
      v56 = *(_BYTE *)(v6 + 49);
      v57 = v73;
      if ( v56 )
        KeLowerIrql(v73);
      _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
      *(_DWORD *)(v4 + 176) = v81;
      *(_DWORD *)v19 = 3;
      *(_OWORD *)(v19 + 16) = v81;
      v58 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[27])(*(_QWORD *)(v6 + 8), &v81);
      v55 = v56 == 0;
    }
    else
    {
      *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      {
        v57 = v73;
        KeLowerIrql(v73);
        v55 = 0;
        v58 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[52])(*(_QWORD *)(v6 + 8), &v81);
        *(_DWORD *)v19 = 2;
        *(_OWORD *)(v19 + 16) = v81;
        *(_OWORD *)(v19 + 32) = v82;
        *(_OWORD *)(v19 + 48) = v83;
        *(_OWORD *)(v19 + 64) = v84;
        *(_DWORD *)(v19 + 80) = v58;
      }
      else
      {
        v58 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[26])(*(_QWORD *)(v6 + 8), &v81);
        v57 = v73;
        *(_DWORD *)v19 = 1;
        *(_OWORD *)(v19 + 16) = v81;
        *(_OWORD *)(v19 + 32) = v82;
        *(_OWORD *)(v19 + 48) = v83;
        *(_OWORD *)(v19 + 64) = v84;
        *(_OWORD *)(v19 + 80) = v85;
        *(_OWORD *)(v19 + 96) = v86;
      }
    }
    v61 = v58;
    if ( v58 )
    {
      if ( !v75 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
        v71[5] = v61;
        v71[6] = &v81;
        v71[3] = 281LL;
        v71[4] = 2LL;
        v71[7] = a1;
        WdLogEvent5_WdCriticalError(v71);
        VidMmFreeDeferredDmaBufferMapping(v72);
        JUMPOUT(0x1C000958ELL);
      }
      VidSchMarkDeviceAsError(v77, 19LL);
      LOBYTE(v62) = 1;
      VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v62);
      *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
    }
    ++*(_QWORD *)(v6 + 416);
    if ( v55 )
      KeLowerIrql(v57);
  }
}

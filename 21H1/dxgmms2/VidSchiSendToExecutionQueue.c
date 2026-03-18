/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0008360
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007E090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0084EA0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0086BE0 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C0006700 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiFillPreemptCommandData @ 0x1C0013B14 (VidSchiFillPreemptCommandData.c)
 *     VidSchMarkDeviceAsError @ 0x1C00140D0 (VidSchMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandData @ 0x1C0014F28 (VidSchiFillSubmitCommandData.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002D2F8 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CBB8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B620 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r13
  __int64 v7; // r15
  _BYTE *v8; // rbx
  __int64 v9; // rcx
  const char *ProcessImageFileName; // rax
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  KIRQL v19; // r12
  LARGE_INTEGER v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  LARGE_INTEGER *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r14d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  char v42; // bl
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rdx
  unsigned int i; // r13d
  __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int32 v54; // r10d
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r13
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  KIRQL v62; // al
  __int64 v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // r8
  KIRQL v66; // [rsp+50h] [rbp-79h]
  char v67; // [rsp+51h] [rbp-78h] BYREF
  char v68; // [rsp+52h] [rbp-77h]
  __int64 v69; // [rsp+58h] [rbp-71h]
  int v70; // [rsp+60h] [rbp-69h]
  __int64 v71; // [rsp+68h] [rbp-61h]
  LARGE_INTEGER *v72; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  __int128 v74; // [rsp+90h] [rbp-39h] BYREF
  __int128 v75; // [rsp+A0h] [rbp-29h]
  __int128 v76; // [rsp+B0h] [rbp-19h]
  __int128 v77; // [rsp+C0h] [rbp-9h]
  __int128 v78; // [rsp+D0h] [rbp+7h]
  __int128 v79; // [rsp+E0h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 48);
  v68 = a2;
  v70 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v69 = v5;
  v6 = *(_QWORD *)(v4 + 24);
  v74 = 0LL;
  v71 = v6;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v7 = *(unsigned int *)(v4 + 488);
  v8 = (_BYTE *)(v4 + 56 * (v7 + 9));
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 232LL) )
  {
    v11 = "System";
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v9 + 2648));
      v11 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        v5 = v69;
        goto LABEL_12;
      }
      v5 = v69;
    }
    else
    {
      v11 = "Unknown";
    }
  }
  v12 = 16LL;
  v13 = v11 - v8;
  while ( v12 != -2147483630 )
  {
    v14 = v8[v13];
    if ( !v14 )
      break;
    *v8++ = v14;
    if ( !--v12 )
    {
      --v8;
      break;
    }
  }
LABEL_12:
  *v8 = 0;
  v15 = 56 * v7 + v4 + 520;
  *(_DWORD *)v15 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v15 + 20) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a1 + 96);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 488) = ((_BYTE)v7 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v47 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v47 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v47 + 392) >= 4 || *(_BYTE *)(v6 + 148)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 804));
      VidSchIsVSyncEnabled(v6, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL));
    }
  }
  v66 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  v17 = *(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196);
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)(v17 + 16) = 0LL;
  *(_OWORD *)(v17 + 32) = 0LL;
  *(_OWORD *)(v17 + 48) = 0LL;
  *(_OWORD *)(v17 + 64) = 0LL;
  *(_OWORD *)(v17 + 80) = 0LL;
  *(_OWORD *)(v17 + 96) = 0LL;
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2884));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 720));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v19 = 1;
  *(LARGE_INTEGER *)(v17 + 8) = PerformanceCounter;
  v20 = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2880)) == 1 )
  {
    v21 = *(unsigned int *)(v2 + 404);
    v22 = gulPriorityToYieldPriorityBand[v21];
    if ( gulPriorityToYieldPriorityBand[v21] )
    {
      v23 = (LARGE_INTEGER *)(v4 + 1928 + 8 * v22);
      do
      {
        if ( v23[-4].QuadPart )
          *v23 = v20;
        --v23;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 788)) == 1 )
  {
    if ( v69 == *(_QWORD *)(v6 + 232) )
      VidSchiUpdateContextStatus(v2, 1uLL, 5855LL);
    *(_DWORD *)(v2 + 184) |= 2u;
    v24 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v24 + 1768) == 1 )
      *(_DWORD *)(v4 + 1764) |= 1 << *(_DWORD *)(v2 + 404);
    v70 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2892));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2896));
    for ( i = *(_DWORD *)(v4 + 1552); i != *(_DWORD *)(v4 + 1544); i = ((_BYTE)i + 1) & 0xF )
    {
      v49 = *(_QWORD *)(v4 + 8LL * i + 1560);
      v72 = (LARGE_INTEGER *)v49;
      if ( (*(_DWORD *)(v49 + 184) & 8) == 0 )
      {
        VidSchiUpdateContextStatus(v49, 2uLL, 5916LL);
        if ( i == *(_DWORD *)(v4 + 1552) && !v72[63].QuadPart )
          v72[63] = v20;
      }
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v50 = *(unsigned __int16 *)(v4 + 4);
    v6 = v71;
    v51 = 8LL * *(unsigned __int16 *)(v4 + 4);
    v52 = *(_QWORD *)(v71 + 624);
    if ( v50 < *(_DWORD *)(v71 + 696) )
      v52 += v51;
    ++*(_QWORD *)(*(_QWORD *)v52 + 104LL);
    v53 = *(_QWORD *)(v6 + 624);
    if ( v50 < *(_DWORD *)(v6 + 696) )
      v53 += v51;
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)v53 + 104LL);
    VidSchiFillPreemptCommandData(a1, &v74);
    _InterlockedExchange((volatile __int32 *)(v4 + 160), v54);
    RtlClearBitEx(v6 + 480, *(unsigned __int16 *)(v4 + 4));
LABEL_36:
    v26 = *(unsigned int *)(v4 + 1544);
    v36 = v4 + 8 * v26;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 1560), v2, 0LL) )
      goto LABEL_37;
    goto LABEL_87;
  }
  v25 = *(_QWORD *)(a1 + 56);
  LOBYTE(v26) = 0;
  if ( !v25 )
  {
LABEL_31:
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, (__int64)&v74);
    else
      VidSchiFillSubmitCommandData(a1, &v74);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v31 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v31[3] = a1;
    v31[4] = *(_QWORD *)(a1 + 104);
    v31[5] = *(_QWORD *)(a1 + 56);
    v31[6] = *(int *)(a1 + 88);
    v32 = *(_QWORD *)(a1 + 56);
    if ( v32 )
      v33 = *(_QWORD *)(v32 + 112);
    else
      v33 = 0LL;
    v31[7] = v33;
    WdLogEvent5_WdEvent(v31);
    goto LABEL_36;
  }
  VidSchiProfilePerformanceTick(6, v6, 0, 0, 0LL, v25, 0LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
  if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
  {
    v55 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL);
    v56 = v55;
    v57 = *(_QWORD *)(v6 + 8 * v55 + 3104);
    if ( ((*(_DWORD *)(v57 + 4) - 3) & 0xFFFFFFFD) == 0 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v27);
      v58[3] = 281LL;
      v58[4] = 3072LL;
      v58[5] = *(_QWORD *)(a1 + 56);
      v58[6] = v56;
      v58[7] = *(int *)(v57 + 4);
      WdLogEvent5_WdCriticalError(v58);
      __debugbreak();
    }
    v6 = v71;
    LOBYTE(v26) = 0;
  }
  v28 = *(_QWORD *)(a1 + 56);
  v29 = *(_QWORD *)(v28 + 88);
  v30 = *(_QWORD *)(v29 + 160);
  if ( !v30 || *(_QWORD *)(v28 + 112) > v30 )
  {
    *(_QWORD *)(v29 + 152) = *(_QWORD *)(v28 + 112);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    goto LABEL_31;
  }
  v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
  v59[3] = 281LL;
  v59[4] = 1792LL;
  v59[5] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 112LL);
  v59[6] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 88LL) + 160LL);
  v59[7] = 0LL;
  WdLogEvent5_WdCriticalError(v59);
  __debugbreak();
LABEL_87:
  v60 = WdLogNewEntry5_WdAssertion(v36, v34, v35);
  *(_QWORD *)(v60 + 24) = v6;
  *(_QWORD *)(v60 + 32) = a1;
  WdLogEvent5_WdAssertion(v60);
LABEL_37:
  _InterlockedExchange((volatile __int32 *)(v4 + 1544), ((_BYTE)v26 + 1) & 0xF);
  if ( v70 )
  {
    v37 = *(_QWORD *)(v2 + 96);
    v67 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v37 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v37 + 24) + 32LL),
      &v67);
  }
  else if ( bTracingEnabled )
  {
    v46 = *(_QWORD *)(v2 + 56);
    if ( !v46 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v46) = v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq_EtwWriteTransfer(
        v36,
        v34,
        v35,
        v46,
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 2008),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  v38 = 0;
  VidSchiProfilePerformanceTick(7, v6, v4, 0, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v40 = *(unsigned int *)(v4 + 1400);
  v41 = v40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v40 + 1416), a1, 0LL) )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39);
    v61[6] = v4 + 1416 + 8 * v41;
    v61[3] = 281LL;
    v61[4] = 2048LL;
    v61[5] = v41;
    v61[7] = a1;
    WdLogEvent5_WdCriticalError(v61);
    __debugbreak();
  }
  else
  {
    v41 = v69;
    _InterlockedExchange((volatile __int32 *)(v4 + 1400), ((_BYTE)v40 + 1) & 0xF);
    if ( *(_DWORD *)(v6 + 2916) )
      goto LABEL_90;
    if ( !*(_BYTE *)(v41 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v41 + 200), 0, 0) )
    {
LABEL_43:
      *(_DWORD *)(a1 + 92) |= 0x20u;
      v42 = 1;
      if ( *(_DWORD *)(a1 + 88) == 3 )
      {
        if ( *(_BYTE *)(v6 + 49) )
        {
          KeLowerIrql(v66);
          v42 = 0;
        }
        _InterlockedExchange((volatile __int32 *)(v4 + 480), 1);
        *(_DWORD *)(v4 + 176) = v74;
        *(_DWORD *)v17 = 3;
        *(_OWORD *)(v17 + 16) = v74;
        v43 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[27])(*(_QWORD *)(v6 + 8), &v74);
      }
      else
      {
        *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
        if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        {
          v19 = v66;
          KeLowerIrql(v66);
          v42 = 0;
          v43 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[52])(*(_QWORD *)(v6 + 8), &v74);
          *(_DWORD *)v17 = 2;
          *(_OWORD *)(v17 + 16) = v74;
          *(_OWORD *)(v17 + 32) = v75;
          *(_OWORD *)(v17 + 48) = v76;
          *(_OWORD *)(v17 + 64) = v77;
          *(_DWORD *)(v17 + 80) = v43;
LABEL_46:
          v38 = v43;
          if ( !v43 )
            goto LABEL_47;
          if ( v68 )
          {
            VidSchMarkDeviceAsError(v69, 19LL);
            LOBYTE(v63) = 1;
            VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v63);
            *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
LABEL_47:
            ++*(_QWORD *)(v6 + 416);
            if ( v42 )
              KeLowerIrql(v19);
            return;
          }
          v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44);
          v64[5] = v38;
          v64[6] = &v74;
          v64[3] = 281LL;
          v64[4] = 2LL;
          v64[7] = a1;
          WdLogEvent5_WdCriticalError(v64);
          __debugbreak();
          goto LABEL_96;
        }
        v43 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[26])(*(_QWORD *)(v6 + 8), &v74);
        *(_DWORD *)v17 = 1;
        *(_OWORD *)(v17 + 16) = v74;
        *(_OWORD *)(v17 + 32) = v75;
        *(_OWORD *)(v17 + 48) = v76;
        *(_OWORD *)(v17 + 64) = v77;
        *(_OWORD *)(v17 + 80) = v78;
        *(_OWORD *)(v17 + 96) = v79;
      }
      v19 = v66;
      goto LABEL_46;
    }
  }
  if ( *(_DWORD *)(a1 + 88) )
    goto LABEL_43;
LABEL_90:
  KeLowerIrql(v66);
  *(_DWORD *)v17 = 7;
  *(_QWORD *)(v17 + 16) = *(_QWORD *)(v4 + 152);
  *(_BYTE *)(v17 + 24) = *(_BYTE *)(v6 + 2940) & 1;
  *(_BYTE *)(v17 + 25) = *(_DWORD *)(v6 + 2916) != 0;
  if ( !*(_BYTE *)(v41 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v41 + 200), 0, 0) )
  {
    v62 = 0;
    goto LABEL_97;
  }
LABEL_96:
  v62 = v19;
LABEL_97:
  *(_BYTE *)(v17 + 26) = v62;
  if ( (v19 & *(_BYTE *)(v6 + 2940)) != 0 || *(_DWORD *)(v6 + 2916) != v38 )
    v65 = 0LL;
  else
    v65 = v19;
  VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v65);
}

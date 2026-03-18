/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1C0007350
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C00959B0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0096600 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C009A9EC (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchiFillSubmitCommandDataVirtual @ 0x1C00058D0 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiFillSubmitCommandData @ 0x1C001847C (VidSchiFillSubmitCommandData.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C00366DC (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C00447E8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A3970 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  signed __int64 v2; // r15
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  _BYTE *v9; // rbx
  __int64 v10; // rcx
  const char *ProcessImageFileName; // rax
  const char *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  int v16; // ecx
  __int64 v17; // rbx
  unsigned __int8 v18; // r12
  __int64 v19; // r14
  LARGE_INTEGER PerformanceCounter; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  char v39; // bl
  int v40; // eax
  __int64 v41; // r9
  LARGE_INTEGER *v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // ebx
  LARGE_INTEGER v45; // r14
  LARGE_INTEGER *v46; // r13
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // r14d
  __int64 v60; // r8
  __int64 v61; // rbx
  _BYTE *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r9
  unsigned __int8 v66; // al
  __int64 v67; // r8
  __int64 v68; // r8
  KIRQL v69; // [rsp+50h] [rbp-B0h]
  char v70; // [rsp+51h] [rbp-AFh] BYREF
  char v71; // [rsp+52h] [rbp-AEh]
  __int64 v72; // [rsp+58h] [rbp-A8h]
  int v73; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+78h] [rbp-88h]
  _DWORD v77[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v78; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+90h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-68h] BYREF
  __int128 v81; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v82; // [rsp+C0h] [rbp-40h]
  __int128 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  __int128 v86; // [rsp+100h] [rbp+0h]
  _BYTE v87[128]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v71 = a2;
  v73 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 104);
  v72 = v5;
  v6 = *(_QWORD *)(v4 + 24);
  v81 = 0LL;
  v76 = v6;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v7 = *(unsigned int *)(v4 + 496);
  v8 = v4 + 56 * v7;
  v9 = (_BYTE *)(v8 + 512);
  if ( v5 == *(_QWORD *)(*(_QWORD *)(v5 + 32) + 240LL) )
  {
    v12 = "System";
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 40);
    if ( v10 && *(_QWORD *)(v10 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v10 + 2656));
      v12 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        v5 = v72;
        goto LABEL_12;
      }
      v5 = v72;
    }
    else
    {
      v12 = "Unknown";
    }
  }
  v13 = 16LL;
  v14 = v12 - v9;
  while ( v13 != -2147483630 )
  {
    v15 = v9[v14];
    if ( !v15 )
      break;
    *v9++ = v15;
    if ( !--v13 )
    {
      --v9;
      break;
    }
  }
LABEL_12:
  *v9 = 0;
  *(_OWORD *)(v8 + 528) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(v8 + 544) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v8 + 560) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v4 + 496) = ((_BYTE)v7 + 1) & 0xF;
  v16 = *(_DWORD *)(a1 + 92);
  if ( (v16 & 4) != 0 )
  {
    v43 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v43 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v5 + 48) & 2) != 0 || *(int *)(v43 + 392) >= 4 || *(_BYTE *)(v6 + 156)) )
    {
      *(_DWORD *)(a1 + 92) = v16 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 812));
      VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v6);
    }
  }
  v69 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
  v17 = *(_QWORD *)(a1 + 56);
  v18 = 1;
  if ( v17 && (*(_DWORD *)(v17 + 64) & 0x80u) != 0 )
  {
    v59 = *(_DWORD *)(v17 + 472);
    memset(v87, 0, sizeof(v87));
    if ( v59 )
    {
      v60 = v59;
      v61 = v17 - (_QWORD)v87;
      v62 = v87;
      do
      {
        v63 = *(_QWORD *)&v62[v61 + 480];
        v62 += 8;
        *((_QWORD *)v62 - 1) = *(_QWORD *)(*(_QWORD *)(v63 + 96) + 40LL);
        --v60;
      }
      while ( v60 );
    }
    v77[0] = v59;
    v77[1] = 0;
    v78 = v87;
    v64 = *(_QWORD *)(v6 + 16);
    v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 40LL) + 8LL);
    ((void (__fastcall *)(__int64, __int64, _DWORD *))DxgCoreInterface[81])(v64, 1LL, v77);
  }
  v19 = *(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196);
  v75 = v19;
  *(_OWORD *)v19 = 0LL;
  *(_OWORD *)(v19 + 16) = 0LL;
  *(_OWORD *)(v19 + 32) = 0LL;
  *(_OWORD *)(v19 + 48) = 0LL;
  *(_OWORD *)(v19 + 64) = 0LL;
  *(_OWORD *)(v19 + 80) = 0LL;
  *(_OWORD *)(v19 + 96) = 0LL;
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 2900));
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 9;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v74 = PerformanceCounter;
  *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2896)) == 1 )
  {
    v21 = *(unsigned int *)(v2 + 404);
    v22 = gulPriorityToYieldPriorityBand[v21];
    if ( gulPriorityToYieldPriorityBand[v21] )
    {
      v42 = (LARGE_INTEGER *)(v4 + 1936 + 8 * v22);
      do
      {
        if ( v42[-4].QuadPart )
          *v42 = PerformanceCounter;
        --v42;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 788)) == 1 )
  {
    if ( v72 == *(_QWORD *)(v6 + 240) )
      VidSchiUpdateContextStatus(v2, 1LL, 6345LL);
    *(_DWORD *)(v2 + 184) |= 2u;
    v23 = *(unsigned int *)(v2 + 404);
    if ( ++*(_DWORD *)(v4 + 4 * v23 + 1776) == 1 )
      *(_DWORD *)(v4 + 1772) |= 1 << *(_DWORD *)(v2 + 404);
    v73 = 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2908));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 2912));
    v44 = *(_DWORD *)(v4 + 1560);
    if ( v44 != *(_DWORD *)(v4 + 1552) )
    {
      v45 = v74;
      do
      {
        v46 = *(LARGE_INTEGER **)(v4 + 8LL * v44 + 1568);
        if ( (v46[23].LowPart & 8) == 0 )
        {
          VidSchiUpdateContextStatus(*(_QWORD *)(v4 + 8LL * v44 + 1568), 2LL, 6406LL);
          if ( v44 == *(_DWORD *)(v4 + 1560) && !v46[63].QuadPart )
            v46[63] = v45;
        }
        v44 = ((_BYTE)v44 + 1) & 0xF;
      }
      while ( v44 != *(_DWORD *)(v4 + 1552) );
      v19 = v75;
      v6 = v76;
    }
    *(_QWORD *)(v4 + 392) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v4 + 352));
    v47 = *(unsigned __int16 *)(v4 + 4);
    v48 = *(_QWORD *)(v6 + 632);
    v49 = 8LL * *(unsigned __int16 *)(v4 + 4);
    if ( v47 < *(_DWORD *)(v6 + 704) )
      v48 += v49;
    ++*(_QWORD *)(*(_QWORD *)v48 + 104LL);
    v50 = *(_QWORD *)(v6 + 632);
    if ( v47 < *(_DWORD *)(v6 + 704) )
      v50 += v49;
    v51 = *(_QWORD *)(*(_QWORD *)v50 + 104LL);
    v52 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 104) = v51;
    v53 = *(_QWORD *)(v52 + 96);
    v54 = *(_QWORD *)(v53 + 24);
    LODWORD(v81) = v51;
    v55 = *(unsigned __int16 *)(v53 + 4);
    v56 = *(_QWORD *)(v54 + 632);
    if ( (unsigned int)v55 < *(_DWORD *)(v54 + 704) )
      v56 += 8 * v55;
    DWORD1(v81) = *(unsigned __int16 *)(*(_QWORD *)v56 + 8LL);
    v57 = *(unsigned __int16 *)(v53 + 4);
    v58 = *(_QWORD *)(v54 + 632);
    if ( (unsigned int)v57 < *(_DWORD *)(v54 + 704) )
      v58 += 8 * v57;
    DWORD2(v81) = *(unsigned __int16 *)(*(_QWORD *)v58 + 6LL);
    RtlClearBitEx(
      v6 + 488,
      *(unsigned __int16 *)(v4 + 4),
      (unsigned int)_InterlockedExchange((volatile __int32 *)(v4 + 160), v51));
LABEL_34:
    v25 = *(unsigned int *)(v4 + 1552);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v25 + 1568), v2, 0LL) )
      goto LABEL_35;
    goto LABEL_100;
  }
  v24 = *(_QWORD *)(a1 + 56);
  v25 = 0LL;
  if ( !v24 )
  {
LABEL_29:
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      VidSchiFillSubmitCommandDataVirtual(a1, (__int64)&v81);
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiFillSubmitCommandData)(
        a1,
        &v81,
        (LARGE_INTEGER)PerformanceCounter.QuadPart);
    _InterlockedExchange64((volatile __int64 *)(v4 + 152), *(_QWORD *)(a1 + 104));
    v30 = *(_QWORD *)(a1 + 56);
    if ( v30 )
      v31 = *(_QWORD *)(v30 + 112);
    else
      v31 = 0LL;
    WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 104), v30, *(int *)(a1 + 88), v31);
    goto LABEL_34;
  }
  VidSchiProfilePerformanceTick(6, v6, 0, 0, 0LL, v24, 0LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
  if ( (*(_DWORD *)(a1 + 92) & 0x10) == 0
    || (v65 = *(_QWORD *)(a1 + 56),
        ((*(_DWORD *)(*(_QWORD *)(v6 + 8LL * *(unsigned int *)(v65 + 160) + 3200) + 4LL) - 3) & 0xFFFFFFFD) != 0) )
  {
    v26 = *(_QWORD *)(a1 + 56);
    v27 = *(_QWORD *)(v26 + 88);
    v28 = *(_QWORD *)(v27 + 160);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v26 + 112);
      if ( v29 <= v28 )
        goto LABEL_99;
    }
    *(_QWORD *)(v27 + 152) = *(_QWORD *)(v26 + 112);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
    goto LABEL_29;
  }
  WdLogSingleEntry5(
    0LL,
    281LL,
    3072LL,
    v65,
    *(unsigned int *)(v65 + 160),
    *(int *)(*(_QWORD *)(v6 + 8LL * *(unsigned int *)(v65 + 160) + 3200) + 4LL));
  __debugbreak();
LABEL_99:
  WdLogSingleEntry5(0LL, 281LL, 1792LL, v29, v28, 0LL);
  __debugbreak();
LABEL_100:
  WdLogSingleEntry2(1LL, v6, a1);
  DxgCoreInterface[85](0LL, 0x40000LL, 0xFFFFFFFFLL, L"Context queue is inconsistant", v6, a1, 0LL, 0LL, 0LL);
LABEL_35:
  _InterlockedExchange((volatile __int32 *)(v4 + 1552), ((_BYTE)v25 + 1) & 0xF);
  if ( v73 )
  {
    v33 = *(_QWORD *)(v2 + 96);
    v70 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v33 + 24) + 24LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v33 + 24) + 32LL),
      &v70);
  }
  else if ( bTracingEnabled )
  {
    v41 = *(_QWORD *)(v2 + 56);
    if ( !v41 || (v32 = *(_DWORD *)(v2 + 112), (v32 & 0x40) != 0) )
      LODWORD(v41) = v2;
    if ( (byte_1C006E941 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(v2 + 448),
        v32,
        *(_QWORD *)(v4 + 2016),
        v41,
        *(_QWORD *)(v2 + 448),
        *(_QWORD *)(v2 + 440),
        *(_QWORD *)(v4 + 2016),
        *(_DWORD *)(v2 + 436),
        3);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 1, 0);
  v34 = 0;
  VidSchiProfilePerformanceTick(7, v6, v4, 0, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v36 = *(unsigned int *)(v4 + 1408);
  v37 = v36;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v36 + 1424), a1, 0LL) )
  {
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v36, v4 + 1424 + 8 * v36, a1);
    __debugbreak();
LABEL_102:
    if ( !*(_DWORD *)(a1 + 88) )
      goto LABEL_103;
    goto LABEL_41;
  }
  v25 = v72;
  _InterlockedExchange((volatile __int32 *)(v4 + 1408), ((_BYTE)v36 + 1) & 0xF);
  if ( *(_DWORD *)(v6 + 3012) )
    goto LABEL_103;
  if ( *(_BYTE *)(v25 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 200), 0, 0) )
    goto LABEL_102;
LABEL_41:
  v38 = *(_QWORD *)(a1 + 56);
  if ( !v38 || (*(_DWORD *)(v38 + 76) & 0x80u) == 0 )
  {
    *(_DWORD *)(a1 + 92) |= 0x20u;
    v39 = 1;
    if ( *(_DWORD *)(a1 + 88) == 3 )
    {
      v34 = v69;
      if ( *(_BYTE *)(v6 + 49) )
      {
        KeLowerIrql(v69);
        v39 = 0;
      }
      v18 = _InterlockedExchange((volatile __int32 *)(v4 + 488), 1);
      *(_DWORD *)(v4 + 176) = v81;
      *(_DWORD *)v19 = 3;
      *(_OWORD *)(v19 + 16) = v81;
      v40 = ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64, __int64))DxgCoreInterface[28])(
              *(_QWORD *)(v6 + 8),
              &v81,
              v35,
              v37);
    }
    else
    {
      *(_QWORD *)(v4 + 168) = *(_QWORD *)(a1 + 104);
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
      {
        v34 = v69;
        KeLowerIrql(v69);
        v39 = 0;
        v40 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[53])(*(_QWORD *)(v6 + 8), &v81);
        *(_DWORD *)v19 = 2;
        *(_OWORD *)(v19 + 16) = v81;
        *(_OWORD *)(v19 + 32) = v82;
        *(_OWORD *)(v19 + 48) = v83;
        *(_OWORD *)(v19 + 64) = v84;
        *(_DWORD *)(v19 + 80) = v40;
      }
      else
      {
        v40 = ((__int64 (__fastcall *)(_QWORD, __int128 *, __int64, __int64))DxgCoreInterface[27])(
                *(_QWORD *)(v6 + 8),
                &v81,
                v35,
                v37);
        v34 = v69;
        *(_DWORD *)v19 = 1;
        *(_OWORD *)(v19 + 16) = v81;
        *(_OWORD *)(v19 + 32) = v82;
        *(_OWORD *)(v19 + 48) = v83;
        *(_OWORD *)(v19 + 64) = v84;
        *(_OWORD *)(v19 + 80) = v85;
        *(_OWORD *)(v19 + 96) = v86;
      }
    }
    if ( !v40 )
      goto LABEL_47;
    if ( v71 )
    {
      VidSchMarkDeviceAsError(v72, 19LL);
      LOBYTE(v67) = 1;
      VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v67);
      *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 152);
LABEL_47:
      ++*(_QWORD *)(v6 + 424);
      if ( v39 )
        KeLowerIrql(v34);
      return;
    }
    WdLogSingleEntry5(0LL, 281LL, 2LL, v40, &v81, a1);
    __debugbreak();
    goto LABEL_109;
  }
LABEL_103:
  KeLowerIrql(v69);
  *(_DWORD *)v19 = 7;
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v4 + 152);
  *(_BYTE *)(v19 + 24) = *(_BYTE *)(v6 + 3036) & 1;
  *(_BYTE *)(v19 + 25) = *(_DWORD *)(v6 + 3012) != 0;
  if ( !*(_BYTE *)(v25 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 200), 0, 0) )
  {
    v66 = 0;
    goto LABEL_110;
  }
LABEL_109:
  v66 = v18;
LABEL_110:
  *(_BYTE *)(v19 + 26) = v66;
  if ( (v18 & *(_BYTE *)(v6 + 3036)) != 0 || *(_DWORD *)(v6 + 3012) != v34 )
    v68 = 0LL;
  else
    v68 = v18;
  VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), v68);
}

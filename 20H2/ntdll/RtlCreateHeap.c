/*
 * XREFs of RtlCreateHeap @ 0x18000A8B0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     RtlDetectHeapLeaks @ 0x1800602A0 (RtlDetectHeapLeaks.c)
 *     LdrpInitializeProcessHeap @ 0x1800D4258 (LdrpInitializeProcessHeap.c)
 *     RtlDebugCreateHeap @ 0x1800F9060 (RtlDebugCreateHeap.c)
 *     RtlHeapTrkInitialize @ 0x1800FDCA0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpConvertCreationFlags @ 0x180007B28 (RtlpHpConvertCreationFlags.c)
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateHeapEncoding @ 0x180009FC4 (RtlpCreateHeapEncoding.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18000A068 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpPopulateListIndex @ 0x18000A600 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009D510 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18009D770 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlDebugCreateHeap @ 0x1800F9060 (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180108338 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x1801083E0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x180108400 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x18010A0E8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x18010A250 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpParametersVerify @ 0x18010B674 (RtlpHpParametersVerify.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  PVOID v9; // rcx
  unsigned __int64 v10; // rdi
  ULONG v11; // r14d
  _DWORD *v12; // rbx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // ebx
  struct _PEB *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // r8
  unsigned __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // r8
  unsigned int v27; // edi
  int v28; // r14d
  __int64 v29; // rcx
  char *v30; // rbx
  char *v31; // rdx
  char *v32; // r12
  __int64 v33; // r14
  __int64 v34; // rcx
  char *v35; // rbx
  unsigned int v36; // eax
  int v37; // r9d
  _DWORD *v38; // r10
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _RTL_CRITICAL_SECTION *v49; // rcx
  _BYTE *v51; // rax
  unsigned int v52; // eax
  unsigned __int64 v53; // rdi
  SIZE_T v54; // rbx
  unsigned int v55; // eax
  __int64 v56; // rax
  ULONG_PTR v57; // rcx
  int v58; // eax
  unsigned __int64 v59; // rbx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v61; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-228h] BYREF
  __int64 v63; // [rsp+48h] [rbp-220h]
  __int64 v64; // [rsp+50h] [rbp-218h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-210h]
  ULONG_PTR v66; // [rsp+60h] [rbp-208h] BYREF
  int v67; // [rsp+68h] [rbp-200h]
  ULONG_PTR v68; // [rsp+70h] [rbp-1F8h] BYREF
  PVOID v69; // [rsp+78h] [rbp-1F0h] BYREF
  SIZE_T v70; // [rsp+80h] [rbp-1E8h]
  ULONG_PTR v71; // [rsp+88h] [rbp-1E0h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-1D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-1D0h] BYREF
  __int128 v74; // [rsp+A0h] [rbp-1C8h]
  PVOID v75; // [rsp+B8h] [rbp-1B0h]
  PVOID MemoryInformation[3]; // [rsp+C0h] [rbp-1A8h] BYREF
  ULONG_PTR v77; // [rsp+D8h] [rbp-190h]
  int v78; // [rsp+E0h] [rbp-188h]
  char v79; // [rsp+E4h] [rbp-184h]
  __int128 v80; // [rsp+F0h] [rbp-178h] BYREF
  char v81[16]; // [rsp+100h] [rbp-168h] BYREF
  ULONG_PTR v82; // [rsp+110h] [rbp-158h]
  _OWORD v83[6]; // [rsp+130h] [rbp-138h] BYREF
  _BYTE v84[80]; // [rsp+190h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v86; // [rsp+208h] [rbp-60h]

  v70 = ReserveSize;
  v9 = Lock;
  v63 = (__int64)Lock;
  v75 = HeapBase;
  *(_QWORD *)&v74 = Lock;
  v10 = (unsigned __int64)Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v67 = 0;
  HeapHandle = 0LL;
  v64 = 0LL;
  if ( !dword_1801663E8 || HeapBase || Lock )
  {
    if ( dword_1801663F8 && Parameters == (PVOID)1 )
      v10 = (Flags & 0x100) == 0;
  }
  else
  {
    v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_180166418)(Flags, 0LL);
    if ( v12 )
    {
LABEL_97:
      v26 = v63;
LABEL_98:
      v49 = 0LL;
      goto LABEL_99;
    }
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_167;
    v10 = 0LL;
    ReserveSize = v70;
    v9 = (PVOID)v63;
  }
  v11 = Flags & 0xF1FFFFFF;
  v12 = 0LL;
  if ( (v11 & 0x100) != 0 )
  {
    if ( (v11 & 2) == 0 || HeapBase || ReserveSize || CommitSize || v9 )
      goto LABEL_97;
    if ( v10 == -1LL && dword_1801663F8 )
      v10 = 0LL;
    if ( v10 )
    {
      v12 = (_DWORD *)v10;
      if ( !(unsigned int)RtlpHpParametersVerify(v10) )
        goto LABEL_167;
    }
    else
    {
      v12 = v84;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0 && (v11 & 2) != 0 && !HeapBase )
  {
    if ( !v10 )
      goto LABEL_121;
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v58 = 1, *(_QWORD *)(v10 + 72)) )
      v58 = 0;
    if ( v58 )
    {
LABEL_121:
      v51 = v84;
      if ( v9 )
        v51 = 0LL;
      v12 = v51;
    }
  }
  if ( v12 )
  {
    if ( v12 == (_DWORD *)v84 )
    {
      memset(v12, 0, 0x50uLL);
      *v12 = 5242882;
      v12[3] = 1;
      v12[4] = -1;
    }
    if ( (v12[1] & 1) != 0 )
    {
      if ( dword_1801663F8 )
      {
        v12 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, PVOID, SIZE_T, SIZE_T, _QWORD, _QWORD))qword_180166418)(
                          v11,
                          HeapBase,
                          v70,
                          CommitSize,
                          0LL,
                          0LL);
        goto LABEL_97;
      }
    }
    else
    {
      v74 = RtlpHpEnvHandle;
      _BitScanReverse(&v52, v12[3]);
      BYTE1(v74) = v52;
      if ( v12[4] != -1 )
        BYTE2(v74) = *((_BYTE *)v12 + 16) + 1;
      *((_QWORD *)&v74 + 1) = *((_QWORD *)v12 + 3);
      v53 = CommitSize;
      if ( v70 )
        v53 = v70;
      v80 = v74;
      v54 = v53;
      if ( CommitSize <= v53 )
        v54 = CommitSize;
      v55 = RtlpHpConvertCreationFlags(v11, NtGlobalFlag);
      v56 = RtlpHpHeapCreate(v55, v53, v54, &v80);
      v12 = (_DWORD *)v56;
      if ( !v56 )
        goto LABEL_97;
      RtlpMoveHeapBetweenLists(v56, 0LL, 1LL);
      if ( *((_WORD *)v12 + 14) )
        goto LABEL_97;
      RtlpHpHeapDestroy((__int64)v12);
    }
    goto LABEL_167;
  }
  if ( (v11 & 0x10000000) != 0 )
    goto LABEL_10;
  if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    if ( (v11 & 0xFFF80C00) == 0 )
      goto LABEL_10;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
    RtlpHeapHandleError(2LL);
  }
  if ( (v11 & 0xFFF80C00) != 0 )
    v11 &= 0x7F3FFu;
LABEL_10:
  memset(v83, 0, sizeof(v83));
  if ( v10 && *(_DWORD *)v10 == 96 )
  {
    v83[0] = *(_OWORD *)v10;
    v83[1] = *(_OWORD *)(v10 + 16);
    v83[2] = *(_OWORD *)(v10 + 32);
    v83[3] = *(_OWORD *)(v10 + 48);
    v83[4] = *(_OWORD *)(v10 + 64);
    v83[5] = *(_OWORD *)(v10 + 80);
  }
  v13 = v11 | 0x20;
  if ( (NtGlobalFlag & 0x10) == 0 )
    v13 = v11;
  v14 = v13 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v14 = v13;
  v15 = v14 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v15 = v14;
  v16 = v15 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v16 = v15;
  v17 = v16 | 0x20000000;
  if ( (NtGlobalFlag & 0x80) == 0 )
    v17 = v16;
  v18 = v17 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v18 = v17;
  v19 = NtCurrentPeb();
  if ( !*((_QWORD *)&v83[0] + 1) )
    *((_QWORD *)&v83[0] + 1) = v19->HeapSegmentReserve;
  if ( !*(_QWORD *)&v83[1] )
    *(_QWORD *)&v83[1] = v19->HeapSegmentCommit;
  if ( !*((_QWORD *)&v83[1] + 1) )
    *((_QWORD *)&v83[1] + 1) = v19->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v83[2] )
    *(_QWORD *)&v83[2] = v19->HeapDeCommitTotalFreeThreshold;
  v20 = qword_18016D210;
  if ( !qword_18016D210 )
  {
    qword_18016D218 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v20 = v86;
      qword_18016D210 = v86;
      goto LABEL_32;
    }
LABEL_167:
    v12 = 0LL;
    goto LABEL_97;
  }
LABEL_32:
  if ( !*((_QWORD *)&v83[2] + 1) )
    *((_QWORD *)&v83[2] + 1) = v20 - qword_18016D218 - 4096;
  v21 = *(_QWORD *)&v83[3];
  if ( (unsigned __int64)(*(_QWORD *)&v83[3] - 1LL) > 0xFEFFF )
    v21 = 1044480LL;
  *(_QWORD *)&v83[3] = v21;
  if ( CommitSize )
    v22 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v22 = 0x2000LL;
  v68 = v22;
  if ( v70 )
    v23 = (v70 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v66 = v23;
  v24 = v22;
  if ( v22 > v23 )
  {
    v22 = v23;
    v68 = v23;
    v24 = v23;
  }
  if ( (v18 & 2) == 0 || HeapBase )
  {
    v70 = 0LL;
    v25 = v67;
  }
  else
  {
    v70 = 4096LL;
    v25 = 2;
    v67 = 2;
    if ( v23 - 4096 < v24 )
    {
      v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v66 = v23;
    }
  }
  if ( !v24 || !v23 )
    goto LABEL_167;
  if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
    return (PVOID)RtlDebugCreateHeap(v18, HeapBase, v23, v22, v63, v83);
  NtGlobalFlag = 704;
  v26 = v63;
  v27 = v18;
  if ( (v18 & 1) != 0 )
  {
    if ( v63 )
    {
      v12 = 0LL;
      goto LABEL_98;
    }
  }
  else
  {
    v64 = v63 & -(__int64)(v63 != 0);
    v27 = v18 | 0x80000000;
    if ( !v63 )
      v27 = v18;
    NtGlobalFlag = v63 != 0 ? 704 : 744;
  }
  if ( HeapBase )
  {
    if ( *((_QWORD *)&v83[4] + 1) )
    {
      if ( !*((_QWORD *)&v83[3] + 1)
        || !*(_QWORD *)&v83[4]
        || *((_QWORD *)&v83[3] + 1) > *(_QWORD *)&v83[4]
        || (v27 & 2) != 0 )
      {
        goto LABEL_185;
      }
      v69 = HeapBase;
      v32 = (char *)HeapBase + *((_QWORD *)&v83[3] + 1);
      v66 = *(_QWORD *)&v83[4];
      memset(HeapBase, 0, 0x1000uLL);
      v31 = (char *)HeapBase;
    }
    else
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             HeapBase,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_186;
      v32 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v78 == 0x10000 )
        goto LABEL_186;
      v31 = (char *)MemoryInformation[0];
      v69 = MemoryInformation[0];
      if ( v78 == 4096 )
      {
        if ( (v27 & 0x40000) != 0 && (v79 & 0x40) == 0 )
          goto LABEL_186;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v81, 0x30uLL, 0LL) < 0 )
          goto LABEL_186;
        v66 = v82;
        v68 = v77;
        v31 = (char *)v69;
        v32 = (char *)v69 + v77;
      }
      else
      {
        v66 = v77;
        v57 = v68;
        if ( v68 > v77 )
          v57 = v77;
        v68 = v57;
        if ( v57 < 0x2000 )
          goto LABEL_186;
      }
    }
    v67 = v25 | 1;
    v30 = (char *)HeapBase;
    HeapHandle = HeapBase;
    v28 = v27 & 0x40000;
    goto LABEL_61;
  }
  BaseAddress = 0LL;
  if ( *((_QWORD *)&v83[4] + 1) )
  {
LABEL_185:
    v12 = 0LL;
    v49 = (_RTL_CRITICAL_SECTION *)v64;
    goto LABEL_99;
  }
  v71 = (RtlpHeapGenerateRandomValue64(v24, 2LL, v63) & 0x1F) << 16;
  RegionSize = v66 + v71;
  if ( v66 + v71 < v66 )
  {
    RegionSize = v66;
    v71 = 0LL;
  }
  v28 = v27 & 0x40000;
  if ( ZwAllocateVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         &RegionSize,
         0x2000u,
         (v27 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_186;
  v30 = (char *)BaseAddress;
  HeapHandle = BaseAddress;
  v66 = RegionSize;
  if ( v71 )
  {
    RtlpSecMemFreeVirtualMemory(v29, &BaseAddress, &v71, 0x8000u);
    v30 = (char *)BaseAddress + v71;
    HeapHandle = (char *)BaseAddress + v71;
    v66 = RegionSize - v71;
  }
  v31 = v30;
  v69 = v30;
  v32 = v30;
LABEL_61:
  if ( v31 == v32 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v69, 0LL, &v68, 0x1000u, v28 != 0 ? 64 : 4) < 0 )
      goto LABEL_186;
    v33 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v34 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v34 = 2147353472LL;
    if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(HeapHandle, v69, v68, 1LL);
    v32 += v68;
    v30 = (char *)HeapHandle;
  }
  else
  {
    v33 = 2147353472LL;
  }
  v35 = v30 + 704;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v59 = (unsigned __int64)(v35 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)HeapHandle + 41) = v59;
    v36 = NtGlobalFlag + 2064;
    v35 = (char *)(v59 + 2064);
    v27 |= 0x4000000u;
  }
  else
  {
    v36 = NtGlobalFlag;
  }
  NtGlobalFlag = (v36 + 15) & 0xFFFFFFF0;
  *((_WORD *)HeapHandle + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)HeapHandle + 10) = 1;
  *((_BYTE *)HeapHandle + 15) = 1;
  *((_DWORD *)HeapHandle + 38) = -285217025;
  *((_DWORD *)HeapHandle + 28) = v27 & 0xEFFFFFFF;
  *((_DWORD *)HeapHandle + 36) = 0;
  memset((char *)HeapHandle + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)HeapHandle);
  *((_DWORD *)HeapHandle + 162) = 1;
  v38 = HeapHandle;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v61 + 144) = HeapInterceptorIndex;
    *((_DWORD *)HeapHandle + 28) &= ~0x40u;
    v38 = HeapHandle;
  }
  v38[29] = v27 & 0x6001007D;
  *((_WORD *)HeapHandle + 105) = (_WORD)v35 - (_WORD)HeapHandle;
  *((_QWORD *)HeapHandle + 27) = 0LL;
  v39 = (char *)HeapHandle + 336;
  *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
  *v39 = v39;
  v40 = (char *)HeapHandle + 272;
  *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
  *v40 = v40;
  v41 = (char *)HeapHandle + 288;
  *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
  *v41 = v41;
  v42 = (char *)HeapHandle + 240;
  *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
  *v42 = v42;
  if ( !v64 && (v27 & 1) == 0 )
  {
    v64 = (__int64)v35;
    if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v35, 0, 0x10000000u) >= 0 )
    {
      v35 += 40;
      goto LABEL_75;
    }
    goto LABEL_167;
  }
LABEL_75:
  *((_QWORD *)HeapHandle + 44) = v64;
  *((_DWORD *)HeapHandle + 30) |= 0x80000000;
  if ( (unsigned __int8)RtlpInitializeHeapSegment(
                          (int)HeapHandle,
                          (int)HeapHandle,
                          NtGlobalFlag + 1104,
                          v37,
                          v67,
                          (__int64)v69,
                          v32,
                          (__int64)v69 + v66 - v70) )
  {
    if ( HeapBase )
      memset(v35, 0, 0x80uLL);
    *((_DWORD *)v35 + 2) = 128;
    *((_QWORD *)v35 + 5) = v35 + 56;
    *((_QWORD *)v35 + 4) = (char *)HeapHandle + 336;
    *((_QWORD *)v35 + 6) = v35 + 72;
    RtlpPopulateListIndex((__int64)HeapHandle, (__int64 *)v35);
    *((_WORD *)HeapHandle + 104) = 0;
    *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v83[0] + 1);
    *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v83[1];
    *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v83[1] + 1) >> 4;
    *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v83[2] >> 4;
    *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v83[2] + 1);
    *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v83[3] + 15LL) >> 4;
    *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v83[4] + 1);
    *((_DWORD *)HeapHandle + 172) = 4;
    *((_QWORD *)HeapHandle + 87) = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)HeapHandle + 30) = 1;
    *((_QWORD *)HeapHandle + 32) = 31LL;
    *((_QWORD *)HeapHandle + 33) = -16LL;
    v43 = HeapHandle;
    if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
    {
      *((_QWORD *)HeapHandle + 32) += 16LL;
      v43 = HeapHandle;
    }
    v43[51] = 0LL;
    *((_WORD *)HeapHandle + 208) = 0;
    *((_BYTE *)HeapHandle + 418) = 0;
    *((_BYTE *)HeapHandle + 419) = 0;
    *((_QWORD *)HeapHandle + 40) = 0LL;
    if ( (v27 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_85:
      RtlpMoveHeapBetweenLists(HeapHandle, 0LL, 1LL);
      if ( *((_WORD *)HeapHandle + 104) )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v45 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v45 = 2147353472LL;
        if ( *(_BYTE *)v45 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v33 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v27, v66, v68, *(unsigned __int8 *)v33);
        }
        v46 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v47 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v47 = 2147353482LL;
        if ( *(_BYTE *)v47 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v46 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v27, v66, v68, *(unsigned __int8 *)v46);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v48 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v48 = 2147353480LL;
        if ( *(_BYTE *)v48 )
          RtlpHeapLogRangeCreate(HeapHandle, v66, v27);
        *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
        *((_QWORD *)HeapHandle + 46) = 0LL;
        v12 = HeapHandle;
        HeapHandle = 0LL;
        goto LABEL_97;
      }
      goto LABEL_186;
    }
    *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
    v44 = *((_QWORD *)HeapHandle + 53);
    if ( v44 )
    {
      *(_BYTE *)(v44 - 1) = 1;
      *((_WORD *)HeapHandle + 216) = 128;
      goto LABEL_85;
    }
  }
LABEL_186:
  v12 = 0LL;
  v49 = (_RTL_CRITICAL_SECTION *)v64;
  v26 = v63;
LABEL_99:
  if ( v49 && v49 != (_RTL_CRITICAL_SECTION *)v26 )
    RtlDeleteCriticalSection(v49);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v66 = 0LL;
      RtlpSecMemFreeVirtualMemory((__int64)v49, &HeapHandle, &v66, 0x8000u);
    }
  }
  return v12;
}

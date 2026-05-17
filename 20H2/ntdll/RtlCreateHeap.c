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

__int64 __fastcall RtlCreateHeap(unsigned int a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  volatile signed __int64 *v12; // rbx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  struct _PEB *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // r8
  unsigned int v27; // edi
  int v28; // r14d
  __int64 v29; // rcx
  char *v30; // rbx
  char *v31; // rdx
  char *v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rcx
  char *v37; // rbx
  unsigned int v38; // eax
  int v39; // r9d
  __int64 v40; // r10
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  volatile signed __int64 *v57; // rax
  unsigned int v58; // eax
  unsigned __int64 v59; // rdi
  __int64 v60; // rbx
  unsigned int v61; // eax
  volatile signed __int64 *v62; // rax
  unsigned __int64 v63; // rcx
  int v64; // eax
  unsigned __int64 v65; // rbx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v67; // r10
  _QWORD *v68; // [rsp+40h] [rbp-228h] BYREF
  __int64 v69; // [rsp+48h] [rbp-220h]
  __int64 v70; // [rsp+50h] [rbp-218h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-210h]
  unsigned __int64 v72; // [rsp+60h] [rbp-208h] BYREF
  int v73; // [rsp+68h] [rbp-200h]
  unsigned __int64 v74; // [rsp+70h] [rbp-1F8h] BYREF
  char *v75; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v76; // [rsp+80h] [rbp-1E8h]
  unsigned __int64 v77; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v78; // [rsp+90h] [rbp-1D8h] BYREF
  unsigned __int64 v79; // [rsp+98h] [rbp-1D0h] BYREF
  __int128 v80; // [rsp+A0h] [rbp-1C8h]
  char *v81; // [rsp+B8h] [rbp-1B0h]
  void *v82; // [rsp+C0h] [rbp-1A8h] BYREF
  unsigned __int64 v83; // [rsp+D8h] [rbp-190h]
  int v84; // [rsp+E0h] [rbp-188h]
  char v85; // [rsp+E4h] [rbp-184h]
  __int128 v86; // [rsp+F0h] [rbp-178h] BYREF
  char v87[16]; // [rsp+100h] [rbp-168h] BYREF
  unsigned __int64 v88; // [rsp+110h] [rbp-158h]
  _OWORD v89[6]; // [rsp+130h] [rbp-138h] BYREF
  _BYTE v90[80]; // [rsp+190h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v92; // [rsp+208h] [rbp-60h]

  v76 = a3;
  v9 = a5;
  v69 = a5;
  v81 = a2;
  *(_QWORD *)&v80 = a5;
  v10 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v73 = 0;
  v68 = 0LL;
  v70 = 0LL;
  if ( !dword_1801663E8 || a2 || a5 )
  {
    if ( dword_1801663F8 && a6 == 1 )
      v10 = (a1 & 0x100) == 0;
  }
  else
  {
    v12 = (volatile signed __int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_180166418)(a1, 0LL);
    if ( v12 )
    {
LABEL_97:
      v26 = v69;
LABEL_98:
      v55 = 0LL;
      goto LABEL_99;
    }
    if ( a6 != -1 )
      goto LABEL_167;
    v10 = 0LL;
    a3 = v76;
    v9 = v69;
  }
  v11 = a1 & 0xF1FFFFFF;
  v12 = 0LL;
  if ( (v11 & 0x100) != 0 )
  {
    if ( (v11 & 2) == 0 || a2 || a3 || a4 || v9 )
      goto LABEL_97;
    if ( v10 == -1 && dword_1801663F8 )
      v10 = 0LL;
    if ( v10 )
    {
      v12 = (volatile signed __int64 *)v10;
      if ( !(unsigned int)RtlpHpParametersVerify(v10) )
        goto LABEL_167;
    }
    else
    {
      v12 = (volatile signed __int64 *)v90;
    }
  }
  else if ( (RtlpHpHeapFeatures & 1) != 0 && (v11 & 2) != 0 && !a2 )
  {
    if ( !v10 )
      goto LABEL_121;
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v64 = 1, *(_QWORD *)(v10 + 72)) )
      v64 = 0;
    if ( v64 )
    {
LABEL_121:
      v57 = (volatile signed __int64 *)v90;
      if ( v9 )
        v57 = 0LL;
      v12 = v57;
    }
  }
  if ( v12 )
  {
    if ( v12 == (volatile signed __int64 *)v90 )
    {
      memset((void *)v12, 0, 0x50uLL);
      *(_DWORD *)v12 = 5242882;
      *((_DWORD *)v12 + 3) = 1;
      *((_DWORD *)v12 + 4) = -1;
    }
    if ( (*((_BYTE *)v12 + 4) & 1) != 0 )
    {
      if ( dword_1801663F8 )
      {
        v12 = (volatile signed __int64 *)((__int64 (__fastcall *)(_QWORD, char *, __int64, unsigned __int64, _QWORD, _QWORD))qword_180166418)(
                                           v11,
                                           a2,
                                           v76,
                                           a4,
                                           0LL,
                                           0LL);
        goto LABEL_97;
      }
    }
    else
    {
      v80 = RtlpHpEnvHandle;
      _BitScanReverse(&v58, *((_DWORD *)v12 + 3));
      BYTE1(v80) = v58;
      if ( *((_DWORD *)v12 + 4) != -1 )
        BYTE2(v80) = *((_BYTE *)v12 + 16) + 1;
      *((_QWORD *)&v80 + 1) = *((_QWORD *)v12 + 3);
      v59 = a4;
      if ( v76 )
        v59 = v76;
      v86 = v80;
      v60 = v59;
      if ( a4 <= v59 )
        v60 = a4;
      v61 = RtlpHpConvertCreationFlags(v11, NtGlobalFlag);
      v62 = RtlpHpHeapCreate(v61, v59, v60, &v86);
      v12 = v62;
      if ( !v62 )
        goto LABEL_97;
      RtlpMoveHeapBetweenLists(v62, 0LL, 1LL);
      if ( *((_WORD *)v12 + 14) )
        goto LABEL_97;
      RtlpHpHeapDestroy((__int128 *)v12);
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
  memset(v89, 0, sizeof(v89));
  if ( v10 && *(_DWORD *)v10 == 96 )
  {
    v89[0] = *(_OWORD *)v10;
    v89[1] = *(_OWORD *)(v10 + 16);
    v89[2] = *(_OWORD *)(v10 + 32);
    v89[3] = *(_OWORD *)(v10 + 48);
    v89[4] = *(_OWORD *)(v10 + 64);
    v89[5] = *(_OWORD *)(v10 + 80);
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
  if ( !*((_QWORD *)&v89[0] + 1) )
    *((_QWORD *)&v89[0] + 1) = v19->HeapSegmentReserve;
  if ( !*(_QWORD *)&v89[1] )
    *(_QWORD *)&v89[1] = v19->HeapSegmentCommit;
  if ( !*((_QWORD *)&v89[1] + 1) )
    *((_QWORD *)&v89[1] + 1) = v19->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v89[2] )
    *(_QWORD *)&v89[2] = v19->HeapDeCommitTotalFreeThreshold;
  v20 = qword_18016D210;
  if ( !qword_18016D210 )
  {
    qword_18016D218 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      v20 = v92;
      qword_18016D210 = v92;
      goto LABEL_32;
    }
LABEL_167:
    v12 = 0LL;
    goto LABEL_97;
  }
LABEL_32:
  if ( !*((_QWORD *)&v89[2] + 1) )
    *((_QWORD *)&v89[2] + 1) = v20 - qword_18016D218 - 4096;
  v21 = *(_QWORD *)&v89[3];
  if ( (unsigned __int64)(*(_QWORD *)&v89[3] - 1LL) > 0xFEFFF )
    v21 = 1044480LL;
  *(_QWORD *)&v89[3] = v21;
  if ( a4 )
    v22 = (a4 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v22 = 0x2000LL;
  v74 = v22;
  if ( v76 )
    v23 = (v76 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v72 = v23;
  v24 = v22;
  if ( v22 > v23 )
  {
    LODWORD(v22) = v23;
    v74 = v23;
    v24 = v23;
  }
  if ( (v18 & 2) == 0 || a2 )
  {
    v76 = 0LL;
    v25 = v73;
  }
  else
  {
    v76 = 4096LL;
    v25 = 2;
    v73 = 2;
    if ( v23 - 4096 < v24 )
    {
      v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v72 = v23;
    }
  }
  if ( !v24 || !v23 )
    goto LABEL_167;
  if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
    return RtlDebugCreateHeap(v18, (_DWORD)a2, v23, v22, v69, (__int64)v89);
  NtGlobalFlag = 704;
  v26 = v69;
  v27 = v18;
  if ( (v18 & 1) != 0 )
  {
    if ( v69 )
    {
      v12 = 0LL;
      goto LABEL_98;
    }
  }
  else
  {
    v70 = v69 & -(__int64)(v69 != 0);
    v27 = v18 | 0x80000000;
    if ( !v69 )
      v27 = v18;
    NtGlobalFlag = v69 != 0 ? 704 : 744;
  }
  if ( a2 )
  {
    if ( *((_QWORD *)&v89[4] + 1) )
    {
      if ( !*((_QWORD *)&v89[3] + 1)
        || !*(_QWORD *)&v89[4]
        || *((_QWORD *)&v89[3] + 1) > *(_QWORD *)&v89[4]
        || (v27 & 2) != 0 )
      {
        goto LABEL_185;
      }
      v75 = a2;
      v32 = &a2[*((_QWORD *)&v89[3] + 1)];
      v72 = *(_QWORD *)&v89[4];
      memset(a2, 0, 0x1000uLL);
      v31 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v82, 48LL, 0LL) < 0 )
        goto LABEL_186;
      v32 = (char *)v82;
      if ( v82 != a2 || v84 == 0x10000 )
        goto LABEL_186;
      v31 = (char *)v82;
      v75 = (char *)v82;
      if ( v84 == 4096 )
      {
        if ( (v27 & 0x40000) != 0 && (v85 & 0x40) == 0 )
          goto LABEL_186;
        memset(v82, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v87, 48LL, 0LL) < 0 )
          goto LABEL_186;
        v72 = v88;
        v74 = v83;
        v31 = v75;
        v32 = &v75[v83];
      }
      else
      {
        v72 = v83;
        v63 = v74;
        if ( v74 > v83 )
          v63 = v83;
        v74 = v63;
        if ( v63 < 0x2000 )
          goto LABEL_186;
      }
    }
    v73 = v25 | 1;
    v30 = a2;
    v68 = a2;
    v28 = v27 & 0x40000;
    goto LABEL_61;
  }
  v78 = 0LL;
  if ( *((_QWORD *)&v89[4] + 1) )
  {
LABEL_185:
    v12 = 0LL;
    v55 = v70;
    goto LABEL_99;
  }
  v77 = (RtlpHeapGenerateRandomValue64(v24, 2LL, v69) & 0x1F) << 16;
  v79 = v72 + v77;
  if ( v72 + v77 < v72 )
  {
    v79 = v72;
    v77 = 0LL;
  }
  v28 = v27 & 0x40000;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v78, 0LL, &v79, 0x2000, (v27 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_186;
  v30 = (char *)v78;
  v68 = (_QWORD *)v78;
  v72 = v79;
  if ( v77 )
  {
    RtlpSecMemFreeVirtualMemory(v29, &v78, &v77, 0x8000LL);
    v30 = (char *)(v77 + v78);
    v68 = (_QWORD *)(v77 + v78);
    v72 = v79 - v77;
  }
  v31 = v30;
  v75 = v30;
  v32 = v30;
LABEL_61:
  if ( v31 == v32 )
  {
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v75, 0LL, &v74, 4096, v28 != 0 ? 64 : 4) < 0 )
      goto LABEL_186;
    v35 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v34, v33) )
      v36 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v36 = 2147353472LL;
    if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v68, v75, v74, 1LL);
    v32 += v74;
    v30 = (char *)v68;
  }
  else
  {
    v35 = 2147353472LL;
  }
  v37 = v30 + 704;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v65 = (unsigned __int64)(v37 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v68[41] = v65;
    v38 = NtGlobalFlag + 2064;
    v37 = (char *)(v65 + 2064);
    v27 |= 0x4000000u;
  }
  else
  {
    v38 = NtGlobalFlag;
  }
  NtGlobalFlag = (v38 + 15) & 0xFFFFFFF0;
  *((_WORD *)v68 + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)v68 + 10) = 1;
  *((_BYTE *)v68 + 15) = 1;
  *((_DWORD *)v68 + 38) = -285217025;
  *((_DWORD *)v68 + 28) = v27 & 0xEFFFFFFF;
  *((_DWORD *)v68 + 36) = 0;
  memset(v68 + 71, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)v68);
  *((_DWORD *)v68 + 162) = 1;
  v40 = (__int64)v68;
  if ( (v68[14] & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v67 + 144) = HeapInterceptorIndex;
    *((_DWORD *)v68 + 28) &= ~0x40u;
    v40 = (__int64)v68;
  }
  *(_DWORD *)(v40 + 116) = v27 & 0x6001007D;
  *((_WORD *)v68 + 105) = (_WORD)v37 - (_WORD)v68;
  v68[27] = 0LL;
  v41 = v68 + 42;
  v68[43] = v68 + 42;
  *v41 = v41;
  v42 = v68 + 34;
  v68[35] = v68 + 34;
  *v42 = v42;
  v43 = v68 + 36;
  v68[37] = v68 + 36;
  *v43 = v43;
  v44 = v68 + 30;
  v68[31] = v68 + 30;
  *v44 = v44;
  if ( !v70 && (v27 & 1) == 0 )
  {
    v70 = (__int64)v37;
    if ( (int)RtlInitializeCriticalSectionEx(v37, 0LL, 0x10000000LL) >= 0 )
    {
      v37 += 40;
      goto LABEL_75;
    }
    goto LABEL_167;
  }
LABEL_75:
  v68[44] = v70;
  *((_DWORD *)v68 + 30) |= 0x80000000;
  if ( (unsigned __int8)RtlpInitializeHeapSegment(
                          (_DWORD)v68,
                          (_DWORD)v68,
                          NtGlobalFlag + 1104,
                          v39,
                          v73,
                          (__int64)v75,
                          (__int64)v32,
                          (__int64)&v75[v72 - v76]) )
  {
    if ( a2 )
      memset(v37, 0, 0x80uLL);
    *((_DWORD *)v37 + 2) = 128;
    *((_QWORD *)v37 + 5) = v37 + 56;
    *((_QWORD *)v37 + 4) = v68 + 42;
    *((_QWORD *)v37 + 6) = v37 + 72;
    RtlpPopulateListIndex((__int64)v68, (__int64 *)v37);
    *((_WORD *)v68 + 104) = 0;
    v68[20] = *((_QWORD *)&v89[0] + 1);
    v68[21] = *(_QWORD *)&v89[1];
    v68[22] = *((_QWORD *)&v89[1] + 1) >> 4;
    v68[23] = *(_QWORD *)&v89[2] >> 4;
    v68[25] = *((_QWORD *)&v89[2] + 1);
    *((_DWORD *)v68 + 37) = (unsigned __int64)(*(_QWORD *)&v89[3] + 15LL) >> 4;
    v68[45] = RtlpHeapKey ^ *((_QWORD *)&v89[4] + 1);
    *((_DWORD *)v68 + 172) = 4;
    v68[87] = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)v68 + 30) = 1;
    v68[32] = 31LL;
    v68[33] = -16LL;
    v45 = (__int64)v68;
    if ( (v68[14] & 0x20) != 0 )
    {
      v68[32] += 16LL;
      v45 = (__int64)v68;
    }
    *(_QWORD *)(v45 + 408) = 0LL;
    *((_WORD *)v68 + 208) = 0;
    *((_BYTE *)v68 + 418) = 0;
    *((_BYTE *)v68 + 419) = 0;
    v68[40] = 0LL;
    if ( (v27 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_85:
      RtlpMoveHeapBetweenLists(v68, 0LL, 1LL);
      if ( *((_WORD *)v68 + 104) )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v48, v47) )
          v50 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v50 = 2147353472LL;
        if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v50, v49) )
            v35 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)v68, v27, v72, v74, *(unsigned __int8 *)v35);
        }
        v52 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v50, v49) )
          v53 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v53 = 2147353482LL;
        if ( *(_BYTE *)v53 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v51) )
            v52 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)v68, v27, v72, v74, *(unsigned __int8 *)v52);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v51) )
          v54 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v54 = 2147353480LL;
        if ( *(_BYTE *)v54 )
          RtlpHeapLogRangeCreate(v68, v72, v27);
        *((_DWORD *)v68 + 30) &= ~0x80000000;
        v68[46] = 0LL;
        v12 = v68;
        v68 = 0LL;
        goto LABEL_97;
      }
      goto LABEL_186;
    }
    v68[53] = RtlAllocateHeap(v68, 8388618LL, 256LL);
    v46 = v68[53];
    if ( v46 )
    {
      *(_BYTE *)(v46 - 1) = 1;
      *((_WORD *)v68 + 216) = 128;
      goto LABEL_85;
    }
  }
LABEL_186:
  v12 = 0LL;
  v55 = v70;
  v26 = v69;
LABEL_99:
  if ( v55 && v55 != v26 )
    RtlDeleteCriticalSection(v55);
  if ( v68 )
  {
    if ( !a2 )
    {
      v72 = 0LL;
      RtlpSecMemFreeVirtualMemory(v55, &v68, &v72, 0x8000LL);
    }
  }
  return (__int64)v12;
}

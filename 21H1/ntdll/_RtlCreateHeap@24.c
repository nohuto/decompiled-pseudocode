/*
 * XREFs of _RtlCreateHeap@24 @ 0x4B2C0F40
 * Callers:
 *     _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0 (_RtlDetectHeapLeaks@0.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _LdrpInitializeProcessHeap@12 @ 0x4B332D8F (_LdrpInitializeProcessHeap@12.c)
 *     _RtlDebugCreateHeap@24 @ 0x4B35F37B (_RtlDebugCreateHeap@24.c)
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 * Callees:
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlpPopulateListIndex@8 @ 0x4B2B19E4 (_RtlpPopulateListIndex@8.c)
 *     _RtlpCreateHeapEncoding@4 @ 0x4B2B22A1 (_RtlpCreateHeapEncoding@4.c)
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpAddHeapToUnprotectedList@4 @ 0x4B2E663D (_RtlpAddHeapToUnprotectedList@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlpHpConvertCreationFlags@8 @ 0x4B35D6BE (_RtlpHpConvertCreationFlags@8.c)
 *     _RtlDebugCreateHeap@24 @ 0x4B35F37B (_RtlDebugCreateHeap@24.c)
 *     _RtlpGetHeapInterceptorIndex@4 @ 0x4B36D74D (_RtlpGetHeapInterceptorIndex@4.c)
 *     _RtlpHeapLogRangeCreate@12 @ 0x4B36D797 (_RtlpHeapLogRangeCreate@12.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapCreateEvent@20 @ 0x4B36EF35 (_RtlpLogHeapCreateEvent@20.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpHpEnvGetEnvHandleFromParams@4 @ 0x4B370871 (_RtlpHpEnvGetEnvHandleFromParams@4.c)
 *     _RtlpHpParametersSupported@4 @ 0x4B37089D (_RtlpHpParametersSupported@4.c)
 *     _RtlpHpParametersVerify@4 @ 0x4B3708B8 (_RtlpHpParametersVerify@4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  ULONG v6; // edx
  char *v7; // ecx
  int v9; // edi
  unsigned int v10; // edx
  _WORD *v11; // esi
  int v12; // eax
  unsigned int v13; // edx
  struct _PEB *v14; // ecx
  int v15; // eax
  unsigned int v16; // esi
  ULONG v17; // eax
  _RTL_CRITICAL_SECTION *v18; // edi
  _RTL_CRITICAL_SECTION *v19; // edx
  ULONG v20; // esi
  int v21; // edi
  _RTL_CRITICAL_SECTION *v22; // edx
  PVOID v23; // eax
  PVOID v24; // ecx
  int v25; // ecx
  _RTL_CRITICAL_SECTION *v26; // edi
  _DWORD *v27; // esi
  char v28; // dl
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  PRTL_CRITICAL_SECTION v33; // ecx
  char v34; // cl
  _DWORD *v35; // eax
  PVOID Heap; // eax
  int v37; // eax
  PVOID v38; // esi
  int v39; // esi
  int v40; // eax
  ULONG v41; // esi
  int v42; // edi
  int v43; // eax
  int v44; // eax
  unsigned int v46; // eax
  int v47; // edx
  int EnvHandleFromParams; // ecx
  PVOID v49; // edi
  PVOID v50; // eax
  int v51; // eax
  ULONG_PTR v52; // [esp-10h] [ebp-14Ch]
  ULONG_PTR v53; // [esp-10h] [ebp-14Ch]
  PVOID v54; // [esp-Ch] [ebp-148h]
  int v55; // [esp-8h] [ebp-144h]
  size_t v56; // [esp-4h] [ebp-140h]
  size_t v57; // [esp-4h] [ebp-140h]
  size_t v58; // [esp-4h] [ebp-140h]
  size_t v59; // [esp-4h] [ebp-140h]
  int v60; // [esp-4h] [ebp-140h]
  void *v61; // [esp-4h] [ebp-140h]
  PSIZE_T v62; // [esp+0h] [ebp-13Ch]
  char v63[12]; // [esp+10h] [ebp-12Ch] BYREF
  int v64; // [esp+1Ch] [ebp-120h]
  _RTL_CRITICAL_SECTION *MemoryInformation; // [esp+2Ch] [ebp-110h] BYREF
  unsigned int v66; // [esp+38h] [ebp-104h]
  int v67; // [esp+3Ch] [ebp-100h]
  char v68; // [esp+40h] [ebp-FCh]
  PVOID v69; // [esp+48h] [ebp-F4h]
  unsigned int RandomValue32; // [esp+54h] [ebp-E8h]
  int v71; // [esp+58h] [ebp-E4h]
  int v72; // [esp+5Ch] [ebp-E0h] BYREF
  PVOID BaseAddress; // [esp+60h] [ebp-DCh] BYREF
  ULONG_PTR v74; // [esp+64h] [ebp-D8h] BYREF
  PRTL_CRITICAL_SECTION CriticalSection; // [esp+6Ch] [ebp-D0h]
  PVOID v76; // [esp+70h] [ebp-CCh] BYREF
  int v77; // [esp+74h] [ebp-C8h]
  int v78; // [esp+78h] [ebp-C4h] BYREF
  PVOID v79; // [esp+7Ch] [ebp-C0h]
  int v80; // [esp+80h] [ebp-BCh] BYREF
  __int64 v81; // [esp+84h] [ebp-B8h]
  ULONG v82; // [esp+8Ch] [ebp-B0h]
  PVOID HeapHandle; // [esp+90h] [ebp-ACh] BYREF
  _DWORD v84[12]; // [esp+94h] [ebp-A8h] BYREF
  char SystemInformation[32]; // [esp+C4h] [ebp-78h] BYREF
  int v86; // [esp+E4h] [ebp-58h]
  _BYTE v87[52]; // [esp+F0h] [ebp-4Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+124h] [ebp-18h]

  HIDWORD(v81) = CommitSize;
  v6 = Flags;
  v82 = Flags;
  LODWORD(v81) = HeapBase;
  v69 = HeapBase;
  v79 = (PVOID)HIDWORD(ReserveSize);
  v7 = (char *)ReserveSize;
  v77 = ReserveSize;
  v9 = HIDWORD(CommitSize);
  RandomValue32 = CommitSize;
  HIDWORD(v74) = NtCurrentPeb()->NtGlobalFlag;
  v71 = 0;
  HeapHandle = 0;
  CriticalSection = 0;
  if ( !dword_4B3A373C || v81 )
  {
    if ( dword_4B3A3744 && HIDWORD(CommitSize) == 1 )
      v9 = (Flags & 0x100) == 0;
  }
  else
  {
    v11 = (_WORD *)dword_4B3A3754(dword_4B3A3754, Flags, 0, ReserveSize, HIDWORD(ReserveSize), 0, HIDWORD(CommitSize));
    if ( v11 )
      goto LABEL_100;
    if ( HIDWORD(CommitSize) != -1 )
      goto LABEL_131;
    v9 = 0;
    v6 = v82;
    v7 = (char *)v77;
  }
  v10 = v6 & 0xF1FFFFFF;
  v82 = v10;
  v11 = 0;
  if ( (v10 & 0x100) == 0 )
  {
    if ( (RtlpHpHeapFeatures & 1) != 0
      && (v10 & 2) != 0
      && !(_DWORD)v81
      && (!v9 || RtlpHpParametersSupported(v9))
      && !HIDWORD(v81) )
    {
      v11 = v87;
    }
    goto LABEL_5;
  }
  if ( (v10 & 2) == 0 || (_DWORD)v81 || v7 || v79 || HIDWORD(v81) )
  {
LABEL_100:
    v18 = (_RTL_CRITICAL_SECTION *)v81;
LABEL_101:
    v19 = (_RTL_CRITICAL_SECTION *)HIDWORD(v81);
    goto LABEL_102;
  }
  if ( v9 == -1 )
    v9 = -(dword_4B3A3744 == 0);
  if ( v9 )
  {
    v11 = (_WORD *)v9;
    if ( !RtlpHpParametersVerify(v9) )
      goto LABEL_131;
    v10 = v82;
  }
  else
  {
    v11 = v87;
  }
LABEL_5:
  if ( v11 )
  {
    if ( v11 == (_WORD *)v87 )
    {
      LODWORD(v56) = 48;
      memset(v11, 0, v56);
      *v11 = 2;
      v11[1] = 48;
      *((_DWORD *)v11 + 3) = 1;
      *((_DWORD *)v11 + 4) = -1;
    }
    if ( (v11[2] & 1) == 0 )
    {
      EnvHandleFromParams = RtlpHpEnvGetEnvHandleFromParams(v11);
      v49 = (PVOID)v77;
      v50 = v79;
      if ( !v77 )
        v49 = v79;
      if ( v79 > v49 )
        v50 = v49;
      v60 = v47;
      v55 = EnvHandleFromParams;
      v54 = v50;
      RtlpHpConvertCreationFlags(v82, HIDWORD(v74));
      v51 = RtlpHpHeapCreate(v54, v55, v60);
      v11 = (_WORD *)v51;
      if ( v51 )
      {
        RtlpMoveHeapBetweenLists(v51, 0, 1, 0);
        if ( !v11[10] )
        {
          RtlpHpHeapDestroy(v11);
          v11 = 0;
        }
      }
      goto LABEL_100;
    }
    if ( dword_4B3A3744 )
    {
      v18 = (_RTL_CRITICAL_SECTION *)v81;
      v11 = (_WORD *)dword_4B3A3754(dword_4B3A3754, v82, v81, v77, v79, 0, 0);
      goto LABEL_101;
    }
    goto LABEL_131;
  }
  if ( (v10 & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (v10 & 0xFFF80C00) == 0 )
        goto LABEL_10;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      if ( !byte_4B3A5DA8 )
        RtlpReportHeapFailure(2);
      v10 = v82;
    }
    if ( (v10 & 0xFFF80C00) != 0 )
      v82 = v10 & 0x7F3FF;
  }
LABEL_10:
  LODWORD(v56) = 48;
  memset(v84, 0, v56);
  if ( v9 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( *(_DWORD *)v9 == 48 )
      qmemcpy(v84, (const void *)v9, sizeof(v84));
    ms_exc.registration.TryLevel = -2;
  }
  v12 = v82;
  if ( (v74 & 0x1000000000LL) != 0 )
  {
    v12 = v82 | 0x20;
    v82 |= 0x20u;
  }
  if ( (v74 & 0x2000000000LL) != 0 )
  {
    v12 |= 0x40u;
    v82 = v12;
  }
  if ( (v74 & 0x20000000000000LL) != 0 )
  {
    v12 |= 0x80u;
    v82 = v12;
  }
  if ( (v74 & 0x4000000000LL) != 0 )
  {
    v12 |= 0x40000000u;
    v82 = v12;
  }
  if ( (v74 & 0x8000000000LL) != 0 )
  {
    v12 |= 0x20000000u;
    v82 = v12;
  }
  v13 = 4096;
  if ( (v74 & 0x100000000000LL) != 0 )
    v82 = v12 | 0x8000000;
  v14 = NtCurrentPeb();
  if ( !v84[1] )
    v84[1] = v14->HeapSegmentReserve;
  if ( !v84[2] )
    v84[2] = v14->HeapSegmentCommit;
  if ( !v84[3] )
    v84[3] = v14->HeapDeCommitFreeBlockThreshold;
  if ( !v84[4] )
    v84[4] = v14->HeapDeCommitTotalFreeThreshold;
  v15 = dword_4B3A693C;
  if ( !dword_4B3A693C )
  {
    dword_4B3A6940 = 0x10000;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0) < 0 )
      goto LABEL_131;
    v15 = v86;
    dword_4B3A693C = v86;
    v13 = 4096;
  }
  if ( !v84[5] )
    v84[5] = v15 - dword_4B3A6940 - 4096;
  if ( !v84[6] || v84[6] > 0x7F000u )
    v84[6] = 520192;
  if ( v79 )
    v13 = ((unsigned int)v79 + 4095) & 0xFFFFF000;
  v78 = v13;
  if ( v77 )
    v7 = (char *)((v77 + 4095) & 0xFFFFF000);
  else
    v7 = (char *)((v13 + 0xFFFF) & 0xFFFF0000);
  v80 = (int)v7;
  v16 = v13;
  if ( v13 > (unsigned int)v7 )
  {
    v13 = (unsigned int)v7;
    v78 = (int)v7;
    v16 = (unsigned int)v7;
  }
  v17 = v82;
  v18 = (_RTL_CRITICAL_SECTION *)v81;
  if ( (v82 & 2) == 0 || (_DWORD)v81 )
  {
    HIDWORD(v74) = 0;
  }
  else
  {
    HIDWORD(v74) = 4096;
    v71 = 2;
    v17 = v82;
    if ( (unsigned int)(v7 - 4096) < v16 )
    {
      v7 = (char *)((unsigned int)(v7 + 69631) & 0xFFFF0000);
      v80 = (int)v7;
    }
  }
  if ( !v16 || !v7 )
    goto LABEL_125;
  if ( (v17 & 0x61000000) != 0 && (v17 & 0x10000000) == 0 )
    return (PVOID)RtlDebugCreateHeap(v17, v81, v7, v13, HIDWORD(v81), v84);
  v77 = 600;
  v19 = (_RTL_CRITICAL_SECTION *)HIDWORD(v81);
  if ( (v17 & 1) != 0 )
  {
    if ( HIDWORD(v81) )
      goto LABEL_176;
  }
  else
  {
    if ( HIDWORD(v81) )
    {
      v17 |= 0x80000000;
      v82 = v17;
    }
    CriticalSection = HIDWORD(v81) != 0 ? (PRTL_CRITICAL_SECTION)HIDWORD(v81) : 0;
    v7 = (char *)(HIDWORD(v81) != 0 ? 600 : 624);
    v77 = (int)v7;
  }
  if ( (_DWORD)v81 )
  {
    if ( v84[9] )
    {
      if ( !v84[7] )
        goto LABEL_125;
      v7 = (char *)v84[8];
      if ( !v84[8] || v84[7] > v84[8] || (v17 & 2) != 0 )
        goto LABEL_125;
      v76 = (PVOID)v81;
      v79 = (PVOID)(v81 + v84[7]);
      v80 = v84[8];
      LODWORD(v57) = 4096;
      memset((void *)v81, 0, v57);
    }
    else
    {
      if ( NtQueryVirtualMemory(
             (HANDLE)0xFFFFFFFF,
             (PVOID)v81,
             MemoryBasicInformation,
             &MemoryInformation,
             0x1CuLL,
             (PSIZE_T)HIDWORD(v57)) < 0 )
        goto LABEL_125;
      v79 = MemoryInformation;
      if ( MemoryInformation != v18 || v67 == 0x10000 )
        goto LABEL_125;
      v7 = (char *)MemoryInformation;
      v76 = MemoryInformation;
      if ( v67 == 4096 )
      {
        v20 = v82;
        if ( (v82 & 0x40000) != 0 && (v68 & 0x40) == 0 )
          goto LABEL_125;
        LODWORD(v58) = 4096;
        memset(MemoryInformation, 0, v58);
        if ( NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v18, MemoryRegionInformation, v63, 0x1CuLL, v62) < 0 )
          goto LABEL_125;
        v80 = v64;
        v78 = v66;
        v79 = (char *)v76 + v66;
        goto LABEL_116;
      }
      v7 = (char *)v66;
      v80 = v66;
      v46 = v78;
      if ( v78 > v66 )
      {
        v46 = v66;
        v78 = v66;
      }
      if ( v46 < 0x1000 )
        goto LABEL_125;
    }
    v20 = v82;
LABEL_116:
    v71 |= 1u;
    v22 = v18;
    HeapHandle = v18;
    v21 = v20 & 0x40000;
    v24 = v79;
    v23 = v76;
    goto LABEL_61;
  }
  BaseAddress = 0;
  if ( !v84[9] )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    LODWORD(v74) = (RtlpHeapGenerateRandomValue32() & 0x1F) << 16;
    v72 = v80 + v74;
    if ( v80 + (int)v74 < (unsigned int)v80 )
    {
      v72 = v80;
      LODWORD(v74) = 0;
    }
    v20 = v82;
    v21 = v82 & 0x40000;
    HIDWORD(v52) = &v72;
    LODWORD(v52) = 0;
    if ( NtAllocateVirtualMemory(
           (HANDLE)0xFFFFFFFF,
           &BaseAddress,
           v52,
           (PSIZE_T)0x2000,
           (v82 & 0x40000) != 0 ? 64 : 4,
           HIDWORD(v57)) < 0 )
      goto LABEL_131;
    v22 = (_RTL_CRITICAL_SECTION *)BaseAddress;
    HeapHandle = BaseAddress;
    v80 = v72;
    if ( (_DWORD)v74 )
    {
      RtlpSecMemFreeVirtualMemory((int)v7, &BaseAddress, &v74, 0x8000u);
      v22 = (_RTL_CRITICAL_SECTION *)((char *)BaseAddress + v74);
      HeapHandle = (char *)BaseAddress + v74;
      v80 = v72 - v74;
    }
    v23 = v22;
    v76 = v22;
    v24 = v22;
    v79 = v22;
LABEL_61:
    if ( v23 == v24 )
    {
      HIDWORD(v53) = &v78;
      LODWORD(v53) = 0;
      if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &v76, v53, (PSIZE_T)0x1000, v21 != 0 ? 64 : 4, HIDWORD(v58)) < 0 )
        goto LABEL_131;
      if ( RtlGetCurrentServiceSessionId() )
        v25 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v25 = 2147353472;
      if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(v78, 1);
      v79 = (char *)v79 + v78;
      v22 = (_RTL_CRITICAL_SECTION *)HeapHandle;
    }
    v26 = v22 + 25;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      *((_DWORD *)HeapHandle + 47) = ((unsigned int)&v22[25].LockCount + 3) & 0xFFFFFFF8;
      v77 += 1548;
      v26 = (_RTL_CRITICAL_SECTION *)(*((_DWORD *)HeapHandle + 47) + 1548);
      v82 |= 0x4000000u;
      v20 = v82;
    }
    RandomValue32 = (v77 + 7) & 0xFFFFFFF8;
    *(_WORD *)HeapHandle = RandomValue32 >> 3;
    *((_BYTE *)HeapHandle + 2) = 1;
    *((_BYTE *)HeapHandle + 7) = 1;
    *((_DWORD *)HeapHandle + 24) = -285217025;
    *((_DWORD *)HeapHandle + 16) = v20 & 0xEFFFFFFF;
    *((_DWORD *)HeapHandle + 22) = 0;
    LODWORD(v58) = 92;
    memset((char *)HeapHandle + 500, 0, v58);
    RtlpCreateHeapEncoding((int)HeapHandle);
    *((_DWORD *)HeapHandle + 141) = 1;
    v27 = HeapHandle;
    if ( (*((_DWORD *)HeapHandle + 16) & 0x8000000) != 0 )
    {
      v27[22] = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      *((_DWORD *)HeapHandle + 16) &= ~0x40u;
      v27 = HeapHandle;
    }
    v28 = v82;
    v27[17] = v82 & 0x6001007D;
    *((_WORD *)HeapHandle + 63) = (_WORD)v26 - (_WORD)HeapHandle;
    *((_DWORD *)HeapHandle + 32) = 0;
    v29 = (char *)HeapHandle + 192;
    *((_DWORD *)HeapHandle + 49) = (char *)HeapHandle + 192;
    *v29 = v29;
    v30 = (char *)HeapHandle + 156;
    *((_DWORD *)HeapHandle + 40) = (char *)HeapHandle + 156;
    *v30 = v30;
    v31 = (char *)HeapHandle + 164;
    *((_DWORD *)HeapHandle + 42) = (char *)HeapHandle + 164;
    *v31 = v31;
    v32 = (char *)HeapHandle + 140;
    *((_DWORD *)HeapHandle + 36) = (char *)HeapHandle + 140;
    *v32 = v32;
    v33 = CriticalSection;
    if ( !CriticalSection && (v28 & 1) == 0 )
    {
      CriticalSection = v26;
      if ( RtlInitializeCriticalSectionEx(v26, 0, 0x10000000u) < 0 )
      {
        CriticalSection = 0;
        goto LABEL_131;
      }
      ++v26;
      v33 = CriticalSection;
    }
    *((_DWORD *)HeapHandle + 50) = v33;
    *((_DWORD *)HeapHandle + 18) |= 0x80000000;
    if ( (unsigned __int8)RtlpInitializeHeapSegment(
                            HeapHandle,
                            RandomValue32 + 568,
                            (int)v33,
                            v71,
                            (int)v76,
                            v79,
                            (int)v76 + v80 - HIDWORD(v74)) )
    {
      if ( (_DWORD)v81 )
      {
        LODWORD(v59) = 128;
        memset(v26, 0, v59);
      }
      v26->LockCount = 128;
      v26[1].LockCount = (int)&v26[1].OwningThread;
      v26[1].DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)((char *)HeapHandle + 192);
      v26[1].RecursionCount = (int)&v26[2].LockCount;
      RtlpPopulateListIndex(HeapHandle, v26);
      *((_WORD *)HeapHandle + 62) = 0;
      *((_DWORD *)HeapHandle + 25) = v84[1];
      *((_DWORD *)HeapHandle + 26) = v84[2];
      *((_DWORD *)HeapHandle + 27) = v84[3] >> 3;
      *((_DWORD *)HeapHandle + 28) = v84[4] >> 3;
      *((_DWORD *)HeapHandle + 30) = v84[5];
      *((_DWORD *)HeapHandle + 23) = (unsigned int)(v84[6] + 7) >> 3;
      *((_DWORD *)HeapHandle + 51) = RtlpHeapKey ^ v84[9];
      *((_DWORD *)HeapHandle + 148) = 4;
      *((_DWORD *)HeapHandle + 149) = 1040384;
      if ( (RtlpDisableHeapLookaside & 1) != 0 )
        *((_DWORD *)HeapHandle + 18) = 1;
      v34 = v82;
      if ( (v82 & 0x10000) != 0 )
      {
        *((_DWORD *)HeapHandle + 37) = 23;
        *((_DWORD *)HeapHandle + 38) = -16;
      }
      else
      {
        *((_DWORD *)HeapHandle + 37) = 15;
        *((_DWORD *)HeapHandle + 38) = -8;
      }
      v35 = HeapHandle;
      if ( (*((_BYTE *)HeapHandle + 64) & 0x20) != 0 )
      {
        *((_DWORD *)HeapHandle + 37) += 8;
        v35 = HeapHandle;
      }
      v35[57] = 0;
      *((_WORD *)HeapHandle + 116) = 0;
      *((_BYTE *)HeapHandle + 234) = 0;
      *((_BYTE *)HeapHandle + 235) = 0;
      *((_DWORD *)HeapHandle + 46) = 0;
      if ( (v34 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
      {
LABEL_87:
        v38 = HeapHandle;
        RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
        RtlpAddHeapToUnprotectedList(v38);
        RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
        if ( *((_WORD *)HeapHandle + 62) )
        {
          v39 = 2147353472;
          if ( RtlGetCurrentServiceSessionId() )
            v40 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v40 = 2147353472;
          if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v39 = (int)NtCurrentPeb()->SharedData + 550;
            v61 = (void *)*(unsigned __int8 *)v39;
            v41 = v82;
            RtlpLogHeapCreateEvent(v80, v78, v61);
          }
          else
          {
            v41 = v82;
          }
          v42 = 2147353482;
          if ( RtlGetCurrentServiceSessionId() )
            v43 = (int)NtCurrentPeb()->SharedData + 560;
          else
            v43 = 2147353482;
          if ( *(_BYTE *)v43 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v42 = (int)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapCreateEvent(v80, v78, (HANDLE)*(unsigned __int8 *)v42);
          }
          if ( RtlGetCurrentServiceSessionId() )
            v44 = (int)NtCurrentPeb()->SharedData + 558;
          else
            v44 = 2147353480;
          if ( *(_BYTE *)v44 )
            RtlpHeapLogRangeCreate(v41);
          *((_DWORD *)HeapHandle + 18) &= ~0x80000000;
          *((_DWORD *)HeapHandle + 52) = 0;
          v11 = HeapHandle;
          HeapHandle = 0;
          CriticalSection = 0;
          goto LABEL_100;
        }
        goto LABEL_131;
      }
      LODWORD(v59) = 256;
      Heap = RtlAllocateHeap(HeapHandle, 0x80000Au, v59);
      v7 = (char *)HeapHandle;
      *((_DWORD *)HeapHandle + 59) = Heap;
      v37 = *((_DWORD *)HeapHandle + 59);
      if ( v37 )
      {
        *(_BYTE *)(v37 - 1) = 1;
        *((_WORD *)HeapHandle + 120) = 128;
        goto LABEL_87;
      }
    }
LABEL_131:
    v18 = (_RTL_CRITICAL_SECTION *)v81;
LABEL_125:
    v11 = 0;
    goto LABEL_101;
  }
LABEL_176:
  v11 = 0;
LABEL_102:
  if ( CriticalSection && CriticalSection != v19 )
    RtlDeleteCriticalSection(CriticalSection);
  if ( HeapHandle )
  {
    if ( !v18 )
    {
      v80 = 0;
      RtlpSecMemFreeVirtualMemory((int)v7, &HeapHandle, (ULONG_PTR *)&v80, 0x8000u);
    }
  }
  return v11;
}

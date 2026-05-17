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

int *__stdcall RtlCreateHeap(int a1, void *a2, _DWORD *a3, char *a4, unsigned int a5, int a6)
{
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // edi
  unsigned int v9; // edx
  int *v10; // esi
  int v11; // eax
  unsigned int v12; // edx
  struct _PEB *v13; // ecx
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  int *v17; // edi
  int *v18; // edx
  int v19; // esi
  int v20; // edi
  int *v21; // edx
  int *v22; // eax
  int *v23; // ecx
  int v24; // ecx
  int *v25; // edi
  int *v26; // esi
  char v27; // dl
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int *v32; // ecx
  char v33; // cl
  int *v34; // eax
  int Heap; // eax
  int v36; // eax
  int *v37; // esi
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // edi
  int v42; // eax
  int v43; // eax
  unsigned int v45; // eax
  int v46; // edx
  int EnvHandleFromParams; // ecx
  char *v48; // edi
  char *v49; // eax
  int v50; // eax
  char *v51; // [esp-Ch] [ebp-148h]
  int v52; // [esp-8h] [ebp-144h]
  int v53; // [esp-4h] [ebp-140h]
  int v54; // [esp-4h] [ebp-140h]
  char v55[12]; // [esp+10h] [ebp-12Ch] BYREF
  unsigned int v56; // [esp+1Ch] [ebp-120h]
  void *v57; // [esp+2Ch] [ebp-110h] BYREF
  _DWORD *v58; // [esp+38h] [ebp-104h]
  int v59; // [esp+3Ch] [ebp-100h]
  char v60; // [esp+40h] [ebp-FCh]
  void *v61; // [esp+48h] [ebp-F4h]
  unsigned int RandomValue32; // [esp+54h] [ebp-E8h]
  int v63; // [esp+58h] [ebp-E4h]
  unsigned int v64; // [esp+5Ch] [ebp-E0h] BYREF
  int *v65; // [esp+60h] [ebp-DCh] BYREF
  unsigned int v66; // [esp+64h] [ebp-D8h] BYREF
  unsigned int NtGlobalFlag; // [esp+68h] [ebp-D4h]
  int *v68; // [esp+6Ch] [ebp-D0h]
  int *v69; // [esp+70h] [ebp-CCh] BYREF
  int v70; // [esp+74h] [ebp-C8h]
  unsigned int v71; // [esp+78h] [ebp-C4h] BYREF
  int *v72; // [esp+7Ch] [ebp-C0h]
  unsigned int v73; // [esp+80h] [ebp-BCh] BYREF
  void *v74; // [esp+84h] [ebp-B8h]
  int *v75; // [esp+88h] [ebp-B4h]
  int v76; // [esp+8Ch] [ebp-B0h]
  int *v77; // [esp+90h] [ebp-ACh] BYREF
  _DWORD v78[12]; // [esp+94h] [ebp-A8h] BYREF
  char SystemInformation[32]; // [esp+C4h] [ebp-78h] BYREF
  int v80; // [esp+E4h] [ebp-58h]
  _BYTE v81[52]; // [esp+F0h] [ebp-4Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+124h] [ebp-18h]

  v75 = (int *)a5;
  v6 = a1;
  v76 = a1;
  v74 = a2;
  v61 = a2;
  v7 = a3;
  v70 = (int)a3;
  v72 = (int *)a4;
  RandomValue32 = a5;
  v8 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v63 = 0;
  v77 = 0;
  v68 = 0;
  if ( !dword_4B3A373C || v74 || v75 )
  {
    if ( dword_4B3A3744 && a6 == 1 )
      v8 = (a1 & 0x100) == 0;
  }
  else
  {
    v10 = (int *)dword_4B3A3754(dword_4B3A3754, a1, 0, a3, a4, 0, a6);
    if ( v10 )
      goto LABEL_100;
    if ( a6 != -1 )
      goto LABEL_132;
    v8 = 0;
    v6 = v76;
    v7 = (_DWORD *)v70;
  }
  v9 = v6 & 0xF1FFFFFF;
  v76 = v9;
  v10 = 0;
  if ( (v9 & 0x100) == 0 )
  {
    if ( (RtlpHpHeapFeatures & 1) != 0 && (v9 & 2) != 0 && !v74 && (!v8 || RtlpHpParametersSupported(v8)) && !v75 )
      v10 = (int *)v81;
    goto LABEL_5;
  }
  if ( (v9 & 2) == 0 || v74 || v7 || v72 || v75 )
  {
LABEL_100:
    v17 = (int *)v74;
LABEL_101:
    v18 = v75;
    goto LABEL_102;
  }
  if ( v8 == -1 )
    v8 = -(dword_4B3A3744 == 0);
  if ( v8 )
  {
    v10 = (int *)v8;
    if ( !RtlpHpParametersVerify(v8) )
      goto LABEL_132;
    v9 = v76;
  }
  else
  {
    v10 = (int *)v81;
  }
LABEL_5:
  if ( v10 )
  {
    if ( v10 == (int *)v81 )
    {
      memset(v10, 0, 0x30u);
      *(_WORD *)v10 = 2;
      *((_WORD *)v10 + 1) = 48;
      v10[3] = 1;
      v10[4] = -1;
    }
    if ( (v10[1] & 1) == 0 )
    {
      EnvHandleFromParams = RtlpHpEnvGetEnvHandleFromParams(v10);
      v48 = (char *)v70;
      v49 = (char *)v72;
      if ( !v70 )
        v48 = (char *)v72;
      if ( v72 > (int *)v48 )
        v49 = v48;
      v53 = v46;
      v52 = EnvHandleFromParams;
      v51 = v49;
      RtlpHpConvertCreationFlags(v76, NtGlobalFlag);
      v50 = RtlpHpHeapCreate(v51, v52, v53);
      v10 = (int *)v50;
      if ( v50 )
      {
        RtlpMoveHeapBetweenLists(v50, 0, 1, 0);
        if ( !*((_WORD *)v10 + 10) )
        {
          RtlpHpHeapDestroy(v10);
          v10 = 0;
        }
      }
      goto LABEL_100;
    }
    if ( dword_4B3A3744 )
    {
      v17 = (int *)v74;
      v10 = (int *)dword_4B3A3754(dword_4B3A3754, v76, v74, v70, v72, 0, 0);
      goto LABEL_101;
    }
    goto LABEL_132;
  }
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (v9 & 0xFFF80C00) == 0 )
        goto LABEL_10;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      if ( !byte_4B3A5DA8 )
        RtlpReportHeapFailure(2);
      v9 = v76;
    }
    if ( (v9 & 0xFFF80C00) != 0 )
      v76 = v9 & 0x7F3FF;
  }
LABEL_10:
  memset(v78, 0, sizeof(v78));
  if ( v8 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( *(_DWORD *)v8 == 48 )
      qmemcpy(v78, (const void *)v8, sizeof(v78));
    ms_exc.registration.TryLevel = -2;
  }
  v11 = v76;
  if ( (NtGlobalFlag & 0x10) != 0 )
  {
    v11 = v76 | 0x20;
    v76 |= 0x20u;
  }
  if ( (NtGlobalFlag & 0x20) != 0 )
  {
    v11 |= 0x40u;
    v76 = v11;
  }
  if ( (NtGlobalFlag & 0x200000) != 0 )
  {
    v11 |= 0x80u;
    v76 = v11;
  }
  if ( (NtGlobalFlag & 0x40) != 0 )
  {
    v11 |= 0x40000000u;
    v76 = v11;
  }
  if ( (NtGlobalFlag & 0x80) != 0 )
  {
    v11 |= 0x20000000u;
    v76 = v11;
  }
  v12 = 4096;
  if ( (NtGlobalFlag & 0x1000) != 0 )
    v76 = v11 | 0x8000000;
  v13 = NtCurrentPeb();
  if ( !v78[1] )
    v78[1] = v13->HeapSegmentReserve;
  if ( !v78[2] )
    v78[2] = v13->HeapSegmentCommit;
  if ( !v78[3] )
    v78[3] = v13->HeapDeCommitFreeBlockThreshold;
  if ( !v78[4] )
    v78[4] = v13->HeapDeCommitTotalFreeThreshold;
  v14 = dword_4B3A693C;
  if ( !dword_4B3A693C )
  {
    dword_4B3A6940 = 0x10000;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0) < 0 )
      goto LABEL_132;
    v14 = v80;
    dword_4B3A693C = v80;
    v12 = 4096;
  }
  if ( !v78[5] )
    v78[5] = v14 - dword_4B3A6940 - 4096;
  if ( !v78[6] || v78[6] > 0x7F000u )
    v78[6] = 520192;
  if ( v72 )
    v12 = ((unsigned int)v72 + 4095) & 0xFFFFF000;
  v71 = v12;
  if ( v70 )
    v7 = (_DWORD *)((v70 + 4095) & 0xFFFFF000);
  else
    v7 = (_DWORD *)((v12 + 0xFFFF) & 0xFFFF0000);
  v73 = (unsigned int)v7;
  v15 = v12;
  if ( v12 > (unsigned int)v7 )
  {
    v12 = (unsigned int)v7;
    v71 = (unsigned int)v7;
    v15 = (unsigned int)v7;
  }
  v16 = v76;
  v17 = (int *)v74;
  if ( (v76 & 2) == 0 || v74 )
  {
    NtGlobalFlag = 0;
  }
  else
  {
    NtGlobalFlag = 4096;
    v63 = 2;
    v16 = v76;
    if ( (unsigned int)(v7 - 1024) < v15 )
    {
      v7 = (_DWORD *)(((unsigned int)v7 + 69631) & 0xFFFF0000);
      v73 = (unsigned int)v7;
    }
  }
  if ( !v15 || !v7 )
    goto LABEL_125;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return (int *)RtlDebugCreateHeap(v7, v12, v75, v78);
  v70 = 600;
  v18 = v75;
  if ( (v16 & 1) != 0 )
  {
    if ( v75 )
      goto LABEL_177;
  }
  else
  {
    if ( v75 )
    {
      v16 |= 0x80000000;
      v76 = v16;
    }
    v68 = v75 != 0 ? v75 : 0;
    v7 = (_DWORD *)(v75 != 0 ? 600 : 624);
    v70 = (int)v7;
  }
  if ( v74 )
  {
    if ( v78[9] )
    {
      if ( !v78[7] )
        goto LABEL_125;
      v7 = (_DWORD *)v78[8];
      if ( !v78[8] || v78[7] > v78[8] || (v16 & 2) != 0 )
        goto LABEL_125;
      v69 = (int *)v74;
      v72 = (int *)((char *)v74 + v78[7]);
      v73 = v78[8];
      memset(v74, 0, 0x1000u);
    }
    else
    {
      if ( (int)NtQueryVirtualMemory(-1, v74, 0, &v57, 28, 0) < 0 )
        goto LABEL_125;
      v72 = (int *)v57;
      if ( v57 != v17 || v59 == 0x10000 )
        goto LABEL_125;
      v7 = v57;
      v69 = (int *)v57;
      if ( v59 == 4096 )
      {
        v19 = v76;
        if ( (v76 & 0x40000) != 0 && (v60 & 0x40) == 0 )
          goto LABEL_125;
        memset(v57, 0, 0x1000u);
        if ( (int)NtQueryVirtualMemory(-1, v17, 3, v55, 28, 0) < 0 )
          goto LABEL_125;
        v73 = v56;
        v71 = (unsigned int)v58;
        v72 = (_DWORD *)((char *)v58 + (_DWORD)v69);
        goto LABEL_116;
      }
      v7 = v58;
      v73 = (unsigned int)v58;
      v45 = v71;
      if ( v71 > (unsigned int)v58 )
      {
        v45 = (unsigned int)v58;
        v71 = (unsigned int)v58;
      }
      if ( v45 < 0x1000 )
        goto LABEL_125;
    }
    v19 = v76;
LABEL_116:
    v63 |= 1u;
    v21 = v17;
    v77 = v17;
    v20 = v19 & 0x40000;
    v23 = v72;
    v22 = v69;
    goto LABEL_61;
  }
  v65 = 0;
  if ( !v78[9] )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    v66 = (RtlpHeapGenerateRandomValue32() & 0x1F) << 16;
    v64 = v73 + v66;
    if ( v73 + v66 < v73 )
    {
      v64 = v73;
      v66 = 0;
    }
    v19 = v76;
    v20 = v76 & 0x40000;
    if ( (int)NtAllocateVirtualMemory(-1, &v65, 0, &v64, 0x2000, (v76 & 0x40000) != 0 ? 64 : 4) < 0 )
      goto LABEL_132;
    v21 = v65;
    v77 = v65;
    v73 = v64;
    if ( v66 )
    {
      RtlpSecMemFreeVirtualMemory((int)v7, &v65, &v66, 0x8000);
      v21 = (int *)((char *)v65 + v66);
      v77 = (int *)((char *)v65 + v66);
      v73 = v64 - v66;
    }
    v22 = v21;
    v69 = v21;
    v23 = v21;
    v72 = v21;
LABEL_61:
    if ( v22 == v23 )
    {
      if ( (int)NtAllocateVirtualMemory(-1, &v69, 0, &v71, 4096, v20 != 0 ? 64 : 4) < 0 )
        goto LABEL_132;
      if ( RtlGetCurrentServiceSessionId() )
        v24 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v24 = 2147353472;
      if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(v71, 1);
      v72 = (int *)((char *)v72 + v71);
      v21 = v77;
    }
    v25 = v21 + 150;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v77[47] = ((unsigned int)v21 + 607) & 0xFFFFFFF8;
      v70 += 1548;
      v25 = (int *)(v77[47] + 1548);
      v76 |= 0x4000000u;
      v19 = v76;
    }
    RandomValue32 = (v70 + 7) & 0xFFFFFFF8;
    *(_WORD *)v77 = RandomValue32 >> 3;
    *((_BYTE *)v77 + 2) = 1;
    *((_BYTE *)v77 + 7) = 1;
    v77[24] = -285217025;
    v77[16] = v19 & 0xEFFFFFFF;
    v77[22] = 0;
    memset(v77 + 125, 0, 0x5Cu);
    RtlpCreateHeapEncoding((int)v77);
    v77[141] = 1;
    v26 = v77;
    if ( (v77[16] & 0x8000000) != 0 )
    {
      v26[22] = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      v77[16] &= ~0x40u;
      v26 = v77;
    }
    v27 = v76;
    v26[17] = v76 & 0x6001007D;
    *((_WORD *)v77 + 63) = (_WORD)v25 - (_WORD)v77;
    v77[32] = 0;
    v28 = v77 + 48;
    v77[49] = (int)(v77 + 48);
    *v28 = v28;
    v29 = v77 + 39;
    v77[40] = (int)(v77 + 39);
    *v29 = v29;
    v30 = v77 + 41;
    v77[42] = (int)(v77 + 41);
    *v30 = v30;
    v31 = v77 + 35;
    v77[36] = (int)(v77 + 35);
    *v31 = v31;
    v32 = v68;
    if ( !v68 && (v27 & 1) == 0 )
    {
      v68 = v25;
      if ( (int)RtlInitializeCriticalSectionEx(v25, 0, 0x10000000) < 0 )
      {
        v68 = 0;
        goto LABEL_132;
      }
      v25 += 6;
      v32 = v68;
    }
    v77[50] = (int)v32;
    v77[18] |= 0x80000000;
    if ( (unsigned __int8)RtlpInitializeHeapSegment(
                            RandomValue32 + 568,
                            v32,
                            v63,
                            v69,
                            v72,
                            (char *)v69 + v73 - NtGlobalFlag) )
    {
      if ( v74 )
        memset(v25, 0, 0x80u);
      v25[1] = 128;
      v25[7] = (int)(v25 + 9);
      v25[6] = (int)(v77 + 48);
      v25[8] = (int)(v25 + 13);
      RtlpPopulateListIndex(v77, v25);
      *((_WORD *)v77 + 62) = 0;
      v77[25] = v78[1];
      v77[26] = v78[2];
      v77[27] = v78[3] >> 3;
      v77[28] = v78[4] >> 3;
      v77[30] = v78[5];
      v77[23] = (unsigned int)(v78[6] + 7) >> 3;
      v77[51] = RtlpHeapKey ^ v78[9];
      v77[148] = 4;
      v77[149] = 1040384;
      if ( (RtlpDisableHeapLookaside & 1) != 0 )
        v77[18] = 1;
      v33 = v76;
      if ( (v76 & 0x10000) != 0 )
      {
        v77[37] = 23;
        v77[38] = -16;
      }
      else
      {
        v77[37] = 15;
        v77[38] = -8;
      }
      v34 = v77;
      if ( (v77[16] & 0x20) != 0 )
      {
        v77[37] += 8;
        v34 = v77;
      }
      v34[57] = 0;
      *((_WORD *)v77 + 116) = 0;
      *((_BYTE *)v77 + 234) = 0;
      *((_BYTE *)v77 + 235) = 0;
      v77[46] = 0;
      if ( (v33 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
      {
LABEL_87:
        v37 = v77;
        RtlEnterCriticalSection((int)&RtlpProcessHeapsListLock);
        RtlpAddHeapToUnprotectedList(v37);
        RtlLeaveCriticalSection((int)&RtlpProcessHeapsListLock);
        if ( *((_WORD *)v77 + 62) )
        {
          v38 = 2147353472;
          if ( RtlGetCurrentServiceSessionId() )
            v39 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v39 = 2147353472;
          if ( *(_BYTE *)v39 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v38 = (int)NtCurrentPeb()->SharedData + 550;
            v54 = *(unsigned __int8 *)v38;
            v40 = v76;
            RtlpLogHeapCreateEvent(v73, v71, v54);
          }
          else
          {
            v40 = v76;
          }
          v41 = 2147353482;
          if ( RtlGetCurrentServiceSessionId() )
            v42 = (int)NtCurrentPeb()->SharedData + 560;
          else
            v42 = 2147353482;
          if ( *(_BYTE *)v42 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v41 = (int)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapCreateEvent(v73, v71, *(unsigned __int8 *)v41);
          }
          if ( RtlGetCurrentServiceSessionId() )
            v43 = (int)NtCurrentPeb()->SharedData + 558;
          else
            v43 = 2147353480;
          if ( *(_BYTE *)v43 )
            RtlpHeapLogRangeCreate(v40);
          v77[18] &= ~0x80000000;
          v77[52] = 0;
          v10 = v77;
          v77 = 0;
          v68 = 0;
          goto LABEL_100;
        }
        goto LABEL_132;
      }
      Heap = RtlAllocateHeap(v77, 8388618, 256);
      v7 = v77;
      v77[59] = Heap;
      v36 = v77[59];
      if ( v36 )
      {
        *(_BYTE *)(v36 - 1) = 1;
        *((_WORD *)v77 + 120) = 128;
        goto LABEL_87;
      }
    }
LABEL_132:
    v17 = (int *)v74;
LABEL_125:
    v10 = 0;
    goto LABEL_101;
  }
LABEL_177:
  v10 = 0;
LABEL_102:
  if ( v68 && v68 != v18 )
    RtlDeleteCriticalSection(v68);
  if ( v77 )
  {
    if ( !v17 )
    {
      v73 = 0;
      RtlpSecMemFreeVirtualMemory((int)v7, &v77, &v73, 0x8000);
    }
  }
  return v10;
}

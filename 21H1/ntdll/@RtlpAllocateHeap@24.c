/*
 * XREFs of @RtlpAllocateHeap@24 @ 0x4B2C6F90
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     @RtlpGetLFHContext@8 @ 0x4B2AE26A (@RtlpGetLFHContext@8.c)
 *     _RtlpPerformHeapMaintenance@4 @ 0x4B2AED81 (_RtlpPerformHeapMaintenance@4.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0 (_RtlpUnWaitCriticalSectionEx@8.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlpCreateDeferredCriticalSectionEvent@4 @ 0x4B2DFE90 (_RtlpCreateDeferredCriticalSectionEvent@4.c)
 *     _RtlTryEnterCriticalSection@4 @ 0x4B2E0960 (_RtlTryEnterCriticalSection@4.c)
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     @RtlpUpdateHeapRates@8 @ 0x4B2E9CBB (@RtlpUpdateHeapRates@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpAllocVirtBlockCommitFirst@16 @ 0x4B307828 (_RtlpHpAllocVirtBlockCommitFirst@16.c)
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpNotOwnerCriticalSection@4 @ 0x4B34A880 (_RtlpNotOwnerCriticalSection@4.c)
 *     _RtlpUpdateTagEntry@20 @ 0x4B35995E (_RtlpUpdateTagEntry@20.c)
 *     _RtlpUpdateHeapWatermarks@4 @ 0x4B35D7E4 (_RtlpUpdateHeapWatermarks@4.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapLogRangeReserve@12 @ 0x4B36D8FF (_RtlpHeapLogRangeReserve@12.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

PVOID __fastcall RtlpAllocateHeap(
        unsigned int BaseAddress,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int ***a5,
        _DWORD *a6)
{
  _DWORD *v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v12; // edx
  int v13; // ebx
  char v14; // bl
  __int16 *v15; // esi
  unsigned int v16; // edx
  int v17; // ecx
  __int16 LFHContext; // ax
  unsigned int **v19; // esi
  int v20; // ebx
  unsigned int **v21; // eax
  unsigned int v22; // ecx
  _DWORD *v23; // edx
  unsigned int v24; // esi
  unsigned int v25; // ecx
  _DWORD *v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int *v29; // eax
  unsigned int *v30; // esi
  int v31; // ebx
  unsigned int *v32; // eax
  unsigned int v33; // ecx
  _DWORD *v34; // esi
  int v35; // ecx
  int j; // eax
  _DWORD *v37; // eax
  char *v38; // edx
  char *v39; // eax
  char *v40; // eax
  int v41; // ebx
  unsigned int **v42; // ebx
  char *v43; // esi
  int v44; // ebx
  unsigned int v45; // edx
  _DWORD *v46; // eax
  unsigned int v47; // ebx
  int v48; // eax
  int v49; // edx
  unsigned int v50; // esi
  char *v51; // ecx
  int v52; // edx
  _DWORD *v53; // ecx
  unsigned int v54; // esi
  unsigned int v55; // edx
  _DWORD *v56; // eax
  unsigned int v57; // edx
  int v58; // eax
  unsigned int *v59; // eax
  int v60; // esi
  int v61; // ebx
  unsigned int v62; // eax
  unsigned int *v63; // ecx
  unsigned __int16 *v64; // eax
  unsigned __int16 *v65; // esi
  unsigned __int16 *v66; // eax
  int v67; // ecx
  _DWORD *v68; // edx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  unsigned int *v71; // ecx
  char v72; // cl
  int v73; // esi
  int v74; // eax
  unsigned int v75; // esi
  unsigned int v76; // ecx
  unsigned int v77; // edx
  unsigned int v78; // eax
  unsigned int v79; // eax
  _BYTE *v80; // esi
  int v81; // edx
  _DWORD *v82; // ecx
  unsigned int v83; // edx
  unsigned int v84; // ecx
  unsigned int v85; // eax
  int v86; // esi
  signed __int32 v88; // ebx
  signed __int32 v89; // eax
  unsigned __int8 v90; // al
  unsigned int v91; // ecx
  char *v92; // esi
  unsigned __int16 *v93; // ebx
  unsigned int v94; // eax
  unsigned __int16 *v95; // esi
  _DWORD *v96; // eax
  _DWORD *v97; // esi
  unsigned int v98; // ecx
  int k; // eax
  _DWORD *v100; // eax
  _DWORD *v101; // eax
  _DWORD *v102; // ecx
  _DWORD *v103; // ecx
  unsigned int v104; // edx
  unsigned int v105; // edx
  int v106; // ecx
  _DWORD *m; // esi
  unsigned int v108; // edx
  unsigned int v109; // edx
  _DWORD *v110; // esi
  unsigned int v111; // ecx
  int v112; // eax
  int v113; // edx
  int v114; // edx
  _DWORD *v115; // eax
  _DWORD *v116; // edx
  _DWORD *v117; // ecx
  unsigned int v118; // eax
  unsigned int v119; // esi
  unsigned int v120; // edx
  _DWORD *v121; // edx
  int v122; // esi
  int v123; // eax
  unsigned int v124; // esi
  unsigned int v125; // edx
  _DWORD *v126; // esi
  _DWORD *Entry; // ecx
  int v128; // edx
  _DWORD *v129; // esi
  _DWORD *v130; // eax
  _DWORD *v131; // edx
  unsigned int v132; // ecx
  int v133; // eax
  unsigned int v134; // edx
  unsigned int v135; // ecx
  unsigned __int16 *v136; // eax
  int v137; // ecx
  _DWORD *v138; // edx
  unsigned int v139; // eax
  unsigned int v140; // ecx
  unsigned int v141; // eax
  unsigned int *v142; // ecx
  char v143; // cl
  unsigned int v144; // eax
  unsigned int v145; // ecx
  unsigned int v146; // esi
  _DWORD *v147; // eax
  _DWORD *v148; // ecx
  int v149; // edx
  _DWORD *v150; // eax
  _DWORD *v151; // eax
  _DWORD *v152; // ecx
  int v153; // edx
  _DWORD *v154; // eax
  unsigned int v155; // ebx
  _BYTE *v156; // ecx
  _BYTE *v157; // ebx
  _DWORD *v158; // esi
  _BYTE *v159; // esi
  int v160; // esi
  unsigned int v161; // ecx
  int v162; // eax
  int v163; // eax
  int v164; // eax
  int v165; // eax
  int v166; // eax
  int *v167; // ecx
  int v168; // esi
  int v169; // eax
  _BYTE v170[12]; // [esp-8h] [ebp-1A8h]
  ULONG v171; // [esp+5Ch] [ebp-144h]
  struct _TEB *v172; // [esp+68h] [ebp-138h]
  struct _TEB *v173; // [esp+94h] [ebp-10Ch]
  struct _TEB *v174; // [esp+A0h] [ebp-100h]
  int v175; // [esp+A4h] [ebp-FCh] BYREF
  _DWORD v176[5]; // [esp+A8h] [ebp-F8h] BYREF
  unsigned int v177; // [esp+BCh] [ebp-E4h]
  _DWORD *v178; // [esp+C0h] [ebp-E0h]
  unsigned int v179; // [esp+C4h] [ebp-DCh]
  unsigned int v180; // [esp+C8h] [ebp-D8h]
  unsigned int v181; // [esp+CCh] [ebp-D4h]
  unsigned int *v182; // [esp+D0h] [ebp-D0h]
  unsigned int v183; // [esp+D4h] [ebp-CCh]
  char *v184; // [esp+D8h] [ebp-C8h]
  _DWORD *v185; // [esp+DCh] [ebp-C4h]
  unsigned int *v186; // [esp+E0h] [ebp-C0h]
  unsigned int v187; // [esp+E4h] [ebp-BCh]
  int v188; // [esp+E8h] [ebp-B8h]
  _DWORD *v189; // [esp+ECh] [ebp-B4h]
  int v190; // [esp+F0h] [ebp-B0h]
  unsigned int v191; // [esp+F4h] [ebp-ACh]
  _DWORD *v192; // [esp+F8h] [ebp-A8h]
  unsigned int v193; // [esp+FCh] [ebp-A4h]
  int v194; // [esp+100h] [ebp-A0h]
  unsigned int v195; // [esp+104h] [ebp-9Ch]
  unsigned int v196; // [esp+108h] [ebp-98h]
  int v197; // [esp+10Ch] [ebp-94h]
  int v198; // [esp+110h] [ebp-90h]
  unsigned int *v199; // [esp+114h] [ebp-8Ch]
  int v200; // [esp+118h] [ebp-88h]
  __int16 v201; // [esp+11Ch] [ebp-84h]
  __int16 v202; // [esp+11Eh] [ebp-82h]
  __int16 v203; // [esp+120h] [ebp-80h]
  __int16 v204; // [esp+122h] [ebp-7Eh]
  unsigned int v205; // [esp+124h] [ebp-7Ch]
  unsigned int v206; // [esp+128h] [ebp-78h]
  unsigned int v207; // [esp+12Ch] [ebp-74h]
  int v208; // [esp+130h] [ebp-70h]
  char v209; // [esp+135h] [ebp-6Bh]
  char v210; // [esp+136h] [ebp-6Ah]
  char v211; // [esp+137h] [ebp-69h]
  unsigned int v212; // [esp+138h] [ebp-68h]
  _BYTE *v213; // [esp+13Ch] [ebp-64h]
  int v214; // [esp+140h] [ebp-60h]
  int v215; // [esp+144h] [ebp-5Ch]
  unsigned __int16 *v216; // [esp+148h] [ebp-58h]
  PVOID Destination; // [esp+14Ch] [ebp-54h]
  int v218; // [esp+150h] [ebp-50h]
  unsigned int v219; // [esp+154h] [ebp-4Ch]
  int v220; // [esp+158h] [ebp-48h]
  unsigned int DeferredCriticalSectionEvent; // [esp+15Ch] [ebp-44h]
  int v222; // [esp+160h] [ebp-40h]
  char v223; // [esp+167h] [ebp-39h]
  char v224; // [esp+168h] [ebp-38h]
  char v225; // [esp+169h] [ebp-37h]
  char v226; // [esp+16Ah] [ebp-36h]
  char v227; // [esp+16Bh] [ebp-35h]
  unsigned int v228; // [esp+16Ch] [ebp-34h]
  char v229; // [esp+173h] [ebp-2Dh]
  unsigned int *v230; // [esp+174h] [ebp-2Ch]
  _DWORD *i; // [esp+178h] [ebp-28h]
  unsigned int v232; // [esp+17Ch] [ebp-24h]
  int v233; // [esp+180h] [ebp-20h]
  unsigned int v234; // [esp+184h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+188h] [ebp-18h]

  v207 = a2;
  v7 = (_DWORD *)BaseAddress;
  v206 = BaseAddress;
  v200 = 0;
  v208 = 1;
  v229 = 0;
  Destination = 0;
  v222 = 0;
  v197 = 0;
  v8 = a4 >> 3;
  if ( (a2 & 0x7D010F60) != 0 || a3 >= 0x80000000 )
  {
    v208 = 0;
    *a6 = 4;
    v10 = a3;
    if ( a3 > 0x7FFFFFFF )
      return 0;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return (PVOID)RtlDebugAllocateHeap(a3);
    if ( !a3 )
      v10 = 1;
    v12 = *(_DWORD *)(BaseAddress + 152) & (v10 + *(_DWORD *)(BaseAddress + 148));
    if ( v12 < 0x10 )
      v12 = 16;
    a4 = v12;
    BaseAddress = (a2 >> 4) & 0xFFFFFFE0 | 1;
    v228 = BaseAddress;
    if ( (a2 & 0x3C000100) != 0 || v7[47] )
    {
      BaseAddress = (a2 >> 4) & 0xFFFFFFE0 | 3;
      v228 = BaseAddress;
      v12 += 8;
      a4 = v12;
    }
    v9 = v12 >> 3;
    v232 = v9;
  }
  else
  {
    LOBYTE(BaseAddress) = 1;
    v228 = BaseAddress;
    v9 = a4 >> 3;
    v232 = a4 >> 3;
    if ( v8 < 2 )
    {
      a4 += 8;
      v9 = 2;
      v232 = 2;
    }
    *a6 = 3;
  }
  v13 = a2 & 0x800000;
  if ( v13 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    BaseAddress |= 8u;
    v228 = BaseAddress;
  }
  ms_exc.registration.TryLevel = 0;
  if ( (v207 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection((PRTL_CRITICAL_SECTION)v7[50]) )
    {
      ++v7[133];
    }
    else
    {
      if ( byte_4B3A5DA8 )
      {
        v209 = 0;
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v174 = NtCurrentTeb();
        v174->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_514;
      }
      v197 = 1;
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)v7[50]);
      RtlpUpdateHeapRates(v7, 1);
    }
    v209 = 1;
    v229 = 1;
    if ( (v7[18] & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(v7);
    v9 = v232;
  }
  if ( v9 > v7[23] )
  {
    if ( (v7[16] & 2) != 0 )
    {
      a4 += 24;
      if ( RtlpHpHeapCheckCommitLimit(v7, v7 + 53) )
      {
        v171 = (RtlpHeapGenerateRandomValue32() & 0xF) << 12;
        v222 = RtlpHpAllocVirtBlockCommitFirst(v7, &a4, v171, &v175);
        if ( v222 )
        {
          v160 = v222;
          v161 = a4;
          *(_WORD *)(v222 + 24) = a4 - a3;
          *(_BYTE *)(v160 + 26) = v228 | 2;
          *(_DWORD *)(v160 + 16) = v161;
          *(_DWORD *)(v160 + 20) = v175;
          *(_BYTE *)(v160 + 31) = 4;
          v7[128] += v161;
          if ( RtlGetCurrentServiceSessionId() )
            v162 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v162 = 2147353472;
          if ( *(_BYTE *)v162 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a4, 9);
          if ( RtlGetCurrentServiceSessionId() )
            v163 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v163 = 2147353472;
          if ( *(_BYTE *)v163 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v164 = (int)NtCurrentPeb()->SharedData + 550;
            else
              v164 = 2147353472;
            RtlpLogHeapExtendEvent(a4, 8 * v7[29], (HANDLE)*(unsigned __int8 *)v164);
          }
          if ( RtlGetCurrentServiceSessionId() )
            v165 = (int)NtCurrentPeb()->SharedData + 560;
          else
            v165 = 2147353482;
          if ( *(_BYTE *)v165 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v166 = (int)NtCurrentPeb()->SharedData + 560;
            else
              v166 = 2147353482;
            RtlpLogHeapExtendEvent(a4, 8 * v7[29], (HANDLE)*(unsigned __int8 *)v166);
          }
          if ( (v7[16] & 0x8000000) != 0 )
            *(_WORD *)(v222 + 8) = RtlLogStackBackTraceEx(1);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v222 + 10) = RtlpUpdateTagEntry(0, *(_DWORD *)(v160 + 16) >> 3, 1);
          if ( v7[19] )
          {
            *(_BYTE *)(v160 + 27) = *(_BYTE *)(v160 + 24) ^ *(_BYTE *)(v160 + 25) ^ *(_BYTE *)(v160 + 26);
            *(_DWORD *)(v160 + 24) ^= v7[20];
          }
          v167 = (int *)v7[40];
          if ( (_DWORD *)*v167 == v7 + 39 )
          {
            v168 = v222;
            *(_DWORD *)v222 = v7 + 39;
            *(_DWORD *)(v168 + 4) = v167;
            *v167 = v168;
            v7[40] = v168;
          }
          else
          {
            RtlpLogHeapFailure(v7 + 39, 0, *v167, 0);
          }
          Destination = (PVOID)(v222 + 32);
        }
        else
        {
          Destination = 0;
          ++v7[137];
        }
        goto LABEL_514;
      }
      v190 = -1073741523;
    }
    else
    {
      v190 = -1073741789;
    }
LABEL_513:
    Destination = 0;
    goto LABEL_514;
  }
  if ( v13 )
    goto LABEL_57;
  if ( v8 >= *((unsigned __int16 *)v7 + 120) )
  {
    if ( a3 <= RtlpLargestLfhBlock && (*((_BYTE *)v7 + 234) != 2 || !v7[57]) && *((_BYTE *)v7 + 235) == 2 )
      v7[18] |= 0x20000000u;
    goto LABEL_57;
  }
  if ( a3 <= RtlpLargestLfhBlock )
  {
    DeferredCriticalSectionEvent = (unsigned int)v7 + (v8 >> 3) + 242;
    v14 = v8 & 7;
    BaseAddress = v8 & 7;
    if ( ((unsigned __int8)(1 << BaseAddress) & *(_BYTE *)DeferredCriticalSectionEvent) == 0 )
    {
      v15 = (__int16 *)(v7[59] + 2 * v8);
      *v15 += 33;
      LOWORD(BaseAddress) = *v15;
      if ( !v197 )
      {
        if ( (BaseAddress & 0x1F) <= 0x10 && (unsigned __int16)BaseAddress <= 0xFF00u )
        {
          v188 = 0;
          goto LABEL_56;
        }
        v188 = 1;
      }
      v16 = a3;
      if ( !a3 )
        v16 = 1;
      if ( *((_BYTE *)v7 + 234) == 2 )
        v17 = v7[57];
      else
        v17 = 0;
      LFHContext = RtlpGetLFHContext(v17, v16);
      BaseAddress = 0xFFFF;
      if ( LFHContext == -1 )
      {
        if ( *((_BYTE *)v7 + 234) != 2 || !v7[57] )
          v7[18] |= 0x20000000u;
      }
      else
      {
        *v15 = LFHContext;
        BaseAddress = DeferredCriticalSectionEvent;
        *(_BYTE *)DeferredCriticalSectionEvent |= 1 << v14;
        ++v7[143];
      }
    }
LABEL_56:
    v9 = v232;
  }
LABEL_57:
  if ( a5 )
  {
    v19 = *a5;
    if ( *a5 )
    {
      v20 = (int)(v19 - 2);
      v216 = (unsigned __int16 *)(v19 - 2);
      if ( v7[19] )
      {
        *(_DWORD *)v20 ^= v7[20];
        if ( *(_BYTE *)(v20 + 3) != (*(_BYTE *)v20 ^ (unsigned __int8)(*(_BYTE *)(v20 + 1) ^ *(_BYTE *)(v20 + 2))) )
          RtlpAnalyzeHeapFailure(BaseAddress);
      }
      v230 = *v19;
      v234 = *(_DWORD *)(v20 + 12);
      v21 = *(unsigned int ***)v234;
      v22 = v230[1];
      if ( *(_DWORD *)v234 != v22 || v21 != v19 )
      {
        RtlpLogHeapFailure(v19, v22, v21, 0);
LABEL_95:
        v227 = 0;
        NtCurrentTeb()->LastStatusValue = -1073741801;
        v173 = NtCurrentTeb();
        v173->LastErrorValue = RtlNtStatusToDosError(-1073741801);
        goto LABEL_514;
      }
      v7[29] -= *(unsigned __int16 *)v20;
      v23 = (_DWORD *)v7[45];
      i = v23;
      if ( v23 )
      {
        v24 = *(unsigned __int16 *)v20;
        DeferredCriticalSectionEvent = v24;
        while ( 1 )
        {
          v25 = v23[1];
          if ( v24 < v25 )
            break;
          v26 = (_DWORD *)*v23;
          if ( !*v23 )
          {
            v24 = v25 - 1;
            DeferredCriticalSectionEvent = v25 - 1;
            break;
          }
          v23 = (_DWORD *)*v23;
          i = v26;
        }
        v187 = v24;
        v205 = *(unsigned __int16 *)v20;
        v27 = v24 - v23[5];
        v212 = v27;
        v28 = 2 * v27;
        if ( !v23[2] )
          v28 = v27;
        v219 = 4 * v28;
        v215 = 4 * v28 + v23[8];
        v233 = *(_DWORD *)v215;
        --v23[3];
        v29 = (unsigned int *)v23[1];
        v199 = (unsigned int *)((char *)v29 - 1);
        v7 = (_DWORD *)v206;
        if ( (unsigned int *)v24 == (unsigned int *)((char *)v29 - 1) )
          --v23[4];
        if ( v233 == v20 + 8 )
        {
          v186 = v29;
          if ( !*v23 )
          {
            v29 = v199;
            v186 = v199;
          }
          v30 = *(unsigned int **)(v20 + 8);
          v199 = (unsigned int *)v23[6];
          v7 = (_DWORD *)v206;
          if ( DeferredCriticalSectionEvent < (unsigned int)v29 )
          {
            if ( v30 != (unsigned int *)v23[6] )
            {
              v31 = *(v30 - 2);
              if ( *(_DWORD *)(v206 + 76) )
              {
                v31 ^= *(_DWORD *)(v206 + 80);
                if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
                {
                  RtlpLogHeapFailure(v30 - 2, 0, 0, 0);
                  v23 = i;
                }
              }
              if ( v205 == (unsigned __int16)v31 )
              {
                *(_DWORD *)(v219 + v23[8]) = v30;
                v20 = (int)v216;
                goto LABEL_83;
              }
              v20 = (int)v216;
              v27 = v212;
            }
            *(_DWORD *)(v219 + v23[8]) = 0;
            goto LABEL_88;
          }
          if ( v30 == v199 )
          {
            *(_DWORD *)v215 = 0;
LABEL_88:
            *(_DWORD *)(i[7] + 4 * (v27 >> 5)) &= ~(1 << (v27 & 0x1F));
            goto LABEL_83;
          }
          *(_DWORD *)v215 = v30;
        }
      }
LABEL_83:
      v32 = v230;
      v33 = v234;
      *(_DWORD *)v234 = v230;
      v32[1] = v33;
      if ( (*(_BYTE *)(v20 + 2) & 8) == 0 || RtlpCommitBlock(v7, v20) )
      {
        v227 = 1;
        goto LABEL_200;
      }
      RtlpDeCommitFreeBlock(v7, v20, *(unsigned __int16 *)v20, 1);
      goto LABEL_95;
    }
  }
  v184 = (char *)(v7 + 48);
  v34 = (_DWORD *)v7[45];
  for ( i = v34; ; i = v37 )
  {
    v35 = v34[1];
    if ( v9 < v35 )
      break;
    v37 = (_DWORD *)*v34;
    if ( !*v34 )
    {
      j = v35 - 1;
      goto LABEL_101;
    }
    v34 = (_DWORD *)*v34;
  }
  v191 = v9;
  for ( j = v9; ; v191 = j )
  {
    DeferredCriticalSectionEvent = j;
    v219 = j - v34[5];
    v233 = 0;
    v38 = (char *)v34[6];
    v215 = (int)v38;
    v39 = (char *)*((_DWORD *)v38 + 1);
    if ( v38 == v39 )
    {
      v40 = v38;
LABEL_142:
      v233 = (int)v40;
      goto LABEL_143;
    }
    v234 = (unsigned int)(v39 - 8);
    v41 = *((_DWORD *)v39 - 2);
    if ( v7[19] )
    {
      v41 ^= v7[20];
      if ( HIBYTE(v41) != ((unsigned __int8)v41 ^ (unsigned __int8)(BYTE1(v41) ^ BYTE2(v41))) )
      {
        RtlpLogHeapFailure(v234, 0, 0, 0);
        v38 = (char *)v215;
      }
    }
    v35 = v232 - (unsigned __int16)v41;
    if ( v35 > 0 )
    {
      v40 = v38;
      goto LABEL_142;
    }
    v234 = *(_DWORD *)v38 - 8;
    v42 = *(unsigned int ***)v234;
    if ( v7[19] )
    {
      v42 = (unsigned int **)(v7[20] ^ (unsigned int)v42);
      if ( HIBYTE(v42) != ((unsigned __int8)v42 ^ (unsigned __int8)(BYTE1(v42) ^ BYTE2(v42))) )
      {
        RtlpLogHeapFailure(v234, 0, 0, 0);
        v38 = (char *)v215;
      }
    }
    v35 = v232 - (unsigned __int16)v42;
    if ( v35 <= 0 )
    {
      v40 = *(char **)v38;
      goto LABEL_142;
    }
    if ( *v34 || DeferredCriticalSectionEvent != v34[1] - 1 )
    {
      v45 = v219 >> 5;
      v234 = ((unsigned int)(v34[1] - v34[5]) >> 5) - 1;
      v46 = (_DWORD *)(v34[7] + 4 * (v219 >> 5));
      v47 = *v46 & (-1 << (v219 & 0x1F));
      v35 = v234;
      while ( 1 )
      {
        v185 = v46;
        v196 = v45;
        if ( v47 )
          break;
        if ( v45 > v234 )
          goto LABEL_472;
        v47 = *++v46;
        ++v45;
      }
      if ( (_WORD)v47 )
      {
        if ( (_BYTE)v47 )
          v48 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v47];
        else
          v48 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v47)] + 8;
      }
      else if ( BYTE2(v47) )
      {
        v48 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v47)] + 16;
      }
      else
      {
        v48 = (unsigned __int8)RtlpBitsClearLow[HIBYTE(v47)] + 24;
      }
      v49 = v48 + 32 * v45;
      v196 = v49;
      if ( v34[2] )
        v49 *= 2;
      v40 = *(char **)(v34[8] + 4 * v49);
      goto LABEL_142;
    }
    v35 = v219;
    if ( v34[2] )
      v35 = 2 * v219;
    v43 = *(char **)(v34[8] + 4 * v35);
    while ( v38 != v43 )
    {
      v44 = *((_DWORD *)v43 - 2);
      if ( v7[19] )
      {
        v44 ^= v7[20];
        if ( HIBYTE(v44) != ((unsigned __int8)v44 ^ (unsigned __int8)(BYTE1(v44) ^ BYTE2(v44))) )
          RtlpLogHeapFailure(v43 - 8, 0, 0, 0);
      }
      v35 = v232 - (unsigned __int16)v44;
      if ( v35 <= 0 )
      {
        v40 = v43;
        v34 = i;
        goto LABEL_142;
      }
      v43 = *(char **)v43;
      v38 = (char *)v215;
    }
    v40 = (char *)v233;
    v34 = i;
LABEL_143:
    if ( v40 )
      break;
LABEL_472:
    v34 = (_DWORD *)*v34;
    i = v34;
    j = v34[5];
LABEL_101:
    ;
  }
  if ( v184 == v40 )
  {
LABEL_186:
    v64 = RtlpExtendHeap((char *)v7, a4);
    v20 = (int)v64;
    v216 = v64;
    if ( v64 )
    {
      v65 = v64 + 4;
      v234 = *((_DWORD *)v64 + 2);
      v230 = (unsigned int *)*((_DWORD *)v64 + 3);
      v66 = (unsigned __int16 *)*v230;
      v67 = *(_DWORD *)(v234 + 4);
      if ( *v230 != v67 || v66 != v65 )
      {
        RtlpLogHeapFailure(v20 + 8, v67, v66, 0);
        v223 = 0;
        goto LABEL_514;
      }
      v7[29] -= *(unsigned __int16 *)v20;
      v68 = (_DWORD *)v7[45];
      if ( v68 )
      {
        v69 = *(unsigned __int16 *)v20;
        while ( v69 >= v68[1] )
        {
          if ( !*v68 )
          {
            v69 = v68[1] - 1;
            break;
          }
          v68 = (_DWORD *)*v68;
        }
        v181 = v69;
        RtlpHeapRemoveListEntry((int)v7, v68, 1, (int *)(v20 + 8), v69, *(unsigned __int16 *)v20);
      }
      v70 = v234;
      v71 = v230;
      *v230 = v234;
      *(_DWORD *)(v70 + 4) = v71;
      if ( (*(_BYTE *)(v20 + 2) & 8) != 0 && !RtlpCommitBlock(v7, v20) )
      {
        RtlpDeCommitFreeBlock(v7, v20, *(unsigned __int16 *)v20, 1);
        v223 = 0;
        goto LABEL_514;
      }
      v223 = 1;
      goto LABEL_200;
    }
    v190 = -1073741801;
    goto LABEL_513;
  }
  v20 = (int)(v40 - 8);
  v216 = (unsigned __int16 *)(v40 - 8);
  if ( v7[19] )
  {
    *(_DWORD *)v20 ^= v7[20];
    if ( *(_BYTE *)(v20 + 3) != (*(_BYTE *)v20 ^ (unsigned __int8)(*(_BYTE *)(v20 + 1) ^ *(_BYTE *)(v20 + 2))) )
      RtlpAnalyzeHeapFailure(v35);
    v40 = (char *)v233;
  }
  v50 = *(unsigned __int16 *)v20;
  if ( v50 < v232 )
  {
    if ( v7[19] )
    {
      *(_BYTE *)(v20 + 3) = *(_BYTE *)v20 ^ *(_BYTE *)(v20 + 1) ^ *(_BYTE *)(v20 + 2);
      *(_DWORD *)v20 ^= v7[20];
    }
    goto LABEL_186;
  }
  v205 = *(_DWORD *)(v20 + 8);
  v199 = *(unsigned int **)(v20 + 12);
  v51 = (char *)*v199;
  v52 = *(_DWORD *)(v205 + 4);
  if ( *v199 != v52 || v51 != v40 )
  {
    RtlpLogHeapFailure(v40, v52, v51, 0);
    v226 = 0;
    goto LABEL_514;
  }
  v7[29] -= v50;
  v53 = (_DWORD *)v7[45];
  i = v53;
  if ( v53 )
  {
    v54 = *(unsigned __int16 *)v20;
    DeferredCriticalSectionEvent = v54;
    while ( 1 )
    {
      v55 = v53[1];
      if ( v54 < v55 )
        break;
      v56 = (_DWORD *)*v53;
      if ( !*v53 )
      {
        v54 = v55 - 1;
        DeferredCriticalSectionEvent = v55 - 1;
        break;
      }
      v53 = (_DWORD *)*v53;
      i = v56;
    }
    v183 = v54;
    v212 = *(unsigned __int16 *)v20;
    v57 = v54 - v53[5];
    v233 = v57;
    v58 = 2 * v57;
    if ( !v53[2] )
      v58 = v57;
    v219 = 4 * v58;
    v215 = 4 * v58 + v53[8];
    v234 = *(_DWORD *)v215;
    --v53[3];
    v59 = (unsigned int *)v53[1];
    v230 = (unsigned int *)((char *)v59 - 1);
    v7 = (_DWORD *)v206;
    if ( (unsigned int *)v54 == (unsigned int *)((char *)v59 - 1) )
      --v53[4];
    if ( v234 == v20 + 8 )
    {
      v182 = v59;
      if ( !*v53 )
      {
        v59 = v230;
        v182 = v230;
      }
      v60 = *(_DWORD *)(v20 + 8);
      v234 = v53[6];
      v7 = (_DWORD *)v206;
      if ( DeferredCriticalSectionEvent >= (unsigned int)v59 )
      {
        if ( v60 != v234 )
        {
          *(_DWORD *)v215 = v60;
          goto LABEL_172;
        }
        *(_DWORD *)v215 = 0;
      }
      else
      {
        if ( v60 != v53[6] )
        {
          v61 = *(_DWORD *)(v60 - 8);
          if ( *(_DWORD *)(v206 + 76) )
          {
            v61 ^= *(_DWORD *)(v206 + 80);
            if ( HIBYTE(v61) != ((unsigned __int8)v61 ^ (unsigned __int8)(BYTE1(v61) ^ BYTE2(v61))) )
            {
              RtlpLogHeapFailure(v60 - 8, 0, 0, 0);
              v57 = v233;
            }
            v53 = i;
          }
          if ( v212 == (unsigned __int16)v61 )
          {
            *(_DWORD *)(v219 + v53[8]) = v60;
            v20 = (int)v216;
            goto LABEL_172;
          }
          v20 = (int)v216;
        }
        *(_DWORD *)(v219 + v53[8]) = 0;
      }
      v233 = v57 & 0x1F;
      *(_DWORD *)(i[7] + 4 * (v57 >> 5)) &= ~(1 << (v57 & 0x1F));
    }
  }
LABEL_172:
  v62 = v205;
  v63 = v199;
  *v199 = v205;
  *(_DWORD *)(v62 + 4) = v63;
  if ( (*(_BYTE *)(v20 + 2) & 8) != 0 && !RtlpCommitBlock(v7, v20) )
  {
    RtlpDeCommitFreeBlock(v7, v20, *(unsigned __int16 *)v20, 1);
    v226 = 0;
    goto LABEL_514;
  }
  v226 = 1;
LABEL_200:
  v72 = *(_BYTE *)(v20 + 2);
  v225 = v72;
  v73 = v208;
  if ( !v208 && (v72 & 4) != 0 )
  {
    v74 = *(unsigned __int16 *)v20;
    v75 = 8 * v74 - 16;
    v180 = v75;
    if ( (v72 & 2) != 0 && v75 > 4 )
    {
      v75 = 8 * v74 - 20;
      v180 = v75;
    }
    v234 = RtlCompareMemoryUlong((PVOID)(v20 + 16), v75 | 0xFEEEFEEE00000000uLL, *(ULONG *)&v170[8]);
    if ( v234 != v75 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v216, (char *)v216 + v234 + 16);
      v20 = (int)v216;
      if ( NtCurrentPeb()->BeingDebugged )
      {
        RtlpHeapInvalidBadAddress = (int)v216;
        __debugbreak();
        RtlpHeapInvalidBreakPoint = 0;
      }
    }
    v73 = v208;
  }
  v213 = (_BYTE *)v20;
  if ( (*(_BYTE *)(v20 + 2) & 1) != 0 )
  {
    RtlpLogHeapFailure(v20, 0, 0, 0);
    goto LABEL_514;
  }
  *(_BYTE *)(v20 + 2) = v228;
  v76 = v232;
  v77 = *(unsigned __int16 *)v20 - v232;
  v219 = v77;
  v234 = (unsigned __int16)v232;
  *(_WORD *)v20 = v232;
  v78 = a4 - a3;
  v212 = a4 - a3;
  if ( a4 - a3 >= 0x3F )
  {
    *(_DWORD *)(v20 + 8 * v76 - 4) = v78;
    *(_BYTE *)(v20 + 7) = 63;
  }
  else
  {
    *(_BYTE *)(v20 + 7) = v78;
  }
  *(_BYTE *)(v20 + 3) = 0;
  if ( !v77 )
  {
LABEL_221:
    v80 = v213 + 8;
    Destination = v213 + 8;
    v81 = 8 * *(unsigned __int16 *)v213;
    v200 = v81;
    v234 = (unsigned int)(v213 + 7);
    if ( (v213[7] & 0x3F) == 0x3F )
    {
      v81 -= 4;
      v200 = v81;
    }
    if ( v208 )
    {
      if ( v7[19] )
      {
        v82 = v213;
        v213[3] = *v213 ^ v213[1] ^ v213[2];
        *v82 ^= v7[20];
      }
      if ( v229 )
      {
        if ( (v7[17] & 0x1000000) == 0 )
        {
          ++v7[139];
          v83 = v7[141];
          if ( v7[139] > v83 )
          {
            v7[139] = 0;
            v84 = v7[126] - 8 * v7[29];
            if ( v84 > v7[146] )
              v7[146] = v84;
            v7[147] = v84;
          }
          if ( ++v7[142] >= 0x1000u )
          {
            if ( *((_BYTE *)v7 + 234) != 2 || (v85 = 256, v7[143] <= 0x10u) )
              v85 = 16;
            if ( v7[140] > v85 && v83 < 0x10000 )
              v7[141] = 2 * v83;
            v7[140] = 0;
            v7[142] = 0;
          }
        }
        v86 = v7[50];
        if ( (*(_DWORD *)(v86 + 8))-- == 1 )
        {
          *(_DWORD *)(v86 + 12) = 0;
          v88 = _InterlockedCompareExchange((volatile signed __int32 *)(v86 + 4), -1, -2);
          if ( v88 != -2 )
          {
            if ( (*(_BYTE *)(v86 + 4) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v86);
            DeferredCriticalSectionEvent = *(_DWORD *)(v86 + 16);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v86);
            v176[0] = 0;
            while ( 1 )
            {
              v89 = _InterlockedCompareExchange((volatile signed __int32 *)(v86 + 4), (v88 & 2 | 1) + v88, v88);
              v7 = (_DWORD *)v206;
              if ( v89 == v88 )
                break;
              RtlBackoff(v176);
              v88 = *(_DWORD *)(v86 + 4);
            }
            if ( (v88 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v86, DeferredCriticalSectionEvent, *(_DWORD *)&v170[8]);
          }
        }
        v229 = 0;
      }
      if ( (v207 & 8) != 0 )
      {
        *(_DWORD *)&v170[4] = v200 - 8;
        memset(Destination, 0, *(size_t *)&v170[4]);
      }
      goto LABEL_514;
    }
    if ( (v207 & 8) != 0 )
    {
      *(_DWORD *)&v170[4] = v81 - 8;
      memset(v213 + 8, 0, *(size_t *)&v170[4]);
    }
    else if ( (v7[16] & 0x40) != 0 )
    {
      *(_DWORD *)&v170[4] = -1163005939;
      v155 = a3;
      *(_DWORD *)v170 = a3 & 0xFFFFFFFC;
      RtlFillMemoryUlong(Destination, *(SIZE_T *)v170, *(ULONG *)&v170[8]);
LABEL_453:
      if ( (v7[16] & 0x20) != 0 )
      {
        *(_DWORD *)&v80[v155] = -1414812757;
        *(_DWORD *)&v80[v155 + 4] = -1414812757;
        v213[2] |= 4u;
      }
      v156 = v213;
      v157 = v213 + 3;
      v213[3] = 0;
      v230 = (unsigned int *)(v156 + 2);
      if ( (v156[2] & 2) != 0 )
      {
        if ( *(_BYTE *)v234 == 4 )
          v158 = v156 - 16;
        else
          v158 = &v213[8 * *(unsigned __int16 *)v213 - 8];
        v192 = v158;
        *v158 = 0;
        v158[1] = 0;
        if ( (v7[16] & 0x8000000) != 0 )
          *(_WORD *)v158 = RtlLogStackBackTraceEx(1);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v159 = v213;
          *((_WORD *)v192 + 1) = RtlpUpdateTagEntry(0, *(unsigned __int16 *)v213, 0);
          goto LABEL_468;
        }
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        v159 = v213;
        *v157 = RtlpUpdateTagEntry(0, *(unsigned __int16 *)v213, 0);
        goto LABEL_468;
      }
      v159 = v213;
LABEL_468:
      if ( v7[19] )
      {
        *v157 = *v159 ^ *(_BYTE *)v230 ^ v159[1];
        *(_DWORD *)v159 ^= v7[20];
      }
      goto LABEL_514;
    }
    v155 = a3;
    goto LABEL_453;
  }
  if ( v77 == 1 )
  {
    ++*(_WORD *)v20;
    v79 = v78 + 8;
    v234 = v79;
    if ( v79 >= 0x3F )
    {
      *(_DWORD *)(v20 + 8 * v76 + 4) = v79;
      *(_BYTE *)(v20 + 7) = 63;
    }
    else
    {
      *(_BYTE *)(v20 + 7) = v79;
    }
    goto LABEL_221;
  }
  i = (_DWORD *)(v73 == 0);
  v189 = i;
  v90 = *(_BYTE *)(v20 + 6);
  if ( v90 )
  {
    v91 = (v20 & 0xFFFF0000) + ((1 - v90) << 16);
    v92 = (char *)v91;
  }
  else
  {
    v91 = (unsigned int)v7;
    v92 = (char *)v7;
  }
  v179 = v91;
  v230 = (unsigned int *)v77;
  v93 = (unsigned __int16 *)(v20 + 8 * v232);
  DeferredCriticalSectionEvent = 0;
  *((_BYTE *)v93 + 2) = v225;
  *((_BYTE *)v93 + 7) = 0;
  v93[2] = v234 ^ *((_WORD *)v7 + 42);
  if ( *(char **)(v91 + 24) == v92 )
  {
    LOBYTE(v94) = 0;
  }
  else
  {
    v94 = ((unsigned int)((char *)v93 - v92) >> 16) + 1;
    v234 = v94;
    v205 = v94;
    if ( v94 >= 0xFE )
    {
      RtlpLogHeapFailure(v93, v91, 0, 0);
      v77 = v219;
      LOBYTE(v94) = v234;
    }
  }
  v210 = v94;
  *((_BYTE *)v93 + 6) = v94;
  *((_BYTE *)v93 + 3) = 0;
  *v93 = v77;
  while ( 1 )
  {
    v95 = &v93[4 * v77];
    if ( ((*((_BYTE *)v95 + 2) ^ (unsigned __int8)(*((_BYTE *)v7 + 82) & (v7[19] >> 20))) & 1) != 0 )
    {
      v77 = (unsigned __int16)v77;
      v232 = v77;
      v95[2] = v77 ^ *((_WORD *)v7 + 42);
      if ( (_BYTE)i )
      {
        *((_BYTE *)v93 + 2) &= 0xF0u;
        *((_BYTE *)v93 + 7) = 0;
        if ( (v7[16] & 0x40) != 0 )
        {
          *(_DWORD *)&v170[4] = -17891602;
          *(_DWORD *)v170 = 8 * (unsigned __int16)v77 - 16;
          RtlFillMemoryUlong(v93 + 8, *(SIZE_T *)v170, *(ULONG *)&v170[8]);
          *((_BYTE *)v93 + 2) |= 4u;
          v77 = v232;
        }
        v126 = v7 + 48;
        if ( v7[45] )
          Entry = (_DWORD *)RtlpFindEntry((int)v7, v77);
        else
          Entry = (_DWORD *)*v126;
        while ( v126 != Entry )
        {
          if ( v7[19] )
          {
            v128 = *(Entry - 2);
            v220 = v128;
            if ( (v128 & v7[19]) != 0 )
            {
              v128 ^= v7[20];
              v220 = v128;
            }
          }
          else
          {
            LOWORD(v128) = *((_WORD *)Entry - 4);
          }
          v202 = v128;
          if ( v232 <= (unsigned __int16)v128 )
            break;
          Entry = (_DWORD *)*Entry;
        }
        v129 = v93 + 4;
        v130 = (_DWORD *)Entry[1];
        if ( (_DWORD *)*v130 == Entry )
        {
          *v129 = Entry;
          *((_DWORD *)v93 + 3) = v130;
          *v130 = v129;
          Entry[1] = v129;
        }
        else
        {
          RtlpLogHeapFailure(Entry, 0, *v130, 0);
        }
        v7[29] += *v93;
        v131 = (_DWORD *)v7[45];
        if ( v131 )
        {
          v132 = *v93;
          while ( 1 )
          {
            if ( v132 < v131[1] )
            {
              v133 = *v93;
              goto LABEL_366;
            }
            if ( !*v131 )
              break;
            v131 = (_DWORD *)*v131;
          }
          v133 = v131[1] - 1;
LABEL_366:
          v176[4] = v133;
          goto LABEL_367;
        }
      }
      else
      {
        *((_BYTE *)v93 + 2) = 0;
        *((_BYTE *)v93 + 7) = 0;
        v96 = v7 + 48;
        v97 = (_DWORD *)v7[45];
        v233 = (int)v97;
        if ( v97 )
        {
          while ( 1 )
          {
            v98 = v97[1];
            if ( (unsigned __int16)v77 < v98 )
              break;
            v100 = (_DWORD *)*v97;
            if ( !*v97 )
            {
              k = v98 - 1;
              goto LABEL_269;
            }
            v97 = (_DWORD *)*v97;
            v233 = (int)v100;
          }
          v194 = (unsigned __int16)v77;
          for ( k = (unsigned __int16)v77; ; v194 = k )
          {
            v215 = k;
            v219 = k - v97[5];
            v212 = 0;
            v101 = (_DWORD *)v97[6];
            v228 = (unsigned int)v101;
            v102 = (_DWORD *)v101[1];
            if ( v101 == v102 )
            {
              v103 = v101;
            }
            else
            {
              v234 = (unsigned int)(v102 - 2);
              v104 = *(v102 - 2);
              if ( v7[19] )
              {
                v104 ^= v7[20];
                v230 = (unsigned int *)v104;
                if ( HIBYTE(v104) != ((unsigned __int8)v104 ^ (unsigned __int8)(BYTE1(v104) ^ BYTE2(v104))) )
                {
                  RtlpLogHeapFailure(v234, 0, 0, 0);
                  LOWORD(v104) = (_WORD)v230;
                }
              }
              if ( (int)(v232 - (unsigned __int16)v104) <= 0 )
              {
                v234 = *(_DWORD *)v228 - 8;
                v105 = *(_DWORD *)v234;
                if ( v7[19] )
                {
                  v105 ^= v7[20];
                  v230 = (unsigned int *)v105;
                  if ( HIBYTE(v105) != ((unsigned __int8)v105 ^ (unsigned __int8)(BYTE1(v105) ^ BYTE2(v105))) )
                  {
                    RtlpLogHeapFailure(v234, 0, 0, 0);
                    LOWORD(v105) = (_WORD)v230;
                  }
                }
                if ( (int)(v232 - (unsigned __int16)v105) > 0 )
                {
                  if ( *v97 || v215 != v97[1] - 1 )
                  {
                    v109 = v219 >> 5;
                    v230 = (unsigned int *)(((unsigned int)(v97[1] - v97[5]) >> 5) - 1);
                    v110 = (_DWORD *)(v97[7] + 4 * (v219 >> 5));
                    v234 = -1 << (v219 & 0x1F);
                    v111 = *v110 & v234;
                    while ( 1 )
                    {
                      v178 = v110;
                      v195 = v109;
                      if ( v111 )
                        break;
                      if ( v109 > (unsigned int)v230 )
                      {
                        v97 = (_DWORD *)v233;
                        goto LABEL_312;
                      }
                      v111 = *++v110;
                      ++v109;
                    }
                    if ( (_WORD)v111 )
                    {
                      if ( (_BYTE)v111 )
                        v112 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v111];
                      else
                        v112 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v111)] + 8;
                    }
                    else if ( BYTE2(v111) )
                    {
                      v112 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v111)] + 16;
                    }
                    else
                    {
                      v112 = (unsigned __int8)RtlpBitsClearLow[HIBYTE(v111)] + 24;
                    }
                    v113 = v112 + 32 * v109;
                    v195 = v113;
                    v97 = (_DWORD *)v233;
                    if ( *(_DWORD *)(v233 + 8) )
                      v113 *= 2;
                    v103 = *(_DWORD **)(*(_DWORD *)(v233 + 32) + 4 * v113);
                  }
                  else
                  {
                    v106 = v219;
                    if ( v97[2] )
                      v106 = 2 * v219;
                    for ( m = *(_DWORD **)(v97[8] + 4 * v106); (_DWORD *)v228 != m; m = (_DWORD *)*m )
                    {
                      v108 = *(m - 2);
                      if ( v7[19] )
                      {
                        v108 ^= v7[20];
                        v234 = v108;
                        if ( HIBYTE(v108) != ((unsigned __int8)v108 ^ (unsigned __int8)(BYTE1(v108) ^ BYTE2(v108))) )
                        {
                          RtlpLogHeapFailure(m - 2, 0, 0, 0);
                          LOWORD(v108) = v234;
                        }
                      }
                      if ( (int)(v232 - (unsigned __int16)v108) <= 0 )
                      {
                        v103 = m;
                        v97 = (_DWORD *)v233;
                        goto LABEL_310;
                      }
                    }
                    v103 = (_DWORD *)v212;
                    v97 = (_DWORD *)v233;
                  }
                }
                else
                {
                  v103 = *(_DWORD **)v228;
                }
              }
              else
              {
                v103 = (_DWORD *)v228;
              }
            }
LABEL_310:
            if ( v103 )
              break;
LABEL_312:
            v97 = (_DWORD *)*v97;
            v233 = (int)v97;
            k = v97[5];
LABEL_269:
            ;
          }
          v96 = v7 + 48;
        }
        else
        {
          v103 = (_DWORD *)*v96;
        }
        while ( v96 != v103 )
        {
          if ( v7[19] )
          {
            v114 = *(v103 - 2);
            v198 = v114;
            if ( (v114 & v7[19]) != 0 )
            {
              v114 ^= v7[20];
              v198 = v114;
            }
          }
          else
          {
            LOWORD(v114) = *((_WORD *)v103 - 4);
          }
          v201 = v114;
          if ( v232 <= (unsigned __int16)v114 )
            break;
          v103 = (_DWORD *)*v103;
          v96 = v7 + 48;
        }
        v115 = v93 + 4;
        v116 = (_DWORD *)v103[1];
        if ( (_DWORD *)*v116 == v103 )
        {
          *v115 = v103;
          *((_DWORD *)v93 + 3) = v116;
          *v116 = v115;
          v103[1] = v115;
        }
        else
        {
          RtlpLogHeapFailure(v103, 0, *v116, 0);
        }
        v7[29] += *v93;
        v117 = (_DWORD *)v7[45];
        v228 = (unsigned int)v117;
        if ( v117 )
        {
          v118 = *v93;
          v212 = v118;
          while ( 1 )
          {
            v119 = v117[1];
            if ( v118 < v119 )
            {
              v177 = v118;
              v120 = v118;
              goto LABEL_331;
            }
            v121 = (_DWORD *)*v117;
            if ( !*v117 )
              break;
            v117 = (_DWORD *)*v117;
            v228 = (unsigned int)v121;
          }
          v120 = v119 - 1;
          v177 = v119 - 1;
LABEL_331:
          v122 = v120 - v117[5];
          v215 = v122;
          v123 = 2 * v122;
          if ( !v117[2] )
            v123 = v122;
          ++v117[3];
          DeferredCriticalSectionEvent = 4 * v123;
          v219 = *(_DWORD *)(4 * v123 + v117[8]);
          v124 = v215;
          if ( v120 == v117[1] - 1 )
            ++v117[4];
          if ( !v219 )
            goto LABEL_341;
          v234 = v219 - 8;
          v125 = *(_DWORD *)(v219 - 8);
          if ( v7[19] )
          {
            v125 ^= v7[20];
            v230 = (unsigned int *)v125;
            if ( HIBYTE(v125) != ((unsigned __int8)v125 ^ (unsigned __int8)(BYTE1(v125) ^ BYTE2(v125))) )
            {
              RtlpLogHeapFailure(v234, 0, 0, 0);
              LOWORD(v125) = (_WORD)v230;
            }
            v117 = (_DWORD *)v228;
          }
          if ( (int)(v212 - (unsigned __int16)v125) <= 0 )
LABEL_341:
            *(_DWORD *)(DeferredCriticalSectionEvent + v117[8]) = v93 + 4;
          if ( !v219 )
            *(_DWORD *)(*(_DWORD *)(v228 + 28) + 4 * (v124 >> 5)) |= 1 << (v215 & 0x1F);
        }
      }
      goto LABEL_368;
    }
    if ( v7[19] )
    {
      v134 = *(_DWORD *)v95 ^ v7[20];
      *(_DWORD *)v95 = v134;
      v135 = HIWORD(v134);
      LOBYTE(v135) = v134 ^ BYTE1(v134) ^ BYTE2(v134);
      if ( HIBYTE(v134) != (_BYTE)v135 )
        RtlpAnalyzeHeapFailure(v135);
    }
    v234 = *((_DWORD *)v95 + 2);
    v230 = (unsigned int *)*((_DWORD *)v95 + 3);
    v136 = (unsigned __int16 *)*v230;
    v137 = *(_DWORD *)(v234 + 4);
    if ( *v230 == v137 && v136 == v95 + 4 )
    {
      v7[29] -= *v95;
      v138 = (_DWORD *)v7[45];
      if ( v138 )
      {
        while ( 1 )
        {
          v139 = *v95;
          v140 = v138[1];
          if ( v139 < v140 )
            break;
          if ( !*v138 )
          {
            v139 = v140 - 1;
            break;
          }
          v138 = (_DWORD *)*v138;
        }
        v176[3] = v139;
        RtlpHeapRemoveListEntry((int)v7, v138, 1, (int *)v95 + 2, v139, *v95);
      }
      v141 = v234;
      v142 = v230;
      *v230 = v234;
      *(_DWORD *)(v141 + 4) = v142;
      if ( (v95[1] & 8) == 0 || RtlpCommitBlock(v7, (int)v95) )
      {
        v224 = 1;
        if ( (_BYTE)i )
        {
          v143 = *((_BYTE *)v95 + 2);
          if ( (v143 & 4) != 0 )
          {
            v144 = 8 * *v95 - 16;
            v193 = v144;
            if ( (v143 & 2) != 0 && v144 > 4 )
            {
              v144 -= 4;
              v193 = v144;
            }
            v234 = RtlCompareMemoryUlong(v95 + 8, v144 | 0xFEEEFEEE00000000uLL, *(ULONG *)&v170[8]);
            if ( v234 != v193 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v95, (char *)v95 + v234 + 16);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = (int)v95;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
              i = v189;
            }
          }
        }
        *((_BYTE *)v93 + 2) = *((_BYTE *)v95 + 2);
        v145 = *v95 + v219;
        v230 = (unsigned int *)v145;
        if ( v145 > 0xFE00 )
        {
          RtlpInsertFreeBlock((int)v7, v93, v145);
        }
        else
        {
          *v93 = v145;
          v146 = (unsigned __int16)v145;
          v93[4 * v145 + 2] = v145 ^ *((_WORD *)v7 + 42);
          if ( (_BYTE)i )
          {
            *((_BYTE *)v93 + 2) &= 0xF0u;
            *((_BYTE *)v93 + 7) = 0;
            if ( (v7[16] & 0x40) != 0 )
            {
              *(_DWORD *)&v170[4] = -17891602;
              *(_DWORD *)v170 = 8 * (unsigned __int16)v145 - 16;
              RtlFillMemoryUlong(v93 + 8, *(SIZE_T *)v170, *(ULONG *)&v170[8]);
              *((_BYTE *)v93 + 2) |= 4u;
            }
            v151 = v7 + 48;
            if ( v7[45] )
            {
              v152 = (_DWORD *)RtlpFindEntry((int)v7, v146);
              v151 = v7 + 48;
            }
            else
            {
              v152 = (_DWORD *)*v151;
            }
            while ( v151 != v152 )
            {
              if ( v7[19] )
              {
                v153 = *(v152 - 2);
                v214 = v153;
                if ( (v153 & v7[19]) != 0 )
                {
                  v153 ^= v7[20];
                  v214 = v153;
                }
              }
              else
              {
                LOWORD(v153) = *((_WORD *)v152 - 4);
              }
              v204 = v153;
              if ( v146 <= (unsigned __int16)v153 )
                break;
              v152 = (_DWORD *)*v152;
              v151 = v7 + 48;
            }
            v129 = v93 + 4;
            v154 = (_DWORD *)v152[1];
            if ( (_DWORD *)*v154 == v152 )
            {
              *v129 = v152;
              *((_DWORD *)v93 + 3) = v154;
              *v154 = v129;
              v152[1] = v129;
            }
            else
            {
              RtlpLogHeapFailure(v152, 0, *v154, 0);
            }
            v7[29] += *v93;
            v131 = (_DWORD *)v7[45];
            if ( v131 )
            {
              v132 = *v93;
              while ( 1 )
              {
                if ( v132 < v131[1] )
                {
                  v133 = *v93;
                  goto LABEL_441;
                }
                if ( !*v131 )
                  break;
                v131 = (_DWORD *)*v131;
              }
              v133 = v131[1] - 1;
LABEL_441:
              v176[1] = v133;
LABEL_367:
              RtlpHeapAddListEntry((int)v7, v131, 1, (int)v129, v133, v132);
            }
          }
          else
          {
            *((_BYTE *)v93 + 2) = 0;
            *((_BYTE *)v93 + 7) = 0;
            v147 = v7 + 48;
            if ( v7[45] )
            {
              v148 = (_DWORD *)RtlpFindEntry((int)v7, (unsigned __int16)v145);
              v147 = v7 + 48;
            }
            else
            {
              v148 = (_DWORD *)*v147;
            }
            while ( v147 != v148 )
            {
              if ( v7[19] )
              {
                v149 = *(v148 - 2);
                v218 = v149;
                if ( (v149 & v7[19]) != 0 )
                {
                  v149 ^= v7[20];
                  v218 = v149;
                }
              }
              else
              {
                LOWORD(v149) = *((_WORD *)v148 - 4);
              }
              v203 = v149;
              if ( v146 <= (unsigned __int16)v149 )
                break;
              v148 = (_DWORD *)*v148;
              v147 = v7 + 48;
            }
            v129 = v93 + 4;
            v150 = (_DWORD *)v148[1];
            if ( (_DWORD *)*v150 == v148 )
            {
              *v129 = v148;
              *((_DWORD *)v93 + 3) = v150;
              *v150 = v129;
              v148[1] = v129;
            }
            else
            {
              RtlpLogHeapFailure(v148, 0, *v150, 0);
            }
            v7[29] += *v93;
            v131 = (_DWORD *)v7[45];
            if ( v131 )
            {
              v132 = *v93;
              while ( 1 )
              {
                if ( v132 < v131[1] )
                {
                  v133 = *v93;
                  goto LABEL_418;
                }
                if ( !*v131 )
                  break;
                v131 = (_DWORD *)*v131;
              }
              v133 = v131[1] - 1;
LABEL_418:
              v176[2] = v133;
              goto LABEL_367;
            }
          }
LABEL_368:
          if ( v7[19] )
          {
            *((_BYTE *)v93 + 3) = *(_BYTE *)v93 ^ *((_BYTE *)v93 + 1) ^ *((_BYTE *)v93 + 2);
            *(_DWORD *)v93 ^= v7[20];
          }
        }
        v211 = 1;
        v225 = 0;
        goto LABEL_221;
      }
      RtlpDeCommitFreeBlock(v7, (int)v95, *v95, 1);
    }
    else
    {
      RtlpLogHeapFailure(v95 + 4, v137, v136, 0);
    }
    v224 = 0;
    if ( DeferredCriticalSectionEvent )
      break;
    DeferredCriticalSectionEvent = 1;
    v77 = v219;
  }
  v211 = 0;
  NtCurrentTeb()->LastStatusValue = -1073741764;
  v172 = NtCurrentTeb();
  v172->LastErrorValue = RtlNtStatusToDosError(-1073741764);
LABEL_514:
  ms_exc.registration.TryLevel = -2;
  if ( v229 )
  {
    if ( Destination && !v222 )
      RtlpUpdateHeapWatermarks(v7, 1261210630);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)v7[50]);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v169 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v169 = 2147353480;
  if ( *(_BYTE *)v169 && Destination )
  {
    if ( v222 )
      RtlpHeapLogRangeReserve(*(_DWORD *)(v222 + 20));
  }
  return Destination;
}

/*
 * XREFs of @RtlpFreeHeap@16 @ 0x4B2C3C10
 * Callers:
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0 (_RtlpUnWaitCriticalSectionEx@8.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlpCreateDeferredCriticalSectionEvent@4 @ 0x4B2DFE90 (_RtlpCreateDeferredCriticalSectionEvent@4.c)
 *     @RtlpUpdateHeapRates@8 @ 0x4B2E9CBB (@RtlpUpdateHeapRates@8.c)
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpNotOwnerCriticalSection@4 @ 0x4B34A880 (_RtlpNotOwnerCriticalSection@4.c)
 *     _RtlpUpdateTagEntry@20 @ 0x4B35995E (_RtlpUpdateTagEntry@20.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpLogHeapContractEvent@28 @ 0x4B36EEA8 (_RtlpLogHeapContractEvent@28.c)
 *     _RtlpLogHeapFreeEvent@12 @ 0x4B36F097 (_RtlpLogHeapFreeEvent@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpFreeHeap(unsigned __int16 *BaseAddress, int a2, unsigned __int16 *a3, PVOID BaseAddressa)
{
  _DWORD *v4; // edi
  int v6; // edx
  int v7; // esi
  _DWORD *SharedData; // eax
  int v9; // eax
  unsigned __int16 *v10; // ebx
  int v11; // ecx
  struct _TEB *v12; // edx
  unsigned int v13; // ecx
  _DWORD *i; // eax
  unsigned int v15; // esi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  _BYTE *v18; // esi
  char v19; // al
  unsigned int v20; // eax
  _WORD *v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // ecx
  unsigned __int16 *v25; // esi
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int16 *v28; // eax
  int v29; // ecx
  _DWORD *v30; // edx
  unsigned int v31; // eax
  _DWORD *v32; // ecx
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // eax
  unsigned __int16 *v36; // esi
  unsigned int v37; // ecx
  int v38; // ecx
  int *v39; // eax
  int v40; // ecx
  char v41; // cl
  int v42; // eax
  unsigned int v43; // ebx
  unsigned int *v44; // esi
  unsigned int v45; // edx
  unsigned int v46; // ecx
  int v47; // esi
  unsigned __int16 *v48; // ecx
  int v49; // edx
  _DWORD *v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // esi
  int *v53; // eax
  char v54; // cl
  int v55; // eax
  unsigned int v56; // esi
  unsigned int *v57; // eax
  unsigned __int16 *v58; // ecx
  _DWORD *v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // esi
  unsigned __int16 **v62; // esi
  _DWORD *v63; // eax
  int v64; // edx
  int v65; // eax
  unsigned int v66; // eax
  unsigned __int16 *v67; // esi
  unsigned int v68; // edx
  int v69; // edx
  unsigned __int16 *v70; // eax
  unsigned __int16 **v71; // ecx
  char v72; // cl
  int v73; // eax
  unsigned int v74; // esi
  unsigned int v75; // eax
  int **v76; // edx
  _DWORD *v77; // esi
  unsigned int v78; // ecx
  _DWORD *v79; // eax
  int *v80; // edx
  int *v81; // eax
  int *v82; // ecx
  int v83; // ebx
  unsigned __int16 *v84; // ebx
  int v85; // ecx
  int *v86; // esi
  int v87; // ebx
  unsigned int v88; // edx
  _DWORD *v89; // eax
  unsigned int v90; // ebx
  int v91; // eax
  unsigned int v92; // edx
  int v93; // edx
  int **v94; // edx
  int ***v95; // eax
  unsigned __int16 **v96; // ecx
  unsigned int v97; // esi
  unsigned int v98; // edx
  unsigned __int16 *v99; // eax
  unsigned int v100; // edx
  int v101; // eax
  unsigned int v102; // edx
  int v103; // esi
  int v104; // ebx
  bool v105; // zf
  unsigned __int16 *v106; // eax
  unsigned int v107; // esi
  unsigned __int16 **v108; // eax
  unsigned __int16 *Entry; // edx
  int v110; // ecx
  unsigned __int16 *v111; // eax
  _DWORD *v112; // edx
  unsigned int v113; // ecx
  unsigned int v114; // eax
  char v115; // cl
  unsigned __int16 *v116; // esi
  unsigned __int16 *v117; // ebx
  int v118; // eax
  unsigned __int16 **v119; // ecx
  unsigned __int16 *v120; // edx
  unsigned __int16 *v121; // esi
  int v122; // ebx
  int v123; // ecx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  unsigned int v129; // edx
  unsigned int v130; // ecx
  char v131; // cl
  int v132; // edi
  volatile signed __int32 *v133; // esi
  signed __int32 v134; // ebx
  SIZE_T v135; // [esp-8h] [ebp-158h]
  ULONG v136; // [esp+0h] [ebp-150h]
  int v137; // [esp+54h] [ebp-FCh]
  struct _TEB *v138; // [esp+74h] [ebp-DCh]
  _DWORD v139[2]; // [esp+78h] [ebp-D8h] BYREF
  unsigned int v140; // [esp+80h] [ebp-D0h]
  unsigned int v141; // [esp+84h] [ebp-CCh]
  unsigned int v142; // [esp+88h] [ebp-C8h]
  _DWORD *v143; // [esp+8Ch] [ebp-C4h]
  unsigned int v144; // [esp+90h] [ebp-C0h]
  unsigned int v145; // [esp+94h] [ebp-BCh]
  unsigned __int16 *v146; // [esp+98h] [ebp-B8h]
  unsigned int v147; // [esp+9Ch] [ebp-B4h]
  unsigned int v148; // [esp+A0h] [ebp-B0h]
  unsigned __int16 *v149; // [esp+A4h] [ebp-ACh]
  unsigned int v150; // [esp+A8h] [ebp-A8h]
  unsigned __int16 **v151; // [esp+ACh] [ebp-A4h]
  unsigned int v152; // [esp+B0h] [ebp-A0h]
  unsigned int v153; // [esp+B4h] [ebp-9Ch]
  int v154; // [esp+B8h] [ebp-98h]
  int v155; // [esp+BCh] [ebp-94h]
  int v156; // [esp+C0h] [ebp-90h]
  unsigned int v157; // [esp+C4h] [ebp-8Ch]
  unsigned int v158; // [esp+C8h] [ebp-88h]
  int v159; // [esp+CCh] [ebp-84h]
  int v160; // [esp+D0h] [ebp-80h]
  unsigned __int16 **v161; // [esp+D4h] [ebp-7Ch]
  unsigned int v162; // [esp+D8h] [ebp-78h]
  unsigned int v163; // [esp+DCh] [ebp-74h]
  unsigned int v164; // [esp+E0h] [ebp-70h] BYREF
  __int16 v165; // [esp+E6h] [ebp-6Ah]
  __int16 v166; // [esp+E8h] [ebp-68h]
  char v167; // [esp+EBh] [ebp-65h]
  unsigned __int16 *v168; // [esp+ECh] [ebp-64h]
  int v169; // [esp+F0h] [ebp-60h]
  int *v170; // [esp+F4h] [ebp-5Ch]
  unsigned __int16 *v171; // [esp+F8h] [ebp-58h]
  char v172; // [esp+FEh] [ebp-52h]
  char v173; // [esp+FFh] [ebp-51h]
  int v174; // [esp+100h] [ebp-50h]
  int *j; // [esp+104h] [ebp-4Ch]
  int v176; // [esp+108h] [ebp-48h]
  int v177; // [esp+10Ch] [ebp-44h]
  unsigned __int16 updated; // [esp+114h] [ebp-3Ch]
  char v179; // [esp+118h] [ebp-38h]
  unsigned __int16 **DeferredCriticalSectionEvent; // [esp+11Ch] [ebp-34h]
  int v181; // [esp+120h] [ebp-30h]
  ULONG_PTR v182; // [esp+124h] [ebp-2Ch] BYREF
  char v183; // [esp+12Eh] [ebp-22h]
  char v184; // [esp+12Fh] [ebp-21h]
  unsigned int v185; // [esp+130h] [ebp-20h]
  unsigned int v186; // [esp+134h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+138h] [ebp-18h]

  v4 = BaseAddress;
  v139[1] = BaseAddress;
  v184 = 1;
  v183 = 0;
  v159 = 0;
  v154 = 1;
  v171 = 0;
  v164 = 0;
  v156 = 0;
  updated = 0;
  if ( BaseAddress == a3 )
  {
    RtlpLogHeapFailure(a3, 0, 0, 0);
    return 0;
  }
  v6 = *((_DWORD *)BaseAddress + 17) | a2;
  DeferredCriticalSectionEvent = (unsigned __int16 **)v6;
  if ( (v6 & 0x7D010F60) != 0 )
  {
    v184 = 0;
    v7 = 4;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(BaseAddressa);
  }
  else
  {
    v7 = 3;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    v10 = a3;
    BaseAddress = (unsigned __int16 *)(*((unsigned __int8 *)a3 + 2) ^ (unsigned __int8)BaseAddress[41] & (*((_DWORD *)BaseAddress + 19) >> 17));
    if ( ((unsigned __int8)BaseAddress & 8) == 0 )
    {
      RtlpLogHeapFreeEvent(v7);
      LOBYTE(v6) = (_BYTE)DeferredCriticalSectionEvent;
    }
  }
  else
  {
    v10 = a3;
  }
  ms_exc.registration.TryLevel = 0;
  if ( (v6 & 1) != 0 )
  {
    if ( v4[19] )
    {
      *(_DWORD *)v10 ^= v4[20];
      if ( *((_BYTE *)v10 + 3) != (*(_BYTE *)v10 ^ (unsigned __int8)(*((_BYTE *)v10 + 1) ^ *((_BYTE *)v10 + 2))) )
        RtlpAnalyzeHeapFailure(BaseAddress);
    }
  }
  else
  {
    v11 = v4[50];
    v12 = NtCurrentTeb();
    if ( _interlockedbittestandreset((volatile signed __int32 *)(v11 + 4), 0) )
    {
      *(_DWORD *)(v11 + 12) = v12->ClientId.UniqueThread;
      *(_DWORD *)(v11 + 8) = 1;
      v160 = 1;
      ++v4[133];
    }
    else if ( *(void **)(v11 + 12) == v12->ClientId.UniqueThread )
    {
      ++*(_DWORD *)(v11 + 8);
      v160 = 1;
      ++v4[133];
    }
    else
    {
      v160 = 0;
      if ( byte_4B3A5DA8 )
      {
        v173 = 0;
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v138 = NtCurrentTeb();
        v138->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v154 = 0;
        goto LABEL_346;
      }
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)v4[50]);
      RtlpUpdateHeapRates(v4, 1);
    }
    v173 = 1;
    v183 = 1;
    v10 = a3;
    if ( v4[19] )
    {
      *(_DWORD *)a3 ^= v4[20];
      if ( *((_BYTE *)a3 + 3) != (*(_BYTE *)a3 ^ (unsigned __int8)(*((_BYTE *)a3 + 1) ^ *((_BYTE *)a3 + 2))) )
        RtlpAnalyzeHeapFailure(v11);
    }
    v13 = *a3;
    for ( i = (_DWORD *)v4[45]; ; i = (_DWORD *)*i )
    {
      v15 = i[1];
      if ( v13 < v15 )
      {
        v153 = *a3;
        v16 = v13;
        goto LABEL_33;
      }
      if ( !*i )
        break;
    }
    v16 = v15 - 1;
    v153 = v15 - 1;
LABEL_33:
    if ( v16 < v15 && v13 == v16 )
    {
      v17 = v13 - i[5];
      if ( i[2] )
        v17 *= 2;
      v159 = i[8] + 4 * v17;
    }
    else
    {
      v159 = 0;
    }
  }
  v18 = v10 + 1;
  v19 = *((_BYTE *)v10 + 2);
  if ( (v19 & 8) != 0 )
    *v18 = v19 & 0xF7;
  if ( *((_BYTE *)v10 + 7) == 4 )
  {
    v117 = v10 - 12;
    v171 = v117;
    v155 = *((_DWORD *)v117 + 4);
    v164 = (unsigned int)v117 & 0xFFFF0000;
    v4[128] -= v155;
    v118 = *(_DWORD *)v117;
    v119 = (unsigned __int16 **)*((_DWORD *)v117 + 1);
    v120 = *v119;
    v121 = *(unsigned __int16 **)(*(_DWORD *)v117 + 4);
    if ( *v119 == v121 && v120 == v117 )
    {
      *v119 = (unsigned __int16 *)v118;
      *(_DWORD *)(v118 + 4) = v119;
    }
    else
    {
      RtlpLogHeapFailure(v117, v121, v120, 0);
    }
    if ( !v184 && (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      RtlpUpdateTagEntry(*((_DWORD *)v117 + 4) >> 3, 0, 3);
    if ( v183 )
    {
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)v4[50]);
      v183 = 0;
    }
    v122 = *((_DWORD *)v171 + 5);
    v156 = v122;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v124 = (int)NtCurrentPeb()->SharedData + 558;
      v122 = v156;
    }
    else
    {
      v124 = 2147353480;
    }
    if ( *(_BYTE *)v124 )
      RtlpHeapLogRangeRelease(v122);
    LODWORD(v182) = 0;
    RtlpSecMemFreeVirtualMemory(v123, (PVOID *)&v164, &v182, 0x8000u);
    if ( RtlGetCurrentServiceSessionId() )
      v125 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v125 = 2147353472;
    if ( *(_BYTE *)v125 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v126 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v126 = 2147353472;
      RtlpLogHeapContractEvent(v155, 8 * v4[29], 0, 0, (HANDLE)*(unsigned __int8 *)v126);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v127 = (int)NtCurrentPeb()->SharedData + 560;
    else
      v127 = 2147353482;
    if ( *(_BYTE *)v127 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v128 = (int)NtCurrentPeb()->SharedData + 560;
      else
        v128 = 2147353482;
      RtlpLogHeapContractEvent(v155, 8 * v4[29], 0, 0, (HANDLE)*(unsigned __int8 *)v128);
    }
    v140 = (unsigned int)v182 >> 3;
    goto LABEL_346;
  }
  v20 = *v10;
  if ( (unsigned __int16)v20 < *((_WORD *)v4 + 120) )
  {
    v10 = a3;
    if ( ((unsigned __int8)(1 << (v20 & 7)) & *((_BYTE *)v4 + (v20 >> 3) + 242)) == 0 )
    {
      v21 = (_WORD *)(v4[59] + 2 * *a3);
      v22 = (unsigned __int16)*v21;
      if ( v22 > 1 )
        *v21 = v22 - 1;
    }
  }
  if ( !v184 )
  {
    v10 = a3;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      if ( (*v18 & 2) == 0 )
        v167 = *((_BYTE *)a3 + 3);
      updated = RtlpUpdateTagEntry(*a3, 0, 2);
    }
  }
  v23 = *v10;
  LODWORD(v182) = v23;
  v140 = v23;
  if ( *((char *)v4 + 64) < 0 )
    goto LABEL_188;
  v179 = 0;
  v149 = v10;
  v24 = 8 * (v10[2] ^ *((unsigned __int16 *)v4 + 42));
  v25 = &v10[v24 / 0xFFFFFFFE];
  HIDWORD(v182) = &v10[v24 / 0xFFFFFFFE];
  if ( &v10[v24 / 0xFFFFFFFE] == v10
    || ((*((_BYTE *)v25 + 2) ^ (unsigned __int8)(*((_BYTE *)v4 + 82) & (v4[19] >> 20))) & 1) != 0 )
  {
    goto LABEL_107;
  }
  if ( v4[19] )
  {
    v26 = *(_DWORD *)v25 ^ v4[20];
    *(_DWORD *)v25 = v26;
    v27 = HIWORD(v26);
    LOBYTE(v27) = v26 ^ BYTE1(v26) ^ BYTE2(v26);
    if ( HIBYTE(v26) != (_BYTE)v27 )
      RtlpAnalyzeHeapFailure(v27);
  }
  v168 = v25 + 4;
  v170 = (int *)*((_DWORD *)v25 + 2);
  v177 = *((_DWORD *)v25 + 3);
  v28 = *(unsigned __int16 **)v177;
  v29 = v170[1];
  if ( *(_DWORD *)v177 == v29 && v28 == v25 + 4 )
  {
    v4[29] -= *v25;
    v30 = (_DWORD *)v4[45];
    v186 = (unsigned int)v30;
    if ( !v30 )
      goto LABEL_84;
    v31 = *v25;
    v163 = v31;
    while ( v31 >= v30[1] )
    {
      v32 = (_DWORD *)*v30;
      if ( !*v30 )
      {
        v31 = v30[1] - 1;
        break;
      }
      v30 = (_DWORD *)*v30;
      v186 = (unsigned int)v32;
    }
    v152 = v31;
    v181 = v31;
    v33 = v31 - v30[5];
    j = (int *)v33;
    v34 = 2 * v33;
    if ( !v30[2] )
      v34 = v33;
    v174 = 4 * v34;
    DeferredCriticalSectionEvent = (unsigned __int16 **)(4 * v34 + v30[8]);
    v146 = *DeferredCriticalSectionEvent;
    --v30[3];
    v185 = v30[1];
    v161 = (unsigned __int16 **)(v185 - 1);
    v35 = v181;
    v25 = (unsigned __int16 *)HIDWORD(v182);
    if ( v181 == v185 - 1 )
      --v30[4];
    if ( v146 != v25 + 4 )
      goto LABEL_84;
    v151 = (unsigned __int16 **)v30[1];
    if ( !*v30 )
    {
      v185 = (unsigned int)v161;
      v151 = v161;
    }
    v36 = *(unsigned __int16 **)v168;
    v168 = (unsigned __int16 *)v30[6];
    v37 = (unsigned int)j;
    if ( v35 >= v185 )
    {
      if ( v36 != v168 )
      {
        *DeferredCriticalSectionEvent = v36;
        goto LABEL_83;
      }
      *DeferredCriticalSectionEvent = 0;
    }
    else
    {
      if ( v36 != (unsigned __int16 *)v30[6] )
      {
        v38 = *((_DWORD *)v36 - 2);
        if ( v4[19] )
        {
          v185 = v38 ^ v4[20];
          if ( HIBYTE(v185) != ((unsigned __int8)v185 ^ (unsigned __int8)(BYTE1(v185) ^ BYTE2(v185))) )
          {
            RtlpLogHeapFailure(v36 - 4, 0, 0, 0);
            v30 = (_DWORD *)v186;
          }
          LOWORD(v38) = v185;
        }
        if ( v163 == (unsigned __int16)v38 )
        {
          *(_DWORD *)(v174 + v30[8]) = v36;
LABEL_83:
          v25 = (unsigned __int16 *)HIDWORD(v182);
LABEL_84:
          v39 = v170;
          v40 = v177;
          *(_DWORD *)v177 = v170;
          v39[1] = v40;
          if ( (v25[1] & 8) == 0 || RtlpCommitBlock(v4, (int)v25) )
          {
            v41 = *((_BYTE *)v25 + 2);
            if ( (v41 & 4) != 0 )
            {
              v42 = *v25;
              v43 = 8 * v42 - 16;
              v150 = v43;
              if ( (v41 & 2) != 0 && v43 > 4 )
              {
                v43 = 8 * v42 - 20;
                v150 = v43;
              }
              v177 = RtlCompareMemoryUlong(v25 + 8, v43 | 0xFEEEFEEE00000000uLL, v136);
              if ( v177 != v43 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v25, (char *)v25 + v177 + 16);
                if ( NtCurrentPeb()->BeingDebugged )
                {
                  RtlpHeapInvalidBadAddress = (int)v25;
                  __debugbreak();
                  RtlpHeapInvalidBreakPoint = 0;
                }
              }
            }
            *((_BYTE *)v25 + 2) = 0;
            *((_BYTE *)v25 + 7) = 0;
            v10 = v25;
            v149 = v25;
            LODWORD(v182) = *v25 + (_DWORD)v182;
            *v25 = v182;
            v25[4 * (_DWORD)v182 + 2] = v182 ^ *((_WORD *)v4 + 42);
          }
          else
          {
            RtlpDeCommitFreeBlock(v4, (int)v25, *v25, 1);
          }
          goto LABEL_106;
        }
        v37 = (unsigned int)j;
      }
      *(_DWORD *)(v174 + v30[8]) = 0;
    }
    *(_DWORD *)(*(_DWORD *)(v186 + 28) + 4 * (v37 >> 5)) &= ~(1 << (v37 & 0x1F));
    goto LABEL_83;
  }
  RtlpLogHeapFailure(v25 + 4, v29, v28, 0);
LABEL_106:
  v23 = v182;
LABEL_107:
  v44 = (unsigned int *)&v10[4 * v23];
  v185 = (unsigned int)v44;
  if ( v4[19] )
  {
    if ( (*v44 ^ v4[20]) >> 24 != ((unsigned __int8)(*(_BYTE *)v44 ^ *((_BYTE *)v4 + 80)) ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)v44 ^ *((_WORD *)v4 + 40)) >> 8) ^ ((*v44 ^ v4[20]) >> 16))) )
    {
      v172 = 0;
      RtlpLogHeapFailure(v44, 0, 0, 0);
      v23 = v182;
      goto LABEL_112;
    }
    v23 = v182;
  }
  v172 = 1;
LABEL_112:
  while ( ((*((_BYTE *)v44 + 2) ^ (unsigned __int8)(*((_BYTE *)v4 + 82) & (v4[19] >> 20))) & 1) == 0 )
  {
    if ( v4[19] )
    {
      v45 = *v44 ^ v4[20];
      *v44 = v45;
      v46 = HIWORD(v45);
      LOBYTE(v46) = v45 ^ BYTE1(v45) ^ BYTE2(v45);
      if ( HIBYTE(v45) != (_BYTE)v46 )
        RtlpAnalyzeHeapFailure(v46);
    }
    if ( v179 )
    {
      v47 = *((_DWORD *)v10 + 2);
      v177 = v47;
      v170 = (int *)*((_DWORD *)v10 + 3);
      v48 = (unsigned __int16 *)*v170;
      v49 = *(_DWORD *)(v47 + 4);
      if ( *v170 == v49 && v48 == v10 + 4 )
      {
        v4[29] -= *v10;
        v50 = (_DWORD *)v4[45];
        if ( v50 )
        {
          v51 = *v10;
          while ( 1 )
          {
            v52 = v50[1];
            if ( v51 < v52 )
              break;
            if ( !*v50 )
            {
              v51 = v52 - 1;
              break;
            }
            v50 = (_DWORD *)*v50;
          }
          v148 = v51;
          RtlpHeapRemoveListEntry((int)v4, v50, 1, (int *)v10 + 2, v51, *v10);
          v47 = v177;
        }
        v53 = v170;
        *v170 = v47;
        *(_DWORD *)(v47 + 4) = v53;
        if ( (v10[1] & 8) == 0 || RtlpCommitBlock(v4, (int)v10) )
        {
          v54 = *((_BYTE *)v10 + 2);
          if ( (v54 & 4) != 0 )
          {
            v55 = *v10;
            v56 = 8 * v55 - 16;
            v147 = v56;
            if ( (v54 & 2) != 0 && v56 > 4 )
            {
              v56 = 8 * v55 - 20;
              v147 = v56;
            }
            v177 = RtlCompareMemoryUlong(v10 + 8, v56 | 0xFEEEFEEE00000000uLL, v136);
            if ( v177 != v56 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v10, (char *)v10 + v177 + 16);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = (int)v10;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(v4, (int)v10, *v10, 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(v10 + 4, v49, v48, 0);
      }
      v179 = 0;
      v44 = (unsigned int *)v185;
    }
    v177 = (int)(v44 + 2);
    v168 = (unsigned __int16 *)v44[2];
    v161 = (unsigned __int16 **)v44[3];
    v57 = (unsigned int *)*v161;
    v58 = (unsigned __int16 *)*((_DWORD *)v168 + 1);
    if ( *v161 != v58 || v57 != v44 + 2 )
    {
      RtlpLogHeapFailure(v44 + 2, v58, v57, 0);
      goto LABEL_192;
    }
    v4[29] -= *(unsigned __int16 *)v44;
    v59 = (_DWORD *)v4[45];
    v186 = (unsigned int)v59;
    if ( v59 )
    {
      v60 = *(unsigned __int16 *)v44;
      for ( j = (int *)v60; ; v60 = (unsigned int)j )
      {
        v61 = v59[1];
        if ( v60 < v61 )
        {
          v162 = v60;
          v62 = (unsigned __int16 **)v60;
          goto LABEL_149;
        }
        v63 = (_DWORD *)*v59;
        if ( !*v59 )
          break;
        v59 = (_DWORD *)*v59;
        v186 = (unsigned int)v63;
      }
      v62 = (unsigned __int16 **)(v61 - 1);
      v162 = (unsigned int)v62;
LABEL_149:
      DeferredCriticalSectionEvent = v62;
      v64 = (int)v62 - v59[5];
      HIDWORD(v182) = v64;
      v65 = 2 * v64;
      if ( !v59[2] )
        v65 = v64;
      v174 = 4 * v65;
      v181 = 4 * v65 + v59[8];
      v170 = *(int **)v181;
      --v59[3];
      v66 = v59[1];
      v163 = v66 - 1;
      if ( v62 == (unsigned __int16 **)(v66 - 1) )
        --v59[4];
      if ( v170 != (int *)v177 )
        goto LABEL_164;
      v145 = v66;
      if ( !*v59 )
      {
        v66 = v163;
        v145 = v163;
      }
      v67 = *(unsigned __int16 **)v177;
      v177 = v59[6];
      v68 = HIDWORD(v182);
      if ( (unsigned int)DeferredCriticalSectionEvent >= v66 )
      {
        if ( v67 != (unsigned __int16 *)v177 )
        {
          *(_DWORD *)v181 = v67;
          goto LABEL_164;
        }
        *(_DWORD *)v181 = 0;
      }
      else
      {
        if ( v67 != (unsigned __int16 *)v59[6] )
        {
          v69 = *((_DWORD *)v67 - 2);
          if ( v4[19] )
          {
            v69 ^= v4[20];
            v177 = v69;
            if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(BYTE1(v69) ^ BYTE2(v69))) )
            {
              RtlpLogHeapFailure(v67 - 4, 0, 0, 0);
              LOWORD(v69) = v177;
            }
            v59 = (_DWORD *)v186;
          }
          if ( j == (int *)(unsigned __int16)v69 )
          {
            *(_DWORD *)(v174 + v59[8]) = v67;
LABEL_164:
            v44 = (unsigned int *)v185;
            goto LABEL_165;
          }
          v68 = HIDWORD(v182);
        }
        *(_DWORD *)(v174 + v59[8]) = 0;
      }
      HIDWORD(v182) = v68 & 0x1F;
      *(_DWORD *)(*(_DWORD *)(v186 + 28) + 4 * (v68 >> 5)) &= ~(1 << (v68 & 0x1F));
      goto LABEL_164;
    }
LABEL_165:
    v70 = v168;
    v71 = v161;
    *v161 = v168;
    *((_DWORD *)v70 + 1) = v71;
    if ( (*((_BYTE *)v44 + 2) & 8) == 0 || RtlpCommitBlock(v4, (int)v44) )
    {
      v72 = *((_BYTE *)v44 + 2);
      if ( (v72 & 4) != 0 )
      {
        v73 = *(unsigned __int16 *)v44;
        v74 = 8 * v73 - 16;
        v144 = v74;
        if ( (v72 & 2) != 0 && v74 > 4 )
        {
          v74 = 8 * v73 - 20;
          v144 = v74;
        }
        v177 = RtlCompareMemoryUlong((PVOID)(v185 + 16), v74 | 0xFEEEFEEE00000000uLL, v136);
        if ( v177 == v74 )
        {
          v44 = (unsigned int *)v185;
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          v44 = (unsigned int *)v185;
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v185,
            (const void *)(v185 + v177 + 16));
          if ( NtCurrentPeb()->BeingDebugged )
          {
            RtlpHeapInvalidBadAddress = v185;
            __debugbreak();
            RtlpHeapInvalidBreakPoint = 0;
          }
        }
      }
      *((_BYTE *)v10 + 2) = 0;
      *((_BYTE *)v10 + 7) = 0;
      LODWORD(v182) = *(unsigned __int16 *)v44 + (_DWORD)v182;
      *v10 = v182;
      v10[4 * (_DWORD)v182 + 2] = v182 ^ *((_WORD *)v4 + 42);
      v23 = v182;
      break;
    }
    RtlpDeCommitFreeBlock(v4, (int)v44, *(unsigned __int16 *)v44, 1);
LABEL_192:
    v23 = v182;
  }
  a3 = v10;
LABEL_188:
  if ( v23 < v4[27] || v23 + v4[29] < v4[28] )
  {
    if ( v23 + v4[29] > v4[28] && v23 >= 0x200 && *((_WORD *)v4 + 42) == v10[2] )
    {
      RtlpDeCommitFreeBlock(v4, (int)v10, v23, 0);
      updated = 0;
    }
    else
    {
      if ( v23 > 0xFE00 )
      {
        RtlpInsertFreeBlock((int)v4, v10, v23);
      }
      else
      {
        if ( v184 )
        {
          v75 = (unsigned __int16)v23;
          v186 = (unsigned __int16)v23;
          *((_BYTE *)v10 + 2) = 0;
          *((_BYTE *)v10 + 7) = 0;
          v76 = (int **)(v4 + 48);
          v77 = (_DWORD *)v4[45];
          HIDWORD(v182) = v77;
          if ( v77 )
          {
            while ( 1 )
            {
              v78 = v77[1];
              if ( v75 < v78 )
                break;
              v79 = (_DWORD *)*v77;
              if ( !*v77 )
              {
                v75 = v78 - 1;
                goto LABEL_203;
              }
              v77 = (_DWORD *)*v77;
              HIDWORD(v182) = v79;
              v75 = v186;
            }
            while ( 1 )
            {
LABEL_203:
              v181 = v75;
              v157 = v75;
              v185 = v75 - v77[5];
              v170 = 0;
              v80 = (int *)v77[6];
              j = v80;
              v81 = (int *)v80[1];
              if ( v80 == v81 )
              {
                v82 = v80;
              }
              else
              {
                v177 = (int)(v81 - 2);
                v83 = *(v81 - 2);
                if ( v4[19] )
                {
                  v83 ^= v4[20];
                  if ( HIBYTE(v83) != ((unsigned __int8)v83 ^ (unsigned __int8)(BYTE1(v83) ^ BYTE2(v83))) )
                  {
                    RtlpLogHeapFailure(v177, 0, 0, 0);
                    v80 = j;
                  }
                }
                if ( (int)(v186 - (unsigned __int16)v83) <= 0 )
                {
                  v177 = *v80 - 8;
                  v84 = *(unsigned __int16 **)v177;
                  if ( v4[19] )
                  {
                    v84 = (unsigned __int16 *)(v4[20] ^ (unsigned int)v84);
                    if ( HIBYTE(v84) != ((unsigned __int8)v84 ^ (unsigned __int8)(BYTE1(v84) ^ BYTE2(v84))) )
                    {
                      RtlpLogHeapFailure(v177, 0, 0, 0);
                      v80 = j;
                    }
                  }
                  if ( (int)(v186 - (unsigned __int16)v84) > 0 )
                  {
                    if ( *v77 || v181 != v77[1] - 1 )
                    {
                      v88 = v185 >> 5;
                      v162 = ((unsigned int)(v77[1] - v77[5]) >> 5) - 1;
                      v89 = (_DWORD *)(v77[7] + 4 * (v185 >> 5));
                      v90 = *v89 & (-1 << (v185 & 0x1F));
                      while ( 1 )
                      {
                        v143 = v89;
                        v158 = v88;
                        if ( v90 )
                          break;
                        if ( v88 > v162 )
                        {
                          v10 = a3;
                          goto LABEL_246;
                        }
                        v90 = *++v89;
                        ++v88;
                      }
                      if ( (_WORD)v90 )
                      {
                        if ( (_BYTE)v90 )
                          v91 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v90];
                        else
                          v91 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v90)] + 8;
                      }
                      else if ( BYTE2(v90) )
                      {
                        v91 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v90)] + 16;
                      }
                      else
                      {
                        v91 = (unsigned __int8)RtlpBitsClearLow[HIBYTE(v90)] + 24;
                      }
                      v92 = v91 + 32 * v88;
                      v158 = v92;
                      if ( v77[2] )
                        v92 *= 2;
                      v82 = *(int **)(v77[8] + 4 * v92);
                    }
                    else
                    {
                      v85 = v185;
                      if ( v77[2] )
                        v85 = 2 * v185;
                      v86 = *(int **)(v77[8] + 4 * v85);
                      while ( v80 != v86 )
                      {
                        v87 = *(v86 - 2);
                        if ( v4[19] )
                        {
                          v87 ^= v4[20];
                          if ( HIBYTE(v87) != ((unsigned __int8)v87 ^ (unsigned __int8)(BYTE1(v87) ^ BYTE2(v87))) )
                            RtlpLogHeapFailure(v86 - 2, 0, 0, 0);
                        }
                        if ( (int)(v186 - (unsigned __int16)v87) <= 0 )
                        {
                          v82 = v86;
                          v77 = (_DWORD *)HIDWORD(v182);
                          goto LABEL_243;
                        }
                        v86 = (int *)*v86;
                        v80 = j;
                      }
                      v82 = v170;
                      v77 = (_DWORD *)HIDWORD(v182);
                    }
                  }
                  else
                  {
                    v82 = (int *)*v80;
                  }
                }
                else
                {
                  v82 = v80;
                }
LABEL_243:
                v10 = a3;
              }
              if ( v82 )
                break;
LABEL_246:
              v77 = (_DWORD *)*v77;
              HIDWORD(v182) = v77;
              v75 = v77[5];
            }
            v76 = (int **)(v4 + 48);
          }
          else
          {
            v82 = *v76;
          }
          while ( v76 != (int **)v82 )
          {
            if ( v4[19] )
            {
              v93 = *(v82 - 2);
              v176 = v93;
              if ( (v93 & v4[19]) != 0 )
              {
                v93 ^= v4[20];
                v176 = v93;
              }
              v166 = v93;
              v10 = a3;
            }
            else
            {
              LOWORD(v93) = *((_WORD *)v82 - 4);
              v166 = v93;
            }
            if ( v186 <= (unsigned __int16)v93 )
              break;
            v82 = (int *)*v82;
            v76 = (int **)(v4 + 48);
          }
          v94 = (int **)(v10 + 4);
          v170 = (int *)(v10 + 4);
          v95 = (int ***)v82[1];
          if ( *v95 == (int **)v82 )
          {
            *v94 = v82;
            *((_DWORD *)v10 + 3) = v95;
            *v95 = v94;
            v82[1] = (int)v94;
          }
          else
          {
            RtlpLogHeapFailure(v82, 0, *v95, 0);
          }
          v4[29] += *v10;
          v96 = (unsigned __int16 **)v4[45];
          v181 = (int)v96;
          if ( v96 )
          {
            v97 = *v10;
            while ( 1 )
            {
              v98 = (unsigned int)v96[1];
              if ( v97 < v98 )
                break;
              v99 = *v96;
              if ( !*v96 )
              {
                v97 = v98 - 1;
                break;
              }
              v96 = (unsigned __int16 **)*v96;
              v181 = (int)v99;
            }
            v142 = v97;
            v177 = *v10;
            v100 = v97 - (_DWORD)v96[5];
            v186 = v100;
            v101 = 2 * v100;
            if ( !v96[2] )
              v101 = v100;
            v96[3] = (unsigned __int16 *)((char *)v96[3] + 1);
            DeferredCriticalSectionEvent = (unsigned __int16 **)(4 * v101);
            v174 = *(_DWORD *)&v96[8][2 * v101];
            v102 = v186;
            if ( (unsigned __int16 *)v97 == (unsigned __int16 *)((char *)v96[1] - 1) )
              v96[4] = (unsigned __int16 *)((char *)v96[4] + 1);
            v103 = v174;
            if ( !v174 )
              goto LABEL_275;
            v104 = *(_DWORD *)(v174 - 8);
            if ( v4[19] )
            {
              v104 ^= v4[20];
              if ( HIBYTE(v104) != ((unsigned __int8)v104 ^ (unsigned __int8)(BYTE1(v104) ^ BYTE2(v104))) )
              {
                RtlpLogHeapFailure(v174 - 8, 0, 0, 0);
                v96 = (unsigned __int16 **)v181;
              }
              v102 = v186;
            }
            v137 = v177 - (unsigned __int16)v104;
            v105 = v177 == (unsigned __int16)v104;
            v10 = a3;
            if ( v137 < 0 || v105 )
            {
LABEL_275:
              v106 = v96[8];
              v96 = DeferredCriticalSectionEvent;
              *(_DWORD *)((char *)v106 + (_DWORD)DeferredCriticalSectionEvent) = v170;
              v103 = v174;
            }
            if ( !v103 )
            {
              v186 = v102 & 0x1F;
              v96 = (unsigned __int16 **)v186;
              *(_DWORD *)(*(_DWORD *)(v181 + 28) + 4 * (v102 >> 5)) |= 1 << (v102 & 0x1F);
            }
          }
        }
        else
        {
          v107 = (unsigned __int16)v23;
          *((_BYTE *)v10 + 2) &= 0xF0u;
          *((_BYTE *)v10 + 7) = 0;
          if ( (v4[16] & 0x40) != 0 )
          {
            HIDWORD(v135) = -17891602;
            LODWORD(v135) = 8 * (unsigned __int16)v23 - 16;
            RtlFillMemoryUlong(v10 + 8, v135, v136);
            *((_BYTE *)v10 + 2) |= 4u;
          }
          v108 = (unsigned __int16 **)(v4 + 48);
          if ( v4[45] )
          {
            Entry = (unsigned __int16 *)RtlpFindEntry((int)v4, v107);
            v108 = (unsigned __int16 **)(v4 + 48);
          }
          else
          {
            Entry = *v108;
          }
          while ( v108 != (unsigned __int16 **)Entry )
          {
            if ( v4[19] )
            {
              v110 = *((_DWORD *)Entry - 2);
              v169 = v110;
              if ( (v110 & v4[19]) != 0 )
              {
                v110 ^= v4[20];
                v169 = v110;
              }
              v165 = v110;
              v10 = a3;
            }
            else
            {
              LOWORD(v110) = *(Entry - 4);
              v165 = v110;
            }
            if ( v107 <= (unsigned __int16)v110 )
              break;
            Entry = *(unsigned __int16 **)Entry;
            v108 = (unsigned __int16 **)(v4 + 48);
          }
          v111 = v10 + 4;
          v96 = (unsigned __int16 **)*((_DWORD *)Entry + 1);
          if ( *v96 == Entry )
          {
            *(_DWORD *)v111 = Entry;
            *((_DWORD *)v10 + 3) = v96;
            *v96 = v111;
            *((_DWORD *)Entry + 1) = v111;
          }
          else
          {
            RtlpLogHeapFailure(Entry, 0, *v96, 0);
          }
          v4[29] += *v10;
          v112 = (_DWORD *)v4[45];
          if ( v112 )
          {
            v113 = *v10;
            while ( 1 )
            {
              v114 = v112[1];
              if ( v113 < v114 )
                break;
              if ( !*v112 )
              {
                v113 = v114 - 1;
                break;
              }
              v112 = (_DWORD *)*v112;
            }
            v141 = v113;
            RtlpHeapAddListEntry((int)v4, v112, 1, (int)(v10 + 4), v113, *v10);
          }
        }
        if ( v4[19] )
        {
          *((_BYTE *)v10 + 3) = *(_BYTE *)v10 ^ *((_BYTE *)v10 + 1) ^ *((_BYTE *)v10 + 2);
          *(_DWORD *)v10 ^= v4[20];
        }
      }
      if ( updated )
      {
        if ( v4[19] )
        {
          *(_DWORD *)v10 ^= v4[20];
          if ( *((_BYTE *)v10 + 3) != (*(_BYTE *)v10 ^ (unsigned __int8)(*((_BYTE *)v10 + 1) ^ *((_BYTE *)v10 + 2))) )
            RtlpAnalyzeHeapFailure(v96);
        }
        v115 = *((_BYTE *)v10 + 2) | 2;
        *((_BYTE *)v10 + 2) = v115;
        v116 = &v10[4 * *v10];
        if ( v4[19] )
        {
          *((_BYTE *)v10 + 3) = *(_BYTE *)v10 ^ v115 ^ *((_BYTE *)v10 + 1);
          *(_DWORD *)v10 ^= v4[20];
        }
        *(v116 - 2) = updated;
        *(v116 - 1) = 0;
        if ( (v4[16] & 0x8000000) != 0 )
          *(v116 - 1) = RtlLogStackBackTraceEx(1);
      }
    }
  }
  else
  {
    RtlpDeCommitFreeBlock(v4, (int)v10, v23, 0);
  }
LABEL_346:
  ms_exc.registration.TryLevel = -2;
  if ( v183 )
  {
    if ( (v4[17] & 0x1000000) == 0 )
    {
      ++v4[139];
      v129 = v4[141];
      if ( v4[139] > v129 )
      {
        v4[139] = 0;
        v130 = v4[126] - 8 * v4[29];
        if ( v130 > v4[146] )
          v4[146] = v130;
        v4[147] = v130;
      }
      if ( ++v4[142] >= 0x1000u )
      {
        if ( *((_BYTE *)v4 + 234) != 2 || (v131 = 4, v4[143] <= 0x10u) )
          v131 = 8;
        if ( v4[140] > (unsigned int)(4096 >> v131) && v129 < 0x10000 )
          v4[141] = 2 * v129;
        v4[140] = 0;
        v4[142] = 0;
      }
    }
    v132 = v4[50];
    v105 = (*(_DWORD *)(v132 + 8))-- == 1;
    if ( v105 )
    {
      *(_DWORD *)(v132 + 12) = 0;
      v133 = (volatile signed __int32 *)(v132 + 4);
      v134 = _InterlockedCompareExchange((volatile signed __int32 *)(v132 + 4), -1, -2);
      if ( v134 != -2 )
      {
        if ( (*(_BYTE *)v133 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v132);
        DeferredCriticalSectionEvent = *(unsigned __int16 ***)(v132 + 16);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (unsigned __int16 **)RtlpCreateDeferredCriticalSectionEvent(v132);
        v139[0] = 0;
        while ( _InterlockedCompareExchange(v133, (v134 & 2 | 1) + v134, v134) != v134 )
        {
          RtlBackoff(v139);
          v134 = *v133;
        }
        if ( (v134 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v132, DeferredCriticalSectionEvent, 1261195226);
      }
    }
  }
  return v154;
}

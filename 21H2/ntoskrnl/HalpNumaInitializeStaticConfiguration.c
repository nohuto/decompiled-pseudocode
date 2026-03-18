/*
 * XREFs of HalpNumaInitializeStaticConfiguration @ 0x140AFA274
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140AF968C (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BF104 (HalpMmAllocateMemoryInternal.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140AFA320 (HalpInitializeConfigurationFromMadt.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140AFA5EC (HalpChannelInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140AFA63C (HalpAllocateNumaConfigData.c)
 *     HalpGetAvailableProximityId @ 0x140B4C370 (HalpGetAvailableProximityId.c)
 *     HalpGetNumaProcMemoryCount @ 0x140B4C3F8 (HalpGetNumaProcMemoryCount.c)
 *     HalpNumaSortProcessors @ 0x140B4C81C (HalpNumaSortProcessors.c)
 *     HalpUpdateConfigurationFromMsct @ 0x140B4C8B8 (HalpUpdateConfigurationFromMsct.c)
 *     HalpVerifySratEntryLengthAndFlag @ 0x140B4CC80 (HalpVerifySratEntryLengthAndFlag.c)
 */

void *__fastcall HalpNumaInitializeStaticConfiguration(__int64 a1)
{
  __int64 v1; // r14
  void *result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  char v11; // r12
  int v12; // r13d
  __int64 v13; // r10
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // r11
  int v20; // r8d
  __int64 v21; // r11
  __int64 v22; // r9
  unsigned int v23; // ecx
  int v24; // r11d
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r11
  unsigned int v40; // r10d
  unsigned int v41; // ecx
  __int64 Table; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // r11d
  unsigned int v48; // r10d
  unsigned int v49; // ebx
  int v50; // ebx
  unsigned int v51; // edi
  __int16 v52; // ax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // r9
  __int64 v56; // rax
  unsigned int *v57; // rdi
  unsigned int *v58; // r14
  int v59; // ebx
  unsigned int v60; // r10d
  _QWORD *v61; // rsi
  unsigned int v62; // r11d
  unsigned int v63; // edx
  unsigned int v64; // r11d
  unsigned int v65; // r8d
  unsigned int v66; // edx
  __int16 v67; // ax
  __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rbx
  unsigned int v72; // edi
  unsigned int i; // esi
  int v74; // r15d
  int AvailableProximityId; // eax
  __int64 v76; // r11
  int v77; // r12d
  __int64 v78; // rcx
  unsigned int v79; // r10d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r10
  bool v84; // zf
  unsigned int v85; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v86; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v87[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int8 v89; // [rsp+B0h] [rbp+58h]
  unsigned int v90; // [rsp+B8h] [rbp+60h] BYREF

  HalpNumaInitializationComplete = 1;
  v90 = 0;
  v87[0] = 0;
  v85 = 0;
  v86 = 0;
  v1 = a1;
  HalpAcpiMpst = HalpAcpiGetTable(a1, 1414746189, 0, 0);
  HalpAcpiSrat = HalpAcpiGetTable(v1, 1413567059, 0, 0);
  HalpAcpiMsct = HalpAcpiGetTable(v1, 1413698381, 0, 0);
  if ( !HalpAcpiSrat )
    return (void *)HalpInitializeConfigurationFromMadt(v1);
  v89 = *(_BYTE *)(HalpAcpiSrat + 8);
  result = (void *)HalpGetNumaProcMemoryCount(v87, &v86, &v85, &v90);
  if ( (_BYTE)result )
  {
    v3 = v85;
    v4 = v86;
    result = (void *)HalpAllocateNumaConfigData(v87[0], v86, v85, v90);
    if ( HalpNumaConfig )
    {
      if ( !v3
        || (result = (void *)HalpMmAllocateMemoryInternal(24 * v3, 1u), (HalpNumaSratMemoryRanges = result) != 0LL) )
      {
        v6 = 0;
        if ( v4 )
        {
          if ( v4 >= 4 )
          {
            v5 = HalpNumaConfig;
            if ( *(_QWORD *)HalpNumaConfig > (unsigned __int64)HalpNumaConfig
              || *(_QWORD *)HalpNumaConfig + 4 * (unsigned __int64)(v4 - 1) < HalpNumaConfig )
            {
              v7 = v4 & 0xFFFFFFFC;
              do
                v6 += 4;
              while ( v6 < v7 );
              memset(*(void **)HalpNumaConfig, -1, 16 * ((unsigned __int64)v7 >> 2));
            }
          }
          if ( v6 < v4 )
          {
            v5 = 4LL * v6;
            v8 = v4 - v6;
            do
            {
              *(_DWORD *)(v5 + *(_QWORD *)HalpNumaConfig) = -1;
              v5 += 4LL;
              --v8;
            }
            while ( v8 );
          }
        }
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = HalpAcpiSrat + 48;
        v14 = HalpAcpiSrat + *(unsigned int *)(HalpAcpiSrat + 4);
        if ( HalpAcpiSrat + 50 <= v14 )
        {
          v15 = HalpNumaConfig;
          while ( 1 )
          {
            v16 = *(unsigned __int8 *)(v13 + 1);
            if ( (unsigned __int8)v16 < 2u || (v17 = v13 + v16, v13 + v16 > v14) )
            {
LABEL_58:
              v1 = a1;
              goto LABEL_59;
            }
            LOBYTE(v5) = v89 >= 3u;
            if ( (unsigned __int8)HalpVerifySratEntryLengthAndFlag(v13, v5) )
              break;
            v13 = v17;
LABEL_57:
            if ( v13 + 2 > v14 )
              goto LABEL_58;
          }
          if ( *(_BYTE *)(HalpAcpiSrat + 8) == 1 )
          {
            v20 = *v19;
          }
          else if ( *v18 )
          {
            if ( *v18 == 2 )
              v20 = *((_DWORD *)v18 + 1);
            else
              v20 = *(_DWORD *)v19;
          }
          else
          {
            v20 = *v19 + ((v18[9] + ((v18[10] + (v18[11] << 8)) << 8)) << 8);
          }
          v21 = HalpNumaConfig;
          v22 = 0LL;
          v23 = *(_DWORD *)(HalpNumaConfig + 56);
          if ( v23 )
          {
            while ( v20 != *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v22) )
            {
              v22 = (unsigned int)(v22 + 1);
              if ( (unsigned int)v22 >= v23 )
                goto LABEL_34;
            }
          }
          else
          {
LABEL_34:
            if ( (_DWORD)v22 == v23 )
            {
              *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v22) = v20;
              *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 32) + 4 * v22) = v20;
              ++*(_DWORD *)(v21 + 56);
            }
          }
          v5 = *v18;
          switch ( *v18 )
          {
            case 0u:
              goto LABEL_39;
            case 1u:
              v25 = *((_QWORD *)v18 + 1) >> 12;
              v26 = *((_QWORD *)v18 + 2) >> 12;
              v27 = v26 + v25 - 1;
              if ( v25 < HalpMinNumaPage )
                HalpMinNumaPage = *((_QWORD *)v18 + 1) >> 12;
              if ( v27 > HalpMaxNumaPage )
                HalpMaxNumaPage = v26 + v25 - 1;
              HalpNumaPageCount += v26;
              v28 = 2LL * v10;
              v5 = v10++;
              *((_QWORD *)HalpNumaMemoryRanges + v28) = v25;
              *((_DWORD *)HalpNumaMemoryRanges + 2 * v28 + 2) = v20;
              v29 = 3 * v5;
              v30 = HalpNumaSratMemoryRanges;
              *((_QWORD *)HalpNumaSratMemoryRanges + v29 + 1) = v25;
              v30[v29 + 2] = v27;
              LODWORD(v30[v29]) = v20;
              break;
            case 2u:
LABEL_39:
              if ( (_BYTE)v5 )
              {
                v24 = *((_DWORD *)v18 + 2);
              }
              else
              {
                v24 = v18[3];
                if ( v24 == 255 )
                  v24 = -1;
              }
              v5 = HalpNumaConfig;
              v31 = v9++;
              *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4 * v31) = v24;
              *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v31) = v20;
              ++*(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v22);
              if ( v89 >= 3u )
              {
                if ( *v18 )
                  v32 = *((_DWORD *)v18 + 4);
                else
                  v32 = *((_DWORD *)v18 + 3);
                if ( v11 )
                {
                  if ( v12 != v32 )
                    HalpMaximumClockDomainCount = 2;
                }
                else
                {
                  v11 = 1;
                  v12 = v32;
                }
              }
              break;
          }
          v13 = (__int64)&v18[v18[1]];
          goto LABEL_57;
        }
LABEL_59:
        HalpNumaMemoryRangeCount = v10;
        LODWORD(HalpNumaSratMemoryRangeCount) = v10;
        *(_DWORD *)(HalpNumaConfig + 60) = v9;
        qsort(HalpNumaMemoryRanges, v10, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
        qsort(
          HalpNumaSratMemoryRanges,
          (unsigned int)HalpNumaSratMemoryRangeCount,
          0x18uLL,
          (int (__cdecl *)(const void *, const void *))HalpCompareNumaMemoryRanges);
        v33 = 0;
        if ( v10 > 1 )
        {
          v34 = 0LL;
          v35 = v10 - 1;
          v36 = 16LL;
          do
          {
            if ( *(_DWORD *)((char *)HalpNumaMemoryRanges + v34 + 8) != *(_DWORD *)((char *)HalpNumaMemoryRanges
                                                                                  + v36
                                                                                  + 8) )
            {
              v34 = 16LL * (unsigned int)++v33;
              *(_OWORD *)((char *)HalpNumaMemoryRanges + v34) = *(_OWORD *)((char *)HalpNumaMemoryRanges + v36);
            }
            v36 += 16LL;
            --v35;
          }
          while ( v35 );
        }
        v37 = 0;
        v38 = 2LL * (unsigned int)(v33 + 1);
        HalpNumaMemoryRangeCount = v33 + 1;
        HalpNumaMaxMemoryRangeCount = v33 + 1;
        *((_QWORD *)HalpNumaMemoryRanges + v38) = -1LL;
        *((_DWORD *)HalpNumaMemoryRanges + 2 * v38 + 2) = 0;
        *(_QWORD *)HalpNumaMemoryRanges = 0LL;
        if ( v33 != -1 )
        {
          v39 = HalpNumaConfig;
          do
          {
            v40 = *(_DWORD *)(v39 + 56);
            v41 = 0;
            if ( v40 )
            {
              while ( *((_DWORD *)HalpNumaMemoryRanges + 4 * v37 + 2) != *(_DWORD *)(*(_QWORD *)(v39 + 24) + 4LL * v41) )
              {
                if ( ++v41 >= v40 )
                  goto LABEL_71;
              }
              *((_DWORD *)HalpNumaMemoryRanges + 4 * v37 + 2) = v41;
            }
LABEL_71:
            ++v37;
          }
          while ( v37 < v33 + 1 );
        }
        if ( HalpAcpiMsct )
          HalpUpdateConfigurationFromMsct(
            HalpNumaConfig + 56,
            *(_DWORD *)(HalpNumaConfig + 64),
            HalpNumaConfig + 60,
            *(_DWORD *)(HalpNumaConfig + 68),
            (__int64)&HalpMaximumClockDomainCount,
            *(_QWORD *)(HalpNumaConfig + 24),
            *(_QWORD *)(HalpNumaConfig + 40),
            *(_QWORD *)(HalpNumaConfig + 16));
        Table = HalpAcpiGetTable(v1, 1414089811, 0, 0);
        v46 = Table;
        if ( Table )
        {
          v47 = *(_DWORD *)(Table + 36);
          v44 = v47 * v47 + 44;
          if ( (unsigned int)v44 > *(_DWORD *)(Table + 4) )
          {
LABEL_85:
            v55 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 296LL);
            if ( !HalpAcpiSlit )
            {
              if ( v55
                && (v43 = HalpNumaConfig,
                    v56 = *(unsigned int *)v55,
                    v57 = (unsigned int *)(HalpNumaConfig + 56),
                    v45 = *(unsigned int *)(HalpNumaConfig + 56),
                    (_DWORD)v56 == (_DWORD)v45) )
              {
                v58 = (unsigned int *)(v55 + 4 * v56);
                v59 = 0;
                v60 = 0;
                if ( (_DWORD)v45 )
                {
                  v61 = (_QWORD *)(HalpNumaConfig + 24);
                  do
                  {
                    v62 = *(_DWORD *)v55;
                    v63 = 0;
                    if ( *(_DWORD *)v55 )
                    {
                      v44 = *(unsigned int *)(*v61 + 4LL * v60);
                      while ( *(_DWORD *)(v55 + 4LL * v63 + 4) != (_DWORD)v44 )
                      {
                        if ( ++v63 >= v62 )
                          goto LABEL_94;
                      }
                      v59 = v63 * v62;
                    }
                    else
                    {
LABEL_94:
                      if ( v63 == v62 )
                        goto LABEL_105;
                    }
                    v64 = 0;
                    if ( (_DWORD)v45 )
                    {
                      do
                      {
                        v65 = *(_DWORD *)v55;
                        v66 = 0;
                        if ( *(_DWORD *)v55 )
                        {
                          v44 = *(unsigned int *)(*v61 + 4LL * v64);
                          while ( *(_DWORD *)(v55 + 4LL * v66 + 4) != (_DWORD)v44 )
                          {
                            if ( ++v66 >= v65 )
                              goto LABEL_100;
                          }
                        }
                        else
                        {
LABEL_100:
                          if ( v66 == v65 )
                            goto LABEL_105;
                        }
                        v67 = *((_WORD *)v58 + v59 + v66 + 2);
                        v44 = *(_QWORD *)(HalpNumaConfig + 48);
                        v68 = v64 + v60 * *(_DWORD *)(HalpNumaConfig + 64);
                        ++v64;
                        *(_WORD *)(v44 + 2 * v68) = v67;
                      }
                      while ( v64 < *v57 );
                    }
                    v43 = HalpNumaConfig;
                    v44 = v60 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
                    ++v60;
                    *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v44) = 0;
                    v45 = *v57;
                  }
                  while ( v60 < (unsigned int)v45 );
                }
              }
              else
              {
LABEL_105:
                v43 = HalpNumaConfig;
                v45 = 0LL;
                v69 = *(_DWORD *)(HalpNumaConfig + 56);
                if ( v69 )
                {
                  do
                  {
                    v55 = 0LL;
                    if ( v69 )
                    {
                      do
                      {
                        v70 = (unsigned int)(v55 + v45 * *(_DWORD *)(v43 + 64));
                        v55 = (unsigned int)(v55 + 1);
                        *(_WORD *)(*(_QWORD *)(v43 + 48) + 2 * v70) = 1;
                      }
                      while ( (unsigned int)v55 < *(_DWORD *)(v43 + 56) );
                    }
                    v44 = (unsigned int)(v45 * (*(_DWORD *)(v43 + 64) + 1));
                    v45 = (unsigned int)(v45 + 1);
                    *(_WORD *)(*(_QWORD *)(v43 + 48) + 2 * v44) = 0;
                    v69 = *(_DWORD *)(v43 + 56);
                  }
                  while ( (unsigned int)v45 < v69 );
                }
              }
            }
            if ( HalpSplitLargeNumaNodes )
            {
              v71 = HalpNumaConfig;
              HalpNumaSortProcessors(
                *(unsigned int *)(HalpNumaConfig + 60),
                *(_QWORD *)(HalpNumaConfig + 16),
                *(_QWORD *)HalpNumaConfig,
                v55);
              v72 = *(_DWORD *)(v71 + 56);
              for ( i = 0; i < v72; ++i )
              {
                v74 = HalpMaximumGroupSize;
                if ( *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4LL * i) > (unsigned int)HalpMaximumGroupSize )
                {
                  AvailableProximityId = HalpGetAvailableProximityId();
                  v76 = HalpNumaConfig;
                  *(_DWORD *)(v71 + 56) = v72 + 1;
                  v77 = AvailableProximityId;
                  v78 = *(_QWORD *)(v71 + 40);
                  v79 = 0;
                  v80 = *(_DWORD *)(v78 + 4LL * i);
                  *(_DWORD *)(v78 + 4LL * i) = v74;
                  v55 = (unsigned int)(v80 - v74);
                  *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4LL * v72) = v55;
                  *(_DWORD *)(*(_QWORD *)(v76 + 24) + 4LL * v72) = AvailableProximityId;
                  for ( *(_DWORD *)(*(_QWORD *)(v76 + 32) + 4LL * v72) = *(_DWORD *)(*(_QWORD *)(v76 + 32) + 4LL * i);
                        v79 < v72;
                        *(_WORD *)(v45 + 2 * v82) = *(_WORD *)(v45 + 2 * v81) )
                  {
                    *(_WORD *)(*(_QWORD *)(v76 + 48) + 2LL * (v72 + v79 * *(_DWORD *)(v76 + 64))) = *(_WORD *)(*(_QWORD *)(v76 + 48) + 2LL * (v79 * *(_DWORD *)(v76 + 64) + i));
                    v45 = *(_QWORD *)(v76 + 48);
                    v81 = v79 + i * *(_DWORD *)(v76 + 64);
                    v82 = v79 + v72 * *(_DWORD *)(v76 + 64);
                    ++v79;
                  }
                  v44 = v72 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
                  *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v44) = 0;
                  v43 = (unsigned int)(*(_DWORD *)(v71 + 60) - 1);
                  if ( *(_DWORD *)(v71 + 60) != 1 )
                  {
                    do
                    {
                      if ( !(_DWORD)v55 )
                        break;
                      v83 = *(_QWORD *)(v71 + 16);
                      v44 = *(unsigned int *)(*(_QWORD *)(v76 + 24) + 4LL * i);
                      if ( *(_DWORD *)(v83 + 4 * v43) == (_DWORD)v44 )
                      {
                        v55 = (unsigned int)(v55 - 1);
                        *(_DWORD *)(v83 + 4 * v43) = v77;
                      }
                      v84 = (_DWORD)v43 == 1;
                      v43 = (unsigned int)(v43 - 1);
                    }
                    while ( !v84 );
                  }
                }
                v72 = *(_DWORD *)(v71 + 56);
              }
            }
            if ( HalpMaximumClockDomainCount != 1 )
              HalpTimerPlatformSourceForced = 1;
            return (void *)HalpChannelInitializeStaticConfiguration(v44, v43, v45, v55);
          }
          v45 = HalpNumaConfig;
          v48 = 0;
          v43 = *(unsigned int *)(HalpNumaConfig + 56);
          if ( (_DWORD)v43 )
          {
            do
            {
              v44 = v48;
              v49 = *(_DWORD *)(*(_QWORD *)(v45 + 24) + 4LL * v48);
              if ( v49 >= v47 )
                goto LABEL_85;
              v50 = v47 * v49;
              v51 = 0;
              if ( (_DWORD)v43 )
              {
                do
                {
                  v44 = v51;
                  v43 = *(unsigned int *)(*(_QWORD *)(v45 + 24) + 4LL * v51);
                  if ( (unsigned int)v43 >= v47 )
                    goto LABEL_85;
                  v52 = *(unsigned __int8 *)((unsigned int)(v43 + v50) + v46 + 44);
                  if ( (unsigned __int8)v52 < 0xAu )
                    goto LABEL_85;
                  v53 = v51 + v48 * *(_DWORD *)(v45 + 64);
                  ++v51;
                  *(_WORD *)(*(_QWORD *)(v45 + 48) + 2 * v53) = v52 << 7;
                }
                while ( v51 < *(_DWORD *)(v45 + 56) );
              }
              v43 = 1280LL;
              v54 = *(_QWORD *)(v45 + 48);
              v44 = v48 * (*(_DWORD *)(v45 + 64) + 1);
              if ( *(_WORD *)(v54 + 2 * v44) != 1280 )
                goto LABEL_85;
              *(_WORD *)(v54 + 2 * v44) = 0;
              ++v48;
              v43 = *(unsigned int *)(v45 + 56);
            }
            while ( v48 < (unsigned int)v43 );
          }
        }
        HalpAcpiSlit = v46;
        goto LABEL_85;
      }
    }
  }
  return result;
}

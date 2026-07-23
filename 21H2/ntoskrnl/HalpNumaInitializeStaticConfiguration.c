/*
 * XREFs of HalpNumaInitializeStaticConfiguration @ 0x140A64EE0
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140A64D20 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A64F94 (HalpInitializeConfigurationFromMadt.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140A65240 (HalpChannelInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140A654EC (HalpAllocateNumaConfigData.c)
 *     HalpGetAvailableProximityId @ 0x140A8DE20 (HalpGetAvailableProximityId.c)
 *     HalpGetNumaProcMemoryCount @ 0x140A8DEAC (HalpGetNumaProcMemoryCount.c)
 *     HalpUpdateConfigurationFromMsct @ 0x140A8E2CC (HalpUpdateConfigurationFromMsct.c)
 *     HalpVerifySratEntryLengthAndFlag @ 0x140A8E690 (HalpVerifySratEntryLengthAndFlag.c)
 */

__int64 __fastcall HalpNumaInitializeStaticConfiguration(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned int v7; // eax
  _DWORD *v8; // rdi
  unsigned __int64 i; // rcx
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // ebx
  char v13; // r15
  int v14; // r12d
  unsigned __int8 *v15; // rdi
  unsigned __int64 v16; // r11
  __int64 v17; // r13
  __int64 v18; // r10
  unsigned __int8 v19; // r10
  __int64 v20; // r10
  unsigned int v21; // ecx
  int v22; // r10d
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // edi
  __int64 v31; // rcx
  __int64 v32; // r10
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  __int64 Table; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r9d
  __int64 v40; // rdi
  unsigned int v41; // r10d
  unsigned int v42; // r11d
  int v43; // r11d
  unsigned int v44; // ebx
  __int16 v45; // ax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  unsigned int *v50; // rbx
  unsigned int v51; // edi
  unsigned int *v52; // r14
  int v53; // r11d
  unsigned int v54; // r10d
  _QWORD *v55; // rsi
  unsigned int v56; // r9d
  unsigned int v57; // edx
  unsigned int v58; // r9d
  unsigned int v59; // edi
  __int16 v60; // ax
  __int64 v61; // rdx
  unsigned int v62; // edi
  unsigned int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r14
  unsigned int v66; // esi
  unsigned int v67; // ebx
  int v68; // edi
  __int64 v69; // r15
  int AvailableProximityId; // eax
  __int64 v71; // r11
  int v72; // r12d
  __int64 v73; // rcx
  unsigned int v74; // r9d
  int v75; // r8d
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // r10
  int v80; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v81; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v82[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int8 v84; // [rsp+A8h] [rbp+50h]
  int v85; // [rsp+B8h] [rbp+60h] BYREF

  v85 = 0;
  v82[0] = 0;
  v1 = a1;
  v80 = 0;
  v81 = 0;
  HalpNumaInitializationComplete = 1;
  HalpAcpiMpst = HalpAcpiGetTable(a1, 1414746189, 0, 0);
  HalpAcpiSrat = HalpAcpiGetTable(v1, 1413567059, 0, 0);
  HalpAcpiMsct = HalpAcpiGetTable(v1, 1413698381, 0, 0);
  if ( !HalpAcpiSrat )
    return HalpInitializeConfigurationFromMadt(v1);
  v84 = *(_BYTE *)(HalpAcpiSrat + 8);
  result = HalpGetNumaProcMemoryCount(v82, &v81, &v80, &v85);
  if ( (_BYTE)result )
  {
    v3 = v81;
    result = HalpAllocateNumaConfigData(v1, v82[0], v81, v80, v85);
    if ( HalpNumaConfig )
    {
      v5 = 0LL;
      v6 = 0xFFFFFFFFLL;
      if ( v3 )
      {
        if ( v3 >= 4 )
        {
          v4 = *(_QWORD *)HalpNumaConfig;
          if ( *(_QWORD *)HalpNumaConfig > (unsigned __int64)HalpNumaConfig
            || *(_QWORD *)HalpNumaConfig + 4 * (unsigned __int64)(v3 - 1) < HalpNumaConfig )
          {
            v7 = v3 & 0xFFFFFFFC;
            do
              v5 = (unsigned int)(v5 + 4);
            while ( (unsigned int)v5 < v7 );
            v8 = *(_DWORD **)HalpNumaConfig;
            for ( i = (16 * ((unsigned __int64)v7 >> 2)) >> 2; i; --i )
              *v8++ = -1;
          }
        }
        if ( (unsigned int)v5 < v3 )
        {
          v10 = 4LL * (unsigned int)v5;
          v5 = v3 - (unsigned int)v5;
          do
          {
            *(_DWORD *)(v10 + *(_QWORD *)HalpNumaConfig) = -1;
            v10 += 4LL;
            --v5;
          }
          while ( v5 );
        }
      }
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = (unsigned __int8 *)(HalpAcpiSrat + 48);
      v16 = HalpAcpiSrat + *(unsigned int *)(HalpAcpiSrat + 4);
      if ( HalpAcpiSrat + 50 <= v16 )
      {
        v17 = HalpNumaConfig;
        while ( 1 )
        {
          v18 = v15[1];
          if ( (unsigned __int8)v18 < 2u || (unsigned __int64)&v15[v18] > v16 )
          {
LABEL_57:
            v1 = a1;
            goto LABEL_58;
          }
          LOBYTE(v5) = v84 >= 3u;
          if ( (unsigned __int8)HalpVerifySratEntryLengthAndFlag(v15, v5, v4, v6) )
            break;
LABEL_56:
          v15 += v19;
          if ( (unsigned __int64)(v15 + 2) > v16 )
            goto LABEL_57;
        }
        if ( *(_BYTE *)(HalpAcpiSrat + 8) == 1 )
        {
          v4 = v15[2];
        }
        else if ( *v15 )
        {
          if ( *v15 == 2 )
            v4 = *((unsigned int *)v15 + 1);
          else
            v4 = *(unsigned int *)(v15 + 2);
        }
        else
        {
          v4 = v15[2] + ((v15[9] + ((v15[10] + (v15[11] << 8)) << 8)) << 8);
        }
        v20 = HalpNumaConfig;
        v6 = 0LL;
        v21 = *(_DWORD *)(HalpNumaConfig + 56);
        if ( v21 )
        {
          do
          {
            if ( (_DWORD)v4 == *(_DWORD *)(*(_QWORD *)(v17 + 24) + 4 * v6) )
              break;
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < v21 );
        }
        if ( (_DWORD)v6 == v21 )
        {
          *(_DWORD *)(*(_QWORD *)(v17 + 24) + 4 * v6) = v4;
          *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 32) + 4 * v6) = v4;
          ++*(_DWORD *)(v20 + 56);
        }
        v5 = *v15;
        switch ( *v15 )
        {
          case 0u:
            goto LABEL_38;
          case 1u:
            v5 = *((_QWORD *)v15 + 1) >> 12;
            v23 = *((_QWORD *)v15 + 2) >> 12;
            v6 = v23 + v5 - 1;
            if ( v5 < HalpMinNumaPage )
              HalpMinNumaPage = *((_QWORD *)v15 + 1) >> 12;
            if ( v6 > HalpMaxNumaPage )
              HalpMaxNumaPage = v23 + v5 - 1;
            HalpNumaPageCount += v23;
            v24 = 2LL * v12++;
            *((_QWORD *)HalpNumaMemoryRanges + v24) = v5;
            *((_DWORD *)HalpNumaMemoryRanges + 2 * v24 + 2) = v4;
            break;
          case 2u:
LABEL_38:
            if ( (_BYTE)v5 )
            {
              v22 = *((_DWORD *)v15 + 2);
            }
            else
            {
              v22 = v15[3];
              if ( v22 == 255 )
                v22 = -1;
            }
            v5 = HalpNumaConfig;
            *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4LL * v11) = v22;
            *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4LL * v11) = v4;
            v4 = 1LL;
            ++v11;
            ++*(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v6);
            if ( v84 >= 3u )
            {
              if ( *v15 )
                v25 = *((_DWORD *)v15 + 4);
              else
                v25 = *((_DWORD *)v15 + 3);
              if ( v13 )
              {
                if ( v14 != v25 )
                  HalpMaximumClockDomainCount = 2;
              }
              else
              {
                v13 = 1;
                v14 = v25;
              }
            }
            break;
        }
        v19 = v15[1];
        goto LABEL_56;
      }
LABEL_58:
      HalpNumaMemoryRangeCount = v12;
      *(_DWORD *)(HalpNumaConfig + 60) = v11;
      qsort(HalpNumaMemoryRanges, v12, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
      v26 = 0;
      if ( v12 > 1 )
      {
        v27 = 0LL;
        v28 = v12 - 1;
        v29 = 16LL;
        do
        {
          if ( *(_DWORD *)((char *)HalpNumaMemoryRanges + v27 + 8) != *(_DWORD *)((char *)HalpNumaMemoryRanges + v29 + 8) )
          {
            v27 = 16LL * (unsigned int)++v26;
            *(_OWORD *)((char *)HalpNumaMemoryRanges + v27) = *(_OWORD *)((char *)HalpNumaMemoryRanges + v29);
          }
          v29 += 16LL;
          --v28;
        }
        while ( v28 );
      }
      v30 = 0;
      v31 = 2LL * (unsigned int)(v26 + 1);
      HalpNumaMemoryRangeCount = v26 + 1;
      HalpNumaMaxMemoryRangeCount = v26 + 1;
      *((_QWORD *)HalpNumaMemoryRanges + v31) = -1LL;
      *((_DWORD *)HalpNumaMemoryRanges + 2 * v31 + 2) = 0;
      *(_QWORD *)HalpNumaMemoryRanges = 0LL;
      if ( v26 != -1 )
      {
        v32 = HalpNumaConfig;
        do
        {
          v33 = *(_DWORD *)(v32 + 56);
          v34 = 0;
          if ( v33 )
          {
            while ( *((_DWORD *)HalpNumaMemoryRanges + 4 * v30 + 2) != *(_DWORD *)(*(_QWORD *)(v32 + 24) + 4LL * v34) )
            {
              if ( ++v34 >= v33 )
                goto LABEL_70;
            }
            *((_DWORD *)HalpNumaMemoryRanges + 4 * v30 + 2) = v34;
          }
LABEL_70:
          ++v30;
        }
        while ( v30 < v26 + 1 );
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
      v38 = Table;
      if ( Table )
      {
        v39 = *(_DWORD *)(Table + 36);
        v37 = v39 * v39 + 44;
        if ( (unsigned int)v37 > *(_DWORD *)(Table + 4) )
        {
LABEL_84:
          v48 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 296LL);
          if ( !HalpAcpiSlit )
          {
            if ( !v48 )
              goto LABEL_107;
            v36 = HalpNumaConfig;
            v49 = *(unsigned int *)v48;
            v50 = (unsigned int *)(HalpNumaConfig + 56);
            v51 = *(_DWORD *)(HalpNumaConfig + 56);
            if ( (_DWORD)v49 != v51 )
              goto LABEL_107;
            v52 = (unsigned int *)(v48 + 4 * v49);
            v53 = 0;
            v54 = 0;
            if ( v51 )
            {
              v55 = (_QWORD *)(HalpNumaConfig + 24);
              do
              {
                v56 = *(_DWORD *)v48;
                v57 = 0;
                if ( *(_DWORD *)v48 )
                {
                  v37 = *(unsigned int *)(*v55 + 4LL * v54);
                  while ( *(_DWORD *)(v48 + 4LL * v57 + 4) != (_DWORD)v37 )
                  {
                    if ( ++v57 >= v56 )
                      goto LABEL_95;
                  }
                  v53 = v57 * v56;
                }
LABEL_95:
                if ( v57 == v56 )
                  goto LABEL_107;
                v58 = 0;
                if ( v51 )
                {
                  while ( 1 )
                  {
                    v59 = *(_DWORD *)v48;
                    v36 = 0LL;
                    if ( *(_DWORD *)v48 )
                    {
                      v37 = *(unsigned int *)(*v55 + 4LL * v58);
                      do
                      {
                        if ( *(_DWORD *)(v48 + 4LL * (unsigned int)v36 + 4) == (_DWORD)v37 )
                          break;
                        v36 = (unsigned int)(v36 + 1);
                      }
                      while ( (unsigned int)v36 < v59 );
                    }
                    if ( (_DWORD)v36 == v59 )
                      break;
                    v60 = *((_WORD *)v52 + (unsigned int)(v53 + v36) + 2);
                    v37 = *(_QWORD *)(HalpNumaConfig + 48);
                    v61 = v58 + v54 * *(_DWORD *)(HalpNumaConfig + 64);
                    ++v58;
                    *(_WORD *)(v37 + 2 * v61) = v60;
                    if ( v58 >= *v50 )
                      goto LABEL_103;
                  }
                  v48 = 0LL;
                  break;
                }
LABEL_103:
                v36 = HalpNumaConfig;
                v37 = v54 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
                ++v54;
                *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v37) = 0;
                v51 = *v50;
              }
              while ( v54 < *v50 );
            }
            if ( !v48 )
            {
LABEL_107:
              v36 = HalpNumaConfig;
              v62 = 0;
              v63 = *(_DWORD *)(HalpNumaConfig + 56);
              if ( v63 )
              {
                do
                {
                  v48 = 0LL;
                  if ( v63 )
                  {
                    do
                    {
                      v64 = (unsigned int)v48 + v62 * *(_DWORD *)(v36 + 64);
                      v48 = (unsigned int)(v48 + 1);
                      *(_WORD *)(*(_QWORD *)(v36 + 48) + 2 * v64) = 1;
                    }
                    while ( (unsigned int)v48 < *(_DWORD *)(v36 + 56) );
                  }
                  v37 = v62 * (*(_DWORD *)(v36 + 64) + 1);
                  ++v62;
                  *(_WORD *)(*(_QWORD *)(v36 + 48) + 2 * v37) = 0;
                  v63 = *(_DWORD *)(v36 + 56);
                }
                while ( v62 < v63 );
              }
            }
          }
          v65 = HalpNumaConfig;
          v66 = 0;
          v67 = *(_DWORD *)(HalpNumaConfig + 56);
          if ( v67 )
          {
            do
            {
              v68 = HalpMaximumGroupSize;
              v69 = v66;
              if ( *(_DWORD *)(*(_QWORD *)(v65 + 40) + 4LL * v66) > (unsigned int)HalpMaximumGroupSize )
              {
                AvailableProximityId = HalpGetAvailableProximityId(v37, v36, v48);
                v71 = HalpNumaConfig;
                *(_DWORD *)(v65 + 56) = v67 + 1;
                v72 = AvailableProximityId;
                v73 = *(_QWORD *)(v65 + 40);
                v74 = 0;
                v75 = *(_DWORD *)(v73 + 4LL * v66);
                *(_DWORD *)(v73 + 4LL * v66) = v68;
                v48 = (unsigned int)(v75 - v68);
                *(_DWORD *)(*(_QWORD *)(v65 + 40) + 4LL * v67) = v48;
                *(_DWORD *)(*(_QWORD *)(v71 + 24) + 4LL * v67) = AvailableProximityId;
                *(_DWORD *)(*(_QWORD *)(v71 + 32) + 4LL * v67) = *(_DWORD *)(*(_QWORD *)(v71 + 32) + 4LL * v66);
                if ( v67 )
                {
                  do
                  {
                    *(_WORD *)(*(_QWORD *)(v71 + 48) + 2LL * (v67 + v74 * *(_DWORD *)(v71 + 64))) = *(_WORD *)(*(_QWORD *)(v71 + 48) + 2LL * (v74 * *(_DWORD *)(v71 + 64) + v66));
                    v76 = v74 + v66 * *(_DWORD *)(v71 + 64);
                    v77 = v74 + v67 * *(_DWORD *)(v71 + 64);
                    ++v74;
                    *(_WORD *)(*(_QWORD *)(v71 + 48) + 2 * v77) = *(_WORD *)(*(_QWORD *)(v71 + 48) + 2 * v76);
                  }
                  while ( v74 < v67 );
                  v69 = v66;
                }
                v78 = HalpNumaConfig;
                v37 = v67 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
                *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v37) = 0;
                v36 = (unsigned int)(*(_DWORD *)(v78 + 60) - 1);
                if ( *(_DWORD *)(v78 + 60) != 1 )
                {
                  do
                  {
                    if ( !(_DWORD)v48 )
                      break;
                    v79 = *(_QWORD *)(v78 + 16);
                    v37 = *(unsigned int *)(*(_QWORD *)(v71 + 24) + 4 * v69);
                    if ( *(_DWORD *)(v79 + 4 * v36) == (_DWORD)v37 )
                    {
                      v48 = (unsigned int)(v48 - 1);
                      *(_DWORD *)(v79 + 4 * v36) = v72;
                    }
                    v36 = (unsigned int)(v36 - 1);
                  }
                  while ( (_DWORD)v36 );
                }
              }
              v67 = *(_DWORD *)(v65 + 56);
              ++v66;
            }
            while ( v66 < v67 );
          }
          if ( HalpMaximumClockDomainCount != 1 )
            HalpTimerPlatformSourceForced = 1;
          return HalpChannelInitializeStaticConfiguration(v37, v36, v48);
        }
        v40 = HalpNumaConfig;
        v41 = 0;
        v36 = *(unsigned int *)(HalpNumaConfig + 56);
        if ( (_DWORD)v36 )
        {
          do
          {
            v37 = v41;
            v42 = *(_DWORD *)(*(_QWORD *)(v40 + 24) + 4LL * v41);
            if ( v42 >= v39 )
              goto LABEL_84;
            v43 = v39 * v42;
            v44 = 0;
            if ( (_DWORD)v36 )
            {
              do
              {
                v37 = v44;
                v36 = *(unsigned int *)(*(_QWORD *)(v40 + 24) + 4LL * v44);
                if ( (unsigned int)v36 >= v39 )
                  goto LABEL_84;
                v45 = *(unsigned __int8 *)((unsigned int)(v36 + v43) + v38 + 44);
                if ( (unsigned __int8)v45 < 0xAu )
                  goto LABEL_84;
                v46 = v44 + v41 * *(_DWORD *)(v40 + 64);
                ++v44;
                *(_WORD *)(*(_QWORD *)(v40 + 48) + 2 * v46) = v45 << 7;
              }
              while ( v44 < *(_DWORD *)(v40 + 56) );
            }
            v36 = 1280LL;
            v47 = *(_QWORD *)(v40 + 48);
            v37 = v41 * (*(_DWORD *)(v40 + 64) + 1);
            if ( *(_WORD *)(v47 + 2 * v37) != 1280 )
              goto LABEL_84;
            *(_WORD *)(v47 + 2 * v37) = 0;
            ++v41;
            v36 = *(unsigned int *)(v40 + 56);
          }
          while ( v41 < (unsigned int)v36 );
        }
      }
      HalpAcpiSlit = v38;
      goto LABEL_84;
    }
  }
  return result;
}

/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x140215A90
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14037C540 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402156D0 (PpmPerfSnapDeliveredPerformance.c)
 *     EtwpLevelKeywordEnabled @ 0x140215A40 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x140216050 (PpmSnapPerformanceAccumulation.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x1403348F4 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     HvlGetReferenceTime @ 0x14038B5C8 (HvlGetReferenceTime.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038D7B0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405770A0 (PpmHvSnapPerformanceAccumulation.c)
 */

char PpmCheckSnapAllDeliveredPerformance()
{
  __int64 v0; // r14
  __int64 ReferenceTime; // r13
  unsigned int v2; // ebx
  __int64 v3; // rsi
  int v4; // r9d
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // r14
  bool v12; // r12
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r11
  __int64 v20; // rcx
  char v21; // al
  const EVENT_DESCRIPTOR *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int8 v26; // r11
  unsigned int v27; // r8d
  __int64 v28; // rcx
  int v29; // r8d
  unsigned __int64 *v30; // r9
  __int64 v31; // r10
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v38; // rdi
  char v39; // al
  __int64 v40; // rax
  int *v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r13
  unsigned int j; // edi
  __int64 v45; // rcx
  char v46; // [rsp+48h] [rbp-C0h]
  int v47; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD *v48; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v49; // [rsp+58h] [rbp-B0h]
  _WORD v50[4]; // [rsp+60h] [rbp-A8h]
  int v51; // [rsp+68h] [rbp-A0h] BYREF
  int v52; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+80h] [rbp-88h]
  unsigned __int64 v55; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+90h] [rbp-78h] BYREF
  __int64 i; // [rsp+98h] [rbp-70h]
  _QWORD v58[22]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  __int64 *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]

  memset(v58, 0, 0xA8uLL);
  v0 = PpmPerfDomainHead;
  *(_DWORD *)&v50[1] = 0;
  ReferenceTime = 0LL;
  v50[3] = 0;
  v46 = 0;
  for ( i = 0LL; (__int64 *)v0 != &PpmPerfDomainHead; v0 = *(_QWORD *)v0 )
  {
    v2 = 0;
    if ( *(_DWORD *)(v0 + 200) )
    {
      do
      {
        v3 = *(_QWORD *)(v0 + 216) + 136LL * v2;
        if ( *(_DWORD *)(v3 + 16) == 1 )
        {
          if ( !ReferenceTime )
            ReferenceTime = HvlGetReferenceTime();
          v38 = *(_QWORD *)v3;
          v39 = PpmPerfSnapDeliveredPerformance(*(_QWORD *)v3, 0, ReferenceTime - 50000);
          *(_BYTE *)(v38 + 64) = v39 == 0;
          if ( !v39 )
          {
            HvlUpdatePerformanceStateCountersForLp(*(unsigned int *)(v3 + 20));
            v46 = 1;
          }
        }
        ++v2;
      }
      while ( v2 < *(_DWORD *)(v0 + 200) );
      i = ReferenceTime;
    }
  }
  KeCopyAffinityEx(v58, &PpmCheckRegistered);
  v4 = 0;
  v49 = v58[1];
  v48 = v58;
  v50[0] = 0;
  while ( 1 )
  {
    LODWORD(v55) = 0;
    if ( !v49 )
      break;
LABEL_9:
    _BitScanForward64(&v5, v49);
    v49 &= ~(1LL << v5);
    v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v50[0] + (unsigned __int8)v5];
    if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
    {
      v7 = 0LL;
    }
    else
    {
      _mm_lfence();
      v7 = KiProcessorBlock[v6];
    }
    v8 = v7 + 33128;
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 )
    {
      v10 = (_QWORD *)(v9 + 128);
      if ( *(_BYTE *)(v8 + 60) )
      {
        v11 = v8 - 33128;
        LOBYTE(v4) = 1;
        v12 = v8 - 33128 != (_QWORD)KeGetCurrentPrcb();
        v13 = PpmSnapPerformanceAccumulation((int)v8 - 33128, 0, v12, v4, (void *)(v9 + 128));
      }
      else
      {
        v11 = 0LL;
        v12 = 0;
        v13 = PpmHvSnapPerformanceAccumulation(v8, 0LL, 0LL, v9 + 128);
      }
      v4 = 0;
      if ( v13 )
      {
        v16 = *(_QWORD *)(v9 + 224);
        if ( *v10 > v16 )
        {
          v17 = *(_QWORD *)(v9 + 136) - *(_QWORD *)(v9 + 232);
          v55 = *v10 - v16;
          if ( v17 <= v55 || !v12 )
          {
            if ( v11 && !v12 )
              PpmPerfCheckForIllegalProcessorThrottle(v11, v14, v15, 0LL);
            if ( !v17
              || ((v18 = (*(_QWORD *)(v9 + 160) - *(_QWORD *)(v9 + 256)) / v17,
                   v19 = (*(_QWORD *)(v9 + 152) - *(_QWORD *)(v9 + 248)) / v17,
                   !*(_QWORD *)v8)
                ? (v20 = *(unsigned int *)(v11 + 68))
                : (v20 = *(unsigned int *)(*(_QWORD *)v8 + 316LL)),
                  __PAIR64__(v19, v18) == *(_QWORD *)(v9 + 320)) )
            {
LABEL_30:
              v4 = 0;
            }
            else
            {
              v4 = 0;
              v53 = (*(_QWORD *)(v9 + 152) - *(_QWORD *)(v9 + 248)) * v20 / 0x64uLL / v17;
              v52 = v19;
              v51 = v18;
              v56 = 0LL;
              v47 = 0;
              if ( *(_BYTE *)(v8 + 60) )
              {
                LOWORD(v47) = *(unsigned __int8 *)(v8 - 32920);
                v21 = *(_BYTE *)(v8 - 32919);
                v22 = &PPM_ETW_DELIVERED_PERF_CHANGE;
                BYTE2(v47) = v21;
                *(_QWORD *)&UserData.Size = 3LL;
              }
              else
              {
                v40 = *(_QWORD *)(v8 + 8);
                v22 = (const EVENT_DESCRIPTOR *)PPM_ETW_DELIVERED_PERF_CHANGE_HV;
                v47 = *(_DWORD *)(v40 + 20);
                *(_QWORD *)&UserData.Size = 4LL;
              }
              UserData.Ptr = (ULONGLONG)&v47;
              if ( PpmEtwRegistered )
              {
                if ( PpmEtwHandle
                  && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, v22->Level, v22->Keyword)
                   || *(_BYTE *)(v24 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v24 + 40) + 96LL, v26, v23)) )
                {
                  v56 = PpmConvertTime(v25, PopQpcFrequency, 1000000LL);
                  v61 = 4LL;
                  v60 = &v51;
                  v62 = &v56;
                  v41 = &v52;
                  v63 = 8LL;
                  v65 = 4LL;
                  if ( v22 != &PPM_ETW_DELIVERED_PERF_CHANGE )
                    v41 = &v53;
                  v64 = v41;
                  EtwWriteEx(PpmEtwHandle, v22, 0LL, 0, 0LL, 0LL, 4u, &UserData);
                }
                goto LABEL_30;
              }
            }
            *(_OWORD *)(v9 + 224) = *(_OWORD *)v10;
            *(_OWORD *)(v9 + 240) = *(_OWORD *)(v9 + 144);
            *(_OWORD *)(v9 + 256) = *(_OWORD *)(v9 + 160);
            *(_OWORD *)(v9 + 272) = *(_OWORD *)(v9 + 176);
            *(_OWORD *)(v9 + 288) = *(_OWORD *)(v9 + 192);
            *(_OWORD *)(v9 + 304) = *(_OWORD *)(v9 + 208);
            goto LABEL_32;
          }
        }
      }
    }
    else
    {
LABEL_32:
      v27 = KiProcessorIndexToNumberMappingTable[v6];
      v28 = v27 >> 6;
      if ( LOWORD(v58[0]) > (unsigned int)v28 )
        v58[v28 + 1] &= ~(1LL << (v27 & 0x3F));
    }
  }
  while ( ++v50[0] < (unsigned int)LOWORD(v58[0]) )
  {
    v49 = v58[v50[0] + 1];
    if ( v49 )
      goto LABEL_9;
  }
  if ( v46 )
  {
    v42 = PpmPerfDomainHead;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      v43 = i;
      do
      {
        for ( j = 0; j < *(_DWORD *)(v42 + 200); ++j )
        {
          v45 = *(_QWORD *)(v42 + 216) + 136LL * j;
          if ( *(_DWORD *)(v45 + 16) == 1 && *(_BYTE *)(*(_QWORD *)v45 + 64LL) )
          {
            *(_BYTE *)(*(_QWORD *)v45 + 64LL) = 0;
            PpmPerfSnapDeliveredPerformance(*(_QWORD *)v45, 1, v43);
          }
        }
        v42 = *(_QWORD *)v42;
      }
      while ( (__int64 *)v42 != &PpmPerfDomainHead );
    }
  }
  v29 = 0;
  if ( LOWORD(v58[0]) )
  {
    v30 = &v58[1];
    v31 = LOWORD(v58[0]);
    do
    {
      v32 = *v30++;
      v29 += (unsigned int)((0x101010101010101LL
                           * ((((v32 - ((v32 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v32 - ((v32 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v32 - ((v32 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v32 - ((v32 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v31;
    }
    while ( v31 );
  }
  PpmCheckCount = v29;
  if ( !v29 )
    return 1;
  v33 = v58[1];
  v50[0] = 0;
  while ( 1 )
  {
    v54 = 0;
    if ( !v33 )
      break;
LABEL_42:
    _BitScanForward64(&v34, v33);
    v54 = v34;
    v49 = v33 & ~(1LL << v34);
    v35 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v50[0] + (unsigned __int8)v34];
    if ( (unsigned int)v35 >= (unsigned int)KeNumberProcessors_0 )
      v36 = 0LL;
    else
      v36 = KiProcessorBlock[v35];
    _m_prefetchw((const void *)(v36 + 33104));
    if ( !_InterlockedOr((volatile signed __int32 *)(v36 + 33104), 1u) )
      KiInsertQueueDpc(v36 + 33040, 0LL, 0LL, 0LL, 0);
    v33 = v49;
  }
  while ( 1 )
  {
    if ( ++v50[0] >= (unsigned int)LOWORD(v58[0]) )
      return 0;
    v33 = v58[v50[0] + 1];
    v49 = v33;
    if ( v33 )
      goto LABEL_42;
  }
}

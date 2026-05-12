/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C000A040
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C0035694 (RaidQosSupportedCommand.c)
 *     McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer @ 0x1C005038C (McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, char *a3, __int64 a4, char a5)
{
  _BYTE *v5; // r12
  unsigned __int64 v7; // rdx
  char *v8; // r13
  int v10; // eax
  char v11; // r14
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  char v18; // cl
  union _LARGE_INTEGER v19; // rcx
  bool v20; // zf
  ULONGLONG UnbiasedInterruptTime; // rax
  LARGE_INTEGER v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned __int64 v26; // r15
  int v27; // edx
  __int64 *v28; // rcx
  int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ebx
  ULONG CurrentProcessorNumber; // eax
  unsigned int v34; // r9d
  unsigned __int8 v35; // r11
  unsigned __int8 v36; // r10
  unsigned int v37; // r15d
  __int64 v38; // rcx
  char v39; // di
  __int64 v40; // rax
  char v41; // r9
  __int64 v42; // rdx
  char v43; // al
  volatile signed __int64 *v44; // rdx
  int v45; // r15d
  unsigned int v46; // r8d
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdi
  int v50; // ecx
  int v51; // ecx
  volatile signed __int64 *v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v59; // rax
  LARGE_INTEGER v60; // rax
  unsigned int v61; // ebx
  unsigned int i; // r8d
  __int64 v63; // rcx
  unsigned __int64 v64; // rdi
  __int64 *v65; // r8
  int v66; // eax
  unsigned int v67; // ecx
  unsigned __int64 v68; // rax
  int v69; // ecx
  int v70; // ecx
  int v71; // [rsp+B0h] [rbp-21h]
  int v72; // [rsp+B4h] [rbp-1Dh]
  int v73; // [rsp+B8h] [rbp-19h]
  unsigned int v74; // [rsp+B8h] [rbp-19h]
  char v75; // [rsp+C0h] [rbp-11h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C8h] [rbp-9h] BYREF
  unsigned __int64 v77; // [rsp+D0h] [rbp-1h]
  _BYTE *v78; // [rsp+D8h] [rbp+7h]

  v5 = 0LL;
  v7 = *(unsigned __int8 *)(a2 + 2);
  v8 = a3;
  LOBYTE(v72) = 0;
  LOBYTE(v71) = 0;
  v75 = 0;
  if ( (_BYTE)v7 == 40 )
    v10 = *(_DWORD *)(a2 + 20);
  else
    v10 = v7;
  v11 = a5;
  v73 = v10;
  if ( v10 || ((a5 - 8) & 0x5D) != 0 )
    goto LABEL_18;
  if ( (_BYTE)v7 == 40 )
  {
    v7 = 0LL;
    v71 = *(_DWORD *)(a2 + 60);
    if ( *(_DWORD *)(a2 + 20) )
      goto LABEL_14;
    v12 = *(_DWORD *)(a2 + 56);
    v13 = 0;
    if ( !v12 )
      goto LABEL_14;
    while ( 1 )
    {
      v14 = *(unsigned int *)(a2 + 4LL * v13 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v15 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v14 < (unsigned int)v15 )
        {
          v16 = (unsigned int)v14;
          v17 = *(_DWORD *)(v14 + a2);
          if ( v17 == 64 )
          {
            if ( v16 + 40 <= v15 )
              goto LABEL_12;
          }
          else
          {
            v69 = v17 - 65;
            if ( v69 )
            {
              if ( v69 == 1 && v16 + 40 <= v15 )
              {
                v7 = v16 + a2 + 32;
                if ( !*(_DWORD *)(v16 + a2 + 12) )
                  v7 = 0LL;
LABEL_14:
                if ( v7 )
                {
                  v18 = *(_BYTE *)v7;
                  if ( ((*(_BYTE *)v7 - 8) & 0xFD) != 0 )
                  {
                    if ( ((v18 - 40) & 0xFD) != 0 && ((v18 + 88) & 0xFD) != 0 )
                    {
                      if ( ((v18 + 120) & 0xFD) != 0 )
                        v75 = -1;
                      else
                        v75 = *(_BYTE *)(v7 + 9);
                    }
                    else
                    {
                      v75 = *(_BYTE *)(v7 + 5);
                    }
                  }
                  else
                  {
                    v75 = *(_BYTE *)(v7 + 3);
                  }
                }
                goto LABEL_18;
              }
            }
            else if ( v16 + 56 <= v15 )
            {
LABEL_12:
              if ( *(_BYTE *)(v16 + a2 + 10) )
                v7 = v16 + a2 + 24;
              goto LABEL_14;
            }
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_14;
    }
  }
  v71 = *(_DWORD *)(a2 + 16);
  if ( !(_BYTE)v7 && *(_BYTE *)(a2 + 10) )
  {
    v7 = a2 + 72;
    goto LABEL_14;
  }
LABEL_18:
  v19.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v20 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      v22.QuadPart = 0LL;
      goto LABEL_22;
    }
    if ( !UseQPCTime )
      goto LABEL_21;
    v20 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v20 )
  {
LABEL_21:
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v19 = PerformanceFrequency;
    v22.QuadPart = UnbiasedInterruptTime;
    goto LABEL_22;
  }
  v60 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v19 = PerformanceFrequency;
  v22 = v60;
LABEL_22:
  v23 = v22.QuadPart - a1[87];
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_147:
      v25 = v23;
      goto LABEL_30;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v19.QuadPart )
        return 3221225534LL;
      v7 = 10000000 * v23 % v19.QuadPart;
      v23 = 10000000 * v23 / v19.QuadPart;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_147;
  if ( !v19.QuadPart )
    return 3221225534LL;
  v24 = 10000000 * v23;
  if ( v19.QuadPart == 10000000 )
  {
    v7 = (unsigned __int128)(v24 * (__int128)(__int64)0xD6BF94D5E57A42BDuLL) >> 64;
    v25 = v24 / 10000000;
  }
  else
  {
    v7 = v24 % v19.QuadPart;
    v25 = v24 / v19.QuadPart;
  }
LABEL_30:
  v26 = a1[86];
  v77 = v25;
  if ( v8[3216] && (unsigned __int8)RaidQosSupportedCommand(a2, v7) && v26 + v25 >= *((_QWORD *)v8 + 407) )
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 264);
  if ( v26 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 271);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 272, v26);
    if ( v26 > *((_QWORD *)v8 + 273) )
      *((_QWORD *)v8 + 273) = v26;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      if ( v26 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 274);
      v72 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 48) = 0;
    }
  }
  v27 = 1;
  if ( v26 + v77 >= HighLatencyIoThreshold
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8 + 560) <= 0x80
    && (byte_1C0068845 & 0x40) != 0 )
  {
    McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer(
      (_DWORD)a3,
      (_DWORD)a3 + 169,
      (_DWORD)a3 + 160,
      *(_QWORD *)(*((_QWORD *)v8 + 3) + 4864LL),
      *(_DWORD *)(*((_QWORD *)v8 + 3) + 56LL),
      *((_QWORD *)v8 + 3) + 5192LL,
      a3[96],
      a3[97],
      a3[98],
      (__int64)(a3 + 1976),
      (__int64)(a3 + 160),
      (__int64)(a3 + 169),
      (__int64)(a3 + 186),
      a3[450] & 1,
      HighLatencyIoThreshold / 0x2710uLL,
      (__int64)v77 / 10000,
      v26 / 0x2710,
      a5,
      v71,
      v75,
      v72);
    v11 = a5;
    v27 = 1;
    v8 = a3;
  }
  if ( v73 )
    return 3221225473LL;
  if ( ((v11 - 8) & 0x5D) != 0 )
  {
    switch ( v11 )
    {
      case 53:
        goto LABEL_105;
      case 66:
LABEL_106:
        v65 = (__int64 *)xmmword_1C0068620;
        v66 = 4;
        v67 = 0;
        while ( v23 > *v65 )
        {
          ++v67;
          ++v65;
          if ( v67 >= 4 )
            goto LABEL_109;
        }
        v66 = v67;
LABEL_109:
        v31 = *((_DWORD *)&xmmword_1C0068630 + 3);
        v32 = v27 + v66 * (unsigned __int16)xmmword_1C0068610;
        goto LABEL_41;
      case -111:
LABEL_105:
        v27 = 0;
        goto LABEL_106;
    }
    return 3221225473LL;
  }
  v28 = (__int64 *)*(&P + 1);
  v29 = 11;
  v30 = 0;
  while ( v23 > *v28 )
  {
    ++v30;
    ++v28;
    if ( v30 >= 0xB )
      goto LABEL_40;
  }
  v29 = v30;
LABEL_40:
  v31 = dword_1C006860C;
  v32 = (((v11 - 8) & 0x5F) != 0) + v29 * (unsigned __int16)TelemetryPerfContext;
LABEL_41:
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( g_RaidNumberProcessors == 56 )
    v34 = CurrentProcessorNumber % 0x38;
  else
    v34 = CurrentProcessorNumber % g_RaidNumberProcessors;
  v35 = *(_BYTE *)(a2 + 3);
  v36 = 0;
  LOBYTE(v37) = 0;
  v38 = v31;
  v39 = 0;
  v78 = 0LL;
  v40 = v34 * HIDWORD(qword_1C0068640);
  v41 = 0;
  v42 = v40 + 24 * (v32 + v38);
  v43 = *(_BYTE *)(a2 + 2);
  v44 = (volatile signed __int64 *)(*((_QWORD *)v8 + 281) + v42);
  if ( v43 != 40 )
  {
    v41 = *(_BYTE *)(a2 + 4);
    v46 = v35;
    LOBYTE(v46) = v35 & 0x3F;
    if ( !v43 )
    {
      v5 = *(_BYTE **)(a2 + 32);
      v36 = *(_BYTE *)(a2 + 11);
      v78 = v5;
    }
    goto LABEL_54;
  }
  v45 = *(_DWORD *)(a2 + 20);
  if ( !v45 )
  {
    v61 = *(_DWORD *)(a2 + 56);
    for ( i = 0; i < v61; ++i )
    {
      v63 = *(unsigned int *)(a2 + 4LL * i + 120);
      if ( (unsigned int)v63 >= 0x80 )
      {
        v64 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v63 < (unsigned int)v64 )
        {
          if ( *(_DWORD *)(v63 + a2) == 64 )
          {
            if ( v63 + 40 <= v64 )
              goto LABEL_126;
          }
          else if ( *(_DWORD *)(v63 + a2) == 65 )
          {
            if ( v63 + 56 <= v64 )
              goto LABEL_126;
          }
          else if ( *(_DWORD *)(v63 + a2) == 66 && v63 + 40 <= v64 )
          {
LABEL_126:
            v41 = *(_BYTE *)(v63 + a2 + 8);
            break;
          }
        }
      }
    }
  }
  v46 = v35;
  LOBYTE(v46) = v35 & 0x3F;
  if ( v45 )
    goto LABEL_53;
  v37 = 0;
  v74 = *(_DWORD *)(a2 + 56);
  if ( !v74 )
  {
    v39 = 0;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v47 = *(unsigned int *)(a2 + 4LL * v37 + 120);
    if ( (unsigned int)v47 < 0x80 )
      goto LABEL_171;
    v48 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v47 >= (unsigned int)v48 )
      goto LABEL_171;
    v49 = (unsigned int)v47;
    v50 = *(_DWORD *)(v47 + a2);
    if ( v50 == 64 )
    {
      if ( v49 + 40 <= v48 )
        goto LABEL_51;
      goto LABEL_171;
    }
    v70 = v50 - 65;
    if ( v70 )
      break;
    if ( v49 + 56 <= v48 )
    {
LABEL_51:
      v5 = *(_BYTE **)(v49 + a2 + 16);
      goto LABEL_52;
    }
LABEL_171:
    if ( ++v37 >= v74 )
      goto LABEL_53;
  }
  if ( v70 != 1 || v49 + 40 > v48 )
    goto LABEL_171;
  v5 = *(_BYTE **)(v49 + a2 + 24);
LABEL_52:
  v36 = *(_BYTE *)(v49 + a2 + 9);
  v78 = v5;
LABEL_53:
  v39 = 0;
  LOBYTE(v37) = 0;
LABEL_54:
  if ( (v35 & 0x80u) != 0 )
  {
    if ( v5 && v36 >= 8u && (unsigned __int8)((*v5 & 0x7F) - 112) <= 1u )
    {
      LOBYTE(v37) = v5[12];
      v39 = v5[2] & 0xF;
    }
    if ( (_BYTE)v46 != 1 || v39 || (_BYTE)v37 )
      goto LABEL_181;
LABEL_58:
    v52 = v44;
  }
  else
  {
    if ( v41 != 2 && (unsigned __int8)v46 <= 0x12u )
    {
      v51 = 262211;
      if ( _bittest(&v51, v46) )
        goto LABEL_58;
    }
LABEL_181:
    v52 = v44 + 1;
  }
  _InterlockedIncrement64(v52);
  _InterlockedExchangeAdd64(v44 + 2, v77);
  if ( ((v11 - 8) & 0x5D) == 0 )
  {
    if ( *((_QWORD *)v8 + 284) )
    {
      v53 = *((_QWORD *)v8 + 284)
          + dword_1C0068658
          * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1));
      if ( *(_QWORD *)v53 < v77 )
        *(_QWORD *)v53 = v77;
      if ( ((v11 - 8) & 0x5F) != 0 )
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v54 = *(unsigned int *)(a2 + 60);
        else
          v54 = *(unsigned int *)(a2 + 16);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 16), v54);
      }
      else
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v59 = *(unsigned int *)(a2 + 60);
        else
          v59 = *(unsigned int *)(a2 + 16);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 8), v59);
      }
    }
    goto LABEL_67;
  }
  if ( v11 == 53 || v11 == -111 )
  {
    if ( *((_QWORD *)v8 + 288) < v77 )
      *((_QWORD *)v8 + 288) = v77;
LABEL_67:
    if ( ((v11 - 10) & 0x5F) == 0 )
    {
      v55 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 398, v55);
      v56 = a1[96];
      if ( v56 || (v56 = a1[22]) != 0 )
      {
        if ( (*(_DWORD *)(v56 + 16) & 8) != 0 )
          v56 = *(_QWORD *)(v56 + 24);
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 184);
          if ( v57 )
          {
            if ( (unsigned __int16)*(_DWORD *)(v57 + 16) )
            {
              if ( *(_BYTE *)(a2 + 2) == 40 )
                v68 = *(unsigned int *)(a2 + 60);
              else
                v68 = *(unsigned int *)(a2 + 16);
              _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 399, v68);
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v11 != 66 )
      goto LABEL_67;
    if ( *((_QWORD *)v8 + 289) < v77 )
      *((_QWORD *)v8 + 289) = v77;
  }
  return 0LL;
}

/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C00090D0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     Feature_Servicing_2206C_38835677__private_IsEnabled @ 0x1C001E2E0 (Feature_Servicing_2206C_38835677__private_IsEnabled.c)
 *     RaidQosSupportedCommand @ 0x1C0036504 (RaidQosSupportedCommand.c)
 *     McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer @ 0x1C0051244 (McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _BYTE *v5; // rsi
  __int64 v7; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx
  char v20; // cl
  union _LARGE_INTEGER v21; // rcx
  bool v22; // zf
  LARGE_INTEGER v23; // rax
  LARGE_INTEGER v24; // rbx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  unsigned __int64 v29; // r14
  int v30; // edx
  __int64 *v31; // rcx
  int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // edi
  unsigned int v35; // ebx
  __int64 *v36; // rax
  int v37; // r8d
  unsigned int v38; // ecx
  ULONG CurrentProcessorNumber; // eax
  __int64 v40; // rcx
  unsigned __int8 v41; // di
  char v42; // r14
  __int64 v43; // rbx
  char v44; // al
  volatile signed __int64 *v45; // rbx
  int v46; // ebx
  unsigned int v47; // r11d
  unsigned int v48; // r9d
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // r10
  __int64 v52; // r8
  int v53; // ecx
  int v54; // ecx
  unsigned __int64 v55; // rcx
  unsigned int v56; // r11d
  unsigned int v57; // ebx
  unsigned int v58; // r10d
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  char v65; // cl
  char v66; // al
  unsigned __int64 v67; // rcx
  volatile signed __int64 *v68; // rax
  __int64 v69; // rcx
  int v70; // ecx
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned __int8 v74; // [rsp+B0h] [rbp-21h]
  char v75; // [rsp+B8h] [rbp-19h]
  int v76; // [rsp+C0h] [rbp-11h]
  volatile signed __int64 *v77; // [rsp+C0h] [rbp-11h]
  int v78; // [rsp+C8h] [rbp-9h]
  int v79; // [rsp+CCh] [rbp-5h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp-1h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp+7h]
  _BYTE *v82; // [rsp+E0h] [rbp+Fh]

  v5 = 0LL;
  v7 = *(unsigned __int8 *)(a2 + 2);
  LOBYTE(v78) = 0;
  LOBYTE(v79) = 0;
  v75 = 0;
  if ( (_BYTE)v7 == 40 )
    v10 = *(_DWORD *)(a2 + 20);
  else
    v10 = v7;
  v76 = v10;
  if ( v10 || ((a5 - 8) & 0x5D) != 0 )
    goto LABEL_37;
  if ( (_BYTE)v7 == 40 )
  {
    v7 = 0LL;
    v79 = *(_DWORD *)(a2 + 60);
    if ( *(_DWORD *)(a2 + 20) )
      goto LABEL_28;
    v11 = *(_DWORD *)(a2 + 56);
    v12 = 0;
    if ( !v11 )
      goto LABEL_28;
    while ( 1 )
    {
      v13 = *(unsigned int *)(a2 + 4LL * v12 + 120);
      if ( (unsigned int)v13 < 0x80 )
        goto LABEL_21;
      v14 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v13 >= (unsigned int)v14 )
        goto LABEL_21;
      v15 = v13 + a2;
      v16 = (unsigned int)v13;
      v17 = *(_DWORD *)(v13 + a2) - 64;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 && v16 + 40 <= v14 )
          {
            v7 = v15 + 32;
            if ( !*(_DWORD *)(v15 + 12) )
              v7 = 0LL;
            goto LABEL_28;
          }
          goto LABEL_21;
        }
        v19 = v16 + 56;
      }
      else
      {
        v19 = v16 + 40;
      }
      if ( v19 <= v14 )
      {
        if ( *(_BYTE *)(v15 + 10) )
          v7 = v15 + 24;
LABEL_28:
        if ( v7 )
        {
          v20 = *(_BYTE *)v7;
          if ( ((*(_BYTE *)v7 - 8) & 0xFD) != 0 )
          {
            if ( ((v20 - 40) & 0xFD) != 0 && ((v20 + 88) & 0xFD) != 0 )
            {
              if ( ((v20 + 120) & 0xFD) != 0 )
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
        goto LABEL_37;
      }
LABEL_21:
      if ( ++v12 >= v11 )
        goto LABEL_28;
    }
  }
  v79 = *(_DWORD *)(a2 + 16);
  if ( !(_BYTE)v7 && *(_BYTE *)(a2 + 10) )
  {
    v7 = a2 + 72;
    goto LABEL_28;
  }
LABEL_37:
  v21.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v22 = UseQPCTime == 0;
    goto LABEL_39;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_44:
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v21 = PerformanceFrequency;
      v24.QuadPart = UnbiasedInterruptTime;
      goto LABEL_46;
    }
    v22 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_39:
    if ( !v22 )
    {
      v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v21 = PerformanceFrequency;
      v24 = v23;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v24.QuadPart = 0LL;
LABEL_46:
  v26 = v24.QuadPart - a1[87];
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_56:
      v27 = v26;
      goto LABEL_57;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v21.QuadPart )
        return 3221225534LL;
      v7 = 10000000 * v26 % v21.QuadPart;
      v26 = 10000000 * v26 / v21.QuadPart;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_56;
  if ( !v21.QuadPart )
    return 3221225534LL;
  v7 = 10000000 * v26 % v21.QuadPart;
  v27 = 10000000 * v26 / v21.QuadPart;
LABEL_57:
  v29 = a1[86];
  v81 = v27;
  if ( *(_BYTE *)(a3 + 3216) && (unsigned __int8)RaidQosSupportedCommand(a2, v7) && v29 + v27 >= *(_QWORD *)(a3 + 3256) )
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2112));
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))Feature_Servicing_2206C_38835677__private_IsEnabled)(
                       (union _LARGE_INTEGER)v21.QuadPart,
                       v7) )
  {
    if ( v29 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2168));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 2176), v29);
      if ( v29 > *(_QWORD *)(a3 + 2184) )
        *(_QWORD *)(a3 + 2184) = v29;
      if ( *(_BYTE *)(a2 + 2) != 40 )
        goto LABEL_79;
      if ( v29 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
        _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2192));
      v78 = *(_DWORD *)(a2 + 48);
    }
    if ( *(_BYTE *)(a2 + 2) == 40 )
LABEL_78:
      *(_DWORD *)(a2 + 48) = 0;
  }
  else if ( v29 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2168));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 2176), v29);
    if ( v29 > *(_QWORD *)(a3 + 2184) )
      *(_QWORD *)(a3 + 2184) = v29;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      if ( v29 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
        _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2192));
      v78 = *(_DWORD *)(a2 + 48);
      goto LABEL_78;
    }
  }
LABEL_79:
  v30 = 1;
  if ( v29 + v81 >= HighLatencyIoThreshold
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a3 + 2240)) <= 0x80
    && (byte_1C0069845 & 0x40) != 0 )
  {
    McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer(
      a3 + 186,
      a3 + 169,
      a3 + 160,
      *(_QWORD *)(*(_QWORD *)(a3 + 24) + 4864LL),
      *(_DWORD *)(*(_QWORD *)(a3 + 24) + 56LL),
      *(_QWORD *)(a3 + 24) + 5192LL,
      *(_BYTE *)(a3 + 96),
      *(_BYTE *)(a3 + 97),
      *(_BYTE *)(a3 + 98),
      a3 + 1976,
      a3 + 160,
      a3 + 169,
      a3 + 186,
      *(_BYTE *)(a3 + 450) & 1,
      HighLatencyIoThreshold / 0x2710uLL,
      (__int64)v81 / 10000,
      v29 / 0x2710,
      a5,
      v79,
      v75,
      v78);
    v5 = 0LL;
    v30 = 1;
  }
  if ( v76 )
    return 3221225473LL;
  if ( ((a5 - 8) & 0x5D) != 0 )
  {
    if ( a5 == 66 )
      goto LABEL_95;
    if ( a5 == 53 || a5 == -111 )
    {
      v30 = 0;
LABEL_95:
      v36 = (__int64 *)xmmword_1C0069420;
      v37 = 4;
      v38 = 0;
      while ( v26 > *v36 )
      {
        ++v38;
        ++v36;
        if ( v38 >= 4 )
          goto LABEL_100;
      }
      v37 = v38;
LABEL_100:
      v34 = *((_DWORD *)&xmmword_1C0069430 + 3);
      v35 = v30 + v37 * (unsigned __int16)xmmword_1C0069410;
      goto LABEL_101;
    }
    return 3221225473LL;
  }
  v31 = (__int64 *)*(&P + 1);
  v32 = 11;
  v33 = 0;
  while ( v26 > *v31 )
  {
    ++v33;
    ++v31;
    if ( v33 >= 0xB )
      goto LABEL_90;
  }
  v32 = v33;
LABEL_90:
  v34 = dword_1C006940C;
  v35 = (((a5 - 8) & 0x5F) != 0) + v32 * (unsigned __int16)TelemetryPerfContext;
LABEL_101:
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v40 = v34;
  v41 = 0;
  v74 = *(_BYTE *)(a2 + 3);
  v42 = 0;
  v82 = 0LL;
  v43 = CurrentProcessorNumber % g_RaidNumberProcessors * HIDWORD(qword_1C0069440) + 24 * (v35 + v40);
  v44 = *(_BYTE *)(a2 + 2);
  v45 = (volatile signed __int64 *)(*(_QWORD *)(a3 + 2248) + v43);
  v77 = v45;
  if ( v44 != 40 )
  {
    v56 = v74;
    v42 = *(_BYTE *)(a2 + 4);
    LOBYTE(v56) = v74 & 0x3F;
    if ( !v44 )
    {
      v5 = *(_BYTE **)(a2 + 32);
      v41 = *(_BYTE *)(a2 + 11);
      v82 = v5;
    }
    goto LABEL_126;
  }
  v46 = *(_DWORD *)(a2 + 20);
  if ( !v46 )
  {
    v47 = *(_DWORD *)(a2 + 56);
    v48 = 0;
    if ( v47 )
    {
      while ( 1 )
      {
        v49 = *(unsigned int *)(a2 + 4LL * v48 + 120);
        if ( (unsigned int)v49 < 0x80 )
          goto LABEL_111;
        v50 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v49 >= (unsigned int)v50 )
          goto LABEL_111;
        v51 = v49 + a2;
        v52 = (unsigned int)v49;
        v53 = *(_DWORD *)(v49 + a2) - 64;
        if ( !v53 )
          goto LABEL_109;
        v54 = v53 - 1;
        if ( v54 )
          break;
        v55 = v52 + 56;
LABEL_110:
        if ( v55 <= v50 )
        {
          v42 = *(_BYTE *)(v51 + 8);
          goto LABEL_115;
        }
LABEL_111:
        if ( ++v48 >= v47 )
          goto LABEL_115;
      }
      if ( v54 != 1 )
        goto LABEL_111;
LABEL_109:
      v55 = v52 + 40;
      goto LABEL_110;
    }
  }
LABEL_115:
  v56 = v74;
  LOBYTE(v56) = v74 & 0x3F;
  if ( v46 )
    goto LABEL_125;
  v57 = *(_DWORD *)(a2 + 56);
  v58 = 0;
  if ( !v57 )
    goto LABEL_125;
  while ( 1 )
  {
    v59 = *(unsigned int *)(a2 + 4LL * v58 + 120);
    if ( (unsigned int)v59 < 0x80 )
      goto LABEL_134;
    v60 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v59 >= (unsigned int)v60 )
      goto LABEL_134;
    v61 = v59 + a2;
    v62 = (unsigned int)v59;
    v63 = *(_DWORD *)(v59 + a2) - 64;
    if ( !v63 )
      break;
    v64 = v63 - 1;
    if ( !v64 )
    {
      v67 = v62 + 56;
      goto LABEL_133;
    }
    if ( v64 == 1 && v62 + 40 <= v60 )
    {
      v5 = *(_BYTE **)(v61 + 24);
      goto LABEL_124;
    }
LABEL_134:
    if ( ++v58 >= v57 )
      goto LABEL_125;
  }
  v67 = v62 + 40;
LABEL_133:
  if ( v67 > v60 )
    goto LABEL_134;
  v5 = *(_BYTE **)(v61 + 16);
LABEL_124:
  v41 = *(_BYTE *)(v61 + 9);
  v82 = v5;
LABEL_125:
  v45 = v77;
LABEL_126:
  if ( (v74 & 0x80u) == 0 )
  {
    if ( v42 == 2 )
      goto LABEL_143;
    if ( (unsigned __int8)v56 > 0x12u )
      goto LABEL_143;
    v70 = 262211;
    if ( !_bittest(&v70, v56) )
      goto LABEL_143;
  }
  else
  {
    if ( v5 && v41 >= 8u && (unsigned __int8)((*v5 & 0x7F) - 112) <= 1u )
    {
      v65 = v5[12];
      v66 = v5[2] & 0xF;
    }
    else
    {
      v66 = 0;
      v65 = 0;
    }
    if ( (_BYTE)v56 != 1 || v66 || v65 )
    {
LABEL_143:
      v68 = v45 + 1;
      goto LABEL_144;
    }
  }
  v68 = v45;
LABEL_144:
  _InterlockedIncrement64(v68);
  _InterlockedExchangeAdd64(v45 + 2, v81);
  if ( ((a5 - 8) & 0x5D) == 0 )
  {
    if ( *(_QWORD *)(a3 + 2272) )
    {
      v69 = *(_QWORD *)(a3 + 2272)
          + dword_1C0069458
          * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1));
      if ( *(_QWORD *)v69 < v81 )
        *(_QWORD *)v69 = v81;
      if ( ((a5 - 8) & 0x5F) != 0 )
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 16), *(unsigned int *)(a2 + 60));
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 16), *(unsigned int *)(a2 + 16));
      }
      else if ( *(_BYTE *)(a2 + 2) == 40 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 8), *(unsigned int *)(a2 + 60));
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 8), *(unsigned int *)(a2 + 16));
      }
    }
    goto LABEL_166;
  }
  if ( a5 == 53 || a5 == -111 )
  {
    if ( *(_QWORD *)(a3 + 2304) < v81 )
      *(_QWORD *)(a3 + 2304) = v81;
LABEL_166:
    if ( ((a5 - 10) & 0x5F) != 0 )
      return 0LL;
    v71 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3184), v71);
    v72 = a1[96];
    if ( !v72 )
    {
      v72 = a1[22];
      if ( !v72 )
        return 0LL;
    }
    if ( (*(_DWORD *)(v72 + 16) & 8) != 0 )
      v72 = *(_QWORD *)(v72 + 24);
    if ( !v72 )
      return 0LL;
    v73 = *(_QWORD *)(v72 + 184);
    if ( !v73 || !(unsigned __int16)*(_DWORD *)(v73 + 16) )
      return 0LL;
    if ( *(_BYTE *)(a2 + 2) != 40 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3192), *(unsigned int *)(a2 + 16));
      return 0LL;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3192), *(unsigned int *)(a2 + 60));
    return 0LL;
  }
  else
  {
    if ( a5 != 66 )
      goto LABEL_166;
    if ( *(_QWORD *)(a3 + 2312) < v81 )
    {
      *(_QWORD *)(a3 + 2312) = v81;
      return 0LL;
    }
    return 0LL;
  }
}

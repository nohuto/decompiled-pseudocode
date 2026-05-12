/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C0007F60
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0007CD8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     RaidGetIoStartingLbaAndLength @ 0x1C0050810 (RaidGetIoStartingLbaAndLength.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _OWORD *a5)
{
  int v5; // eax
  char v7; // r11
  ULONGLONG v8; // rcx
  union _LARGE_INTEGER v9; // rbp
  _BYTE *v11; // r10
  char v12; // di
  _BYTE *v13; // rsi
  int v14; // r15d
  __int64 v15; // rbx
  char v16; // al
  unsigned __int8 v17; // r14
  char v18; // al
  int v19; // edi
  unsigned __int64 v20; // rcx
  __int64 result; // rax
  char v22; // bp
  unsigned int v23; // r14d
  unsigned int v24; // r11d
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  _BYTE *v29; // rax
  union _LARGE_INTEGER v30; // r8
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ecx
  _BYTE *v35; // rax
  __int64 v36; // rax
  char v37; // [rsp+60h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int8 v39; // [rsp+78h] [rbp+20h]

  PerformanceFrequency = a3;
  v5 = *(unsigned __int8 *)(a4 + 2);
  v7 = *(_BYTE *)(a4 + 3);
  v8 = 0LL;
  v37 = v7;
  v9 = a3;
  v39 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  if ( (_BYTE)v5 == 40 )
    v14 = *(_DWORD *)(a4 + 20);
  else
    v14 = v5;
  v15 = (__int64)a5;
  *a5 = 0LL;
  *(_OWORD *)(v15 + 16) = 0LL;
  *(_QWORD *)(v15 + 32) = 0LL;
  v16 = *(_BYTE *)(a4 + 2);
  if ( v16 != 40 )
  {
    if ( v16 )
      goto LABEL_33;
    v11 = (_BYTE *)(a4 + 72);
    v12 = *(_BYTE *)(a4 + 4);
    v13 = *(_BYTE **)(a4 + 32);
    if ( !*(_BYTE *)(a4 + 10) )
      v11 = 0LL;
    v17 = *(_BYTE *)(a4 + 11);
    goto LABEL_8;
  }
  v22 = 0;
  if ( *(_DWORD *)(a4 + 20) )
    goto LABEL_32;
  v23 = *(_DWORD *)(a4 + 56);
  v24 = 0;
  if ( !v23 )
    goto LABEL_31;
  while ( 1 )
  {
    v25 = *(unsigned int *)(a4 + 4LL * v24 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
    v8 = 0LL;
LABEL_69:
    if ( ++v24 >= v23 )
      goto LABEL_31;
  }
  v27 = (unsigned int)v25;
  v28 = *(_DWORD *)(v25 + a4) - 64;
  if ( !v28 )
  {
    if ( v27 + 40 > v26 )
      goto LABEL_30;
    v39 = *(_BYTE *)(v27 + a4 + 9);
LABEL_27:
    v13 = *(_BYTE **)(v27 + a4 + 16);
    v12 = *(_BYTE *)(v27 + a4 + 8);
    v29 = (_BYTE *)(v27 + a4 + 24);
    v22 = 1;
    if ( !*(_BYTE *)(v27 + a4 + 10) )
      v29 = v11;
    v11 = v29;
LABEL_30:
    v8 = 0LL;
    if ( v22 )
      goto LABEL_31;
    goto LABEL_69;
  }
  v34 = v28 - 1;
  if ( !v34 )
  {
    if ( v27 + 56 > v26 )
      goto LABEL_30;
    v39 = *(_BYTE *)(v27 + a4 + 9);
    goto LABEL_27;
  }
  if ( v34 != 1 || v27 + 40 > v26 )
    goto LABEL_30;
  v12 = *(_BYTE *)(v27 + a4 + 8);
  v13 = *(_BYTE **)(v27 + a4 + 24);
  v39 = *(_BYTE *)(v27 + a4 + 9);
  v35 = (_BYTE *)(v27 + a4 + 32);
  if ( !*(_DWORD *)(v27 + a4 + 12) )
    v35 = v11;
  v8 = 0LL;
  v11 = v35;
LABEL_31:
  v7 = v37;
LABEL_32:
  v9 = PerformanceFrequency;
LABEL_33:
  v17 = v39;
LABEL_8:
  *(_BYTE *)(v15 + 1) = v12;
  *(_BYTE *)(v15 + 5) = -1;
  *(_BYTE *)v15 = v7 & 0x3F;
  if ( v11 )
  {
    v18 = *v11;
    *(_BYTE *)(v15 + 5) = *v11;
    if ( !v14 && ((v18 - 8) & 0x5D) == 0 )
    {
      RaidGetIoStartingLbaAndLength(v11, v15 + 24);
      v8 = 0LL;
      if ( a2 )
      {
        v36 = *(_QWORD *)(a2 + 8);
        if ( v36 )
          *(_DWORD *)(v15 + 8) = *(_DWORD *)(v36 + 40);
      }
    }
  }
  v19 = -1;
  if ( *(_DWORD *)(a1 + 2244) == 1 )
  {
    if ( !v9.QuadPart )
      goto LABEL_77;
    v30.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled )
    {
      if ( !UseQPCTime )
      {
LABEL_37:
        UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
LABEL_38:
        v7 = v37;
        v8 = UnbiasedInterruptTime;
        v30 = PerformanceFrequency;
        goto LABEL_39;
      }
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
LABEL_39:
        v32 = v8 - *(_QWORD *)(v9.QuadPart + 696);
        if ( StorEtwLoggingEnabled )
        {
          if ( !UseQPCTime )
          {
LABEL_46:
            v33 = v32 / 10000;
            if ( (unsigned __int64)(v32 / 10000) > 0xFFFFFFFF )
            {
              *(_DWORD *)(v15 + 12) = -1;
            }
            else if ( v33 || !v32 )
            {
              *(_DWORD *)(v15 + 12) = v33;
            }
            else
            {
              *(_DWORD *)(v15 + 12) = 1;
            }
            goto LABEL_12;
          }
          if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
          {
            if ( !v30.QuadPart )
              goto LABEL_12;
            v32 = 10000000 * v32 / v30.QuadPart;
          }
        }
        if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v30.QuadPart )
            goto LABEL_12;
          v32 = 10000000 * v32 / v30.QuadPart;
        }
        goto LABEL_46;
      }
      if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        goto LABEL_37;
    }
    UnbiasedInterruptTime = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
    goto LABEL_38;
  }
LABEL_12:
  if ( v9.QuadPart )
  {
    v20 = *(_QWORD *)(v9.QuadPart + 688);
    if ( v20 / 0x2710 <= 0xFFFFFFFF )
    {
      if ( v20 / 0x2710 || (v19 = 1, !v20) )
        v19 = v20 / 0x2710;
    }
    *(_DWORD *)(v15 + 16) = v19;
    goto LABEL_18;
  }
LABEL_77:
  if ( *(_BYTE *)(a1 + 3216) == 1 && *(_BYTE *)v15 == 9 )
    *(_DWORD *)(v15 + 16) = 5000000 * *(_DWORD *)(a1 + 3240) / 0x2710u;
LABEL_18:
  *(_DWORD *)(v15 + 20) = *(_DWORD *)(a1 + 672);
  if ( v7 < 0 && v13 && v17 >= 8u && (unsigned __int8)((*v13 & 0x7F) - 112) <= 1u )
  {
    *(_BYTE *)(v15 + 2) = v13[2] & 0xF;
    *(_BYTE *)(v15 + 3) = v13[12];
    *(_BYTE *)(v15 + 4) = v13[13];
  }
  result = *(unsigned int *)(a1 + 2328);
  *(_DWORD *)(v15 + 32) = result;
  return result;
}

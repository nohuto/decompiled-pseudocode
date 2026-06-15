/*
 * XREFs of ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400632E8
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140063080 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140061978 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r15
  float v18; // xmm6_4
  int v19; // r10d
  unsigned __int64 v20; // rbp
  double LowPart; // xmm0_8
  double v22; // xmm0_8
  double v23; // xmm1_8
  signed __int64 v24; // rax
  int v25; // eax
  double v26; // xmm3_8
  float v27; // xmm0_4
  __int64 v28; // rdx
  double v29; // xmm0_8
  double v30; // xmm1_8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  double v33; // xmm0_8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  __int64 v37; // r9
  float v38; // xmm2_4
  __int64 v39; // rcx
  float v41; // [rsp+40h] [rbp-78h]
  unsigned __int64 v42; // [rsp+60h] [rbp-58h]
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v44; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  PerformanceCount.QuadPart = 0LL;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v9 = *((_QWORD *)this + 9);
  if ( (v8 & 4) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 152), 0LL, 0LL);
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 0LL, 0LL);
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v9 + 112);
  v12 = 3LL;
  v13 = *(_QWORD *)(*((_QWORD *)this + 9) + 128LL);
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
    v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 32);
    v16 = *((_QWORD *)this + 9);
    v44 = v15;
    v17 = *(_QWORD *)(v16 + 40 * v14 + 56);
    v18 = *(float *)(*((_QWORD *)this + 9) + 40 * v14 + 64);
    v19 = *(_DWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 68);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0) )
      break;
    v12 = (unsigned int)(v12 - 1);
    if ( !(_DWORD)v12 )
    {
      v4 = -2005139393;
LABEL_12:
      *a2 = *((_QWORD *)this + 23);
      AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_NonOffload", 291, v4, v12);
      return v4;
    }
  }
  if ( !v19 )
  {
    v4 = -2005139375;
    goto LABEL_12;
  }
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 152LL), 0LL, 0LL)
      / (unsigned __int64)*((unsigned int *)this + 22);
  v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 24LL), 0LL, 0LL)
      / (unsigned __int64)*((unsigned int *)this + 22);
  if ( v15 >= v11 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v22 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v23 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v23 = (double)(int)g_u64QPCFrequency;
    v24 = (unsigned int)(int)(v22 / v23);
    if ( a3 )
      *a3 = v24;
    if ( v24 < v17 )
      v25 = 0;
    else
      v25 = v24 - v17;
    v26 = v18;
    v27 = *((float *)this + 39);
    v28 = v44 + (unsigned int)(int)((double)v25 * v18 / 10000000.0 + 0.5) - v13 - v11;
    if ( v27 != v18 )
    {
      v29 = v27;
      if ( v28 < 0 )
      {
        v31 = v28 & 1 | ((v44 + (unsigned int)(int)((double)v25 * v26 / 10000000.0 + 0.5) - v13 - v11) >> 1);
        v30 = (double)(int)v31 + (double)(int)v31;
      }
      else
      {
        v30 = (double)(int)v28;
      }
      v32 = 0LL;
      v33 = v29 * v30 / v26 + 0.5;
      if ( v33 >= 9.223372036854776e18 )
      {
        v33 = v33 - 9.223372036854776e18;
        if ( v33 < 9.223372036854776e18 )
          v32 = 0x8000000000000000uLL;
      }
      v28 = v32 + (unsigned int)(int)v33;
    }
    v34 = v20 + v28;
    v35 = v34;
    if ( v34 >= v42 )
      v35 = v42;
    v36 = *((unsigned int *)this + 22) * v35;
    *a2 = v36;
    if ( (byte_140090581 & 4) != 0 )
    {
      LOBYTE(v37) = 0;
      if ( a3 )
        v37 = *a3;
      v38 = (float)(int)*(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
      v39 = *(_QWORD *)(*((_QWORD *)this + 9) + 24LL);
      v41 = (float)(int)v39;
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        v39,
        v34,
        (__int64)this,
        6,
        v36,
        v37,
        v34,
        v20,
        SLOBYTE(v41),
        SLOBYTE(v38),
        SLOBYTE(v18),
        *((_DWORD *)this + 39));
    }
  }
  else
  {
    *a2 = v20 * *((unsigned int *)this + 22);
  }
  return v4;
}

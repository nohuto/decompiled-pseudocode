/*
 * XREFs of ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x14005A6D8
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005A470 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140058DB8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_NonOffload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  char v8; // al
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r8d
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r15
  float v18; // xmm6_4
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  double LowPart; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  signed __int64 v25; // rax
  int v26; // eax
  double v27; // xmm3_8
  float v28; // xmm0_4
  __int64 v29; // rdx
  double v30; // xmm0_8
  double v31; // xmm1_8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  double v34; // xmm0_8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  float v39; // xmm2_4
  __int64 v40; // rcx
  float v42; // [rsp+40h] [rbp-78h]
  unsigned __int64 v43; // [rsp+60h] [rbp-58h]
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v45; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  PerformanceCount.QuadPart = 0LL;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  if ( (v8 & 4) == 0 )
  {
    v10 = v9[19];
LABEL_3:
    *a2 = v10;
    return v4;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = v9[3];
    goto LABEL_3;
  }
  v11 = v9[14];
  v12 = 3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 9) + 128LL);
  while ( 1 )
  {
    v14 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
    v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v14 + 32);
    v16 = *((_QWORD *)this + 9);
    v45 = v15;
    v17 = *(_QWORD *)(v16 + 40 * v14 + 56);
    v18 = *(float *)(*((_QWORD *)this + 9) + 40 * v14 + 64);
    v19 = *(unsigned int *)(*((_QWORD *)this + 9) + 40 * v14 + 68);
    if ( (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0) )
      break;
    if ( !--v12 )
    {
      v4 = -2005139393;
LABEL_12:
      *a2 = *((_QWORD *)this + 23);
      AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_NonOffload", 291, v4, v19);
      return v4;
    }
  }
  if ( !(_DWORD)v19 )
  {
    v4 = -2005139375;
    goto LABEL_12;
  }
  v20 = *((_QWORD *)this + 9);
  v21 = *(_QWORD *)(v20 + 152) / (unsigned __int64)*((unsigned int *)this + 22);
  v43 = *(_QWORD *)(v20 + 24) / (unsigned __int64)*((unsigned int *)this + 22);
  if ( v15 >= v11 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v23 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v24 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v24 = (double)(int)g_u64QPCFrequency;
    v25 = (unsigned int)(int)(v23 / v24);
    if ( a3 )
      *a3 = v25;
    if ( v25 < v17 )
      v26 = 0;
    else
      v26 = v25 - v17;
    v27 = v18;
    v28 = *((float *)this + 39);
    v29 = v45 + (unsigned int)(int)((double)v26 * v18 / 10000000.0 + 0.5) - v13 - v11;
    if ( v28 != v18 )
    {
      v30 = v28;
      if ( v29 < 0 )
      {
        v32 = v29 & 1 | ((v45 + (unsigned int)(int)((double)v26 * v27 / 10000000.0 + 0.5) - v13 - v11) >> 1);
        v31 = (double)(int)v32 + (double)(int)v32;
      }
      else
      {
        v31 = (double)(int)v29;
      }
      v33 = 0LL;
      v34 = v30 * v31 / v27 + 0.5;
      if ( v34 >= 9.223372036854776e18 )
      {
        v34 = v34 - 9.223372036854776e18;
        if ( v34 < 9.223372036854776e18 )
          v33 = 0x8000000000000000uLL;
      }
      v29 = v33 + (unsigned int)(int)v34;
    }
    v35 = v21 + v29;
    v36 = v35;
    if ( v35 >= v43 )
      v36 = v43;
    v37 = *((unsigned int *)this + 22) * v36;
    *a2 = v37;
    if ( (byte_140085401 & 4) != 0 )
    {
      LOBYTE(v38) = 0;
      if ( a3 )
        v38 = *a3;
      v39 = (float)(int)*(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
      v40 = *(_QWORD *)(*((_QWORD *)this + 9) + 24LL);
      v42 = (float)(int)v40;
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        v40,
        v35,
        (__int64)this,
        6,
        v37,
        v38,
        v35,
        v21,
        SLOBYTE(v42),
        SLOBYTE(v39),
        SLOBYTE(v18),
        *((_DWORD *)this + 39));
    }
  }
  else
  {
    *a2 = v21 * *((unsigned int *)this + 22);
  }
  return v4;
}

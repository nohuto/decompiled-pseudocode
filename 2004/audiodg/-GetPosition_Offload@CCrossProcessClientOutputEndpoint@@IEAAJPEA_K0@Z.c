/*
 * XREFs of ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x14005AA10
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005A470 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x140059F0C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140059FB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_Offload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 **a2,
        __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r15
  signed __int32 v7; // r12d
  int v8; // r14d
  __int64 v9; // rcx
  unsigned __int64 *v10; // r11
  __int64 v11; // r13
  float v12; // xmm6_4
  int v13; // r10d
  signed __int32 v14; // eax
  double LowPart; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm1_8
  signed __int64 v18; // rax
  int v19; // eax
  double v20; // xmm2_8
  double v21; // xmm3_8
  float v22; // xmm0_4
  double v23; // xmm0_8
  double v24; // xmm1_8
  unsigned __int64 v25; // rax
  double v26; // xmm0_8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 *v31; // [rsp+58h] [rbp-39h]
  unsigned __int64 v32; // [rsp+60h] [rbp-31h] BYREF
  __int64 v33; // [rsp+68h] [rbp-29h] BYREF
  __int64 v34; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 *v35; // [rsp+78h] [rbp-19h] BYREF
  CCrossProcessClientOutputEndpoint *v36; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-9h] BYREF
  __int64 v38; // [rsp+90h] [rbp-1h] BYREF
  CCrossProcessClientOutputEndpoint *v39; // [rsp+98h] [rbp+7h] BYREF
  signed __int32 v40; // [rsp+F8h] [rbp+67h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (unsigned __int64 *)a3;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v8 = 0;
  if ( (v7 & 4) != 0 )
  {
    a3 = 3LL;
    do
    {
      v3 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
      v10 = *(unsigned __int64 **)(*((_QWORD *)this + 9) + 40 * v3 + 32);
      v31 = v10;
      v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v3 + 56);
      v12 = *(float *)(*((_QWORD *)this + 9) + 40 * v3 + 64);
      v13 = *(_DWORD *)(*((_QWORD *)this + 9) + 40 * v3 + 68);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
      if ( (_DWORD)v3 == v14 )
        break;
      a3 = (unsigned int)(a3 - 1);
    }
    while ( (_DWORD)a3 );
    if ( v13 && (_DWORD)v3 == v14 )
    {
      *a2 = v10;
      a3 = (__int64)v10;
      if ( (v7 & 1) != 0 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
                  + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
        else
          LowPart = (double)(int)PerformanceCount.LowPart;
        v16 = LowPart * 10000000.0;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v17 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
              + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
        else
          v17 = (double)(int)g_u64QPCFrequency;
        v18 = (unsigned int)(int)(v16 / v17);
        if ( v4 )
          *v4 = v18;
        if ( v18 < v11 )
          v19 = 0;
        else
          v19 = v18 - v11;
        v10 = v31;
        v20 = v12;
        v21 = DOUBLE_0_5;
        *a2 = (unsigned __int64 *)((char *)*a2 + (unsigned int)(int)((double)v19 * v12 / 10000000.0 + 0.5));
        a3 = (__int64)*a2;
      }
      else
      {
        v21 = DOUBLE_0_5;
        v20 = v12;
      }
      v22 = *((float *)this + 39);
      if ( v22 != v12 )
      {
        v23 = v22;
        if ( a3 < 0 )
          v24 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1))
              + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
        else
          v24 = (double)(int)a3;
        v25 = 0LL;
        v26 = v23 * v24 / v20 + v21;
        if ( v26 >= 9.223372036854776e18 )
        {
          v26 = v26 - 9.223372036854776e18;
          if ( v26 < 9.223372036854776e18 )
            v25 = 0x8000000000000000uLL;
        }
        a3 = v25 + (unsigned int)(int)v26;
        *a2 = (unsigned __int64 *)a3;
      }
      v27 = *((unsigned int *)this + 22);
      v28 = *(_QWORD *)(*((_QWORD *)this + 9) + 24LL) / v27;
      if ( a3 > v28 )
      {
        if ( (unsigned int)dword_140084010 > 5 )
        {
          v32 = *(_QWORD *)(*((_QWORD *)this + 9) + 24LL) / (unsigned __int64)*((unsigned int *)this + 22);
          v33 = a3;
          v34 = v11;
          v35 = v10;
          v36 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v27,
            byte_1400724DC,
            a3,
            v3,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32);
        }
        *a2 = (unsigned __int64 *)v28;
        a3 = v28;
      }
      v9 = a3 * *((unsigned int *)this + 22);
    }
    else
    {
      v9 = *((_QWORD *)this + 23);
      v8 = -2005139393;
    }
  }
  else
  {
    v9 = 0LL;
  }
  *a2 = (unsigned __int64 *)v9;
  if ( (unsigned int)dword_140084010 > 5 )
  {
    if ( v4 )
      v29 = *v4;
    else
      v29 = 0LL;
    v37 = v29;
    v38 = v9;
    v40 = v7;
    v39 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v9,
      byte_14007254A,
      a3,
      v3,
      (__int64)&v39,
      (__int64)&v40,
      (__int64)&v38,
      (__int64)&v37);
  }
  if ( v8 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_Offload", 404, (unsigned int)v8, v3);
  return (unsigned int)v8;
}

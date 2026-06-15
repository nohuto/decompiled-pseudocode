/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140062C60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x1400618BC (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetDevicePosition(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 *v5; // rbx
  int v7; // ebp
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  int v10; // r11d
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v5 = (unsigned __int64 *)a2;
  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 43) + 164LL), 0, 0);
    v7 = 0;
    a4 = 3LL;
    while ( 1 )
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 43) + 160LL), 0, 0);
      a2 = 5 * v8;
      v9 = *(_QWORD *)(*((_QWORD *)this - 43) + 40 * v8 + 32);
      v10 = *(_DWORD *)(*((_QWORD *)this - 43) + 40 * v8 + 68);
      if ( (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 43) + 160LL), 0, 0) )
        break;
      a4 = (unsigned int)(a4 - 1);
      if ( !(_DWORD)a4 )
      {
        v7 = -2005139393;
        *v5 = *((_QWORD *)this - 28);
        goto LABEL_12;
      }
    }
    if ( v10 )
    {
      *v5 = v9;
    }
    else
    {
      v7 = -2005139375;
      *v5 = *((_QWORD *)this - 28);
    }
  }
  else
  {
    v7 = -2147467261;
  }
LABEL_12:
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v12 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v13 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v13 = (double)(int)g_u64QPCFrequency;
    *a3 = (unsigned int)(int)(v12 / v13);
  }
  if ( (byte_140090581 & 4) != 0 )
  {
    v14 = 0LL;
    if ( a3 )
      v14 = *a3;
    LOBYTE(v15) = 0;
    if ( v5 )
      v15 = *v5;
    McTemplateU0pqxxxx_EventWriteTransfer(v14, a2, (__int64)this - 416, 7, 0, v15, 0, v14);
  }
  if ( v5 )
    *((_QWORD *)this - 28) = *v5;
  if ( v7 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetDevicePosition", 559, (unsigned int)v7, a4);
  return (unsigned int)v7;
}

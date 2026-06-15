/*
 * XREFs of ?GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14006C1E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x14006177C (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006854C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetDevicePosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v7; // esi
  unsigned __int64 v8; // rax
  double LowPart; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm1_8
  __int64 v12; // rcx
  __int64 v13; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v18[4]; // [rsp+58h] [rbp-70h] BYREF
  int v19; // [rsp+7Ch] [rbp-4Ch]
  _BYTE v20[40]; // [rsp+80h] [rbp-48h] BYREF

  PerformanceCount.QuadPart = 0LL;
  if ( *((_BYTE *)this - 1232) )
  {
    if ( a2 )
    {
      if ( a3 )
        *a3 = 0LL;
      v7 = (*(__int64 (__fastcall **)(char *, _BYTE *, unsigned __int64 *, _BYTE *, _BYTE *))(*((_QWORD *)this - 166)
                                                                                            + 96LL))(
             (char *)this - 1328,
             v20,
             v18,
             v17,
             v16);
      if ( v7 >= 0 )
      {
        if ( v19 )
        {
          v8 = v18[0];
        }
        else
        {
          v8 = *((_QWORD *)this - 148);
          v7 = -2005139375;
        }
        *a2 = v8;
      }
    }
    else
    {
      v7 = -2147467261;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v10 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v11 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v11 = (double)(int)g_u64QPCFrequency;
    *a3 = (unsigned int)(int)(v10 / v11);
  }
  if ( (byte_140090541 & 4) != 0 )
  {
    if ( a3 )
      v12 = *a3;
    else
      v12 = 0LL;
    if ( a2 )
      v13 = *a2;
    else
      LOBYTE(v13) = 0;
    McTemplateU0pqxxxx_EventWriteTransfer(v12, (__int64)a2, (__int64)this - 1328, 7, 0, v13, 0, v12);
  }
  if ( a2 )
    *((_QWORD *)this - 148) = *a2;
  if ( v7 < 0 )
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetDevicePosition",
      594,
      (unsigned int)v7,
      a4);
  return (unsigned int)v7;
}

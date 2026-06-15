/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140063BC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140058DB8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006413C (-IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140064170 (-IsValidTimestamp@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetPosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 *v6; // rbx
  signed __int64 v8; // r15
  int v9; // r12d
  unsigned int v10; // r14d
  int v11; // eax
  __int64 v12; // rax
  double LowPart; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // r15
  double v19; // xmm2_8
  unsigned __int64 v20; // rax
  double v21; // xmm2_8
  unsigned __int64 v22; // rcx
  double v23; // xmm0_8
  double v24; // xmm0_8
  double v25; // xmm1_8
  __int64 v26; // r9
  unsigned __int16 v27; // ax
  __int64 v28; // r8
  char *v29; // rsi
  __int64 v30; // rcx
  float v31; // xmm1_4
  unsigned __int64 v32; // r10
  __int64 v33; // rax
  float v35; // [rsp+50h] [rbp-71h]
  float v36; // [rsp+60h] [rbp-61h]
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-59h] BYREF
  __int64 v38; // [rsp+70h] [rbp-51h] BYREF
  signed __int64 v39; // [rsp+78h] [rbp-49h] BYREF
  __int128 v40; // [rsp+80h] [rbp-41h] BYREF
  __int128 v41; // [rsp+90h] [rbp-31h]
  __int64 v42; // [rsp+A0h] [rbp-21h]
  __int128 v43; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-9h]
  __int64 v45; // [rsp+C8h] [rbp+7h]

  v4 = 0LL;
  v6 = (__int64 *)a2;
  PerformanceCount.QuadPart = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v9 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( !*((_BYTE *)this - 1224) )
  {
    v10 = -2005139437;
LABEL_63:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 488, v10, a4);
    return v10;
  }
  if ( !a2 )
  {
    v10 = -2147467261;
    goto LABEL_40;
  }
  if ( a3 )
    *a3 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v10 = -2005139387;
    goto LABEL_40;
  }
  v11 = (*(__int64 (__fastcall **)(char *, __int128 *, __int128 *, __int64 *, signed __int64 *))(*((_QWORD *)this - 165)
                                                                                               + 96LL))(
          (char *)this - 1320,
          &v43,
          &v40,
          &v38,
          &v39);
  v4 = 0LL;
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_40;
  if ( !CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1320)) )
  {
    *v6 = v38;
    goto LABEL_40;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidTimestamp((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1320)) )
  {
    v12 = v39;
LABEL_14:
    *v6 = v12;
    goto LABEL_40;
  }
  if ( HIDWORD(v42) == (_DWORD)v4 )
  {
    v10 = -2005139375;
    *v6 = *((_QWORD *)this - 148);
    goto LABEL_40;
  }
  if ( (unsigned __int64)v40 < (_QWORD)v44 + (_QWORD)v43 )
  {
    v12 = v38;
    goto LABEL_14;
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v14 = LowPart * 10000000.0;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v15 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
  else
    v15 = (double)(int)g_u64QPCFrequency;
  v4 = 0LL;
  v16 = (unsigned int)(int)(v14 / v15);
  if ( a3 )
    *a3 = v16;
  if ( v16 >= *((__int64 *)&v41 + 1) )
    v9 = v16 - DWORD2(v41);
  v17 = *((_DWORD *)this - 254);
  v18 = v40 + (unsigned int)(int)(*(float *)&v42 * (double)v9 / 10000000.0 + 0.5) - (_QWORD)v44 - v43;
  if ( (float)v17 != *(float *)&v42 )
  {
    v19 = (double)v17;
    v20 = 0LL;
    v21 = v19 * (double)(int)v18 / *(float *)&v42 + 0.5;
    if ( v21 >= 9.223372036854776e18 )
    {
      v21 = v21 - 9.223372036854776e18;
      if ( v21 < 9.223372036854776e18 )
        v20 = 0x8000000000000000uLL;
    }
    v18 = v20 + (unsigned int)(int)v21;
  }
  v8 = v38 + v18;
  v22 = v39;
  if ( v8 < v39 )
    v22 = v8;
  *v6 = v22;
  a2 = (unsigned __int64 *)*((_QWORD *)this - 148);
  if ( v22 < (unsigned __int64)a2 )
  {
    if ( (byte_140085401 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        v22,
        (__int64)a2,
        (__int64)this - 1320,
        8,
        v22,
        (char)a2,
        (_BYTE)a2 - v22,
        0,
        0,
        0,
        0,
        0);
      a2 = (unsigned __int64 *)*((_QWORD *)this - 148);
      v4 = 0LL;
    }
    *v6 = (__int64)a2;
  }
LABEL_40:
  if ( a3 && *a3 == v4 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      v23 = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
          + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      v23 = (double)(int)PerformanceCount.LowPart;
    v24 = v23 * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v25 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v25 = (double)(int)g_u64QPCFrequency;
    LOBYTE(v4) = 0;
    *a3 = (unsigned int)(int)(v24 / v25);
  }
  LOBYTE(a2) = byte_140085401;
  if ( (byte_140085401 & 4) != 0 )
  {
    LOBYTE(v26) = v4;
    if ( a3 )
      v26 = *a3;
    v27 = *((_WORD *)this - 504);
    if ( v6 )
      v28 = *v6 * v27;
    else
      LOBYTE(v28) = v4;
    v29 = (char *)this - 1320;
    v36 = (float)*((int *)this - 254);
    v30 = v27 * *(_QWORD *)(*((_QWORD *)this - 4) + 32LL);
    v31 = (float)(int)(v39 * v27);
    v35 = (float)(int)v30;
    McTemplateU0pqxxxxffff_EventWriteTransfer(
      v30,
      v8 * v27,
      (__int64)this - 1320,
      6,
      v28,
      v26,
      v8 * v27,
      v38 * v27,
      SLOBYTE(v31),
      SLOBYTE(v35),
      v42,
      SLOBYTE(v36));
    LOBYTE(a2) = byte_140085401;
  }
  else
  {
    v29 = (char *)this - 1320;
  }
  if ( v6 )
  {
    v32 = *((_QWORD *)this - 148);
    v33 = *v6;
    if ( *v6 < v32 && ((unsigned __int8)a2 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *v6,
        (__int64)a2,
        (__int64)v29,
        8,
        *v6,
        v32,
        *((_WORD *)this - 504),
        0,
        0,
        0,
        0,
        0);
      v33 = *v6;
    }
    *((_QWORD *)this - 148) = v33;
    *v6 *= *((unsigned __int16 *)this - 504);
  }
  if ( (v10 & 0x80000000) != 0 )
    goto LABEL_63;
  return v10;
}

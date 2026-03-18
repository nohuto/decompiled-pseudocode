/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C02D8AC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0020DE8 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __m128i *v9; // rax
  __m128i v10; // xmm1
  void *v11; // xmm0_8
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // sf
  PVOID v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v32[16]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v33; // [rsp+60h] [rbp-58h]
  int v34; // [rsp+70h] [rbp-48h] BYREF
  __int64 v35; // [rsp+78h] [rbp-40h]
  char v36; // [rsp+80h] [rbp-38h]
  __m128i v37; // [rsp+88h] [rbp-30h]
  __int64 v38; // [rsp+98h] [rbp-20h]
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2088);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2088);
  if ( !DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_17;
  }
  v9 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (__m128i *)MmUserProbeAddress;
  v10 = *v9;
  v33 = v10;
  v37 = v10;
  v38 = 0LL;
  v11 = (void *)_mm_srli_si128(v10, 8).m128i_u64[0];
  if ( v11 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(v11, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v8 = v12;
    if ( v12 == -1073741788 )
    {
      WdLogSingleEntry2(3LL, v11, -1073741788LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 )
      {
        LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v34);
      }
      return 3221225508LL;
    }
    if ( v12 < 0 )
    {
      WdLogSingleEntry2(3LL, v11, v12);
      goto LABEL_17;
    }
    v19 = Object;
    v20 = *((_QWORD *)Object + 2);
    if ( !v20 )
    {
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, Object, -1073741811LL);
    }
    v21 = *(_QWORD *)(v20 + 96);
    if ( v21 )
      goto LABEL_28;
    v22 = *(_QWORD *)(v20 + 80);
    if ( v22 )
      v21 = *(_QWORD *)(v22 + 16);
    if ( v21 )
LABEL_28:
      v38 = *(_QWORD *)(v21 + 404);
    ObfDereferenceObject(v19);
    if ( v8 < 0 )
    {
LABEL_17:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 )
      {
        v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_19;
      }
      return (unsigned int)v8;
    }
  }
  else
  {
    v23 = _mm_cvtsi128_si32(v10);
    if ( !v23 )
    {
      v8 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 )
      {
        LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_19:
        if ( v18 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v34);
      }
      return (unsigned int)v8;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v32);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    Global = DXGGLOBAL_GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v23, 2);
    v26 = ObjectA;
    if ( !ObjectA )
    {
      v27 = v23;
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, v27, -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
      goto LABEL_17;
    }
    v28 = *(_QWORD *)(ObjectA + 96);
    if ( v28 )
      goto LABEL_38;
    v29 = *(_QWORD *)(v26 + 80);
    if ( v29 )
      v28 = *(_QWORD *)(v29 + 16);
    if ( v28 )
LABEL_38:
      v38 = *(_QWORD *)(v28 + 404);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  }
  if ( a1 + 24 > MmUserProbeAddress || a1 + 24 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(__m128i *)a1 = v33;
  *(_QWORD *)(a1 + 16) = v38;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v34);
  return 0LL;
}

/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C022A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00065E8 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001BFA0 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __m128i *v8; // rax
  __m128i v9; // xmm1
  void *v10; // xmm0_8
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  _BYTE v46[16]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v47; // [rsp+40h] [rbp-58h]
  int v48; // [rsp+50h] [rbp-48h] BYREF
  __int64 v49; // [rsp+58h] [rbp-40h]
  char v50; // [rsp+60h] [rbp-38h]
  __m128i v51; // [rsp+68h] [rbp-30h]
  __int64 v52; // [rsp+78h] [rbp-20h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF

  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2088);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2088LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
    goto LABEL_45;
  v7 = MmUserProbeAddress;
  v8 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (__m128i *)MmUserProbeAddress;
  v9 = *v8;
  v47 = v9;
  v51 = v9;
  v52 = 0LL;
  v10 = (void *)_mm_srli_si128(v9, 8).m128i_u64[0];
  if ( !v10 )
  {
    v30 = _mm_cvtsi128_si32(v9);
    if ( v30 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v46, v6);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
      Global = DXGGLOBAL::GetGlobal(v32, v31);
      ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v30, 2);
      v37 = ObjectA;
      if ( ObjectA )
      {
        v40 = *(_QWORD *)(ObjectA + 96);
        if ( v40 )
          goto LABEL_36;
        v41 = *(_QWORD *)(v37 + 80);
        if ( v41 )
          v40 = *(_QWORD *)(v41 + 16);
        if ( v40 )
LABEL_36:
          v52 = *(_QWORD *)(v40 + 316);
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v46, v35);
        goto LABEL_38;
      }
      v38 = WdLogNewEntry5_WdWarning(0LL, v35, v36);
      *(_QWORD *)(v38 + 24) = v30;
      LODWORD(v15) = -1073741811;
      *(_QWORD *)(v38 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v38);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v46, v39);
LABEL_16:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v22);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v48);
      return (unsigned int)v15;
    }
LABEL_45:
    v45 = WdLogNewEntry5_WdError(v7, v6);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v45 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v45);
    goto LABEL_16;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(v10, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v15 = v11;
  if ( v11 == -1073741788 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v10;
    *(_QWORD *)(v16 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v17);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v48);
    }
    return 3221225508LL;
  }
  if ( v11 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v21 + 24) = v10;
    *(_QWORD *)(v21 + 32) = v15;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_16;
  }
  v25 = Object;
  v26 = *((_QWORD *)Object + 2);
  if ( !v26 )
  {
    v27 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v27 + 24) = v25;
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
  }
  v28 = *(_QWORD *)(v26 + 96);
  if ( v28 )
    goto LABEL_26;
  v29 = *(_QWORD *)(v26 + 80);
  if ( v29 )
    v28 = *(_QWORD *)(v29 + 16);
  if ( v28 )
LABEL_26:
    v52 = *(_QWORD *)(v28 + 316);
  ObfDereferenceObject(v25);
  if ( (int)v15 < 0 )
    goto LABEL_16;
LABEL_38:
  v42 = a1 + 24;
  if ( a1 + 24 > MmUserProbeAddress || v42 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(__m128i *)a1 = v47;
  *(_QWORD *)(a1 + 16) = v52;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v42);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v48);
  return 0LL;
}

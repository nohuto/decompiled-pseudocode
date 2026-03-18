/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C01E5FC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v6; // rdi
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  __int64 v12; // rsi
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct DXGADAPTER *v18; // r8
  __int64 v19; // rdx
  struct _DXGK_DRIVERCAPS *v20; // rax
  __int64 v21; // r9
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int128 v32; // xmm1
  struct DXGADAPTER *v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  char v39; // [rsp+80h] [rbp-80h]
  _BYTE v40[144]; // [rsp+90h] [rbp-70h] BYREF

  v37 = -1;
  v6 = a5;
  v38 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3005);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 3005);
  memset(a2, 0, 0x250uLL);
  v33 = 0LL;
  v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, v10, &v34, 0LL, 0LL, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry2(2LL, a1, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddGetDriverCaps (ntStatus = 0x%I64x).",
      (__int64)a1,
      v12,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( !v33 )
    {
      WdLogSingleEntry1(1LL, 3216LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef != NULL", 3216LL, 0LL, 0LL, 0LL, 0LL);
    }
    v35 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v35);
    v14 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, v13, &v36, 0);
    v17 = v14;
    if ( v14 < 0 )
    {
      v31 = WdLogNewEntry5_WdTrace(v16, v15);
      *(_QWORD *)(v31 + 24) = a1;
      *(_QWORD *)(v31 + 32) = v17;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v33, v35);
    LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40, 0LL);
    if ( (int)v12 >= 0 )
    {
      v18 = v33;
      v19 = 4LL;
      v20 = a5;
      v21 = 4LL;
      v22 = (_OWORD *)((char *)v33 + 2088);
      do
      {
        *(_OWORD *)&v20->HighestAcceptableAddress.LowPart = *v22;
        *(_OWORD *)&v20->ApertureSegmentCommitLimit = v22[1];
        *(_OWORD *)&v20->PointerCaps.0 = v22[2];
        *(_OWORD *)&v20->GammaRampCaps.0 = v22[3];
        *(_OWORD *)&v20->SchedulingCaps.0 = v22[4];
        *(_OWORD *)v20->GpuEngineTopology.Reserved = v22[5];
        *(_OWORD *)&v20->GpuEngineTopology.Reserved[4] = v22[6];
        v20 = (struct _DXGK_DRIVERCAPS *)((char *)v20 + 128);
        v23 = v22[7];
        v22 += 8;
        *(_OWORD *)&v20[-1].SupportSurpriseRemoval = v23;
        --v21;
      }
      while ( v21 );
      *(_OWORD *)&v20->HighestAcceptableAddress.LowPart = *v22;
      *(_OWORD *)&v20->ApertureSegmentCommitLimit = v22[1];
      *(_OWORD *)&v20->PointerCaps.0 = v22[2];
      *(_OWORD *)&v20->GammaRampCaps.0 = v22[3];
      *(_OWORD *)&v20->SchedulingCaps.0 = v22[4];
      if ( v35 )
      {
        v24 = (_OWORD *)((char *)v35 + 2088);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v24;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v24[1];
          *(_OWORD *)&a2->PointerCaps.0 = v24[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v24[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v24[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v24[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v24[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v25 = v24[7];
          v24 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v25;
          --v19;
        }
        while ( v19 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v24;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v24[1];
        *(_OWORD *)&a2->PointerCaps.0 = v24[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v24[3];
        v26 = v24[4];
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v6->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v6->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v6->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v6->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v6->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v6->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v6->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v32 = *(_OWORD *)&v6->GpuEngineTopology.Reserved[8];
          v6 = (struct _DXGK_DRIVERCAPS *)((char *)v6 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v32;
          --v19;
        }
        while ( v19 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v6->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v6->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v6->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v6->GammaRampCaps.0;
        v26 = *(_OWORD *)&v6->SchedulingCaps.0;
      }
      v27 = v34;
      LODWORD(v12) = 0;
      *(_OWORD *)&a2->SchedulingCaps.0 = v26;
      *a3 = v18;
      *a4 = v27;
      v33 = 0LL;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
    DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
  }
  DXGADAPTER_REFERENCE::Assign(&v33, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v37);
  }
  return (unsigned int)v12;
}

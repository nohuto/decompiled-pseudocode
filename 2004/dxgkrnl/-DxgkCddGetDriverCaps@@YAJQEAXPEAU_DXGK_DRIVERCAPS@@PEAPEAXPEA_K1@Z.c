/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C0166650
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009C94 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v8; // rdi
  __int64 v10; // rdx
  struct DXGADAPTER **v11; // rax
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  struct DXGADAPTER **v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rdx
  struct DXGADAPTER *v24; // r8
  struct _DXGK_DRIVERCAPS *v25; // rcx
  __int64 v26; // r9
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int128 v40; // xmm1
  struct DXGADAPTER *v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v43; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  char v47; // [rsp+70h] [rbp-90h]
  _BYTE v48[144]; // [rsp+80h] [rbp-80h] BYREF

  v45 = -1;
  v46 = 0LL;
  v8 = a5;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3005);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 3005LL);
  memset(a2, 0, sizeof(struct _DXGK_DRIVERCAPS));
  v41 = 0LL;
  v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v41, v10);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0LL, v11, &v42, 0LL, 0LL, 0);
  v15 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v37 + 24) = a1;
    *(_QWORD *)(v37 + 32) = v15;
    WdLogEvent5_WdError(v37);
  }
  else
  {
    if ( !v41 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v38 + 24) = 3153LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v43 = 0LL;
    v16 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v43, v13);
    v17 = DxgkpGetPairingAdapters(a1, 0LL, 0LL, 0LL, v16, &v44, 0);
    v22 = v17;
    if ( v17 < 0 )
    {
      v39 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      *(_QWORD *)(v39 + 24) = a1;
      *(_QWORD *)(v39 + 32) = v22;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v41, v43);
    LODWORD(v15) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
    if ( (int)v15 >= 0 )
    {
      v24 = v41;
      v23 = 4LL;
      v25 = a5;
      v26 = 4LL;
      v27 = (_OWORD *)((char *)v41 + 1992);
      do
      {
        *(_OWORD *)&v25->HighestAcceptableAddress.LowPart = *v27;
        *(_OWORD *)&v25->ApertureSegmentCommitLimit = v27[1];
        *(_OWORD *)&v25->PointerCaps.0 = v27[2];
        *(_OWORD *)&v25->GammaRampCaps.0 = v27[3];
        *(_OWORD *)&v25->SchedulingCaps.0 = v27[4];
        *(_OWORD *)v25->GpuEngineTopology.Reserved = v27[5];
        *(_OWORD *)&v25->GpuEngineTopology.Reserved[4] = v27[6];
        v25 = (struct _DXGK_DRIVERCAPS *)((char *)v25 + 128);
        v28 = v27[7];
        v27 += 8;
        *(_OWORD *)&v25[-1].SupportSurpriseRemoval = v28;
        --v26;
      }
      while ( v26 );
      *(_OWORD *)&v25->HighestAcceptableAddress.LowPart = *v27;
      *(_OWORD *)&v25->ApertureSegmentCommitLimit = v27[1];
      *(_OWORD *)&v25->PointerCaps.0 = v27[2];
      *(_OWORD *)&v25->GammaRampCaps.0 = v27[3];
      *(_QWORD *)&v25->SchedulingCaps.0 = *((_QWORD *)v27 + 8);
      if ( v43 )
      {
        v29 = (_OWORD *)((char *)v43 + 1992);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v29;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v29[1];
          *(_OWORD *)&a2->PointerCaps.0 = v29[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v29[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v29[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v29[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v29[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v30 = v29[7];
          v29 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v30;
          --v23;
        }
        while ( v23 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v29;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v29[1];
        *(_OWORD *)&a2->PointerCaps.0 = v29[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v29[3];
        v31 = *((_QWORD *)v29 + 8);
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v8->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v8->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v8->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v8->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v8->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v8->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v8->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v40 = *(_OWORD *)&v8->GpuEngineTopology.Reserved[8];
          v8 = (struct _DXGK_DRIVERCAPS *)((char *)v8 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v40;
          --v23;
        }
        while ( v23 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v8->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v8->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v8->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v8->GammaRampCaps.0;
        v31 = *(_QWORD *)&v8->SchedulingCaps.0;
      }
      v41 = 0LL;
      *(_QWORD *)&a2->SchedulingCaps.0 = v31;
      LODWORD(v15) = 0;
      v32 = v42;
      *a3 = v24;
      *a4 = v32;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48, v23);
    DXGADAPTER_REFERENCE::Assign(&v43, 0LL);
  }
  DXGADAPTER_REFERENCE::Assign(&v41, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v33);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v45);
  return (unsigned int)v15;
}

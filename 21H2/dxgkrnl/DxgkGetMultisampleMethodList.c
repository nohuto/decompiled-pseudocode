/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C02F8F20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C039B524 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *Current; // r12
  __int64 CurrentProcess; // rax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // sf
  struct _D3DDDI_MULTISAMPLINGMETHOD *v23; // r15
  ULONG64 v24; // rax
  unsigned __int64 v25; // rax
  struct DXGADAPTER *v26; // rbx
  int PairingAdapters; // eax
  struct DXGADAPTER *v28; // rdi
  int v29; // eax
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v31; // rbx
  unsigned int v32; // ecx
  _QWORD *v33; // rdx
  int v35; // [rsp+50h] [rbp-158h]
  unsigned int v36[4]; // [rsp+58h] [rbp-150h]
  enum _D3DDDIFORMAT v37[4]; // [rsp+68h] [rbp-140h]
  unsigned __int64 v38; // [rsp+78h] [rbp-130h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v39; // [rsp+80h] [rbp-128h]
  unsigned __int64 v40; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v41; // [rsp+90h] [rbp-118h]
  int v42; // [rsp+98h] [rbp-110h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-108h]
  char v44; // [rsp+A8h] [rbp-100h]
  struct DXGADAPTER *v45; // [rsp+B0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v46[2]; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-E0h] BYREF
  DXGADAPTER *v48; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v49[144]; // [rsp+E0h] [rbp-C8h] BYREF

  v40 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2019);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2019);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v46[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v19 = PsGetCurrentProcess(v16, v15, v17, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v19,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( !v44 )
      return (unsigned int)v14;
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_48;
  }
  v14 = 0;
  v23 = 0LL;
  v39 = 0LL;
  v24 = a1;
  if ( a1 >= MmUserProbeAddress )
    v24 = MmUserProbeAddress;
  *(_OWORD *)v36 = *(_OWORD *)v24;
  *(_OWORD *)v37 = *(_OWORD *)(v24 + 16);
  v38 = *(_QWORD *)(v24 + 32);
  if ( _mm_srli_si128(*(__m128i *)v37, 8).m128i_u64[0] && (_DWORD)v38 )
  {
    v25 = 8LL * (unsigned int)v38;
    if ( !is_mul_ok((unsigned int)v38, 8uLL) )
      v25 = -1LL;
    v23 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v25, 0x4B677844u, 256LL, v11);
    v39 = v23;
    if ( !v23 )
    {
      v14 = -1073741801;
      WdLogSingleEntry4(6LL, -1073741801LL, v36[0], v36[1], (unsigned int)v38);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x 0x%I64x 0x%I64x fails to allocate array of 0x%I64d D3DDDI_MULTISAMPLINGMETHOD",
        -1073741801LL,
        v36[0],
        v36[1],
        (unsigned int)v38,
        0LL);
    }
  }
  if ( v14 >= 0 )
  {
    v45 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, v36[0], (struct _KTHREAD **)Current, &v45, 1);
    v40 = 0LL;
    v26 = v45;
    if ( v45 )
    {
      v46[0] = 0LL;
      v47 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v45, v36[1], 0LL, 0LL, v46, &v47, 0);
      v14 = PairingAdapters;
      v35 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v28 = v46[0];
        if ( !v46[0] )
        {
          WdLogSingleEntry1(1LL, 6126LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 6126LL, 0LL, 0LL, 0LL, 0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v28, 0LL);
        DXGADAPTER::ReleaseReference(v28);
        v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49, 0LL);
        v14 = v29;
        v35 = v29;
        if ( v29 < 0 )
        {
          WdLogSingleEntry4(7LL, v29, Current, v36[0], v28);
        }
        else
        {
          if ( *(_DWORD *)(*((_QWORD *)v28 + 349) + 96LL) > v36[1] )
          {
            if ( *((_QWORD *)v28 + 350) )
            {
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v28,
                                                              v36[1],
                                                              v36[2],
                                                              v36[3],
                                                              v37[0],
                                                              (unsigned int)v38,
                                                              v23,
                                                              &v40);
              v14 = MultisamplingMethodSetFromClientVidPnSource;
              v35 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                WdLogSingleEntry4(3LL, (unsigned int)v38, v36[1], v28, MultisamplingMethodSetFromClientVidPnSource);
                WdLogSingleEntry5(3LL, v36[1], v28, v36[2], v36[3], v37[0]);
              }
              goto LABEL_30;
            }
            v14 = -1073741637;
            WdLogSingleEntry2(7LL, v28, -1073741637LL);
          }
          else
          {
            v14 = -1073741811;
            WdLogSingleEntry3(3LL, -1073741811LL, v28, v36[1]);
          }
          v35 = v14;
        }
LABEL_30:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
        goto LABEL_33;
      }
      WdLogSingleEntry3(3LL, v26, v36[1], PairingAdapters);
    }
    else
    {
      v14 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v36[0]);
      v35 = -1073741811;
    }
LABEL_33:
    if ( v14 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v40 >> 3;
      if ( v23 )
      {
        v31 = *(_QWORD *)(a1 + 24);
        v32 = 0;
        v23 = v39;
        while ( 1 )
        {
          v41 = v32;
          if ( v32 >= (unsigned int)v38 )
            break;
          v33 = (_QWORD *)(v31 + 12LL * v32);
          if ( (unsigned __int64)(v33 + 1) > MmUserProbeAddress || v33 + 1 <= v33 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v33 = v39[v32++];
        }
        v14 = v35;
      }
    }
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
  }
  if ( v23 )
    operator delete[](v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 )
  {
    v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_48:
    if ( v22 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v42);
  }
  return (unsigned int)v14;
}

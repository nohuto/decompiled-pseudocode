/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C02D4970
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  int v12; // r14d
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-E0h]
  char v35; // [rsp+60h] [rbp-D8h]
  DXGADAPTER *v36; // [rsp+68h] [rbp-D0h] BYREF
  struct DXGADAPTER *v37; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v38[4]; // [rsp+80h] [rbp-B8h]
  _BYTE v39[144]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2130);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 10528LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10528LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 )
      return 3221225485LL;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_49:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v33);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v38 = *(_QWORD *)v3;
  v12 = *(_DWORD *)(v3 + 8);
  v37 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v36, v38[0], Current, &v37, 1);
  v13 = v37;
  if ( !v37 )
  {
    v14 = v38[0];
    WdLogSingleEntry2(2LL, Current, v38[0]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v14,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  if ( !*((_QWORD *)v37 + 349) )
  {
    WdLogSingleEntry2(3LL, v37, -1073741811LL);
    if ( v36 )
      DXGADAPTER::ReleaseReference(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_49;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v37, 0LL);
  v15 = COREADAPTERACCESS::AcquireExclusive((__int64)v39);
  v20 = v15;
  if ( v15 >= 0 )
  {
    v24 = v38[1];
    if ( v38[1] >= *(_DWORD *)(*((_QWORD *)v13 + 349) + 96LL) )
    {
      WdLogSingleEntry2(3LL, v38[1], -1073741811LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
LABEL_13:
      if ( v36 )
        DXGADAPTER::ReleaseReference(v36);
      goto LABEL_7;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v17, v16, v18, v19) + 106) & 4) != 0 )
    {
      *(_BYTE *)(4000 * v24 + *(_QWORD *)(*((_QWORD *)v13 + 349) + 128LL) + 1140) = v12 != 0;
      v27 = *((_QWORD *)v13 + 349);
      if ( v12 )
      {
        *(_BYTE *)(v27 + 460) = 1;
      }
      else
      {
        *(_BYTE *)(v27 + 460) = 0;
        v28 = 0;
        v29 = *((_QWORD *)v13 + 349);
        v30 = *(_DWORD *)(v29 + 96);
        if ( v30 )
        {
          while ( !*(_BYTE *)(4000LL * v28 + *(_QWORD *)(v29 + 128) + 1140) )
          {
            if ( ++v28 >= v30 )
              goto LABEL_39;
          }
          *(_BYTE *)(v29 + 460) = 1;
        }
      }
LABEL_39:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      if ( v36 )
        DXGADAPTER::ReleaseReference(v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v33);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741790LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      if ( v36 )
        DXGADAPTER::ReleaseReference(v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 )
      {
        LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v33);
      }
      return 3221225506LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    if ( v36 )
      DXGADAPTER::ReleaseReference(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v33);
    return (unsigned int)v20;
  }
}

/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1C02907D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0025E84 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00E5C90 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00E8E18 (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C02E5B1C (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02E607C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02E6714 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        PVOID *a4,
        _DWORD *a5)
{
  unsigned int v6; // r15d
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 i; // rsi
  __int64 v30; // r10
  int v31; // edx
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  PVOID BaseAddress; // [rsp+30h] [rbp-148h] BYREF
  int v43; // [rsp+38h] [rbp-140h] BYREF
  __int64 v44; // [rsp+40h] [rbp-138h]
  char v45; // [rsp+48h] [rbp-130h]
  int v46; // [rsp+50h] [rbp-128h]
  int v47; // [rsp+54h] [rbp-124h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-120h] BYREF
  SIZE_T Length; // [rsp+60h] [rbp-118h]
  _BYTE v50[48]; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v51; // [rsp+98h] [rbp-E0h]
  _BYTE v52[76]; // [rsp+A0h] [rbp-D8h] BYREF
  int v53; // [rsp+ECh] [rbp-8Ch]
  int v54; // [rsp+F4h] [rbp-84h]
  _DWORD v55[24]; // [rsp+100h] [rbp-78h] BYREF

  v6 = a3;
  v8 = a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2171;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2171);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2171LL);
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (v8 & 0xFEFD7FFF) != 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v11 + 24) = 279LL;
      WdLogEvent5_WdAssertion(v11);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v52, a2);
    v12 = v53;
    if ( (v8 & 0x8000) != 0 )
      v53 |= 1u;
    if ( (v8 & 0x1000000) != 0 )
      v54 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v50);
    v13 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
            (CCD_TOPOLOGY *)v52,
            v8 | 0x40000u,
            v6,
            (struct CCD_MODE_RESULT_SET *)v50);
    v16 = v13;
    if ( v13 >= 0 )
    {
      LODWORD(v16) = 0;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdError(v17);
    }
    if ( (int)v16 < 0 )
    {
LABEL_37:
      v53 = v12;
      CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v50);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v52);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v33);
      if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v43);
      return (unsigned int)v16;
    }
    v18 = v51;
    v19 = 72LL * v51;
    if ( v19 <= 0xFFFFFFFF )
    {
      v47 = 72 * v51;
      BaseAddress = 0LL;
      Length = (unsigned int)v19;
      RegionSize = (unsigned int)v19;
      LODWORD(v16) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v16 < 0 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = v18;
        WdLogEvent5_WdLowResource(v24);
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v50);
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v52);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v25);
        if ( v45 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v43);
        }
        return 3221225626LL;
      }
      ProbeForWrite(BaseAddress, Length, 1u);
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v46 = i;
        if ( (unsigned int)i >= (unsigned int)v18 )
          break;
        memset(v55, 0, sizeof(v55));
        if ( !CCD_MODE_RESULT_SET::PopLastMode(
                (CCD_MODE_RESULT_SET *)v50,
                (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v55) )
          break;
        v30 = 9 * i;
        *((_DWORD *)BaseAddress + 2 * v30 + 12) = v55[16];
        *((_DWORD *)BaseAddress + 2 * v30 + 13) = v55[17];
        *((_DWORD *)BaseAddress + 2 * v30 + 14) = v55[19];
        *((_BYTE *)BaseAddress + 8 * v30 + 60) = v55[22];
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v55, (__int64)BaseAddress + 72 * i);
        v31 = v55[23] >> 2;
        *((_DWORD *)BaseAddress + 2 * v32 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v32 + 16) ^ (v55[23] >> 2)) & 0x3F;
        *((_DWORD *)BaseAddress + 2 * v32 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v32 + 16) ^ v31) & 0xFC0000;
        *((_DWORD *)BaseAddress + 2 * v32 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v32 + 16) ^ v31) & 0x3F000;
        *((_DWORD *)BaseAddress + 2 * v32 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v32 + 16) ^ v31) & 0xFC0;
        *((_DWORD *)BaseAddress + 2 * v32 + 16) ^= (*((_DWORD *)BaseAddress + 2 * v32 + 16) ^ v31) & 0x3F000000;
      }
      *a4 = BaseAddress;
      *a5 = v18;
      goto LABEL_37;
    }
    v36 = WdLogNewEntry5_WdError(v15, 0xFFFFFFFFLL);
    *(_QWORD *)(v36 + 24) = v18;
    WdLogEvent5_WdError(v36);
    CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v50);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v52);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v37);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v43);
    return 3221225621LL;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v9);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v43);
    return 3221225485LL;
  }
}

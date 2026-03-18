/*
 * XREFs of DxgkEnumerateModesForPathsModality @ 0x1C02F9C50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C002C558 (--1CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01ADDE8 (--0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C01B2BF0 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ??0CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C03A8E10 (--0CCD_MODE_RESULT_SET@@QEAA@XZ.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03A9374 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C03A9958 (-PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 */

__int64 __fastcall DxgkEnumerateModesForPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        PVOID *a4,
        _DWORD *a5)
{
  unsigned int v6; // r12d
  int v8; // edi
  int v9; // r15d
  int v10; // eax
  NTSTATUS v11; // edi
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // r14d
  __int64 v18; // r10
  __int64 v19; // r10
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp-178h] BYREF
  int v28; // [rsp+58h] [rbp-170h] BYREF
  __int64 v29; // [rsp+60h] [rbp-168h]
  char v30; // [rsp+68h] [rbp-160h]
  unsigned int i; // [rsp+70h] [rbp-158h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-150h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-148h]
  _BYTE v34[48]; // [rsp+88h] [rbp-140h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp-110h]
  _DWORD v36[28]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v37[76]; // [rsp+130h] [rbp-98h] BYREF
  int v38; // [rsp+17Ch] [rbp-4Ch]
  int v39; // [rsp+184h] [rbp-44h]

  v6 = a3;
  v8 = a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2171;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2171);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2171);
  if ( a2 && a4 && a5 )
  {
    *a4 = 0LL;
    *a5 = 0;
    if ( (v8 & 0xFEFD7FFF) != 0 )
    {
      WdLogSingleEntry1(1LL, 279LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(Flags & ~(D3DKMT_GETPATHSMODALITY_DIAG_LOG_FUNCTIONAL_VIDPN | D3DKMT_GETPATHSMODALITY_ALLOW_BML_RAWMOD"
                  "E | D3DKMT_GETPATHSMODALITY_INCLUDING_NON_DESKTOP)) == 0",
        279LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v37, a2);
    v9 = v38;
    if ( (v8 & 0x8000) != 0 )
      v38 |= 1u;
    if ( (v8 & 0x1000000) != 0 )
      v39 |= 1u;
    CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v34);
    v10 = CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
            (CCD_TOPOLOGY *)v37,
            v8 | 0x40000u,
            v6,
            (struct CCD_MODE_RESULT_SET *)v34);
    v11 = v10;
    if ( v10 >= 0 )
      v11 = 0;
    else
      WdLogSingleEntry1(2LL, v10);
    if ( v11 < 0 )
    {
LABEL_37:
      v38 = v9;
      CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v34);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v28);
      return (unsigned int)v11;
    }
    v12 = v35;
    v13 = 88LL * v35;
    if ( v13 <= 0xFFFFFFFF )
    {
      BaseAddress = 0LL;
      Length = (unsigned int)v13;
      RegionSize = (unsigned int)v13;
      v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(6LL, (unsigned int)v12);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate virtual memory for %I64d modes.",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
        CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v34);
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v37);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v28);
        }
        return 3221225626LL;
      }
      ProbeForWrite(BaseAddress, Length, 1u);
      v17 = 0;
      for ( i = 0; v17 < (unsigned int)v12; i = v17 )
      {
        memset(v36, 0, sizeof(v36));
        if ( !CCD_MODE_RESULT_SET::PopLastMode(
                (CCD_MODE_RESULT_SET *)v34,
                (struct D3DKMT_PATHMODALITY_MODE_RESULT *)v36) )
          break;
        v18 = 88LL * v17;
        *(_DWORD *)((char *)BaseAddress + v18 + 48) = v36[16];
        *(_DWORD *)((char *)BaseAddress + v18 + 52) = v36[17];
        *(_DWORD *)((char *)BaseAddress + v18 + 56) = v36[19];
        *((_BYTE *)BaseAddress + v18 + 76) = v36[26];
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)v36, (__int64)BaseAddress + v18);
        *(_DWORD *)((char *)BaseAddress + v19 + 60) = v36[22];
        *(_DWORD *)((char *)BaseAddress + v19 + 64) = v36[23];
        *(_DWORD *)((char *)BaseAddress + v19 + 68) = v36[24];
        *(_DWORD *)((char *)BaseAddress + v19 + 72) = v36[25];
        v20 = v36[27] >> 2;
        *(_DWORD *)((char *)BaseAddress + v19 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v19 + 80) ^ (v36[27] >> 2)) & 0x3F;
        *(_DWORD *)((char *)BaseAddress + v19 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v19 + 80) ^ v20) & 0xFC0000;
        *(_DWORD *)((char *)BaseAddress + v19 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v19 + 80) ^ v20) & 0x3F000;
        *(_DWORD *)((char *)BaseAddress + v19 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v19 + 80) ^ v20) & 0xFC0;
        *(_DWORD *)((char *)BaseAddress + v19 + 80) ^= (*(_DWORD *)((char *)BaseAddress + v19 + 80) ^ v20) & 0x3F000000;
        ++v17;
      }
      *a4 = BaseAddress;
      *a5 = v12;
      goto LABEL_37;
    }
    WdLogSingleEntry1(2LL, v35);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocated a buffer to store %I64d modes.",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET((CCD_MODE_RESULT_SET *)v34);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v28);
    return 3221225621LL;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
    return 3221225485LL;
  }
}

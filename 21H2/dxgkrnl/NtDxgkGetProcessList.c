/*
 * XREFs of NtDxgkGetProcessList @ 0x1C02D5000
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1C02C4198 (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C02CE6F8 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 LowPart; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // sf
  DXGADAPTER *v14; // rbx
  signed int ProcessAdapterInfo; // eax
  unsigned int v16; // ebx
  HANDLE *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // sf
  _DWORD *v22; // rcx
  unsigned int v23; // eax
  size_t v24; // r8
  void *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 HighPart; // rdi
  int v32; // [rsp+50h] [rbp-298h] BYREF
  __int64 v33; // [rsp+58h] [rbp-290h]
  char v34; // [rsp+60h] [rbp-288h]
  struct _LUID v35[2]; // [rsp+68h] [rbp-280h] BYREF
  void *Src; // [rsp+78h] [rbp-270h]
  DXGADAPTER *v37[2]; // [rsp+80h] [rbp-268h] BYREF
  signed int v38; // [rsp+90h] [rbp-258h]
  char v39[8]; // [rsp+98h] [rbp-250h] BYREF
  DXGADAPTER *v40; // [rsp+A0h] [rbp-248h]
  char v41; // [rsp+A8h] [rbp-240h]
  void *v42; // [rsp+B0h] [rbp-238h]
  PVOID P; // [rsp+C0h] [rbp-228h] BYREF
  _BYTE v44[512]; // [rsp+C8h] [rbp-220h] BYREF
  int v45; // [rsp+2C8h] [rbp-20h]

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2203);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2203);
  v42 = 0LL;
  v37[0] = 0LL;
  P = 0LL;
  v45 = 0;
  v6 = a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  *(_OWORD *)&v35[0].LowPart = *(_OWORD *)v6;
  Src = *(void **)(v6 + 16);
  if ( Src )
  {
    if ( v35[1].HighPart )
    {
      v42 = Src;
      Src = (void *)PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(
                      (__int64 *)&P,
                      v35[1].HighPart,
                      v4,
                      v5);
      if ( !Src )
      {
        WdLogSingleEntry1(2LL, -1073741801LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Out of memory allocating D3DKMT_GETPROCESSLIST_PER_PROCESS, returning 0x%I64x",
          -1073741801LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v44 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v45 = 0;
        DXGADAPTER_REFERENCE::Assign(v37, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 )
        {
          LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v32);
        }
        return 3221225495LL;
      }
    }
  }
  if ( v35[1].LowPart != 1024 )
  {
    LowPart = v35[1].LowPart;
    WdLogSingleEntry2(2LL, v35[1].LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid DesiredAccess:0x%I64x specified, returning 0x%I64x",
      LowPart,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGADAPTER_REFERENCE::Assign(v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return 3221225485LL;
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_71:
    if ( v13 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v32);
    return 3221225485LL;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v37, v35);
  v14 = v37[0];
  if ( !v37[0] )
  {
    v30 = v35[0].LowPart;
    HighPart = v35[0].HighPart;
    WdLogSingleEntry3(2LL, v35[0].HighPart, v35[0].LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      HighPart,
      v30,
      -1073741811LL,
      0LL,
      0LL);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGADAPTER_REFERENCE::Assign(v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return 3221225485LL;
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v13 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_71;
  }
  if ( !*((_QWORD *)v37[0] + 350) )
  {
    v16 = -1073741637;
    WdLogSingleEntry3(3LL, v35[0].HighPart, v35[0].LowPart, -1073741637LL);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGADAPTER_REFERENCE::Assign(v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return v16;
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_63;
  }
  v40 = v37[0];
  v41 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
  if ( *((_DWORD *)v14 + 50) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v14 + 350),
                           (void **)Src,
                           (unsigned int *)&v35[1].HighPart,
                           0x400u);
    v16 = ProcessAdapterInfo;
    v38 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v22 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      v23 = v35[1].HighPart;
      *v22 = v35[1].HighPart;
      if ( (v16 & 0x80000000) == 0 && v23 )
      {
        v24 = 8LL * v23;
        v25 = v42;
        if ( (unsigned __int64)v42 + v24 > MmUserProbeAddress || (char *)v42 + v24 <= v42 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v25, Src, v24);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, ProcessAdapterInfo);
      if ( v35[1].HighPart )
      {
        v17 = (HANDLE *)Src;
        v18 = (unsigned int)v35[1].HighPart;
        do
        {
          if ( *v17 )
            ZwClose(*v17);
          ++v17;
          --v18;
        }
        while ( v18 );
      }
    }
    if ( v41 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGADAPTER_REFERENCE::Assign(v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return v16;
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_63:
    if ( v21 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v32);
    return v16;
  }
  v26 = v35[0].LowPart;
  v27 = v35[0].HighPart;
  WdLogSingleEntry3(2LL, v35[0].HighPart, v35[0].LowPart, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
    v27,
    v26,
    -1073741811LL,
    0LL,
    0LL);
  if ( v41 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
  if ( P != v44 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v45 = 0;
  DXGADAPTER_REFERENCE::Assign(v37, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v32);
  return 3221226166LL;
}

/*
 * XREFs of NtDxgkGetProcessList @ 0x1C02270A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1C0216808 (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C0220D2C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int ProcessAdapterInfo; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  HANDLE *v36; // rsi
  __int64 v37; // r14
  _DWORD *v38; // rcx
  unsigned int HighPart; // eax
  size_t v40; // r8
  void *v41; // rcx
  int v42; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-2A0h]
  char v44; // [rsp+30h] [rbp-298h]
  struct _LUID v45[2]; // [rsp+38h] [rbp-290h] BYREF
  void *Src; // [rsp+48h] [rbp-280h]
  DXGADAPTER *v47[2]; // [rsp+50h] [rbp-278h] BYREF
  int v48; // [rsp+60h] [rbp-268h]
  _BYTE v49[8]; // [rsp+68h] [rbp-260h] BYREF
  DXGADAPTER *v50; // [rsp+70h] [rbp-258h]
  char v51; // [rsp+78h] [rbp-250h]
  void *v52; // [rsp+80h] [rbp-248h]
  PVOID P; // [rsp+90h] [rbp-238h] BYREF
  _BYTE v54[512]; // [rsp+98h] [rbp-230h] BYREF
  int v55; // [rsp+298h] [rbp-30h]

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2203);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2203LL);
  v52 = 0LL;
  v47[0] = 0LL;
  P = 0LL;
  v55 = 0;
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)&v45[0].LowPart = *(_OWORD *)v5;
  Src = *(void **)(v5 + 16);
  v6 = Src;
  if ( Src )
  {
    if ( v45[1].HighPart )
    {
      v52 = Src;
      Src = PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(&P, v45[1].HighPart);
      if ( !Src )
      {
        v7 = WdLogNewEntry5_WdError(v6, v4);
        *(_QWORD *)(v7 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v7);
        if ( P != v54 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v55 = 0;
        DXGADAPTER_REFERENCE::Assign(v47, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v8);
        if ( v44 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v42);
        }
        return 3221225495LL;
      }
    }
  }
  if ( v45[1].LowPart != 1024 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v6, v4);
    v12[3] = v45[1].LowPart;
    v12[4] = -1073741811LL;
    goto LABEL_21;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v47, v45);
  v16 = v47[0];
  if ( !v47[0] )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v12[3] = v45[0].HighPart;
    v12[4] = v45[0].LowPart;
    v12[5] = -1073741811LL;
LABEL_21:
    WdLogEvent5_WdError(v12);
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGADAPTER_REFERENCE::Assign(v47, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v17);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v42);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v47[0] + 338) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v20[3] = v45[0].HighPart;
    v20[4] = v45[0].LowPart;
    LODWORD(v21) = -1073741637;
    v20[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v20);
LABEL_30:
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGADAPTER_REFERENCE::Assign(v47, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v22);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v42);
    return (unsigned int)v21;
  }
  v50 = v47[0];
  v51 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  if ( *((_DWORD *)v16 + 50) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v16 + 338),
                           (void **)Src,
                           (unsigned int *)&v45[1].HighPart,
                           0x400u);
    v21 = ProcessAdapterInfo;
    v48 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v38 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v38 = (_DWORD *)MmUserProbeAddress;
      HighPart = v45[1].HighPart;
      *v38 = v45[1].HighPart;
      if ( (int)v21 >= 0 && HighPart )
      {
        v40 = 8LL * HighPart;
        v41 = v52;
        if ( (unsigned __int64)v52 + v40 > MmUserProbeAddress || (char *)v52 + v40 <= v52 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v41, Src, v40);
      }
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = v21;
      WdLogEvent5_WdWarning(v35);
      if ( v45[1].HighPart )
      {
        v36 = (HANDLE *)Src;
        v37 = (unsigned int)v45[1].HighPart;
        do
        {
          if ( *v36 )
            ZwClose(*v36);
          ++v36;
          --v37;
        }
        while ( v37 );
      }
    }
    if ( v51 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
    goto LABEL_30;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
  v27[3] = v45[0].HighPart;
  v27[4] = v45[0].LowPart;
  v27[5] = -1073741811LL;
  WdLogEvent5_WdError(v27);
  if ( v51 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  if ( P != v54 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v55 = 0;
  DXGADAPTER_REFERENCE::Assign(v47, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v28);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v42);
  return 3221226166LL;
}

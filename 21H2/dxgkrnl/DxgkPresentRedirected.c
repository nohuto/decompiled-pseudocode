/*
 * XREFs of DxgkPresentRedirected @ 0x1C0333590
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C005439C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0054474 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0195D50 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D9A30 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01DBB68 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r15
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // r8
  _OWORD *v18; // rax
  __int64 v19; // rcx
  const wchar_t *v20; // r9
  struct DXGDEVICE *v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGGLOBAL *Global; // rax
  char *v26; // r12
  __int64 v27; // rbx
  DXGPUSHLOCK *v28; // rcx
  __int64 v29; // r8
  int v30; // edx
  unsigned int v31; // r15d
  __int64 v32; // rbx
  int v33; // edx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r15d
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGDEVICE *v41; // rbx
  int v42; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v43; // r12
  struct VIDSCH_SUBMIT_DATA_BASE *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  ULONG64 v47; // rcx
  struct DXGDEVICE *v48; // [rsp+60h] [rbp-608h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v49; // [rsp+68h] [rbp-600h]
  int v50; // [rsp+70h] [rbp-5F8h] BYREF
  __int64 v51; // [rsp+78h] [rbp-5F0h]
  ULONG64 v52; // [rsp+80h] [rbp-5E8h]
  int *v53; // [rsp+88h] [rbp-5E0h]
  char v54; // [rsp+90h] [rbp-5D8h]
  unsigned int v55; // [rsp+98h] [rbp-5D0h]
  int v56; // [rsp+9Ch] [rbp-5CCh] BYREF
  struct DXGDEVICE *v57; // [rsp+A0h] [rbp-5C8h] BYREF
  char v58[8]; // [rsp+A8h] [rbp-5C0h] BYREF
  char v59; // [rsp+B0h] [rbp-5B8h]
  char v60[8]; // [rsp+B8h] [rbp-5B0h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-5A8h]
  char v62; // [rsp+C8h] [rbp-5A0h]
  ULONG64 v63; // [rsp+D0h] [rbp-598h]
  struct VIDSCH_SUBMIT_DATA_BASE *v64[2]; // [rsp+D8h] [rbp-590h] BYREF
  ULONG64 v65; // [rsp+E8h] [rbp-580h] BYREF
  unsigned int v66; // [rsp+F0h] [rbp-578h]
  int v67; // [rsp+F4h] [rbp-574h]
  __int64 v68; // [rsp+F8h] [rbp-570h]
  struct DXGDEVICE *v69; // [rsp+100h] [rbp-568h]
  _DWORD v70[10]; // [rsp+108h] [rbp-560h] BYREF
  struct _SLIST_ENTRY v71[10]; // [rsp+130h] [rbp-538h] BYREF
  _BYTE v72[1120]; // [rsp+1D0h] [rbp-498h] BYREF

  v4 = a1;
  v56 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v49 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v15 = PsGetCurrentProcess(v12, v11, v13, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v15,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  memset(v72, 0, sizeof(v72));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v18 = v72;
    v19 = 8LL;
    do
    {
      *v18 = *(_OWORD *)v4;
      v18[1] = *(_OWORD *)(v4 + 16);
      v18[2] = *(_OWORD *)(v4 + 32);
      v18[3] = *(_OWORD *)(v4 + 48);
      v18[4] = *(_OWORD *)(v4 + 64);
      v18[5] = *(_OWORD *)(v4 + 80);
      v18[6] = *(_OWORD *)(v4 + 96);
      v18 += 8;
      *(v18 - 1) = *(_OWORD *)(v4 + 112);
      v4 += 128LL;
      --v19;
    }
    while ( v19 );
    *v18 = *(_OWORD *)v4;
    v18[1] = *(_OWORD *)(v4 + 16);
    v18[2] = *(_OWORD *)(v4 + 32);
    v18[3] = *(_OWORD *)(v4 + 48);
    v18[4] = *(_OWORD *)(v4 + 64);
    v18[5] = *(_OWORD *)(v4 + 80);
    v4 = (ULONG64)v72;
  }
  v63 = v4;
  v51 = 0LL;
  v50 = 2147;
  v53 = &v56;
  v54 = 1;
  v52 = v4 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v17, 2147);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2147);
  v49 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 16);
  if ( *(_DWORD *)(v4 + 16) != 9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v20 = L"Invalid PresentHistoryToken Mode, returning 0x%I64x";
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_57:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v52,
          v36,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v52,
        v36,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 84),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v50);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v4 + 1096) )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v20 = L"Reserved bits should not be set, returning 0x%I64x";
    goto LABEL_15;
  }
  v55 = *(_DWORD *)v4;
  v57 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v48,
    *(_DWORD *)(v4 + 4),
    (struct _KTHREAD **)Current,
    &v57);
  v21 = v57;
  if ( !v57 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)(v4 + 4), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)(v4 + 4),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_54:
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_57;
  }
  v22 = *(_QWORD *)(*((_QWORD *)v57 + 2) + 16LL);
  if ( (*(_DWORD *)(v22 + 2664) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter device 0x%I64x",
      *(unsigned int *)(v4 + 4),
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v52,
          v24,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v52,
        v24,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 84),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v50);
    return 3221225485LL;
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v58, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v58);
  v26 = (char *)Current + 248;
  v27 = (v55 >> 6) & 0xFFFFFF;
  v28 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( *(int *)(v22 + 2692) >= 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v28);
    if ( (unsigned int)v27 < *((_DWORD *)Current + 74) )
    {
      v29 = *((_QWORD *)Current + 35);
      v30 = *(_DWORD *)(v29 + 16LL * (unsigned int)v27 + 8);
      v31 = v55;
      if ( ((v55 >> 25) & 0x60) != (*(_BYTE *)(v29 + 16LL * (unsigned int)v27 + 8) & 0x60)
        || (v30 & 0x2000) != 0
        || (v30 & 0x1F) == 0 )
      {
        goto LABEL_50;
      }
      v32 = 2 * v27;
      if ( (v30 & 0x1F) != 0xB )
        goto LABEL_47;
LABEL_48:
      v34 = *(_QWORD *)(v29 + 8 * v32);
      goto LABEL_51;
    }
LABEL_49:
    v31 = v55;
    goto LABEL_50;
  }
  DXGPUSHLOCK::AcquireShared(v28);
  if ( (unsigned int)v27 >= *((_DWORD *)Current + 74) )
    goto LABEL_49;
  v29 = *((_QWORD *)Current + 35);
  v33 = *(_DWORD *)(v29 + 16 * v27 + 8);
  v31 = v55;
  if ( ((v55 >> 25) & 0x60) != (*(_BYTE *)(v29 + 16 * v27 + 8) & 0x60) || (v33 & 0x2000) != 0 || (v33 & 0x1F) == 0 )
    goto LABEL_50;
  v32 = 2 * v27;
  if ( (v33 & 0x1F) == 8 )
    goto LABEL_48;
LABEL_47:
  WdLogSingleEntry1(2LL, 267LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_50:
  v34 = 0LL;
LABEL_51:
  ExReleasePushLockSharedEx(v26, 0LL);
  KeLeaveCriticalRegion();
  if ( !v34 )
  {
    WdLogSingleEntry2(2LL, v31, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hSyncObj (0x%I64x) specified, returning 0x%I64x",
      v31,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v59 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
    goto LABEL_54;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v21 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
  v61 = v22;
  v62 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
  if ( *(_DWORD *)(v22 + 200) != 1 )
  {
    v38 = -1073741823;
    WdLogSingleEntry2(2LL, v22, -1073741823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v22,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
LABEL_69:
    if ( v62 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v57);
    if ( v59 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v52,
          v40,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v52,
        v40,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 84),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v50);
    return (unsigned int)v38;
  }
  v41 = v57;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v57, 2, v37, 0);
  v42 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v71, 0LL);
  v56 = v42;
  if ( v42 < 0 )
  {
    WdLogSingleEntry1(2LL, v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v56,
      0LL,
      0LL,
      0LL,
      0LL);
    v38 = v56;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
    goto LABEL_69;
  }
  v43 = v49;
  v38 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v60,
          (struct COREDEVICEACCESS *)v71,
          (struct DXGADAPTER *)v22,
          v49,
          0LL,
          0);
  v56 = v38;
  if ( v38 < 0 )
  {
LABEL_92:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
    goto LABEL_69;
  }
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
    (TOKEN_BINDING_GUARD *)v70,
    v43,
    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v60,
    (struct COREDEVICEACCESS *)v71);
  v64[0] = 0LL;
  v64[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v22 + 2800);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v64);
  v44 = v64[0];
  if ( v64[0] )
  {
    *(_DWORD *)v64[0] = *(_DWORD *)v64[0] & 0xFFFCFEDF | 0x10120;
    v47 = v63;
    *((_QWORD *)v44 + 59) = *(_QWORD *)(v63 + 8);
    v67 = 0;
    v65 = v47;
    v66 = v55;
    v68 = v22;
    v69 = v41;
    v38 = SubmitPresentHistoryToken(
            v43,
            v71,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v60,
            0LL,
            1,
            0LL,
            0LL,
            v44,
            0LL,
            (struct _PRESENT_REDIRECTED_PARAMS *)&v65,
            0LL);
    v56 = v38;
    v70[0] = v38;
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v64);
    TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v70);
    goto LABEL_92;
  }
  WdLogSingleEntry1(6LL, 1219LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate VidSchSubmitData",
    1219LL,
    0LL,
    0LL,
    0LL,
    0LL);
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v64);
  TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v70);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
  if ( v62 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v57);
  if ( v59 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v54 )
  {
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v52,
        v46,
        *(_DWORD *)v52,
        *(_DWORD *)(v52 + 56),
        *(_QWORD *)(v52 + 80),
        *(_QWORD *)(v52 + 88),
        *(_DWORD *)(v52 + 1096),
        *v53);
  }
  else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v52,
      v46,
      *(_DWORD *)v52,
      *(_QWORD *)(v52 + 8),
      *(_DWORD *)(v52 + 16),
      *(_DWORD *)(v52 + 84),
      *(_DWORD *)(v52 + 88),
      *v53,
      *(_DWORD *)(v52 + 20),
      *(_DWORD *)(v52 + 24));
  }
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v50);
  return 3221225495LL;
}

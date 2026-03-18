/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0162730
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C01626D0 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        __int64 a2,
        unsigned int (**a3)(void),
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _LUID *a9,
        struct _OBJECT_TYPE **a10)
{
  struct DXGPROCESS *v14; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v16; // rbx
  char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 CurrentProcess; // rax
  const wchar_t *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r9
  char *v35; // rdx
  struct DXGPROCESS *Current; // [rsp+70h] [rbp-90h] BYREF
  struct _LUID *v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  char v40; // [rsp+90h] [rbp-70h]
  _QWORD v41[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v42; // [rsp+A8h] [rbp-58h]
  unsigned int *v43; // [rsp+B8h] [rbp-48h]
  char v44[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  char v46; // [rsp+108h] [rbp+8h]
  char v47[8]; // [rsp+250h] [rbp+150h] BYREF
  char v48[64]; // [rsp+258h] [rbp+158h] BYREF
  char v49[88]; // [rsp+298h] [rbp+198h] BYREF

  v38 = -1;
  v43 = a6;
  v37 = a9;
  v41[0] = a4;
  v42 = a5;
  v39 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, &EventProfilerEnter, (__int64)a3, 3000);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 3000);
  if ( !a4 || !a5 || !a7 || !a8 || !v37 )
  {
    LODWORD(v16) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v27 = L"Invalid paramters, returning 0x%I64x.";
    goto LABEL_44;
  }
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v14 = Current;
  if ( !Current )
  {
    v21 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL);
    v16 = v21;
    if ( v21 < 0 )
    {
      a2 = v21;
      CurrentProcess = PsGetCurrentProcess(v23, v22, v24, v25);
      WdLogSingleEntry3(2LL, v16, a1, CurrentProcess);
      v27 = L"0x%I64x DXGPROCESS::CreateDxgProcess() failed 0x%I64x 0x%I64x";
      v32 = PsGetCurrentProcess(v29, v28, v30, v31);
LABEL_46:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, a2, (__int64)a1, v32, 0LL, 0LL);
      goto LABEL_21;
    }
    v14 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v14, a3);
  *((_DWORD *)v14 + 106) |= 1u;
  if ( !a1 )
  {
    LODWORD(v16) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v27 = L"No pAdapter specified, returning 0x%I64x";
LABEL_44:
    a2 = -1073741811LL;
    goto LABEL_45;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(a1 + 404), 0);
  LODWORD(v16) = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    a2 = CddDeviceAndContextForCurrentSession;
    WdLogSingleEntry1(2LL, CddDeviceAndContextForCurrentSession);
    v27 = L"Failed to get CDD device and context for current session (Status = 0x%I64x).";
LABEL_45:
    a1 = 0LL;
    v32 = 0LL;
    goto LABEL_46;
  }
  a1 = *(char **)(MEMORY[0x10] + 16LL);
  if ( !*((_QWORD *)a1 + 350) )
  {
    WdLogSingleEntry1(1LL, 238LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      238LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = (char *)MEMORY[0x738];
  if ( MEMORY[0x738] && !*(_QWORD *)(MEMORY[0x738] + 2792LL) )
  {
    WdLogSingleEntry1(1LL, 240LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
      240LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (char *)a2 != a1 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x20, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v33 = MEMORY[0x10];
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, MEMORY[0x10]);
      v46 = 0;
      v45 = *(_QWORD *)(*(_QWORD *)(MEMORY[0x10] + 16LL) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v33, 2, v34, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v47, v35);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v33, 0LL, (struct COREDEVICEACCESS *)v47);
      COREACCESS::~COREACCESS((COREACCESS *)v49);
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      if ( v46 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      if ( v41[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v33 + 16), (struct DXGDEVICE *)v33);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
    LODWORD(v16) = -1073741130;
    WdLogSingleEntry3(2LL, a2, a1, -1073741130LL);
    v32 = -1073741130LL;
    v27 = L"Paired Render adapter has been changed from 0x%I64x to 0x%I64x for current session (Status = 0x%I64x).";
    goto LABEL_46;
  }
  *(_DWORD *)a8 = *((_DWORD *)a1 + 103);
  *((_DWORD *)a8 + 1) = *((_DWORD *)a1 + 104);
  *((_DWORD *)a8 + 2) = *((_DWORD *)a1 + 105);
  *((_DWORD *)a8 + 3) = *((_DWORD *)a1 + 106);
  *((_DWORD *)a8 + 4) = *((_DWORD *)a1 + 107);
  *((_DWORD *)a8 + 5) = *((_DWORD *)a1 + 673);
  if ( v17 )
  {
    *(_DWORD *)a7 = *((_DWORD *)v17 + 103);
    *((_DWORD *)a7 + 1) = *((_DWORD *)v17 + 104);
    *((_DWORD *)a7 + 2) = *((_DWORD *)v17 + 105);
    *((_DWORD *)a7 + 3) = *((_DWORD *)v17 + 106);
    *((_DWORD *)a7 + 4) = *((_DWORD *)v17 + 107);
    *((_DWORD *)a7 + 5) = *((_DWORD *)v17 + 673);
    if ( (*((_DWORD *)v17 + 109) & 0x100) == 0 )
      a1 = v17;
  }
  else
  {
    *(_OWORD *)a7 = *(_OWORD *)a8;
    *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
  }
  *v37 = *(struct _LUID *)(a1 + 404);
  *(_DWORD *)v41[0] = MEMORY[0x1B4];
  *v42 = MEMORY[0x18];
  *v43 = 0;
  *a10 = g_pDxgkSharedAllocationObjectType;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v38);
  return (unsigned int)v16;
}

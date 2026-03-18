/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0156660
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DC6B8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C011A908 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0156928 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026890C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        void *const a2,
        const struct _DXGKWIN32KENG_INTERFACE *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _LUID *a9,
        struct _OBJECT_TYPE **a10)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct DXGDEVICE *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // r12
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  struct DXGDEVICE *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r9
  char *v48; // rdx
  struct DXGCONTEXT *v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r9
  char *v53; // rdx
  signed __int64 v54; // rcx
  _QWORD *v55; // rax
  struct DXGCONTEXT *v56; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGHWQUEUE *v57; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGDEVICE *v58; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h]
  char v62; // [rsp+68h] [rbp-98h]
  _QWORD v63[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v65[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v66; // [rsp+A0h] [rbp-60h]
  struct _LUID *v67; // [rsp+A8h] [rbp-58h]
  _BYTE v68[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h]
  char v70; // [rsp+C0h] [rbp-40h]
  _BYTE v71[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-30h]
  char v73; // [rsp+D8h] [rbp-28h]
  _BYTE v74[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-18h]
  char v76; // [rsp+F0h] [rbp-10h]
  _BYTE v77[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v78[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v79[88]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v80[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v81[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v82[88]; // [rsp+1E8h] [rbp+E8h] BYREF
  _BYTE v83[8]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v84[64]; // [rsp+248h] [rbp+148h] BYREF
  _BYTE v85[88]; // [rsp+288h] [rbp+188h] BYREF

  v60 = -1;
  v65[0] = a6;
  v63[0] = a4;
  v66 = a2;
  v67 = a9;
  v64[0] = a5;
  v58 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v61 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v62 = 1;
    v60 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, &EventProfilerEnter, (__int64)a3, 3000);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 3000LL);
  if ( !a4 || !a5 || !a7 || !a8 || !a9 )
    goto LABEL_64;
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v15 = Current;
  if ( !Current )
  {
    v28 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL, 0LL);
    v19 = v28;
    if ( v28 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v31[3] = v19;
      v31[4] = a1;
      v31[5] = PsGetCurrentProcess(v33, v32);
      v34 = v31;
LABEL_66:
      WdLogEvent5_WdError(v34);
      goto LABEL_23;
    }
    v15 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v15, a3);
  *((_BYTE *)v15 + 344) = 1;
  if ( !a1 )
  {
LABEL_64:
    v35 = WdLogNewEntry5_WdError(v14, v13);
    v19 = -1073741811LL;
    goto LABEL_65;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 316),
                                           &v58,
                                           &v56,
                                           &v57,
                                           0);
  v19 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v18, v17);
LABEL_65:
    *(_QWORD *)(v35 + 24) = v19;
    v34 = (_QWORD *)v35;
    goto LABEL_66;
  }
  v20 = v58;
  v21 = *(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL);
  if ( !*(_QWORD *)(v21 + 2680) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v36 + 24) = 238LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v22 = *((_QWORD *)v20 + 231);
  if ( v22 && !*(_QWORD *)(v22 + 2672) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v37 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v23 = v66;
  if ( v66 == (void *)v21 )
  {
    *(_DWORD *)a8 = *(_DWORD *)(v21 + 324);
    *((_DWORD *)a8 + 1) = *(_DWORD *)(v21 + 328);
    *((_DWORD *)a8 + 2) = *(_DWORD *)(v21 + 332);
    *((_DWORD *)a8 + 3) = *(_DWORD *)(v21 + 336);
    *((_DWORD *)a8 + 4) = *(_DWORD *)(v21 + 340);
    *((_DWORD *)a8 + 5) = *(_DWORD *)(v21 + 2572);
    if ( v22 )
    {
      *(_DWORD *)a7 = *(_DWORD *)(v22 + 324);
      *((_DWORD *)a7 + 1) = *(_DWORD *)(v22 + 328);
      *((_DWORD *)a7 + 2) = *(_DWORD *)(v22 + 332);
      *((_DWORD *)a7 + 3) = *(_DWORD *)(v22 + 336);
      *((_DWORD *)a7 + 4) = *(_DWORD *)(v22 + 340);
      *((_DWORD *)a7 + 5) = *(_DWORD *)(v22 + 2572);
      if ( (*(_DWORD *)(v22 + 348) & 0x100) == 0 )
        v21 = v22;
    }
    else
    {
      *(_OWORD *)a7 = *(_OWORD *)a8;
      *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
    }
    *v67 = *(struct _LUID *)(v21 + 316);
    *(_DWORD *)v63[0] = *((_DWORD *)v20 + 109);
    *(_DWORD *)v64[0] = *((_DWORD *)v56 + 6);
    if ( v57 )
      v24 = *((_DWORD *)v57 + 6);
    else
      v24 = 0;
    *(_DWORD *)v65[0] = v24;
    *a10 = g_pDxgkSharedAllocationObjectType;
  }
  else
  {
    if ( v57 )
    {
      v38 = _InterlockedDecrement64((volatile signed __int64 *)v57 + 11);
      if ( v38 < 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v39 + 24) = 111LL;
        WdLogEvent5_WdAssertion(v39);
      }
      if ( !v38 )
      {
        v40 = *((_QWORD *)v57 + 2);
        v41 = *(struct DXGDEVICE **)(v40 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65, v41);
        v42 = *((_QWORD *)v41 + 2);
        v70 = 0;
        v69 = *(_QWORD *)(v42 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v41, 2, v43, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v77, v44);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v40, v57, (struct COREDEVICEACCESS *)v77);
        COREACCESS::~COREACCESS((COREACCESS *)v79);
        COREACCESS::~COREACCESS((COREACCESS *)v78);
        if ( v70 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
        if ( v65[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v45 = *(_QWORD *)(v40 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v64,
            (struct DXGDEVICE *)v45);
          v46 = *(_QWORD *)(v40 + 16);
          v73 = 0;
          v72 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, v45, 2, v47, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v80, v48);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v45, (struct DXGCONTEXT *)v40, (struct COREDEVICEACCESS *)v80);
          COREACCESS::~COREACCESS((COREACCESS *)v82);
          COREACCESS::~COREACCESS((COREACCESS *)v81);
          if ( v73 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
          if ( v64[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v45 + 16), (struct DXGDEVICE *)v45);
        }
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v49 = v56;
      v50 = *((_QWORD *)v56 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v63,
        (struct DXGDEVICE *)v50);
      v51 = *((_QWORD *)v49 + 2);
      v76 = 0;
      v75 = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v50, 2, v52, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v83, v53);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v50, v56, (struct COREDEVICEACCESS *)v83);
      COREACCESS::~COREACCESS((COREACCESS *)v85);
      COREACCESS::~COREACCESS((COREACCESS *)v84);
      if ( v76 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
      if ( v63[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v50 + 16), (struct DXGDEVICE *)v50);
    }
    v54 = _InterlockedDecrement64((volatile signed __int64 *)v58 + 8);
    if ( !v54 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v58);
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v54, v17);
    LODWORD(v19) = -1073741130;
    v55[3] = v23;
    v55[4] = v21;
    v55[5] = -1073741130LL;
    WdLogEvent5_WdError(v55);
  }
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v17);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v60);
  return (unsigned int)v19;
}

/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C033A220
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C033963C (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0339ABC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0339DD8 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(struct DXGDEVICE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  struct _KTHREAD **Current; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  ULONG64 v13; // rax
  char *v14; // r14
  __int64 v15; // r8
  size_t v16; // rdx
  char *v17; // r15
  unsigned int v18; // ebx
  size_t v19; // r12
  int v20; // ebx
  __int64 v21; // r14
  struct DXGDEVICE *v22; // r14
  __int64 v23; // rbx
  __int64 v25; // r9
  __int64 v26; // rbx
  struct DXGGLOBAL *v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  struct _KTHREAD *v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // r14
  struct DXGDEVICE *v34; // r8
  __int64 v35; // rbx
  __int64 v36; // r14
  struct DXGSYNCOBJECT *v37; // r14
  __int64 v38; // r8
  __int64 v39; // r9
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGSYNCOBJECT *v43; // r14
  PERESOURCE *Global; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGDEVICE *v47[2]; // [rsp+50h] [rbp-188h] BYREF
  int v48; // [rsp+60h] [rbp-178h] BYREF
  __int64 v49; // [rsp+68h] [rbp-170h]
  char v50; // [rsp+70h] [rbp-168h]
  struct DXGSYNCOBJECT *v51; // [rsp+78h] [rbp-160h] BYREF
  DXGPROTECTEDSESSION *v52; // [rsp+80h] [rbp-158h] BYREF
  void *v53; // [rsp+88h] [rbp-150h] BYREF
  void *v54; // [rsp+90h] [rbp-148h] BYREF
  char v55[8]; // [rsp+98h] [rbp-140h] BYREF
  char v56; // [rsp+A0h] [rbp-138h]
  struct _KTHREAD **v57; // [rsp+A8h] [rbp-130h]
  _BYTE v58[16]; // [rsp+B0h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+C0h] [rbp-118h]
  size_t Size[2]; // [rsp+D0h] [rbp-108h]
  size_t v61; // [rsp+E0h] [rbp-F8h] BYREF
  struct DXGDEVICE *v62; // [rsp+E8h] [rbp-F0h] BYREF
  struct _KTHREAD **v63; // [rsp+F0h] [rbp-E8h]
  struct DXGDEVICE *v64; // [rsp+F8h] [rbp-E0h]
  _BYTE v65[160]; // [rsp+100h] [rbp-D8h] BYREF

  v64 = a1;
  v47[1] = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 57LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      57LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2148);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2148);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v57 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 )
      return 3221225485LL;
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_48:
    if ( v12 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v48);
    return 3221225485LL;
  }
  v13 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v13;
  *(_OWORD *)Size = *(_OWORD *)(v13 + 16);
  v61 = *(_QWORD *)(v13 + 32);
  HIDWORD(v61) = 0;
  v14 = (char *)Src[1];
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_19;
LABEL_17:
    v15 = LODWORD(Size[0]);
    v16 = (size_t)Src[1];
LABEL_18:
    WdLogSingleEntry3(3LL, v16, v15, -1073741811LL);
    goto LABEL_9;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_17;
LABEL_19:
  v15 = 0x2000000LL;
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v16 = LODWORD(Size[0]);
    goto LABEL_18;
  }
  v17 = (char *)Size[1];
  v18 = v61;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v61 )
      goto LABEL_26;
LABEL_25:
    v15 = (unsigned int)v61;
    v16 = Size[1];
    goto LABEL_18;
  }
  if ( !(_DWORD)v61 )
    goto LABEL_25;
LABEL_26:
  if ( (unsigned int)v61 > 0x2000000 )
  {
    v16 = (unsigned int)v61;
    goto LABEL_18;
  }
  v53 = 0LL;
  v54 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v19 = LODWORD(Size[0]);
    v53 = (void *)operator new[](LODWORD(Size[0]), 0x4B677844u, 256LL, v8);
    if ( !v53 )
    {
      v20 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v19, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating 0x%I64x bytes for private driver data, returning 0x%I64x",
        v19,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
LABEL_106:
      if ( v52 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(v52, HIDWORD(v61));
      v43 = v51;
      if ( v51 )
      {
        Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v43, 0);
      }
      if ( v53 )
        operator delete[](v53);
      if ( v54 )
        operator delete[](v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v48);
      return (unsigned int)v20;
    }
    if ( &v14[v19] < v14 || (unsigned __int64)&v14[v19] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v53, v14, v19);
    Current = v57;
  }
  if ( v18 )
  {
    v21 = v18;
    v54 = (void *)operator new[](v18, 0x4B677844u, 256LL, v8);
    if ( !v54 )
    {
      v20 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v21, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating 0x%I64x bytes for private runtime data, returning 0x%I64x",
        v21,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_106;
    }
    if ( &v17[v18] < v17 || (unsigned __int64)&v17[v18] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v54, v17, v18);
  }
  v62 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v47, (unsigned int)Src[0], Current, &v62);
  v22 = v62;
  if ( !v62 )
  {
    v23 = LODWORD(Src[0]);
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v47[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v47[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47[0] + 2), v47[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 )
      return 3221225485LL;
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_48;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v58, v62);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v22, 1, v25, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
  if ( v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v58);
    if ( !v47[0] )
      goto LABEL_106;
LABEL_53:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47[0] + 2), v47[0]);
    goto LABEL_106;
  }
  v26 = *((_QWORD *)v22 + 231);
  if ( !v26 )
  {
    v20 = -1073741637;
    WdLogSingleEntry2(2LL, v22, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"function is called on a render only device (0x%I64x), returning 0x%I64x.",
      (__int64)v22,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_57;
  }
  v27 = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v55, v27, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v55);
  v63 = Current + 31;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(Current + 31));
  v28 = HIDWORD(Src[0]);
  v29 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v29 >= *((_DWORD *)v57 + 74) )
    goto LABEL_65;
  v30 = v57[35];
  v31 = *((_DWORD *)v30 + 4 * v29 + 2);
  if ( HIDWORD(Src[0]) >> 30 != ((v31 >> 5) & 3) || (v31 & 0x2000) != 0 || (v31 & 0x1F) == 0 )
    goto LABEL_65;
  if ( (v31 & 0x1F) != 0xB )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_65:
    v32 = 0LL;
    goto LABEL_66;
  }
  v32 = *((_QWORD *)v30 + 2 * (unsigned int)v29);
LABEL_66:
  ExReleasePushLockSharedEx(v63, 0LL);
  KeLeaveCriticalRegion();
  if ( !v32 )
  {
    v33 = (__int64)v57;
    WdLogSingleEntry2(2LL, v57, v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
      v33,
      v28,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  v34 = *(struct DXGDEVICE **)(v32 + 16);
  if ( v34 != v22 )
  {
    WdLogSingleEntry3(2LL, v28, v34, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%x object belongs to a different device 0x%p that 0x%p passed.",
      v28,
      *(_QWORD *)(v32 + 16),
      (__int64)v22,
      0LL,
      0LL);
LABEL_68:
    v20 = -1073741811;
    if ( v56 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v55);
LABEL_57:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v58);
    if ( !v47[0] )
      goto LABEL_106;
    goto LABEL_53;
  }
  v51 = *(struct DXGSYNCOBJECT **)(v32 + 32);
  _InterlockedAdd((volatile signed __int32 *)v51 + 6, 1u);
  if ( *((_DWORD *)v51 + 50) != 5 )
  {
    v35 = HIDWORD(Src[0]);
    v36 = (__int64)v57;
    WdLogSingleEntry2(2LL, v57, HIDWORD(Src[0]));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"not monitored fence object, process 0x%I64x, handle 0x%I64x",
      v36,
      v35,
      0LL,
      0LL,
      0LL);
    goto LABEL_75;
  }
  v37 = v51;
  if ( (*((_DWORD *)v51 + 51) & 2) == 0 )
  {
    WdLogSingleEntry2(2LL, v51, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"not NT shared fence: Protected session's sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v37,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_75:
    v20 = -1073741811;
    if ( v56 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v55);
    goto LABEL_77;
  }
  if ( v56 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v55);
  v20 = ADAPTER_DISPLAY::CreateProtectedSession(*(DXGADAPTER ***)(v26 + 2792), &v51, &v53, Size[0], &v54, v61, &v52);
  if ( v20 < 0 )
  {
    if ( v52 )
    {
      WdLogSingleEntry1(1LL, 302LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProtectedSession == NULL", 302LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_77;
  }
  if ( v51 )
  {
    WdLogSingleEntry1(1LL, 309LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject == NULL", 309LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v53 )
  {
    WdLogSingleEntry1(1LL, 310LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKMPrivateDriverData == NULL", 310LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v54 )
  {
    WdLogSingleEntry1(1LL, 311LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKMPrivateRuntimeData == NULL", 311LL, 0LL, 0LL, 0LL, 0LL);
  }
  v20 = DXGPROTECTEDSESSION::Open(v52, (unsigned int *)&v61 + 1, v38, v39);
  if ( v20 < 0 )
  {
LABEL_77:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v58);
    if ( !v47[0] )
      goto LABEL_106;
    goto LABEL_53;
  }
  if ( _InterlockedDecrement((volatile signed __int32 *)v52 + 20) <= 0 )
  {
    WdLogSingleEntry1(1LL, 328LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"c > 0", 328LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !HIDWORD(v61) )
  {
    WdLogSingleEntry1(1LL, 334LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateProtectedSession.hHandle", 334LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v58);
  if ( v47[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v47[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47[0] + 2), v47[0]);
  v40 = (_DWORD *)((char *)v64 + 36);
  if ( (unsigned __int64)v64 + 36 >= MmUserProbeAddress )
    v40 = (_DWORD *)MmUserProbeAddress;
  *v40 = HIDWORD(v61);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v48);
  return 0LL;
}

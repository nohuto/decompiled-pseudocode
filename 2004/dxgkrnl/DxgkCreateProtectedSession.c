/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C02886D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0004134 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00043E4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B104 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0287DB0 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02880D0 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0288360 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **Current; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG64 v14; // rax
  char *v15; // r15
  size_t v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // r12
  unsigned int v21; // r14d
  struct DXGSYNCOBJECT *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGDEVICE *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rax
  PERESOURCE *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdx
  struct _KTHREAD *v47; // r8
  unsigned int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  signed __int32 v62; // ecx
  bool v63; // cc
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // edi
  __int64 v67; // rax
  _DWORD *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  PVOID v71; // rcx
  PERESOURCE *Global; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  char v75[8]; // [rsp+40h] [rbp-188h] BYREF
  int v76; // [rsp+48h] [rbp-180h] BYREF
  __int64 v77; // [rsp+50h] [rbp-178h]
  char v78; // [rsp+58h] [rbp-170h]
  struct DXGSYNCOBJECT *v79; // [rsp+60h] [rbp-168h] BYREF
  PVOID P; // [rsp+68h] [rbp-160h] BYREF
  void *v81; // [rsp+70h] [rbp-158h] BYREF
  void *v82; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v83[16]; // [rsp+80h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-138h]
  size_t Size[2]; // [rsp+A0h] [rbp-128h]
  size_t v86; // [rsp+B0h] [rbp-118h] BYREF
  struct _KTHREAD **v87; // [rsp+B8h] [rbp-110h]
  _BYTE v88[16]; // [rsp+C0h] [rbp-108h] BYREF
  struct DXGDEVICE *v89; // [rsp+D0h] [rbp-F8h] BYREF
  ULONG64 v90; // [rsp+D8h] [rbp-F0h]
  ULONG64 v91; // [rsp+E0h] [rbp-E8h]
  _BYTE v92[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v90 = a1;
  v91 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v76 = -1;
  v77 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v78 = 1;
    v76 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2148);
  }
  else
  {
    v78 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v76, 2148LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  v87 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76, v13);
    if ( v78 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v76);
    }
    return 3221225485LL;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v14;
  *(_OWORD *)Size = *(_OWORD *)(v14 + 16);
  v86 = *(_QWORD *)(v14 + 32);
  HIDWORD(v86) = 0;
  v15 = (char *)Src[1];
  v16 = LODWORD(Size[0]);
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_18;
LABEL_15:
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v17[3] = v15;
    v18 = (unsigned int)v16;
LABEL_16:
    v17[4] = v18;
LABEL_17:
    v17[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_43;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_15;
LABEL_18:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v19 = (unsigned int)v16;
LABEL_20:
    v17[3] = v19;
    v17[4] = 0x2000000LL;
    goto LABEL_17;
  }
  v20 = (char *)Size[1];
  v21 = v86;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v86 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( !(_DWORD)v86 )
  {
LABEL_25:
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v17[3] = v20;
    v18 = v21;
    goto LABEL_16;
  }
LABEL_26:
  if ( (unsigned int)v86 > 0x2000000 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v19 = v21;
    goto LABEL_20;
  }
  v81 = 0LL;
  v82 = 0LL;
  v22 = 0LL;
  v79 = 0LL;
  P = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v81 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    if ( !v81 )
    {
LABEL_30:
      v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = v16;
      v28 = -1073741801;
      *(_QWORD *)(v27 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v27);
LABEL_89:
      v71 = P;
      if ( P )
        DXGPROTECTEDSESSION::DestroyProtectedSession(P, HIDWORD(v86));
      if ( v22 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v71, v29);
        DXGGLOBAL::DestroySyncObject(Global, v22, 0);
      }
      if ( v81 )
        operator delete[](v81);
      if ( v82 )
        operator delete[](v82);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76, v29);
      if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v76);
      return (unsigned int)v28;
    }
    if ( &v15[v16] < v15 || (unsigned __int64)&v15[v16] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v81, v15, v16);
  }
  if ( v21 )
  {
    v16 = v21;
    v82 = operator new[](v21, 0x4B677844u, PagedPool);
    if ( !v82 )
      goto LABEL_30;
    if ( &v20[v21] < v20 || (unsigned __int64)&v20[v21] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v82, v20, v21);
  }
  v89 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v75, LODWORD(Src[0]), Current, &v89);
  v32 = v89;
  if ( !v89 )
  {
    v33 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v33 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v75);
    goto LABEL_43;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v83, v89);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v92, (__int64)v32, 1, v37, 0);
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v92, 0LL);
  if ( v28 < 0 )
  {
LABEL_48:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v83);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v75);
    goto LABEL_89;
  }
  v40 = *((_QWORD *)v32 + 231);
  if ( !v40 )
  {
    v41 = WdLogNewEntry5_WdError(v39, v38);
    *(_QWORD *)(v41 + 24) = v32;
    v28 = -1073741637;
    *(_QWORD *)(v41 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v41);
    goto LABEL_48;
  }
  v42 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v39, v38);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v88, v42, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v88, v43);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(Current + 26));
  v44 = HIDWORD(Src[0]);
  v45 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  v46 = HIDWORD(Src[0]) >> 30;
  if ( (unsigned int)v45 >= *((_DWORD *)v87 + 64) )
    goto LABEL_57;
  v47 = v87[30];
  v48 = *((_DWORD *)v47 + 4 * v45 + 2);
  if ( (_DWORD)v46 != ((v48 >> 5) & 3) || (v48 & 0x2000) != 0 || (v48 & 0x1F) == 0 )
    goto LABEL_57;
  v49 = v48 & 0x1F;
  if ( (_BYTE)v49 != 11 )
  {
    v50 = WdLogNewEntry5_WdError(v49, v46);
    *(_QWORD *)(v50 + 24) = 267LL;
    WdLogEvent5_WdError(v50);
LABEL_57:
    v51 = 0LL;
    goto LABEL_58;
  }
  v51 = *((_QWORD *)v47 + 2 * (unsigned int)v45);
LABEL_58:
  ExReleasePushLockSharedEx(Current + 26, 0LL);
  KeLeaveCriticalRegion();
  if ( !v51 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v54[3] = v87;
    v54[4] = v44;
LABEL_60:
    WdLogEvent5_WdError(v54);
    v28 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v88);
    goto LABEL_48;
  }
  if ( *(struct DXGDEVICE **)(v51 + 16) != v32 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v54[3] = v44;
    v54[4] = *(_QWORD *)(v51 + 16);
    v54[5] = v32;
    goto LABEL_60;
  }
  v79 = *(struct DXGSYNCOBJECT **)(v51 + 32);
  _InterlockedIncrement((volatile signed __int32 *)v79 + 6);
  v22 = v79;
  if ( *((_DWORD *)v79 + 48) != 5 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v54[3] = v87;
    v54[4] = HIDWORD(Src[0]);
    goto LABEL_60;
  }
  if ( (*((_DWORD *)v79 + 49) & 2) == 0 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
    v54[3] = v22;
    v54[4] = -1073741811LL;
    goto LABEL_60;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v88);
  v28 = ADAPTER_DISPLAY::CreateProtectedSession(
          *(DXGADAPTER ***)(v40 + 2696),
          &v79,
          &v81,
          Size[0],
          &v82,
          v86,
          (struct DXGPROTECTEDSESSION **)&P);
  if ( v28 < 0 )
  {
    if ( P )
    {
      v57 = WdLogNewEntry5_WdAssertion(v56, v55);
      *(_QWORD *)(v57 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v57);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v83);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v75);
    v22 = v79;
    goto LABEL_89;
  }
  v22 = v79;
  if ( v79 )
  {
    v58 = WdLogNewEntry5_WdAssertion(v56, v55);
    *(_QWORD *)(v58 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v58);
  }
  if ( v81 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v56, v55);
    *(_QWORD *)(v59 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v59);
  }
  if ( v82 )
  {
    v60 = WdLogNewEntry5_WdAssertion(v56, v55);
    *(_QWORD *)(v60 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v60);
  }
  v28 = DXGPROTECTEDSESSION::Open((DXGPROTECTEDSESSION *)P, (unsigned int *)&v86 + 1);
  if ( v28 < 0 )
    goto LABEL_48;
  v62 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF);
  v63 = v62 <= 1;
  v64 = (unsigned int)(v62 - 1);
  if ( v63 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v64, v61);
    *(_QWORD *)(v65 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v65);
  }
  v66 = HIDWORD(v86);
  if ( !HIDWORD(v86) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v64, v61);
    *(_QWORD *)(v67 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v67);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v92);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v83);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v75);
  v68 = (_DWORD *)(v90 + 36);
  if ( v90 + 36 >= MmUserProbeAddress )
    v68 = (_DWORD *)MmUserProbeAddress;
  *v68 = v66;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76, (__int64)v68);
  if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v76);
  return 0LL;
}

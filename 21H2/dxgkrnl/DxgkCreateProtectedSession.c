/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C0288AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0004348 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0004594 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00072B0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B6E4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C02881B0 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02884D0 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0288760 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
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
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG64 v13; // rax
  const void *v14; // rdi
  unsigned int v15; // r13d
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  size_t v19; // r14
  unsigned int v20; // esi
  PVOID v21; // r12
  PVOID v22; // r15
  struct DXGSYNCOBJECT *v23; // rsi
  volatile signed __int32 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // rcx
  ULONG64 v33; // rcx
  size_t v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGDEVICE *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGDEVICE *v50; // rdi
  __int64 v51; // rax
  PERESOURCE *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // edi
  __int64 v75; // rax
  _DWORD *v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  PERESOURCE *Global; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  _BYTE v82[8]; // [rsp+40h] [rbp-188h] BYREF
  int v83; // [rsp+48h] [rbp-180h] BYREF
  __int64 v84; // [rsp+50h] [rbp-178h]
  char v85; // [rsp+58h] [rbp-170h]
  size_t v86; // [rsp+60h] [rbp-168h]
  void *v87; // [rsp+68h] [rbp-160h] BYREF
  void *v88; // [rsp+70h] [rbp-158h] BYREF
  struct DXGSYNCOBJECT *v89; // [rsp+78h] [rbp-150h] BYREF
  struct DXGDEVICE *v90; // [rsp+80h] [rbp-148h] BYREF
  struct DXGPROCESS *Current; // [rsp+88h] [rbp-140h]
  DXGPROTECTEDSESSION *v92; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v93[16]; // [rsp+98h] [rbp-130h] BYREF
  void *Src[2]; // [rsp+A8h] [rbp-120h]
  size_t Size[2]; // [rsp+B8h] [rbp-110h]
  unsigned int v96[2]; // [rsp+C8h] [rbp-100h] BYREF
  void *v97; // [rsp+D0h] [rbp-F8h]
  _BYTE v98[16]; // [rsp+D8h] [rbp-F0h] BYREF
  ULONG64 v99; // [rsp+E8h] [rbp-E0h]
  ULONG64 v100; // [rsp+F0h] [rbp-D8h]
  _BYTE v101[160]; // [rsp+100h] [rbp-C8h] BYREF

  v99 = a1;
  v100 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v83 = -1;
  v84 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v85 = 1;
    v83 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2148);
  }
  else
  {
    v85 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v83, 2148LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v83, v12);
    if ( v85 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v83);
    }
    return 3221225485LL;
  }
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v13;
  *(_OWORD *)Size = *(_OWORD *)(v13 + 16);
  *(_QWORD *)v96 = *(_QWORD *)(v13 + 32);
  v96[1] = 0;
  v14 = Src[1];
  v15 = Size[0];
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_18;
LABEL_15:
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v16[3] = v14;
    v17 = v15;
LABEL_16:
    v16[4] = v17;
LABEL_17:
    v16[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_45;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_15;
LABEL_18:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v18 = v15;
LABEL_20:
    v16[3] = v18;
    v16[4] = 0x2000000LL;
    goto LABEL_17;
  }
  v19 = Size[1];
  v97 = (void *)Size[1];
  v20 = v96[0];
  LODWORD(v86) = v96[0];
  if ( !Size[1] )
  {
    if ( !v96[0] )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( !v96[0] )
  {
LABEL_25:
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v16[3] = v19;
    v17 = v20;
    goto LABEL_16;
  }
LABEL_26:
  if ( v96[0] > 0x2000000 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v8, v10);
    v18 = v20;
    goto LABEL_20;
  }
  v21 = 0LL;
  v87 = 0LL;
  v22 = 0LL;
  v88 = 0LL;
  v23 = 0LL;
  v89 = 0LL;
  v24 = 0LL;
  v92 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v90 = (struct DXGDEVICE *)LODWORD(Size[0]);
    v21 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v87 = v21;
    if ( !v21 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = v90;
LABEL_31:
      v30 = -1073741801;
      *(_QWORD *)(v29 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
LABEL_90:
      if ( v24 )
        DXGPROTECTEDSESSION::DestroyProtectedSession((PVOID)v24, v96[1]);
      if ( v23 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v32, v31);
        DXGGLOBAL::DestroySyncObject(Global, v23, 0, 0);
      }
      if ( v21 )
        operator delete[](v21);
      if ( v22 )
        operator delete[](v22);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v83, v31);
      if ( v85 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v80, &EventProfilerExit, v81, v83);
      return (unsigned int)v30;
    }
    v33 = (ULONG64)v14 + v15;
    if ( v33 < (unsigned __int64)v14 || v33 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v14, v15);
  }
  if ( (_DWORD)v86 )
  {
    v34 = (unsigned int)v86;
    v22 = operator new[]((unsigned int)v86, 0x4B677844u, PagedPool);
    v88 = v22;
    if ( !v22 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
      *(_QWORD *)(v29 + 24) = v34;
      goto LABEL_31;
    }
    v39 = v97;
    if ( (char *)v97 + v34 < v97 || (unsigned __int64)v97 + v34 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, v39, v34);
  }
  v90 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v82, LODWORD(Src[0]), (struct _KTHREAD **)Current, &v90);
  v42 = v90;
  if ( !v90 )
  {
    v43 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v43 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v82);
    goto LABEL_45;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v93, v90);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v101, (__int64)v42, 1, v47, 0);
  v30 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v101, 0LL);
  if ( v30 < 0 )
  {
LABEL_50:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v93);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v82);
    goto LABEL_90;
  }
  v50 = v90;
  v97 = (void *)*((_QWORD *)v90 + 231);
  if ( !v97 )
  {
    v51 = WdLogNewEntry5_WdError(v49, v48);
    *(_QWORD *)(v51 + 24) = v50;
    v30 = -1073741637;
    *(_QWORD *)(v51 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v51);
    goto LABEL_50;
  }
  v52 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v49, v48);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v98, v52, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v98, v53);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v54 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  v55 = HIDWORD(Src[0]) >> 30;
  if ( (unsigned int)v54 < *((_DWORD *)Current + 64) )
  {
    v56 = *((_QWORD *)Current + 30);
    v57 = *(_DWORD *)(v56 + 16 * v54 + 8);
    if ( (_DWORD)v55 == ((v57 >> 5) & 3) && (v57 & 0x2000) == 0 && (v57 & 0x1F) != 0 )
    {
      v58 = v57 & 0x1F;
      if ( (_BYTE)v58 == 11 )
      {
        v60 = *(_QWORD *)(v56 + 16LL * (unsigned int)v54);
        goto LABEL_60;
      }
      v59 = WdLogNewEntry5_WdError(v58, v55);
      *(_QWORD *)(v59 + 24) = 316LL;
      WdLogEvent5_WdError(v59);
    }
  }
  v60 = 0LL;
LABEL_60:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v60 )
    goto LABEL_61;
  if ( *(struct DXGDEVICE **)(v60 + 16) != v90 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
    v64[3] = HIDWORD(Src[0]);
    v64[4] = *(_QWORD *)(v60 + 16);
    v64[5] = v90;
    goto LABEL_62;
  }
  v23 = *(struct DXGSYNCOBJECT **)(v60 + 32);
  v89 = v23;
  DXGSYNCOBJECT::AddReference(v23, v61, v63);
  if ( *((_DWORD *)v23 + 48) != 5 )
  {
LABEL_61:
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
    v64[3] = Current;
    v64[4] = HIDWORD(Src[0]);
LABEL_62:
    WdLogEvent5_WdError(v64);
    v30 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v98);
    goto LABEL_50;
  }
  if ( (*((_DWORD *)v23 + 49) & 2) == 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
    v64[3] = v23;
    v64[4] = -1073741811LL;
    goto LABEL_62;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v98);
  v30 = ADAPTER_DISPLAY::CreateProtectedSession(*((DXGADAPTER ***)v97 + 337), &v89, &v87, v15, &v88, v86, &v92);
  if ( v30 < 0 )
  {
    v24 = (volatile signed __int32 *)v92;
    if ( v92 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v66, v65);
      *(_QWORD *)(v67 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v67);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v93);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v82);
    v21 = v87;
    v22 = v88;
    v23 = v89;
    goto LABEL_90;
  }
  v23 = v89;
  if ( v89 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v66, v65);
    *(_QWORD *)(v68 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v68);
  }
  v21 = v87;
  if ( v87 )
  {
    v69 = WdLogNewEntry5_WdAssertion(v66, v65);
    *(_QWORD *)(v69 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v69);
  }
  v22 = v88;
  if ( v88 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v66, v65);
    *(_QWORD *)(v70 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v70);
  }
  v24 = (volatile signed __int32 *)v92;
  v30 = DXGPROTECTEDSESSION::Open(v92, &v96[1]);
  if ( v30 < 0 )
    goto LABEL_50;
  if ( _InterlockedExchangeAdd(v24 + 18, 0xFFFFFFFF) <= 1 )
  {
    v73 = WdLogNewEntry5_WdAssertion(v72, v71);
    *(_QWORD *)(v73 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v73);
  }
  v74 = v96[1];
  if ( !v96[1] )
  {
    v75 = WdLogNewEntry5_WdAssertion(v72, v71);
    *(_QWORD *)(v75 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v75);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v93);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v82);
  v76 = (_DWORD *)(v99 + 36);
  if ( v99 + 36 >= MmUserProbeAddress )
    v76 = (_DWORD *)MmUserProbeAddress;
  *v76 = v74;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v83, (__int64)v76);
  if ( v85 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v83);
  return 0LL;
}

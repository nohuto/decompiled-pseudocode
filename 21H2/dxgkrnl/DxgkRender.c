/*
 * XREFs of DxgkRender @ 0x1C01592B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0172E70 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0222F18 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C02DB5B0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C02E2508 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // r12
  _OWORD *v5; // rax
  _D3DKMT_RENDER *v6; // rcx
  __int64 v7; // rdx
  struct DXGCONTEXT *v8; // r13
  int v9; // eax
  __int64 v10; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v12; // rbx
  _QWORD *Pool2; // rcx
  unsigned int v14; // esi
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // r9
  int v18; // ebx
  struct DXGCONTEXT *v19; // rbx
  unsigned __int64 v20; // r9
  __int64 CommandOffset; // r8
  UINT AllocationCount; // r12d
  int v23; // esi
  char Flags; // dl
  __int64 v25; // rax
  char v26; // cl
  struct DXGALLOCATION **v27; // rax
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  ULONG64 v32; // r10
  DXGGLOBAL **v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 CurrentProcess; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r10
  unsigned int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  struct DXGALLOCATION **v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  UINT NewCommandBufferSize; // ecx
  UINT NewAllocationListSize; // eax
  UINT NewPatchLocationListSize; // r12d
  UINT v58; // edx
  unsigned int v59; // ecx
  UINT v60; // eax
  char v61; // [rsp+50h] [rbp-468h]
  int v62; // [rsp+58h] [rbp-460h] BYREF
  __int64 v63; // [rsp+60h] [rbp-458h]
  char v64; // [rsp+68h] [rbp-450h]
  struct DXGALLOCATION **v65; // [rsp+70h] [rbp-448h]
  _BYTE v66[16]; // [rsp+78h] [rbp-440h] BYREF
  PVOID P; // [rsp+88h] [rbp-430h]
  _BYTE v68[32]; // [rsp+90h] [rbp-428h] BYREF
  unsigned int v69; // [rsp+B0h] [rbp-408h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+B8h] [rbp-400h]
  int v71; // [rsp+C0h] [rbp-3F8h] BYREF
  int v72; // [rsp+C4h] [rbp-3F4h] BYREF
  _BYTE v73[16]; // [rsp+C8h] [rbp-3F0h] BYREF
  unsigned int v74[2]; // [rsp+D8h] [rbp-3E0h] BYREF
  struct DXGCONTEXT *v75; // [rsp+E0h] [rbp-3D8h] BYREF
  __int64 v76; // [rsp+E8h] [rbp-3D0h] BYREF
  struct DXGADAPTER *v77; // [rsp+F0h] [rbp-3C8h]
  char v78; // [rsp+F8h] [rbp-3C0h]
  _QWORD v79[2]; // [rsp+100h] [rbp-3B8h] BYREF
  ULONG64 v80; // [rsp+110h] [rbp-3A8h]
  _BYTE v81[24]; // [rsp+118h] [rbp-3A0h] BYREF
  _QWORD v82[6]; // [rsp+130h] [rbp-388h] BYREF
  char v83; // [rsp+160h] [rbp-358h]
  PVOID v84; // [rsp+170h] [rbp-348h] BYREF
  _BYTE v85[256]; // [rsp+178h] [rbp-340h] BYREF
  int v86; // [rsp+278h] [rbp-240h]
  _D3DKMT_RENDER v87; // [rsp+280h] [rbp-238h] BYREF
  char v88[8]; // [rsp+3F0h] [rbp-C8h] BYREF
  char v89[16]; // [rsp+3F8h] [rbp-C0h] BYREF
  DXGADAPTER *v90; // [rsp+408h] [rbp-B0h]
  _BYTE v91[88]; // [rsp+438h] [rbp-80h] BYREF

  v80 = a1;
  v62 = -1;
  v63 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v64 = 1;
    v62 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v62, 2013);
  Current = DXGPROCESS::GetCurrent();
  v79[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    v23 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v38 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
    if ( v64 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v62);
    }
    return (unsigned int)v23;
  }
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  v6 = &v87;
  v7 = 2LL;
  do
  {
    *(_OWORD *)&v6->hDevice = *v5;
    *(_OWORD *)&v6->PatchLocationCount = v5[1];
    *(_OWORD *)&v6->NewCommandBufferSize = v5[2];
    *(_OWORD *)&v6->NewAllocationListSize = v5[3];
    *(_OWORD *)&v6->NewPatchLocationListSize = v5[4];
    *(_OWORD *)&v6->BroadcastContextCount = v5[5];
    *(_OWORD *)&v6->BroadcastContext[3] = v5[6];
    v6 = (_D3DKMT_RENDER *)((char *)v6 + 128);
    *(_OWORD *)&v6[-1].pPrivateDriverData = v5[7];
    v5 += 8;
    --v7;
  }
  while ( v7 );
  *(_OWORD *)&v6->hDevice = *v5;
  *(_OWORD *)&v6->PatchLocationCount = v5[1];
  *(_OWORD *)&v6->NewCommandBufferSize = v5[2];
  *(_OWORD *)&v6->NewAllocationListSize = v5[3];
  *(_OWORD *)&v6->NewPatchLocationListSize = v5[4];
  *(_OWORD *)&v6->BroadcastContextCount = v5[5];
  *(_OWORD *)&v6->BroadcastContext[3] = v5[6];
  v75 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66, v87.hDevice, Current, &v75, 0, 1);
  v8 = v75;
  if ( !v75 )
  {
    v23 = -1073741811;
    WdLogSingleEntry3(2LL, Current, v87.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v87.hDevice,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  if ( ((*(_BYTE *)&v87.Flags | (unsigned __int8)(*(_DWORD *)&v87.Flags >> 1)) & 0x20) != 0 )
  {
    v23 = -1073741811;
    WdLogSingleEntry2(2LL, v87.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"RenderKm and RenderKmReadback flags should not be set when DxgkRender is called. Context 0x%I64x returning 0x%I64x",
      v87.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  v9 = *((_DWORD *)v75 + 101);
  if ( (v9 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v75);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
      (__int64)v8,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_105;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 88LL);
    goto LABEL_105;
  }
  if ( *((_BYTE *)v75 + 438) )
  {
    WdLogSingleEntry1(2LL, v87.hDevice);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkRender cannot be called on a virtual context. pContext=0x%p",
      v87.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_105;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73,
    *((struct DXGDEVICE **)v75 + 2));
  BroadcastContextCount = v87.BroadcastContextCount;
  if ( v87.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL))
    || BroadcastContextCount > 0x40 )
  {
    v23 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
LABEL_59:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
LABEL_60:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
    goto LABEL_61;
  }
  v12 = BroadcastContextCount + 1;
  Pool2 = 0LL;
  P = 0LL;
  v69 = 0;
  if ( (unsigned int)v12 <= 4 )
  {
    Pool2 = v68;
    P = v68;
    if ( (_DWORD)v12 )
    {
      memset(v68, 0, 8LL * (unsigned int)v12);
      Pool2 = P;
    }
    goto LABEL_18;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 >= 8 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v12, 1265072196LL, v10);
    P = Pool2;
LABEL_18:
    v69 = v12;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 126LL);
    goto LABEL_132;
  }
  *Pool2 = v8;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v81, Current);
  v14 = 0;
  if ( v87.BroadcastContextCount )
  {
    do
    {
      v39 = v14;
      *(_QWORD *)v74 = v14;
      v40 = (v87.BroadcastContext[v14] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v40 < *((_DWORD *)Current + 74) )
      {
        v41 = *((_QWORD *)Current + 35);
        v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
        if ( v87.BroadcastContext[v14] >> 30 == ((v42 >> 5) & 3) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
        {
          if ( (v42 & 0x1F) == 7 )
          {
            v43 = *(_QWORD *)(v41 + 16LL * (unsigned int)v40);
            goto LABEL_84;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v39 = v14;
        }
      }
      v43 = 0LL;
LABEL_84:
      LODWORD(v65) = v14 + 1;
      v44 = v14 + 1;
      *((_QWORD *)P + v44) = v43;
      v45 = *((_QWORD *)P + v44);
      if ( !v45 || (v46 = *(_DWORD *)(v45 + 404), (v46 & 8) != 0) || *(_QWORD *)(v45 + 16) != *((_QWORD *)v8 + 2) )
      {
        v47 = v14;
        v23 = -1073741811;
        WdLogSingleEntry4(2LL, v8, v87.BroadcastContext[v39], (unsigned int)v47, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v8,
          v87.BroadcastContext[*(_QWORD *)v74],
          v47,
          -1073741811LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
        goto LABEL_57;
      }
      if ( (v46 & 0x10) != 0 )
      {
        WdLogSingleEntry1(2LL, *((_QWORD *)P + v44));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
          *((_QWORD *)P + v44),
          0LL,
          0LL,
          0LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
        goto LABEL_101;
      }
      if ( *(_BYTE *)(v45 + 438) )
      {
        WdLogSingleEntry1(1LL, 178LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"BroadcastContextArray.Get()[i + 1]->UsesGpuVa() == FALSE",
          178LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v14 = (unsigned int)v65;
    }
    while ( (unsigned int)v65 < v87.BroadcastContextCount );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v82,
    P,
    v69,
    v15,
    1);
  if ( v83 )
  {
    if ( !v82[0] )
    {
      WdLogSingleEntry1(3LL, 190LL);
LABEL_131:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v82);
LABEL_132:
      if ( P != v68 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v69 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
      if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v62);
      return 3221225495LL;
    }
    WdLogSingleEntry1(3LL, 195LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v82);
LABEL_101:
    if ( P != v68 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v69 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
LABEL_105:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
    if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v62);
    return (unsigned int)-1073741811;
  }
  v77 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v77 + 3);
  v76 = -1LL;
  v16 = v77;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v16 + 136, 0LL);
  v78 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v88, *((_QWORD *)v8 + 2), 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v88, 0LL);
  if ( v18 >= 0 )
  {
    v19 = v75;
    v20 = *((_QWORD *)v75 + 6);
    if ( v87.CommandOffset >= v20 )
    {
      CommandOffset = v87.CommandOffset;
    }
    else
    {
      CommandOffset = v87.CommandLength;
      if ( v87.CommandLength + (unsigned __int64)v87.CommandOffset <= v20 )
      {
        AllocationCount = v87.AllocationCount;
        if ( v87.AllocationCount > *((_DWORD *)v75 + 18) )
        {
          v20 = *((unsigned int *)v75 + 18);
          CommandOffset = v87.AllocationCount;
        }
        else
        {
          if ( v87.PatchLocationCount <= *((_DWORD *)v75 + 26) )
          {
            v23 = 0;
            Flags = (char)v87.Flags;
            if ( !v87.CommandLength )
            {
LABEL_44:
              if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
                goto LABEL_47;
              NewCommandBufferSize = v87.NewCommandBufferSize;
              if ( (Flags & 1) == 0 )
                NewCommandBufferSize = *((_DWORD *)v19 + 50);
              LODWORD(v65) = NewCommandBufferSize;
              NewAllocationListSize = v87.NewAllocationListSize;
              if ( (Flags & 2) == 0 )
                NewAllocationListSize = *((_DWORD *)v19 + 53);
              LODWORD(pNewAllocationList) = NewAllocationListSize;
              NewPatchLocationListSize = v87.NewPatchLocationListSize;
              if ( (Flags & 4) == 0 )
                NewPatchLocationListSize = *((_DWORD *)v19 + 54);
              v58 = *((_DWORD *)v19 + 50);
              if ( NewCommandBufferSize < v58 )
                goto LABEL_153;
              if ( NewAllocationListSize >= *((_DWORD *)v19 + 53) && NewPatchLocationListSize >= *((_DWORD *)v19 + 54) )
              {
                if ( DXGADAPTER::IsCoreResourceSharedOwner(v90) )
                  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v88);
                DXGCONTEXT::ResizeUserModeBuffers(
                  v19,
                  *((struct VIDMM_DMA_POOL **)v19 + 29),
                  (unsigned int)v65,
                  (unsigned int)pNewAllocationList,
                  NewPatchLocationListSize);
                v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v88, 0LL);
                goto LABEL_47;
              }
              if ( NewCommandBufferSize < v58 )
LABEL_153:
                WdLogSingleEntry3(3LL, v19, NewCommandBufferSize, *((unsigned int *)v19 + 50));
              v59 = *((_DWORD *)v19 + 53);
              if ( (unsigned int)pNewAllocationList < v59 )
                WdLogSingleEntry3(3LL, v19, (unsigned int)pNewAllocationList, v59);
              v60 = *((_DWORD *)v19 + 54);
              if ( NewPatchLocationListSize < v60 )
                WdLogSingleEntry3(3LL, v19, NewPatchLocationListSize, v60);
LABEL_47:
              v28 = 0;
              v79[0] = 0LL;
              v29 = 0;
              v71 = 0;
              v30 = 0;
              v72 = 0;
              v31 = 0;
              if ( v23 != -1073741130 )
              {
                COREACCESS::Release((COREACCESS *)v89);
                if ( v91[72] )
                  COREACCESS::Release((COREACCESS *)v91);
                if ( !*((_BYTE *)v8 + 438) )
                  (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                                 + 648LL)
                                                                                     + 8LL)
                                                                         + 496LL))(
                    *((_QWORD *)v19 + 29),
                    v79,
                    &v71,
                    &v72);
                v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                + 624LL)
                                                                    + 8LL)
                                                        + 448LL))(*((_QWORD *)v19 + 32));
                v28 = v79[0];
                v29 = v71;
                v30 = v72;
              }
              v32 = v80;
              *(_QWORD *)(v80 + 24) = *((_QWORD *)v19 + 7);
              *(_DWORD *)(v32 + 32) = v28;
              *(_QWORD *)(v32 + 40) = *((_QWORD *)v19 + 11);
              *(_DWORD *)(v32 + 48) = v29;
              *(_QWORD *)(v32 + 56) = *((_QWORD *)v19 + 15);
              *(_DWORD *)(v32 + 64) = v30;
              *(_DWORD *)(v32 + 340) = v31;
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
              if ( v78 )
              {
                v78 = 0;
                ExReleasePushLockSharedEx((char *)v77 + 136, 0LL);
                KeLeaveCriticalRegion();
                v33 = (DXGGLOBAL **)v77;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v33[2], (struct DXGADAPTER *)v33);
              }
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v82);
LABEL_57:
              if ( P != v68 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v69 = 0;
              goto LABEL_59;
            }
            if ( (*(_BYTE *)&v87.Flags & 0x20) != 0 )
              pNewAllocationList = v87.pNewAllocationList;
            else
              pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v75 + 11);
            v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL);
            if ( *(int *)(v25 + 2424) >= 0x2000 || (v26 = 0, *(_BYTE *)(v25 + 2724)) )
              v26 = 1;
            v61 = v26;
            v74[0] = v87.AllocationCount;
            v84 = 0LL;
            v86 = 0;
            v27 = 0LL;
            v65 = 0LL;
            if ( !v26 )
            {
LABEL_33:
              if ( v23 >= 0 )
              {
                v23 = DXGCONTEXT::Render(
                        v19,
                        &v87,
                        (struct COREDEVICEACCESS *)v88,
                        (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v76,
                        (struct DXGCONTEXT **)P,
                        v27,
                        0LL);
                Flags = (char)v87.Flags;
              }
              if ( v61 )
              {
                DxgkUnreferenceAllocationList(AllocationCount, v65);
                Flags = (char)v87.Flags;
              }
              if ( v23 >= 0 && (Flags & 0x10) != 0 )
              {
                v23 = DXGCONTEXT::HandleVistaBltStub(
                        v19,
                        v87.PresentHistoryToken,
                        1,
                        (struct COREDEVICEACCESS *)v88,
                        (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v76,
                        v87.BroadcastContextCount,
                        v87.BroadcastContext,
                        (struct DXGCONTEXT **)P);
                Flags = (char)v87.Flags;
              }
              if ( v84 != v85 && v84 )
              {
                ExFreePoolWithTag(v84, 0);
                Flags = (char)v87.Flags;
              }
              if ( v23 < 0 )
                goto LABEL_47;
              goto LABEL_44;
            }
            v52 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                             &v84,
                                             v87.AllocationCount);
            v65 = v52;
            if ( v52 )
            {
              v23 = DxgkReferenceAllocationList(v74, pNewAllocationList, v52, *((struct DXGDEVICE **)v8 + 2));
              Flags = (char)v87.Flags;
              AllocationCount = v74[0];
              v27 = v65;
              goto LABEL_33;
            }
            WdLogSingleEntry1(3LL, 278LL);
            if ( v84 != v85 && v84 )
              ExFreePoolWithTag(v84, 0);
            v84 = 0LL;
            v86 = 0;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
            if ( v78 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
            goto LABEL_131;
          }
          v20 = *((unsigned int *)v75 + 26);
          CommandOffset = v87.PatchLocationCount;
        }
      }
    }
    v23 = -1073741811;
    WdLogSingleEntry4(3LL, v75, CommandOffset, v20, -1073741811LL);
    goto LABEL_47;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
  if ( v78 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v82);
  if ( P != v68 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v69 = 0;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v62);
  return (unsigned int)v18;
}

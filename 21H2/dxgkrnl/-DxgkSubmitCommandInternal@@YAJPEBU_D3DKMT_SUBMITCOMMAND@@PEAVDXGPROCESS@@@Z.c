/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0
 * Callers:
 *     DxgkSubmitCommand @ 0x1C018F640 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381E60 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C004A8A0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C005963C (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0191040 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C01C9BA8 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C01D8414 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C032C1C8 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C033D984 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C037D73C (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  _D3DKMT_SUBMITCOMMAND *v5; // rdi
  const struct _D3DKMT_SUBMITCOMMAND *v6; // rax
  _D3DKMT_SUBMITCOMMAND *v7; // rcx
  __int64 v8; // rdx
  D3DKMT_SUBMITCOMMANDFLAGS Flags; // ecx
  struct DXGCONTEXT *v10; // r15
  int v11; // eax
  unsigned __int64 BroadcastContextCount; // rbx
  unsigned int NumPrimaries; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rcx
  bool v18; // sf
  PVOID Pool2; // rcx
  unsigned int v21; // r9d
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  struct DXGCONTEXT *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // esi
  struct _KEVENT *v28; // r14
  struct _KEVENT *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned int v35; // ecx
  __int64 v36; // rsi
  int v37; // ecx
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  __int64 v40; // r9
  const wchar_t *v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  bool v44; // zf
  __int64 v45; // rdi
  __int64 v46; // r9
  struct DXGCONTEXT *v47; // rbx
  __int64 v48; // rsi
  struct DXGADAPTER *v49; // rbx
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r8
  struct DXGCONTEXT *v55; // rbx
  struct _VIDMM_MULTI_ALLOC **v56; // r13
  __int64 v57; // r12
  __int64 v58; // rax
  UINT i; // ebx
  D3DKMT_HANDLE *HistoryBufferArray; // rax
  unsigned int *v61; // rdx
  unsigned int v62; // r8d
  unsigned int v63; // r14d
  struct _EX_RUNDOWN_REF **v64; // r12
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // esi
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 PresentHistoryToken; // rdx
  unsigned int v76; // r9d
  unsigned int *v77; // r10
  unsigned int j; // ebx
  DXGGLOBAL **v79; // rcx
  DXGCONTEXT **v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // [rsp+50h] [rbp-498h] BYREF
  __int64 v85; // [rsp+58h] [rbp-490h]
  char v86; // [rsp+60h] [rbp-488h]
  unsigned __int8 v87; // [rsp+68h] [rbp-480h]
  PVOID P; // [rsp+70h] [rbp-478h]
  _BYTE v89[32]; // [rsp+78h] [rbp-470h] BYREF
  unsigned int v90; // [rsp+98h] [rbp-450h]
  DXGCONTEXT *v91; // [rsp+A0h] [rbp-448h] BYREF
  char v92; // [rsp+A8h] [rbp-440h]
  __int64 v93; // [rsp+B0h] [rbp-438h] BYREF
  int v94; // [rsp+B8h] [rbp-430h]
  DXGCONTEXT **v95; // [rsp+C0h] [rbp-428h] BYREF
  unsigned int v96; // [rsp+C8h] [rbp-420h]
  struct DXGCONTEXT *v97; // [rsp+D0h] [rbp-418h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-410h] BYREF
  struct DXGADAPTER *v99; // [rsp+E0h] [rbp-408h]
  char v100; // [rsp+E8h] [rbp-400h]
  unsigned int v101; // [rsp+F0h] [rbp-3F8h]
  UINT v102; // [rsp+F4h] [rbp-3F4h]
  __int64 v103; // [rsp+F8h] [rbp-3F0h]
  struct DXGPROCESS *v104; // [rsp+100h] [rbp-3E8h]
  __int64 v105; // [rsp+108h] [rbp-3E0h]
  struct DXGPROCESS *v106; // [rsp+110h] [rbp-3D8h]
  struct _EX_RUNDOWN_REF *v107; // [rsp+118h] [rbp-3D0h] BYREF
  _QWORD v108[6]; // [rsp+120h] [rbp-3C8h] BYREF
  char v109; // [rsp+150h] [rbp-398h]
  _BYTE v110[24]; // [rsp+158h] [rbp-390h] BYREF
  char v111[8]; // [rsp+170h] [rbp-378h] BYREF
  _BYTE v112[16]; // [rsp+178h] [rbp-370h] BYREF
  DXGADAPTER *v113; // [rsp+188h] [rbp-360h]
  char v114; // [rsp+190h] [rbp-358h]
  __int64 v115; // [rsp+198h] [rbp-350h]
  _BYTE v116[16]; // [rsp+1B8h] [rbp-330h] BYREF
  __int64 v117; // [rsp+1C8h] [rbp-320h]
  __int64 v118; // [rsp+1F8h] [rbp-2F0h]
  char v119; // [rsp+200h] [rbp-2E8h]
  DXGALLOCATIONREFERENCE *v120; // [rsp+210h] [rbp-2D8h] BYREF
  char v121; // [rsp+218h] [rbp-2D0h] BYREF
  unsigned int v122; // [rsp+298h] [rbp-250h]
  void *v123; // [rsp+2A0h] [rbp-248h] BYREF
  char v124; // [rsp+2A8h] [rbp-240h] BYREF
  int v125; // [rsp+328h] [rbp-1C0h]
  _D3DKMT_SUBMITCOMMAND v126; // [rsp+330h] [rbp-1B8h] BYREF

  v106 = a2;
  v104 = a2;
  v84 = -1;
  v85 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v86 = 1;
    v84 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v86 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v84, 2102);
  v87 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v126, 0, sizeof(v126));
  v5 = &v126;
  if ( v87 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v7 = &v126;
    v8 = 3LL;
    do
    {
      *(_OWORD *)&v7->Commands = *(_OWORD *)&v6->Commands;
      *(_OWORD *)&v7->PresentHistoryToken = *(_OWORD *)&v6->PresentHistoryToken;
      *(_OWORD *)&v7->BroadcastContext[1] = *(_OWORD *)&v6->BroadcastContext[1];
      *(_OWORD *)&v7->BroadcastContext[5] = *(_OWORD *)&v6->BroadcastContext[5];
      *(_OWORD *)&v7->BroadcastContext[9] = *(_OWORD *)&v6->BroadcastContext[9];
      *(_OWORD *)&v7->BroadcastContext[13] = *(_OWORD *)&v6->BroadcastContext[13];
      *(_OWORD *)&v7->BroadcastContext[17] = *(_OWORD *)&v6->BroadcastContext[17];
      v7 = (_D3DKMT_SUBMITCOMMAND *)((char *)v7 + 128);
      *(_OWORD *)&v7[-1].NumHistoryBuffers = *(_OWORD *)&v6->BroadcastContext[21];
      v6 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v6 + 128);
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v5 = a1;
  }
  Flags = a1->Flags;
  if ( (*(_BYTE *)&Flags & 4) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(2LL, 1629LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      1629LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_223:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    v44 = v86 == 0;
LABEL_224:
    if ( !v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v84);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)a2 + 106) & 0x100) != 0 && (*(_BYTE *)&Flags & 2) != 0 )
  {
    WdLogSingleEntry1(2LL, 1637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentRedirected is invalid from virtual machine",
      1637LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_223;
  }
  v97 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91, v5->BroadcastContext[0], a2, &v97, 0, 1);
  v10 = v97;
  if ( !v97 )
  {
    WdLogSingleEntry3(2LL, a2, v5->BroadcastContext[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v5->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
LABEL_222:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    goto LABEL_223;
  }
  v11 = *((_DWORD *)v97 + 101);
  if ( (v11 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v97);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.",
      (__int64)v10,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_222;
  }
  if ( (v11 & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 1661LL);
    goto LABEL_222;
  }
  BroadcastContextCount = v5->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    WdLogSingleEntry4(2LL, v97, v5->BroadcastContextCount, 64LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified BroadcastContextCount 0x%I64x exceeds limit 0x%I64x or is zero. returning 0x%I64x",
      (__int64)v10,
      v5->BroadcastContextCount,
      64LL,
      -1073741811LL,
      0LL);
    goto LABEL_222;
  }
  NumPrimaries = v5->NumPrimaries;
  if ( NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v97, NumPrimaries, 16LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v10,
      v5->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
    goto LABEL_222;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v97 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v14 + 209) )
  {
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v14 + 4344), a2, v5);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    if ( v86 )
    {
      v17 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_30:
      if ( v18 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v16, v84);
    }
    return (unsigned int)v15;
  }
  Pool2 = 0LL;
  P = 0LL;
  v90 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    P = v89;
    memset(v89, 0, 8 * BroadcastContextCount);
    Pool2 = P;
  }
  else
  {
    v21 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_38;
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8 * BroadcastContextCount, 1265072196LL, 0LL);
    P = Pool2;
  }
  v90 = BroadcastContextCount;
  v21 = BroadcastContextCount;
LABEL_38:
  if ( !Pool2 )
  {
    WdLogSingleEntry1(6LL, 1698LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory - failed to allocate the broadcast context array",
      1698LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_173:
    if ( P != v89 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v90 = 0;
LABEL_177:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
    if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v72, &EventProfilerExit, v73, v84);
    return 3221225495LL;
  }
  v95 = (DXGCONTEXT **)Pool2;
  v96 = v21;
  _m_prefetchw((char *)v10 + 32);
  v22 = *((_QWORD *)v10 + 4);
  if ( !v22 )
  {
LABEL_43:
    v24 = v97;
    WdLogSingleEntry1(2LL, v97);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p failed to acquire reference.",
      (__int64)v24,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_93;
  }
  while ( 1 )
  {
    v23 = v22;
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 4, v22 + 1, v22);
    if ( v23 == v22 )
      break;
    if ( !v22 )
      goto LABEL_43;
  }
  *(_QWORD *)P = v97;
  v25 = *((_QWORD *)v10 + 2);
  v93 = v25;
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
  if ( *(int *)(v26 + 2424) >= 0x2000 || *(_BYTE *)(v26 + 2724) )
  {
    v27 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v94 = v27;
  }
  else
  {
    v27 = 0;
    v94 = 0;
  }
  v28 = *(struct _KEVENT **)(v25 + 16);
  if ( *(_DWORD *)(v25 + 432) == 2 )
  {
    if ( KeReadStateEvent(v28 + 5) )
      goto LABEL_54;
    v29 = v28 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v28 + 4) )
      goto LABEL_54;
    v29 = v28 + 4;
  }
  KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
LABEL_54:
  KeEnterCriticalRegion();
  if ( v27 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v25 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v25 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v110, a2);
  v32 = 1;
  if ( v5->BroadcastContextCount <= 1 )
    goto LABEL_76;
  while ( 2 )
  {
    v33 = (v5->BroadcastContext[v32] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 >= *((_DWORD *)a2 + 74) )
      goto LABEL_90;
    v34 = *((_QWORD *)a2 + 35);
    v35 = *(_DWORD *)(v34 + 16 * v33 + 8);
    if ( v5->BroadcastContext[v32] >> 30 != ((v35 >> 5) & 3) || (v35 & 0x2000) != 0 || (v35 & 0x1F) == 0 )
      goto LABEL_90;
    if ( (v35 & 0x1F) != 7 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_90:
      v36 = 0LL;
LABEL_91:
      v45 = v32;
      v46 = v32;
      v47 = v97;
      WdLogSingleEntry4(2LL, v97, v36, v46, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v47,
        v36,
        v45,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
LABEL_92:
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
LABEL_93:
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      goto LABEL_222;
    }
    v36 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
    if ( !v36 )
      goto LABEL_91;
    v37 = *(_DWORD *)(v36 + 404);
    if ( (v37 & 8) != 0 || *(_QWORD *)(v36 + 16) != *((_QWORD *)v10 + 2) )
      goto LABEL_91;
    if ( (v37 & 0x10) != 0 )
    {
      WdLogSingleEntry1(2LL, v36);
      v41 = L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.";
LABEL_83:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, v36, 0LL, 0LL, 0LL, 0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
      v44 = v86 == 0;
      goto LABEL_224;
    }
    _m_prefetchw((const void *)(v36 + 32));
    v38 = *(_QWORD *)(v36 + 32);
    do
    {
      if ( !v38 )
      {
        WdLogSingleEntry1(2LL, v36);
        v41 = L"DXGCONTEXT 0x%p failed to acquire reference.";
        goto LABEL_83;
      }
      v39 = v38;
      v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 32), v38 + 1, v38);
    }
    while ( v39 != v38 );
    *((_QWORD *)P + v32++) = v36;
    if ( v32 < v5->BroadcastContextCount )
      continue;
    break;
  }
LABEL_76:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v110);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v108,
    P,
    v90,
    v40,
    1);
  if ( v109 )
  {
    if ( v108[0] )
    {
      WdLogSingleEntry1(3LL, 1786LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      goto LABEL_222;
    }
    WdLogSingleEntry1(3LL, 1781LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
    if ( P != v89 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v90 = 0;
    goto LABEL_177;
  }
  v48 = *((_QWORD *)v10 + 2);
  v105 = v48;
  v99 = *(struct DXGADAPTER **)(*(_QWORD *)(v48 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v99 + 3);
  v98 = -1LL;
  v49 = v99;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v49 + 136, 0LL);
  v100 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v111, v48, 0, v50, 0);
  if ( v119 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v116, 0LL);
    if ( *(_DWORD *)(v117 + 200) != 1 )
      goto LABEL_114;
  }
  if ( v114 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v112, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v113 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v113 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v51, (const EVENT_DESCRIPTOR *)"g", v52, 72);
      KeWaitForSingleObject((char *)v113 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v113, 0LL);
  }
  v115 = 0LL;
  v114 = 1;
  if ( *(_DWORD *)(v118 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v112);
    if ( !v119 )
    {
LABEL_115:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
      if ( v100 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
      if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v84);
      return 3221226166LL;
    }
LABEL_114:
    COREACCESS::Release((COREACCESS *)v116);
    goto LABEL_115;
  }
  v55 = v97;
  if ( !*((_BYTE *)v97 + 438) )
  {
    WdLogSingleEntry4(2LL, a2, v5->BroadcastContext[0], -1073741811LL, 1808LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x The context does not support virtual addressing. hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v5->BroadcastContext[0],
      -1073741811LL,
      1808LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
    if ( v100 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
    goto LABEL_92;
  }
  v120 = 0LL;
  v122 = 0;
  v123 = 0LL;
  v125 = 0;
  v56 = 0LL;
  if ( v5->NumHistoryBuffers )
  {
    v57 = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(&v120);
    v103 = v57;
    v58 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v123, v5->NumHistoryBuffers);
    v56 = (struct _VIDMM_MULTI_ALLOC **)v58;
    if ( v57 && v58 )
    {
      for ( i = 0; ; ++i )
      {
        v102 = i;
        if ( i >= v5->NumHistoryBuffers )
          break;
        v101 = 0;
        HistoryBufferArray = v5->HistoryBufferArray;
        if ( v87 )
        {
          v61 = &HistoryBufferArray[i];
          if ( (unsigned __int64)v61 >= MmUserProbeAddress )
            v61 = (unsigned int *)MmUserProbeAddress;
          v62 = *v61;
        }
        else
        {
          v62 = HistoryBufferArray[i];
        }
        v63 = v62;
        v101 = v62;
        v64 = (struct _EX_RUNDOWN_REF **)(v57 + 8LL * i);
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v106,
                                                      (DXGALLOCATIONREFERENCE *)&v107,
                                                      v62);
        DXGALLOCATIONREFERENCE::MoveAssign(v64, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v107);
        v66 = *v64;
        if ( !*v64 )
        {
          WdLogSingleEntry1(2LL, v63);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid history buffer handle provided to SubmitCommand. D3DKMT_HANDLE=0x%8x",
            v63,
            0LL,
            0LL,
            0LL,
            0LL);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v120);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
          if ( v100 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
          if ( P != v89 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v90 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
          if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v84);
          return 3221225485LL;
        }
        if ( v66[1].Count != *((_QWORD *)v10 + 2) )
        {
          _mm_lfence();
          WdLogSingleEntry3(
            2LL,
            *(_QWORD *)(v103 + 8LL * i),
            *(_QWORD *)(*(_QWORD *)(v103 + 8LL * i) + 8LL),
            *((_QWORD *)v10 + 2));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"History buffer 0x%p device 0x%p does not match context device 0x%p.",
            (__int64)*v64,
            (*v64)[1].Count,
            *((_QWORD *)v10 + 2),
            0LL,
            0LL);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v120);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
          if ( v100 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
          if ( P != v89 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v90 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
          if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v84);
          return 3221225485LL;
        }
        v56[i] = (struct _VIDMM_MULTI_ALLOC *)v66[3].Count;
        v57 = v103;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 16) + 648LL)
                                                                                        + 8LL)
                                                                            + 1080LL))(
              *(_QWORD *)(*(_QWORD *)(v105 + 16) + 656LL),
              v56);
      if ( v15 >= 0 )
      {
        v55 = v97;
        goto LABEL_168;
      }
      WdLogSingleEntry1(2LL, 1915LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid history buffer passed to SubmitCommand.",
        1915LL,
        0LL,
        0LL,
        0LL,
        0LL);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v120);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
      if ( v100 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
      if ( v86 )
      {
        v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_30;
      }
      return (unsigned int)v15;
    }
    WdLogSingleEntry1(6LL, 1843LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to created paged pool array for history buffer array",
      1843LL,
      0LL,
      0LL,
      0LL,
      0LL);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v120);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
    if ( v100 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v95);
    goto LABEL_173;
  }
LABEL_168:
  if ( !v5->CommandLength )
  {
    v71 = 0;
LABEL_182:
    v74 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 1912LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v5->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v5->PresentHistoryToken;
    }
    else if ( v74 && *(_QWORD *)v74 && *(_DWORD *)(v74 + 12) != *((_DWORD *)v55 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v74;
    }
    if ( PresentHistoryToken )
    {
      v76 = v5->BroadcastContextCount;
      v77 = &v5->BroadcastContext[1];
      if ( v76 <= 1 )
        v77 = 0LL;
      v71 = DXGCONTEXT::HandleVistaBltStub(
              v55,
              PresentHistoryToken,
              (*(_DWORD *)&v5->Flags >> 1) & 1,
              (struct COREDEVICEACCESS *)v111,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v98,
              v76 - 1,
              v77,
              (struct DXGCONTEXT **)P);
    }
    goto LABEL_192;
  }
  v71 = DXGCONTEXT::SubmitCommand(
          v55,
          v5,
          (struct COREDEVICEACCESS *)v111,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v98,
          (struct DXGCONTEXT **)P,
          v56,
          v5->NumHistoryBuffers,
          v87);
  if ( v71 >= 0 )
    goto LABEL_182;
LABEL_192:
  if ( v123 != &v124 )
    operator delete[](v123);
  if ( v120 == (DXGALLOCATIONREFERENCE *)&v121 )
  {
    for ( j = 0; j < v122; ++j )
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v120 + j);
  }
  else if ( v120 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v120);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
  if ( v100 )
  {
    v100 = 0;
    ExReleasePushLockSharedEx((char *)v99 + 136, 0LL);
    KeLeaveCriticalRegion();
    v79 = (DXGGLOBAL **)v99;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v79[2], (struct DXGADAPTER *)v79);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v108);
  if ( v94 )
    ExReleasePushLockSharedEx(v93 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v93 + 136));
  KeLeaveCriticalRegion();
  v80 = v95;
  if ( v95 && v96 )
  {
    v81 = v96;
    do
    {
      if ( *v80 )
        DXGCONTEXT::ReleaseReference(*v80);
      ++v80;
      --v81;
    }
    while ( v81 );
  }
  if ( P != v89 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v90 = 0;
  if ( v91 && !v92 )
    DXGCONTEXT::ReleaseReference(v91);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84);
  if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v82, &EventProfilerExit, v83, v84);
  return (unsigned int)v71;
}

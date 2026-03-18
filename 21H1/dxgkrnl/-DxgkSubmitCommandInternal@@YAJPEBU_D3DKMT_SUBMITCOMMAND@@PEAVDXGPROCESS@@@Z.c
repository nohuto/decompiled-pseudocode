/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F95F0
 * Callers:
 *     DxgkSubmitCommand @ 0x1C00F8EF0 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024B7C0 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00199F0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019C7C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00245CC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0047040 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00F8F90 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C01440E8 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C014508C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C01450DC (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C02481D0 (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C02781E8 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027B800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C028A1B0 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  _D3DKMT_SUBMITCOMMAND *v5; // r14
  _D3DKMT_SUBMITCOMMAND *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGCONTEXT *v12; // rdi
  int v13; // eax
  __int64 BroadcastContextCount; // rbx
  __int64 v15; // rcx
  _BYTE *PoolWithTag; // rcx
  __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // ebx
  struct _KEVENT *v24; // r12
  signed __int64 v25; // rcx
  unsigned int i; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r13
  struct DXGADAPTER *v31; // rbx
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  struct DXGCONTEXT *v38; // rbx
  struct _VIDMM_MULTI_ALLOC **v39; // rsi
  int v40; // esi
  __int64 v41; // rdx
  unsigned __int64 PresentHistoryToken; // rcx
  DXGGLOBAL **v43; // rcx
  __int64 v44; // rdx
  DXGCONTEXT **v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v50; // rax
  __int64 NumPrimaries; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  unsigned int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct _KEVENT *v64; // rcx
  __int64 v65; // rcx
  unsigned __int8 v66; // bl
  __int64 v67; // r8
  unsigned __int8 v68; // bl
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  _QWORD *v83; // rax
  __int64 Elements; // r12
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 j; // r12
  unsigned int *v91; // rdx
  unsigned int v92; // ecx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // r12d
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rdx
  unsigned int v113; // r9d
  unsigned int *v114; // r10
  _QWORD *v115; // rax
  __int64 v116; // rdx
  unsigned __int8 v117; // [rsp+40h] [rbp-4B8h]
  int v118; // [rsp+48h] [rbp-4B0h] BYREF
  __int64 v119; // [rsp+50h] [rbp-4A8h]
  char v120; // [rsp+58h] [rbp-4A0h]
  PVOID P; // [rsp+60h] [rbp-498h]
  _BYTE v122[32]; // [rsp+68h] [rbp-490h] BYREF
  unsigned int v123; // [rsp+88h] [rbp-470h]
  DXGCONTEXT *v124; // [rsp+90h] [rbp-468h] BYREF
  char v125; // [rsp+98h] [rbp-460h]
  __int64 v126; // [rsp+A0h] [rbp-458h] BYREF
  int v127; // [rsp+A8h] [rbp-450h]
  DXGCONTEXT **v128; // [rsp+B0h] [rbp-448h] BYREF
  unsigned int v129; // [rsp+B8h] [rbp-440h]
  __int64 v130; // [rsp+C0h] [rbp-438h] BYREF
  struct DXGADAPTER *v131; // [rsp+C8h] [rbp-430h]
  char v132; // [rsp+D0h] [rbp-428h]
  struct DXGCONTEXT *v133; // [rsp+D8h] [rbp-420h] BYREF
  unsigned int v134; // [rsp+E0h] [rbp-418h]
  __int64 v135; // [rsp+E8h] [rbp-410h]
  int v136; // [rsp+F0h] [rbp-408h]
  __int64 v137; // [rsp+F8h] [rbp-400h]
  struct DXGPROCESS *v138; // [rsp+100h] [rbp-3F8h]
  __int64 v139; // [rsp+108h] [rbp-3F0h]
  struct DXGPROCESS *v140; // [rsp+110h] [rbp-3E8h]
  __int64 v141; // [rsp+118h] [rbp-3E0h]
  char v142[8]; // [rsp+120h] [rbp-3D8h] BYREF
  _QWORD v143[6]; // [rsp+128h] [rbp-3D0h] BYREF
  char v144; // [rsp+158h] [rbp-3A0h]
  _BYTE v145[32]; // [rsp+160h] [rbp-398h] BYREF
  void *v146; // [rsp+180h] [rbp-378h] BYREF
  char v147; // [rsp+188h] [rbp-370h] BYREF
  int v148; // [rsp+208h] [rbp-2F0h]
  char v149[8]; // [rsp+210h] [rbp-2E8h] BYREF
  _BYTE v150[16]; // [rsp+218h] [rbp-2E0h] BYREF
  DXGADAPTER *v151; // [rsp+228h] [rbp-2D0h]
  char v152; // [rsp+230h] [rbp-2C8h]
  __int64 v153; // [rsp+238h] [rbp-2C0h]
  _BYTE v154[16]; // [rsp+258h] [rbp-2A0h] BYREF
  __int64 v155; // [rsp+268h] [rbp-290h]
  __int64 v156; // [rsp+298h] [rbp-260h]
  char v157; // [rsp+2A0h] [rbp-258h]
  _BYTE v158[144]; // [rsp+2B0h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v159; // [rsp+340h] [rbp-1B8h] BYREF

  v138 = a2;
  v4 = a1;
  v140 = a2;
  v118 = -1;
  v119 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v120 = 1;
    v118 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v120 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v118, 2102LL);
  v117 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v159, 0, sizeof(v159));
  v5 = &v159;
  if ( v117 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v6 = &v159;
    v7 = 3LL;
    do
    {
      *(_OWORD *)&v6->Commands = *(_OWORD *)&v4->Commands;
      *(_OWORD *)&v6->PresentHistoryToken = *(_OWORD *)&v4->PresentHistoryToken;
      *(_OWORD *)&v6->BroadcastContext[1] = *(_OWORD *)&v4->BroadcastContext[1];
      *(_OWORD *)&v6->BroadcastContext[5] = *(_OWORD *)&v4->BroadcastContext[5];
      *(_OWORD *)&v6->BroadcastContext[9] = *(_OWORD *)&v4->BroadcastContext[9];
      *(_OWORD *)&v6->BroadcastContext[13] = *(_OWORD *)&v4->BroadcastContext[13];
      *(_OWORD *)&v6->BroadcastContext[17] = *(_OWORD *)&v4->BroadcastContext[17];
      v6 = (_D3DKMT_SUBMITCOMMAND *)((char *)v6 + 128);
      *(_OWORD *)&v6[-1].NumHistoryBuffers = *(_OWORD *)&v4->BroadcastContext[21];
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v4 + 128);
      --v7;
    }
    while ( v7 );
  }
  else
  {
    v5 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  v133 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124, v5->BroadcastContext[0], a2, &v133, 0);
  v12 = v133;
  if ( !v133 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v50[3] = a2;
    NumPrimaries = v5->BroadcastContext[0];
    v50[5] = -1073741811LL;
LABEL_70:
    v50[4] = NumPrimaries;
LABEL_72:
    WdLogEvent5_WdError(v50);
    goto LABEL_74;
  }
  v13 = *((_DWORD *)v133 + 105);
  if ( (v13 & 0x10) != 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v50[3] = v12;
    goto LABEL_72;
  }
  if ( (v13 & 8) != 0 )
  {
    v55 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v55 + 24) = 1661LL;
    WdLogEvent5_WdWarning(v55);
    goto LABEL_74;
  }
  BroadcastContextCount = v5->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v115 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v115[3] = v12;
    v115[4] = v5->BroadcastContextCount;
    v115[5] = 64LL;
    v115[6] = -1073741811LL;
    WdLogEvent5_WdError(v115);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v116);
    if ( !v120 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_223;
  }
  if ( v5->NumPrimaries > 0x10 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v50[3] = v12;
    NumPrimaries = v5->NumPrimaries;
    v50[5] = 16LL;
    v50[6] = -1073741811LL;
    goto LABEL_70;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v133 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v15 + 209) )
  {
    v56 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4208), a2, v5);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v57);
    if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v118);
    return v56;
  }
  PoolWithTag = 0LL;
  P = 0LL;
  v17 = 0LL;
  v123 = 0;
  if ( (unsigned int)BroadcastContextCount > 4 )
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)BroadcastContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)BroadcastContextCount < 8 )
      goto LABEL_18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v122;
    P = v122;
  }
  v17 = (unsigned int)BroadcastContextCount;
  v123 = BroadcastContextCount;
  if ( !PoolWithTag )
    goto LABEL_84;
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v17 = v123;
  PoolWithTag = P;
LABEL_18:
  if ( !PoolWithTag )
  {
LABEL_84:
    v60 = WdLogNewEntry5_WdLowResource(PoolWithTag, v8, v17, v11);
    *(_QWORD *)(v60 + 24) = 1698LL;
    WdLogEvent5_WdLowResource(v60);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    goto LABEL_89;
  }
  v128 = (DXGCONTEXT **)PoolWithTag;
  v129 = v17;
  _m_prefetchw((char *)v12 + 32);
  v18 = *((_QWORD *)v12 + 4);
  if ( !v18 )
  {
LABEL_22:
    v20 = WdLogNewEntry5_WdError(PoolWithTag, v8);
    *(_QWORD *)(v20 + 24) = v133;
    WdLogEvent5_WdError(v20);
LABEL_154:
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    goto LABEL_74;
  }
  while ( 1 )
  {
    PoolWithTag = (_BYTE *)(v18 + 1);
    v19 = v18;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 4, v18 + 1, v18);
    if ( v19 == v18 )
      break;
    if ( !v18 )
      goto LABEL_22;
  }
  *(_QWORD *)P = v133;
  v21 = *((_QWORD *)v12 + 2);
  v126 = v21;
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v22 + 2304) >= 0x2000 || *(_BYTE *)(v22 + 2604) )
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v8) + 283);
  else
    v23 = 0;
  v127 = v23;
  v24 = *(struct _KEVENT **)(v21 + 16);
  if ( *(_DWORD *)(v21 + 432) == 2 )
  {
    if ( KeReadStateEvent(v24 + 5) )
      goto LABEL_27;
    v64 = v24 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v24 + 4) )
      goto LABEL_27;
    v64 = v24 + 4;
  }
  KeWaitForSingleObject(v64, Executive, 0, 0, 0LL);
LABEL_27:
  KeEnterCriticalRegion();
  if ( !v23 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 0) )
      goto LABEL_29;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v66 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v65, &EventBlockThread, v67, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 1u);
    if ( v66 )
      goto LABEL_105;
    goto LABEL_106;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v68 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 144));
    if ( v68 )
LABEL_105:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
LABEL_106:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_29:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v145, (struct _KTHREAD **)a2);
  for ( i = 1; i < v5->BroadcastContextCount; ++i )
  {
    v69 = v5->BroadcastContext[i];
    v70 = (v5->BroadcastContext[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v70 >= *((_DWORD *)a2 + 64) )
      goto LABEL_122;
    v71 = *((_QWORD *)a2 + 30);
    v25 = *(unsigned int *)(v71 + 16 * v70 + 8);
    v69 = ((unsigned int)v69 >> 25) & 0x60;
    if ( (_BYTE)v69 != (*(_BYTE *)(v71 + 16 * v70 + 8) & 0x60) || (v25 & 0x2000) != 0 || (v25 & 0x1F) == 0 )
      goto LABEL_122;
    v25 &= 0x1Fu;
    if ( (_BYTE)v25 != 7 )
    {
      v76 = WdLogNewEntry5_WdError(v25, v69);
      *(_QWORD *)(v76 + 24) = 267LL;
      WdLogEvent5_WdError(v76);
LABEL_122:
      v72 = 0LL;
LABEL_123:
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v25, v69);
      v75[3] = v133;
      v75[4] = v72;
      v75[5] = i;
      v75[6] = -1073741811LL;
LABEL_124:
      WdLogEvent5_WdError(v75);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v145);
LABEL_126:
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
      if ( P != v122 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v123 = 0;
LABEL_74:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v52);
      if ( !v120 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_223:
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v118);
      return 3221225485LL;
    }
    v72 = *(_QWORD *)(v71 + 16LL * (unsigned int)v70);
    if ( !v72 )
      goto LABEL_123;
    v25 = *(unsigned int *)(v72 + 420);
    if ( (v25 & 8) != 0 || *(_QWORD *)(v72 + 16) != *((_QWORD *)v12 + 2) )
      goto LABEL_123;
    if ( (v25 & 0x10) != 0 || (_m_prefetchw((const void *)(v72 + 32)), (v73 = *(_QWORD *)(v72 + 32)) == 0) )
    {
LABEL_119:
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v25, v69);
      v75[3] = v72;
      goto LABEL_124;
    }
    while ( 1 )
    {
      v25 = v73 + 1;
      v74 = v73;
      v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 32), v73 + 1, v73);
      if ( v74 == v73 )
        break;
      if ( !v73 )
        goto LABEL_119;
    }
    *((_QWORD *)P + i) = v72;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v145);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v143,
    P,
    v123);
  if ( v144 )
  {
    if ( v143[0] )
    {
      v77 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v77 + 24) = 1786LL;
      WdLogEvent5_WdWarning(v77);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
      goto LABEL_126;
    }
    v78 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v78 + 24) = 1781LL;
    WdLogEvent5_WdWarning(v78);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
LABEL_89:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v61);
    if ( !v120 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225495LL;
    goto LABEL_205;
  }
  v30 = *((_QWORD *)v12 + 2);
  v131 = *(struct DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v131 + 3);
  v130 = -1LL;
  v31 = v131;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v31 + 136, 0LL);
  v132 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v149, v30, 0, v32, 0);
  if ( v157 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v154, 0LL);
    v34 = *(unsigned int *)(v155 + 200);
    if ( (_DWORD)v34 != 1 )
      goto LABEL_141;
  }
  if ( v152 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
    v79[3] = 275LL;
    v79[4] = 4LL;
    v79[5] = v150;
    v79[6] = 0LL;
    v79[7] = 0LL;
    WdLogEvent5_WdCriticalError(v79);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v151 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v151 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, 72);
      KeWaitForSingleObject((char *)v151 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v151, 0LL);
  }
  v153 = 0LL;
  v152 = 1;
  v37 = *(unsigned int *)(v156 + 576);
  if ( (_DWORD)v37 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v150);
    if ( !v157 )
    {
LABEL_142:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v132 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
      if ( P != v122 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v123 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v80);
      if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v118);
      return 3221226166LL;
    }
LABEL_141:
    COREACCESS::Release((COREACCESS *)v154);
    goto LABEL_142;
  }
  v38 = v133;
  if ( !*((_BYTE *)v133 + 454) )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdError(v37, v33);
    v83[3] = v138;
    v83[4] = v5->BroadcastContext[0];
    v83[5] = -1073741811LL;
    v83[6] = 1808LL;
    WdLogEvent5_WdError(v83);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
    goto LABEL_154;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v158);
  v146 = 0LL;
  v148 = 0;
  v39 = 0LL;
  if ( !v5->NumHistoryBuffers )
  {
LABEL_41:
    if ( v5->CommandLength )
    {
      v40 = DXGCONTEXT::SubmitCommand(
              (struct _SLIST_ENTRY *)v38,
              v5,
              (struct COREDEVICEACCESS *)v149,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
              (struct DXGCONTEXT **)P,
              v39,
              v5->NumHistoryBuffers,
              v117);
      if ( v40 < 0 )
      {
LABEL_46:
        if ( v146 != &v147 )
          operator delete[](v146);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v158);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
        if ( v132 )
        {
          v132 = 0;
          ExReleasePushLockSharedEx((char *)v131 + 136, 0LL);
          KeLeaveCriticalRegion();
          v43 = (DXGGLOBAL **)v131;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v131 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v43[2], (struct DXGADAPTER *)v43);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
        if ( v127 )
          ExReleasePushLockSharedEx(v126 + 144, 0LL);
        else
          ExReleaseResourceLite(*(PERESOURCE *)(v126 + 136));
        KeLeaveCriticalRegion();
        v45 = v128;
        if ( v128 && v129 )
        {
          v46 = v129;
          do
          {
            if ( *v45 )
              DXGCONTEXT::ReleaseReference(*v45);
            ++v45;
            --v46;
          }
          while ( v46 );
        }
        if ( P != v122 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v123 = 0;
        if ( v124 && !v125 )
          DXGCONTEXT::ReleaseReference(v124);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v44);
        if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v118);
        return (unsigned int)v40;
      }
    }
    else
    {
      v40 = 0;
    }
    v41 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 1912LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v5->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v5->PresentHistoryToken;
    }
    else if ( v41 && *(_QWORD *)v41 && *(_DWORD *)(v41 + 12) != *((_DWORD *)v38 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v41;
    }
    if ( PresentHistoryToken )
    {
      v113 = v5->BroadcastContextCount;
      v114 = &v5->BroadcastContext[1];
      if ( v113 <= 1 )
        v114 = 0LL;
      v40 = DXGCONTEXT::HandleVistaBltStub(
              v38,
              PresentHistoryToken,
              (*(_DWORD *)&v5->Flags >> 1) & 1,
              (struct COREDEVICEACCESS *)v149,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
              v113 - 1,
              v114,
              (struct DXGCONTEXT **)P);
    }
    goto LABEL_46;
  }
  Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v158);
  v139 = Elements;
  v85 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v146, v5->NumHistoryBuffers);
  v39 = (struct _VIDMM_MULTI_ALLOC **)v85;
  if ( !Elements || !v85 )
  {
    v111 = WdLogNewEntry5_WdLowResource(v87, v86, v88, v89);
    *(_QWORD *)(v111 + 24) = 1843LL;
    WdLogEvent5_WdLowResource(v111);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v146);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v158);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v112);
    if ( !v120 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225495LL;
LABEL_205:
    McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v118);
    return 3221225495LL;
  }
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    v136 = j;
    if ( (unsigned int)j >= v5->NumHistoryBuffers )
      break;
    v134 = 0;
    v141 = (unsigned int)j;
    v91 = &v5->HistoryBufferArray[j];
    if ( v117 )
    {
      if ( (unsigned __int64)v91 >= MmUserProbeAddress )
        v91 = (unsigned int *)MmUserProbeAddress;
      v92 = *v91;
    }
    else
    {
      v92 = *v91;
    }
    v134 = v92;
    LODWORD(v135) = v92;
    v137 = v139 + 8 * j;
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v138, (DXGALLOCATIONREFERENCE *)v142, v92);
    DXGALLOCATIONREFERENCE::MoveAssign(v137, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v142);
    v95 = *(_QWORD *)v137;
    if ( !*(_QWORD *)v137 )
    {
      v96 = WdLogNewEntry5_WdError(0LL, v94);
      *(_QWORD *)(v96 + 24) = (unsigned int)v135;
      WdLogEvent5_WdError(v96);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v146);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v158);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v132 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
      if ( P != v122 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v123 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v97);
      if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v118);
      return 3221225485LL;
    }
    v135 = *((_QWORD *)v12 + 2);
    if ( *(_QWORD *)(v95 + 8) != v135 )
    {
      _mm_lfence();
      v100 = (_QWORD *)WdLogNewEntry5_WdError(v95, v94);
      v100[3] = *(_QWORD *)(v139 + 8 * v141);
      v100[4] = *(_QWORD *)(*(_QWORD *)v137 + 8LL);
      v100[5] = *((_QWORD *)v12 + 2);
      WdLogEvent5_WdError(v100);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v146);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v158);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v132 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
      if ( P != v122 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v123 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v101);
      if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v102, &EventProfilerExit, v103, v118);
      return 3221225485LL;
    }
    v39[j] = *(struct _VIDMM_MULTI_ALLOC **)(v95 + 24);
  }
  v106 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 16)
                                                                                                 + 640LL)
                                                                                     + 8LL)
                                                                         + 1072LL))(
           *(_QWORD *)(*(_QWORD *)(v30 + 16) + 648LL),
           v39);
  if ( v106 >= 0 )
    goto LABEL_41;
  v107 = WdLogNewEntry5_WdError(v105, v104);
  *(_QWORD *)(v107 + 24) = 1915LL;
  WdLogEvent5_WdError(v107);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v146);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v158);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
  if ( v132 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v143);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v128);
  if ( P != v122 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v123 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v118, v108);
  if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v109, &EventProfilerExit, v110, v118);
  return (unsigned int)v106;
}

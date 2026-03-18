/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00EF780
 * Callers:
 *     ?VmBusSubmitCommandCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D95D0 (-VmBusSubmitCommandCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommand @ 0x1C00EF6E0 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EA30 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00040D0 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014350 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019BA0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019EC4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0047F50 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00F0D60 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C014DC08 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014EADC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C014FA88 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C014FAD8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020BD94 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C024B418 (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C027B668 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027EC80 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C028D670 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  _D3DKMT_SUBMITCOMMAND *v5; // rsi
  const struct _D3DKMT_SUBMITCOMMAND *v6; // rax
  _D3DKMT_SUBMITCOMMAND *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGCONTEXT *v18; // r13
  _QWORD *v19; // rax
  __int64 NumPrimaries; // rcx
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 BroadcastContextCount; // rdi
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _BYTE *PoolWithTag; // rcx
  __int64 v31; // r8
  unsigned int v32; // r15d
  __int64 v33; // rax
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // ebx
  struct _KEVENT *v40; // r14
  struct _KEVENT *v41; // rcx
  __int64 v42; // rcx
  unsigned __int8 v43; // bl
  __int64 v44; // r8
  signed __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rbx
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdi
  struct DXGADAPTER *v61; // rbx
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  unsigned __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct DXGCONTEXT *v73; // rbx
  _QWORD *v74; // rax
  struct _VIDMM_MULTI_ALLOC **v75; // r12
  __int64 Elements; // r14
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  UINT i; // ebx
  unsigned int *v83; // rdx
  unsigned int v84; // edi
  __int64 v85; // r14
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  int v100; // r14d
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 PresentHistoryToken; // rdx
  unsigned int v107; // r9d
  unsigned int *v108; // r10
  DXGGLOBAL **v109; // rcx
  __int64 v110; // rdx
  DXGCONTEXT **v111; // rbx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rcx
  __int64 v115; // r8
  int v116; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v117; // [rsp+48h] [rbp-4A0h]
  char v118; // [rsp+50h] [rbp-498h]
  unsigned __int8 v119; // [rsp+58h] [rbp-490h]
  PVOID P; // [rsp+60h] [rbp-488h]
  _BYTE v121[32]; // [rsp+68h] [rbp-480h] BYREF
  unsigned int v122; // [rsp+88h] [rbp-460h]
  DXGCONTEXT *v123; // [rsp+90h] [rbp-458h] BYREF
  char v124; // [rsp+98h] [rbp-450h]
  __int64 v125; // [rsp+A0h] [rbp-448h] BYREF
  int v126; // [rsp+A8h] [rbp-440h]
  DXGCONTEXT **v127; // [rsp+B0h] [rbp-438h] BYREF
  unsigned int v128; // [rsp+B8h] [rbp-430h]
  struct DXGCONTEXT *v129; // [rsp+C0h] [rbp-428h] BYREF
  __int64 v130; // [rsp+C8h] [rbp-420h] BYREF
  struct DXGADAPTER *v131; // [rsp+D0h] [rbp-418h]
  char v132; // [rsp+D8h] [rbp-410h]
  unsigned int v133; // [rsp+E0h] [rbp-408h]
  UINT v134; // [rsp+E4h] [rbp-404h]
  __int64 v135; // [rsp+E8h] [rbp-400h]
  struct DXGPROCESS *v136; // [rsp+F0h] [rbp-3F8h]
  struct DXGPROCESS *v137; // [rsp+F8h] [rbp-3F0h]
  char v138[8]; // [rsp+100h] [rbp-3E8h] BYREF
  __int64 v139; // [rsp+108h] [rbp-3E0h]
  __int64 v140; // [rsp+110h] [rbp-3D8h]
  _QWORD v141[6]; // [rsp+118h] [rbp-3D0h] BYREF
  char v142; // [rsp+148h] [rbp-3A0h]
  _BYTE v143[32]; // [rsp+150h] [rbp-398h] BYREF
  void *v144; // [rsp+170h] [rbp-378h] BYREF
  char v145; // [rsp+178h] [rbp-370h] BYREF
  int v146; // [rsp+1F8h] [rbp-2F0h]
  char v147[8]; // [rsp+200h] [rbp-2E8h] BYREF
  _BYTE v148[16]; // [rsp+208h] [rbp-2E0h] BYREF
  DXGADAPTER *v149; // [rsp+218h] [rbp-2D0h]
  char v150; // [rsp+220h] [rbp-2C8h]
  __int64 v151; // [rsp+228h] [rbp-2C0h]
  _BYTE v152[16]; // [rsp+248h] [rbp-2A0h] BYREF
  __int64 v153; // [rsp+258h] [rbp-290h]
  __int64 v154; // [rsp+288h] [rbp-260h]
  char v155; // [rsp+290h] [rbp-258h]
  _BYTE v156[144]; // [rsp+2A0h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v157; // [rsp+330h] [rbp-1B8h] BYREF

  v137 = a2;
  v136 = a2;
  v116 = -1;
  v117 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v118 = 1;
    v116 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v118 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v116, 2102LL);
  v119 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v157, 0, sizeof(v157));
  v5 = &v157;
  if ( v119 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v7 = &v157;
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
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
    *(_DWORD *)&v5->Flags &= ~4u;
  if ( (*(_DWORD *)&v5->Flags & 4) != 0 && !g_OSTestSigningEnabled )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = 1648LL;
    WdLogEvent5_WdError(v11);
LABEL_222:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v12);
    if ( v118 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v114, &EventProfilerExit, v115, v116);
    }
    return 3221225485LL;
  }
  if ( (*((_BYTE *)a2 + 347) & 0x20) != 0 && (*(_DWORD *)&a1->Flags & 2) != 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = 1656LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_222;
  }
  v129 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123, v5->BroadcastContext[0], a2, &v129, 0);
  v18 = v129;
  if ( !v129 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v19[3] = a2;
    NumPrimaries = v5->BroadcastContext[0];
    v19[5] = -1073741811LL;
LABEL_219:
    v19[4] = NumPrimaries;
    goto LABEL_220;
  }
  v21 = *((_DWORD *)v129 + 105);
  if ( (v21 & 0x10) != 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v19[3] = v18;
LABEL_220:
    WdLogEvent5_WdError(v19);
    goto LABEL_221;
  }
  if ( (v21 & 8) != 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v22 + 24) = 1680LL;
    WdLogEvent5_WdWarning(v22);
LABEL_221:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123);
    goto LABEL_222;
  }
  BroadcastContextCount = v5->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v19[3] = v18;
    NumPrimaries = v5->BroadcastContextCount;
    v19[5] = 64LL;
    goto LABEL_218;
  }
  if ( v5->NumPrimaries > 0x10 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v19[3] = v18;
    NumPrimaries = v5->NumPrimaries;
    v19[5] = 16LL;
LABEL_218:
    v19[6] = -1073741811LL;
    goto LABEL_219;
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v129 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v24 + 209) )
  {
    v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 4240), a2, v5);
LABEL_31:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v26);
    if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v116);
    return (unsigned int)v25;
  }
  PoolWithTag = 0LL;
  P = 0LL;
  v31 = 0LL;
  v122 = 0;
  v32 = 1;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    PoolWithTag = v121;
    P = v121;
  }
  else
  {
    v14 = 0xFFFFFFFFFFFFFFFFuLL % BroadcastContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_41;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    P = PoolWithTag;
  }
  v31 = (unsigned int)BroadcastContextCount;
  v122 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_42:
    v33 = WdLogNewEntry5_WdLowResource(PoolWithTag, v14, v31, v17);
    *(_QWORD *)(v33 + 24) = 1717LL;
    WdLogEvent5_WdLowResource(v33);
    goto LABEL_43;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v31 = v122;
  PoolWithTag = P;
LABEL_41:
  if ( !PoolWithTag )
    goto LABEL_42;
  v127 = (DXGCONTEXT **)PoolWithTag;
  v128 = v31;
  _m_prefetchw((char *)v18 + 32);
  v34 = *((_QWORD *)v18 + 4);
  if ( !v34 )
  {
LABEL_50:
    v36 = WdLogNewEntry5_WdError(PoolWithTag, v14);
    *(_QWORD *)(v36 + 24) = v129;
    WdLogEvent5_WdError(v36);
    goto LABEL_91;
  }
  while ( 1 )
  {
    PoolWithTag = (_BYTE *)(v34 + 1);
    v35 = v34;
    v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 4, v34 + 1, v34);
    if ( v35 == v34 )
      break;
    if ( !v34 )
      goto LABEL_50;
  }
  *(_QWORD *)P = v129;
  v37 = *((_QWORD *)v18 + 2);
  v125 = v37;
  v38 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
  if ( *(int *)(v38 + 2328) >= 0x2000 || *(_BYTE *)(v38 + 2628) )
    v39 = *((_DWORD *)DXGGLOBAL::GetGlobal(v38, v14) + 311);
  else
    v39 = 0;
  v126 = v39;
  v40 = *(struct _KEVENT **)(v37 + 16);
  if ( *(_DWORD *)(v37 + 432) == 2 )
  {
    if ( KeReadStateEvent(v40 + 5) )
      goto LABEL_61;
    v41 = v40 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v40 + 4) )
      goto LABEL_61;
    v41 = v40 + 4;
  }
  KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
LABEL_61:
  KeEnterCriticalRegion();
  if ( v39 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v37 + 144, 0LL) )
      goto LABEL_72;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 104LL));
    v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v37 + 144));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 136), 0) )
      goto LABEL_72;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 104LL));
    v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, &EventBlockThread, v44, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 136), 1u);
  }
  if ( v43 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_72:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v143, (struct _KTHREAD **)a2);
  if ( v5->BroadcastContextCount > 1 )
  {
LABEL_73:
    v46 = (v5->BroadcastContext[v32] >> 6) & 0xFFFFFF;
    v47 = v5->BroadcastContext[v32] >> 30;
    if ( (unsigned int)v46 < *((_DWORD *)a2 + 64) )
    {
      v48 = *((_QWORD *)a2 + 30);
      v45 = *(unsigned int *)(v48 + 16 * v46 + 8);
      if ( (_DWORD)v47 == ((*(_DWORD *)(v48 + 16 * v46 + 8) >> 5) & 3) && (v45 & 0x2000) == 0 && (v45 & 0x1F) != 0 )
      {
        v45 &= 0x1Fu;
        if ( (_BYTE)v45 == 7 )
        {
          v49 = *(_QWORD *)(v48 + 16LL * (unsigned int)v46);
          if ( v49 )
          {
            v47 = *(unsigned int *)(v49 + 420);
            if ( (v47 & 8) == 0 )
            {
              v45 = *(_QWORD *)(v49 + 16);
              if ( v45 == *((_QWORD *)v18 + 2) )
              {
                if ( (v47 & 0x10) == 0 )
                {
                  _m_prefetchw((const void *)(v49 + 32));
                  v50 = *(_QWORD *)(v49 + 32);
                  while ( v50 )
                  {
                    v45 = v50 + 1;
                    v51 = v50;
                    v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 32), v50 + 1, v50);
                    if ( v51 == v50 )
                    {
                      *((_QWORD *)P + v32++) = v49;
                      if ( v32 < v5->BroadcastContextCount )
                        goto LABEL_73;
                      goto LABEL_86;
                    }
                  }
                }
                v56 = WdLogNewEntry5_WdError(v45, v47);
                *(_QWORD *)(v56 + 24) = v49;
                WdLogEvent5_WdError(v56);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v143);
LABEL_90:
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
LABEL_91:
                ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
                if ( P != v121 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v122 = 0;
                goto LABEL_221;
              }
            }
          }
          goto LABEL_97;
        }
        v57 = WdLogNewEntry5_WdError(v45, v47);
        *(_QWORD *)(v57 + 24) = 267LL;
        WdLogEvent5_WdError(v57);
      }
    }
    v49 = 0LL;
LABEL_97:
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v45, v47);
    v58[3] = v129;
    v58[4] = v49;
    v58[5] = v32;
    v58[6] = -1073741811LL;
    WdLogEvent5_WdError(v58);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v143);
LABEL_98:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
    if ( P != v121 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v122 = 0;
    goto LABEL_221;
  }
LABEL_86:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v143);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v141,
    P,
    v122);
  if ( v142 )
  {
    if ( !v141[0] )
    {
      v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
      *(_QWORD *)(v55 + 24) = 1800LL;
      WdLogEvent5_WdWarning(v55);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
LABEL_43:
      if ( P != v121 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v122 = 0;
LABEL_178:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v102);
      if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v103, &EventProfilerExit, v104, v116);
      return 3221225495LL;
    }
    v59 = WdLogNewEntry5_WdWarning(v53, v52, v54);
    *(_QWORD *)(v59 + 24) = 1805LL;
    WdLogEvent5_WdWarning(v59);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
    goto LABEL_90;
  }
  v60 = *((_QWORD *)v18 + 2);
  v139 = v60;
  v131 = *(struct DXGADAPTER **)(*(_QWORD *)(v60 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v131 + 3);
  v130 = -1LL;
  v61 = v131;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v61 + 136, 0LL);
  v132 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v147, v60, 0, v62, 0);
  if ( v155 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v152, 0LL);
    v64 = *(unsigned int *)(v153 + 200);
    if ( (_DWORD)v64 != 1 )
      goto LABEL_117;
  }
  if ( v150 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63);
    v65[3] = 275LL;
    v65[4] = 4LL;
    v65[5] = v148;
    v66 = 0LL;
    v65[6] = 0LL;
    v65[7] = 0LL;
    WdLogEvent5_WdCriticalError(v65);
  }
  else
  {
    v66 = 0LL;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v149 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v149 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v67, &EventBlockThread, v68, 72);
      KeWaitForSingleObject((char *)v149 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v149, 0LL);
  }
  v151 = 0LL;
  v150 = 1;
  v69 = *(unsigned int *)(v154 + 576);
  if ( (_DWORD)v69 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v148);
    if ( !v155 )
    {
LABEL_118:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
      if ( v132 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
      if ( P != v121 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v122 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v70);
      if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v116);
      return 3221226166LL;
    }
LABEL_117:
    COREACCESS::Release((COREACCESS *)v152);
    goto LABEL_118;
  }
  v73 = v129;
  if ( !*((_BYTE *)v129 + 454) )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v69, v63);
    v74[3] = a2;
    v74[4] = v5->BroadcastContext[0];
    v74[5] = -1073741811LL;
    v74[6] = 1827LL;
    WdLogEvent5_WdError(v74);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
    goto LABEL_98;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v156);
  v144 = 0LL;
  v146 = 0;
  v75 = 0LL;
  if ( v5->NumHistoryBuffers )
  {
    Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v156);
    v135 = Elements;
    v77 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v144, v5->NumHistoryBuffers);
    v75 = (struct _VIDMM_MULTI_ALLOC **)v77;
    if ( Elements && v77 )
    {
      for ( i = 0; ; ++i )
      {
        v134 = i;
        if ( i >= v5->NumHistoryBuffers )
          break;
        v133 = 0;
        v83 = &v5->HistoryBufferArray[i];
        if ( v119 )
        {
          if ( (unsigned __int64)v83 >= MmUserProbeAddress )
            v83 = (unsigned int *)MmUserProbeAddress;
          v84 = *v83;
        }
        else
        {
          v84 = *v83;
        }
        v133 = v84;
        v85 = Elements + 8LL * i;
        AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v137, (DXGALLOCATIONREFERENCE *)v138, v84);
        DXGALLOCATIONREFERENCE::MoveAssign(v85, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v138);
        v88 = *(_QWORD *)v85;
        if ( !*(_QWORD *)v85 )
        {
          v89 = WdLogNewEntry5_WdError(0LL, v87);
          *(_QWORD *)(v89 + 24) = v84;
          WdLogEvent5_WdError(v89);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v156);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
          if ( v132 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
          if ( P != v121 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v122 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v90);
          if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v91, &EventProfilerExit, v92, v116);
          return 3221225485LL;
        }
        v140 = *((_QWORD *)v18 + 2);
        if ( *(_QWORD *)(v88 + 8) != v140 )
        {
          _mm_lfence();
          v93 = (_QWORD *)WdLogNewEntry5_WdError(v88, v87);
          v93[3] = *(_QWORD *)(v135 + 8LL * i);
          v93[4] = *(_QWORD *)(*(_QWORD *)v85 + 8LL);
          v93[5] = *((_QWORD *)v18 + 2);
          WdLogEvent5_WdError(v93);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v156);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
          if ( v132 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
          if ( P != v121 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v122 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v123);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v94);
          if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v95, &EventProfilerExit, v96, v116);
          return 3221225485LL;
        }
        v75[i] = *(struct _VIDMM_MULTI_ALLOC **)(v88 + 24);
        Elements = v135;
        v66 = 0LL;
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 16) + 640LL)
                                                                                        + 8LL)
                                                                            + 1072LL))(
              *(_QWORD *)(*(_QWORD *)(v139 + 16) + 648LL),
              v75);
      if ( v25 >= 0 )
      {
        v73 = v129;
        goto LABEL_170;
      }
      v99 = WdLogNewEntry5_WdError(v98, v97);
      *(_QWORD *)(v99 + 24) = 1934LL;
      WdLogEvent5_WdError(v99);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v156);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
      if ( v132 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
      if ( P != v121 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v122 = 0;
      goto LABEL_31;
    }
    v101 = WdLogNewEntry5_WdLowResource(v79, v78, v80, v81);
    *(_QWORD *)(v101 + 24) = 1862LL;
    WdLogEvent5_WdLowResource(v101);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v144);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v156);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v127);
    if ( P != v121 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v122 = 0;
    goto LABEL_178;
  }
LABEL_170:
  if ( !v5->CommandLength )
  {
    v100 = 0;
LABEL_183:
    v105 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 1912LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v5->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v5->PresentHistoryToken;
    }
    else if ( v105 && *(_QWORD *)v105 && *(_DWORD *)(v105 + 12) != *((_DWORD *)v73 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v105;
    }
    if ( PresentHistoryToken )
    {
      v107 = v5->BroadcastContextCount;
      v108 = &v5->BroadcastContext[1];
      if ( v107 <= 1 )
        v108 = 0LL;
      v100 = DXGCONTEXT::HandleVistaBltStub(
               v73,
               PresentHistoryToken,
               (*(_DWORD *)&v5->Flags >> 1) & 1,
               (struct COREDEVICEACCESS *)v147,
               (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
               v107 - 1,
               v108,
               (struct DXGCONTEXT **)P);
    }
    goto LABEL_193;
  }
  v100 = DXGCONTEXT::SubmitCommand(
           v73,
           v5,
           (struct COREDEVICEACCESS *)v147,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
           (struct DXGCONTEXT **)P,
           v75,
           v5->NumHistoryBuffers,
           v119);
  if ( v100 >= 0 )
    goto LABEL_183;
LABEL_193:
  if ( v144 != &v145 )
    operator delete[](v144);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v156);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
  if ( v132 )
  {
    v132 = 0;
    ExReleasePushLockSharedEx((char *)v131 + 136, 0LL);
    KeLeaveCriticalRegion();
    v109 = (DXGGLOBAL **)v131;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v131 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v109[2], (struct DXGADAPTER *)v109);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v141);
  if ( v126 )
    ExReleasePushLockSharedEx(v125 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v125 + 136));
  KeLeaveCriticalRegion();
  v111 = v127;
  if ( v127 && v128 )
  {
    v66 = v128;
    do
    {
      if ( *v111 )
        DXGCONTEXT::ReleaseReference(*v111);
      ++v111;
      --v66;
    }
    while ( v66 );
  }
  if ( P != v121 && P )
    ExFreePoolWithTag(P, 0);
  P = (PVOID)v66;
  v122 = v66;
  if ( v123 && !v124 )
    DXGCONTEXT::ReleaseReference(v123);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v110);
  if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v112, &EventProfilerExit, v113, v116);
  return (unsigned int)v100;
}

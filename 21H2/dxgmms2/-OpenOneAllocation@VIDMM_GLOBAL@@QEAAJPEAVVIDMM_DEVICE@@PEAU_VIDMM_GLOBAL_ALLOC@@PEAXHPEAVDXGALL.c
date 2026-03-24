/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00788B0
 * Callers:
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0060FB4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C0078824 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00892DC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008CCF8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008DF9C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006030 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00060DC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00148CC (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C002332C (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0pppppppppppp_EtwWriteTransfer @ 0x1C0024030 (McTemplateK0pppppppppppp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00670B8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0067994 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006B620 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0079510 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00AE504 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B21E0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00B3098 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B81B4 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        DXGADAPTER **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        void *a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  VIDMM_ALLOC *v15; // rax
  __int64 v16; // rcx
  VIDMM_ALLOC *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  VIDMM_ALLOC *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  struct VIDMM_DEVICE *v27; // rax
  struct VIDMM_DEVICE **v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  struct _VIDMM_LOCAL_ALLOC *v43; // rax
  struct _VIDMM_LOCAL_ALLOC *v44; // r12
  bool v45; // al
  __int64 v46; // r8
  struct _VIDMM_LOCAL_ALLOC **v47; // rcx
  struct _VIDMM_LOCAL_ALLOC *v48; // rdx
  __int64 v49; // rax
  __int64 CurrentProcess; // rax
  int v51; // eax
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rbx
  _QWORD *v59; // rax
  int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  VIDMM_GLOBAL *v66; // rcx
  __int64 *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 **v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  struct VIDMM_DEVICE *v76; // r8
  bool v77; // zf
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned int v80; // ecx
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rax
  struct _VIDSCH_SYNC_OBJECT **v86; // rbx
  int Resident; // eax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  struct VIDMM_PAGING_QUEUE *v91; // rdx
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rbx
  _QWORD *v96; // rax
  __int64 v97; // rax
  char *v98; // rdx
  char **v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rbx
  HANDLE CurrentProcessId; // r9
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned int v107; // [rsp+80h] [rbp-80h]
  unsigned int v108; // [rsp+84h] [rbp-7Ch]
  struct _VIDSCH_SYNC_OBJECT *v109; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v110; // [rsp+90h] [rbp-70h]
  __int64 v111; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v112; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v113; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-50h]
  __int64 v115; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v116; // [rsp+C0h] [rbp-40h]
  __int64 v117; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v118; // [rsp+D0h] [rbp-30h] BYREF
  struct _VIDMM_MULTI_ALLOC *v119; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v120; // [rsp+E0h] [rbp-20h] BYREF
  char v121[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v122; // [rsp+F0h] [rbp-10h]
  int v123; // [rsp+F8h] [rbp-8h]
  int v124; // [rsp+100h] [rbp+0h] BYREF
  __int64 v125; // [rsp+104h] [rbp+4h]
  int v126; // [rsp+10Ch] [rbp+Ch]
  VIDMM_ALLOC *v127; // [rsp+110h] [rbp+10h]
  __int64 v128; // [rsp+118h] [rbp+18h]
  __int128 v129; // [rsp+120h] [rbp+20h]
  __int128 v130; // [rsp+130h] [rbp+30h]
  __int128 v131; // [rsp+140h] [rbp+40h]
  struct VIDMM_ALLOC **v133; // [rsp+1B0h] [rbp+B0h]

  v8 = 0LL;
  v108 = 0;
  v107 = 0;
  v114 = 0LL;
  LODWORD(v13) = 0;
  v112 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = a2;
  }
  *a7 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (VIDMM_ALLOC *)operator new[](0x130uLL, 0x33306956u, (POOL_TYPE)512);
    v17 = v15;
    if ( v15 )
    {
      VIDMM_ALLOC::VIDMM_ALLOC(v15);
      *((_DWORD *)v17 + 7) |= 0x20u;
      *((_QWORD *)v17 + 32) = 0LL;
      *((_QWORD *)v17 + 33) = 0LL;
      *((_QWORD *)v17 + 34) = 0LL;
      *((_QWORD *)v17 + 35) = 0LL;
      *((_QWORD *)v17 + 36) = 0LL;
      *((_QWORD *)v17 + 37) = 0LL;
      goto LABEL_8;
    }
LABEL_133:
    _InterlockedIncrement(&dword_1C0050678);
    v105 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v105 + 24) = 4127LL;
    WdLogEvent5_WdLowResource(v105);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v20 = (VIDMM_ALLOC *)operator new[](0x100uLL, 0x33306956u, (POOL_TYPE)512);
  v17 = v20;
  if ( !v20 )
    goto LABEL_133;
  memset(v20, 0, 0x100uLL);
  KeInitializeEvent((PRKEVENT)v17 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)v17 + 184), SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v17 + 31);
LABEL_8:
  if ( !v17 )
    goto LABEL_133;
  *((_BYTE *)v17 + 36) ^= (*((_BYTE *)v17 + 36) ^ (*((_DWORD *)this + 1762) >> 13)) & 1;
  v21 = *((_QWORD *)a2 + 2);
  if ( v21 )
  {
    v22 = v21 + 360;
    if ( v22 && *(struct _KTHREAD **)(v22 + 8) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16, v18, v19);
      *(_QWORD *)(v23 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *(_DWORD *)(v22 + 24);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (const EVENT_DESCRIPTOR *)"g", v25, v26);
      }
      ExAcquirePushLockExclusiveEx(v22, 0LL);
    }
    *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
    v27 = (VIDMM_ALLOC *)((char *)v17 + 112);
    v28 = (struct VIDMM_DEVICE **)*((_QWORD *)a2 + 22);
    if ( *v28 != (struct VIDMM_DEVICE *)((char *)a2 + 168) )
      goto LABEL_132;
    *(_QWORD *)v27 = (char *)a2 + 168;
    *((_QWORD *)v17 + 15) = v28;
    *v28 = v27;
    *((_QWORD *)a2 + 22) = v27;
    *(_QWORD *)(v22 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v22, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v17 + 8) ^= (*((_DWORD *)v17 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  v29 = *((_QWORD *)a3 + 39);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v29 + 16) == KeGetCurrentThread() )
  {
    v33 = *(_DWORD *)(v29 + 24);
    if ( v33 <= 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31, v30, v32);
      *(_QWORD *)(v34 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v34);
      v33 = *(_DWORD *)(v29 + 24);
    }
    v35 = v33 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *(_DWORD *)(v29 + 28);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v31, (const EVENT_DESCRIPTOR *)"g", v37, v38);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v29 + 8));
      ExAcquirePushLockExclusiveEx(v29, 0LL);
    }
    if ( *(_QWORD *)(v29 + 16) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v31, v36, v37);
      *(_QWORD *)(v39 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( *(_DWORD *)(v29 + 24) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v31, v36, v37);
      *(_QWORD *)(v40 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v40);
    }
    *(_QWORD *)(v29 + 16) = KeGetCurrentThread();
    v35 = 1;
  }
  *(_DWORD *)(v29 + 24) = v35;
  if ( *((_BYTE *)a3 + 88) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v31) + 24) = a3;
    LODWORD(v13) = -1071775482;
    goto LABEL_121;
  }
  v41 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v41) + 24) = a3;
    LODWORD(v13) = -1071775470;
    goto LABEL_121;
  }
  v42 = *((_QWORD *)a3 + 12);
  v117 = v42;
  if ( (v41 & 4) != 0 )
    v112 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL)
                                                 + 8LL * *((unsigned int *)this[3] + 58));
  v43 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, *((struct VIDMM_PROCESS **)a2 + 1), a4, a8);
  v110 = v43;
  v44 = v43;
  if ( !v43 )
  {
    LODWORD(v13) = -1071775488;
LABEL_121:
    VIDMM_DEVICE::NotifyAllocationClosed(a2, v17);
    operator delete(v17);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v100);
    return (unsigned int)v13;
  }
  v116 = *((_QWORD *)a3 + 12);
  *((_QWORD *)v17 + 2) = a6;
  *(_QWORD *)v17 = v43;
  *((_QWORD *)v17 + 1) = a2;
  *((_QWORD *)v17 + 12) = *((_QWORD *)a3 + 64);
  *((_DWORD *)v17 + 7) ^= (*((_DWORD *)v17 + 7) ^ (**((_DWORD **)a3 + 64) >> 26)) & 8;
  *((_BYTE *)v17 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 64) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 346LL) )
  {
    v45 = a5 != 0;
    if ( *((_DWORD *)this + 1750) > 1u )
      v45 = 0;
    *((_BYTE *)v17 + 24) = v45;
  }
  *((_QWORD *)v17 + 20) = 0LL;
  *((_QWORD *)v17 + 17) = (char *)v17 + 128;
  *((_QWORD *)v17 + 16) = (char *)v17 + 128;
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    *((_QWORD *)v17 + 19) = (char *)v17 + 144;
    *((_QWORD *)v17 + 18) = (char *)v17 + 144;
  }
  v47 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v44 + 6);
  v48 = (VIDMM_ALLOC *)((char *)v17 + 40);
  if ( *v47 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v44 + 40) )
LABEL_132:
    __fastfail(3u);
  *(_QWORD *)v48 = (char *)v44 + 40;
  *((_QWORD *)v17 + 6) = v47;
  *v47 = v48;
  *((_QWORD *)v44 + 6) = v48;
  if ( ((_BYTE)this[5117] & 4) != 0 )
  {
    if ( (**((_DWORD **)a3 + 64) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v49 = *((_QWORD *)a3 + 47);
      }
      else
      {
        v111 = 0LL;
        v115 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v47, v48, v46);
        v51 = MmMapViewOfSection(
                *((_QWORD *)a3 + 46),
                CurrentProcess,
                &v111,
                0LL,
                *((_QWORD *)a3 + 1),
                &v115,
                (char *)a3 + 8,
                2,
                0,
                4);
        v13 = v51;
        if ( v51 < 0 )
        {
          _InterlockedIncrement(&dword_1C005068C);
          v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v47);
          v52[3] = a3;
          v56 = PsGetCurrentProcess(v54, v53, v55);
          v52[5] = v13;
          v52[4] = v56;
          WdLogEvent5_WdLowResource(v52);
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v57);
LABEL_114:
          v88 = *((_DWORD *)a3 + 19) & 0x3F;
          v125 = 0LL;
          v89 = 176 * v88;
          v129 = 0LL;
          v130 = 0LL;
          v131 = 0LL;
          v90 = *((_QWORD *)v17 + 1);
          v126 = 0;
          v128 = 0LL;
          v124 = 200;
          v91 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v90 + 72) + v89);
          v127 = v17;
          v92 = VIDMM_GLOBAL::QueueDeferredCommand(
                  (VIDMM_GLOBAL *)this,
                  v91,
                  (struct _VIDMM_DEFERRED_COMMAND *)&v124,
                  1,
                  0LL);
          v95 = v92;
          if ( v92 < 0 )
          {
            v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v94, v93);
            v96[3] = 270LL;
            v96[4] = 5LL;
            v96[5] = 200LL;
            v96[6] = v95;
            v96[7] = 0LL;
            WdLogEvent5_WdCriticalError(v96);
          }
          KeWaitForSingleObject((char *)v17 + 72, Executive, 0, 0, 0LL);
          DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
          v97 = *((_QWORD *)v17 + 5);
          v98 = (char *)v17 + 40;
          if ( !v97 )
            goto LABEL_120;
          if ( *(char **)(v97 + 8) == v98 )
          {
            v99 = (char **)*((_QWORD *)v17 + 6);
            if ( *v99 == v98 )
            {
              *v99 = (char *)v97;
              *(_QWORD *)(v97 + 8) = v99;
LABEL_120:
              VIDMM_GLOBAL::CloseLocalAllocation((VIDMM_GLOBAL *)this, v44, 1);
              goto LABEL_121;
            }
          }
          goto LABEL_132;
        }
        v49 = v111;
      }
    }
    else
    {
      v49 = *((_QWORD *)v44 + 2);
    }
    *((_QWORD *)v17 + 20) = v49;
  }
  v58 = *((_QWORD *)a3 + 39);
  if ( *(struct _KTHREAD **)(v58 + 16) != KeGetCurrentThread() )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v48);
    v59[3] = 275LL;
    v59[4] = 4LL;
    v59[5] = v58;
    v59[6] = 0LL;
    v59[7] = 0LL;
    WdLogEvent5_WdCriticalError(v59);
  }
  v60 = *(_DWORD *)(v58 + 24);
  if ( v60 <= 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v47, v48, v46);
    *(_QWORD *)(v61 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v61);
    v60 = *(_DWORD *)(v58 + 24);
  }
  v62 = v60 - 1;
  *(_DWORD *)(v58 + 24) = v62;
  if ( !v62 )
  {
    *(_QWORD *)(v58 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v58, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v117 != v116 )
  {
    if ( v44 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 12) && g_IsInternalRelease )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63);
      v65[3] = 270LL;
      v65[4] = 9LL;
      v65[5] = 0LL;
      v65[6] = 0LL;
      v65[7] = 0LL;
      WdLogEvent5_WdCriticalError(v65);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 64) + 4LL) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v121, this + 4996, 0);
      DXGPUSHLOCK::AcquireExclusive(v122);
      v67 = (__int64 *)((char *)a3 + 424);
      v123 = 2;
      if ( *((_QWORD *)a3 + 53) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v66, a3, v112);
      if ( (*((_BYTE *)a3 + 84) & 0xC0) == 0xC0 )
      {
        v68 = *((unsigned int *)this[3] + 58);
        v69 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 1) + 16LL) + 8 * v68) + 424LL;
        v70 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 1) + 16LL) + 8 * v68) + 432LL);
        if ( *v70 != (__int64 *)v69 )
          goto LABEL_132;
        *v67 = v69;
        *((_QWORD *)a3 + 54) = v70;
        *v70 = v67;
        *(_QWORD *)(v69 + 8) = v67;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v121);
    }
  }
  if ( (**((_DWORD **)a3 + 64) & 0x40000000) != 0 )
  {
    if ( ((_DWORD)this[881] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v44 + 512LL) & 0x20000000) != 0
      && v44 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v44 + 96LL) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_114;
    }
    v71 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v17, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
    v13 = v71;
    if ( v71 < 0 )
    {
      _InterlockedIncrement(&dword_1C00506FC);
      v73 = WdLogNewEntry5_WdLowResource(v72);
      *(_QWORD *)(v73 + 24) = v17;
      *(_QWORD *)(v73 + 32) = v13;
      WdLogEvent5_WdLowResource(v73);
      goto LABEL_114;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
    if ( *((_BYTE *)a3 + 88) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v75) + 24) = a3;
      LODWORD(v13) = -1071775482;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v74);
      goto LABEL_114;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v75) + 24) = a3;
      LODWORD(v13) = -1071775470;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v74);
      goto LABEL_114;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v74);
  }
  else
  {
    v76 = a2;
    v82 = *((_QWORD *)a2 + 3);
    if ( !v82
      || (*(_BYTE *)(v82 + 1871)
       || *(_DWORD *)(v82 + 432) == 2 && *(int *)(*(_QWORD *)(*(_QWORD *)(v82 + 16) + 16LL) + 2596LL) >= 2000)
      && (*((_DWORD *)a3 + 20) & 0x20) == 0 )
    {
      goto LABEL_100;
    }
    v83 = *((_DWORD *)a3 + 19) & 0x3F;
    v113 = 0LL;
    v84 = 176 * v83;
    v85 = *((_QWORD *)v17 + 1);
    v118 = 0LL;
    v119 = v17;
    v86 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v85 + 72) + v84);
    Resident = VIDMM_GLOBAL::MakeResident(
                 (VIDMM_GLOBAL *)this,
                 (struct VIDMM_PAGING_QUEUE *)v86,
                 &v119,
                 1uLL,
                 0,
                 &v113,
                 &v118);
    LODWORD(v13) = Resident;
    if ( Resident == 259 )
    {
      v109 = v86[11];
      v120 = v113;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v109, &v120, 1u, 0LL);
      LODWORD(v13) = 0;
    }
    else if ( Resident < 0 )
    {
      goto LABEL_114;
    }
  }
  v76 = a2;
LABEL_100:
  *((_DWORD *)v17 + 7) |= 0x40u;
  v77 = bTracingEnabled == 0;
  *a7 = v17;
  if ( !v77 )
  {
    v78 = *((_QWORD *)v17 + 2);
    if ( v78 )
    {
      v108 = *(_DWORD *)(v78 + 16);
      v79 = *(_QWORD *)(v78 + 40);
      if ( v79 )
      {
        v80 = *(_DWORD *)(v79 + 16);
        v114 = *(_QWORD *)(v79 + 48);
        v107 = v80;
      }
    }
    if ( (**((_DWORD **)a3 + 64) & 8) != 0 )
      v81 = *((_QWORD *)a3 + 47);
    else
      v81 = *((_QWORD *)v44 + 2);
    if ( v78 && (v101 = *(_QWORD *)(v78 + 40)) != 0 )
      v102 = *(_QWORD *)(v101 + 56);
    else
      v102 = 0LL;
    if ( v78 )
      v8 = *(_QWORD *)(v78 + 40);
    v109 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v76 + 3);
    v133 = (struct VIDMM_ALLOC **)*((_QWORD *)v110 + 3);
    v110 = this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp_EtwWriteTransfer(
        v107,
        &EventCreateDeviceAllocation,
        (__int64)v133,
        CurrentProcessId,
        v109,
        v110,
        v17,
        a3,
        v8,
        v102,
        v108,
        v107,
        v114,
        v81,
        v133);
  }
  v104 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1918);
  this[960] = (DXGADAPTER *)((char *)this[960] + v104);
  return (unsigned int)v13;
}

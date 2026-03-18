/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006AC20
 * Callers:
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C005EE74 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FB34 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C006A314 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089BB8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE4C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001094 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C0022FAC (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0pppppppppppp_EtwWriteTransfer @ 0x1C0024374 (McTemplateK0pppppppppppp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006520C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C006B870 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00AF6C4 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B3420 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00B42D8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B9604 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  __int64 v44; // r8
  struct _VIDMM_LOCAL_ALLOC *v45; // r12
  bool v46; // al
  struct _VIDMM_LOCAL_ALLOC *v47; // rdx
  struct _VIDMM_LOCAL_ALLOC **v48; // rcx
  __int64 v49; // rax
  __int64 CurrentProcess; // rax
  int v51; // eax
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rbx
  _QWORD *v57; // rax
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  VIDMM_GLOBAL *v64; // rcx
  __int64 *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 **v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct VIDMM_DEVICE *v74; // r8
  bool v75; // zf
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned int v78; // ecx
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rax
  struct _VIDSCH_SYNC_OBJECT **v84; // rbx
  int Resident; // eax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  struct VIDMM_PAGING_QUEUE *v89; // rdx
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  _QWORD *v94; // rax
  __int64 v95; // rax
  char *v96; // rdx
  char **v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rbx
  HANDLE CurrentProcessId; // r9
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned int v105; // [rsp+80h] [rbp-80h]
  unsigned int v106; // [rsp+84h] [rbp-7Ch]
  struct _VIDSCH_SYNC_OBJECT *v107; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v108; // [rsp+90h] [rbp-70h]
  __int64 v109; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v110; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v111; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v112; // [rsp+B0h] [rbp-50h]
  __int64 v113; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v114; // [rsp+C0h] [rbp-40h]
  __int64 v115; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v116; // [rsp+D0h] [rbp-30h] BYREF
  struct _VIDMM_MULTI_ALLOC *v117; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v118; // [rsp+E0h] [rbp-20h] BYREF
  char v119[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v120; // [rsp+F0h] [rbp-10h]
  int v121; // [rsp+F8h] [rbp-8h]
  int v122; // [rsp+100h] [rbp+0h] BYREF
  __int64 v123; // [rsp+104h] [rbp+4h]
  int v124; // [rsp+10Ch] [rbp+Ch]
  VIDMM_ALLOC *v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+118h] [rbp+18h]
  __int128 v127; // [rsp+120h] [rbp+20h]
  __int128 v128; // [rsp+130h] [rbp+30h]
  __int128 v129; // [rsp+140h] [rbp+40h]
  struct VIDMM_ALLOC **v131; // [rsp+1B0h] [rbp+B0h]

  v8 = 0LL;
  v106 = 0;
  v105 = 0;
  v112 = 0LL;
  LODWORD(v13) = 0;
  v110 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = a2;
  }
  *a7 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (VIDMM_ALLOC *)operator new[](0x120uLL, 0x33306956u, (POOL_TYPE)512);
    v17 = v15;
    if ( v15 )
    {
      VIDMM_ALLOC::VIDMM_ALLOC(v15);
      *((_DWORD *)v17 + 7) |= 0x20u;
      *((_QWORD *)v17 + 30) = 0LL;
      *((_QWORD *)v17 + 31) = 0LL;
      *((_QWORD *)v17 + 32) = 0LL;
      *((_QWORD *)v17 + 33) = 0LL;
      *((_QWORD *)v17 + 34) = 0LL;
      *((_QWORD *)v17 + 35) = 0LL;
      goto LABEL_8;
    }
LABEL_131:
    _InterlockedIncrement(&dword_1C0051678);
    v103 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v103 + 24) = 4087LL;
    WdLogEvent5_WdLowResource(v103);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v20 = (VIDMM_ALLOC *)operator new[](0xF0uLL, 0x33306956u, (POOL_TYPE)512);
  v17 = v20;
  if ( !v20 )
    goto LABEL_131;
  memset(v20, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)v17 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v17 + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v17 + 29);
LABEL_8:
  if ( !v17 )
    goto LABEL_131;
  *((_BYTE *)v17 + 36) ^= (*((_BYTE *)v17 + 36) ^ (*((_DWORD *)this + 1762) >> 13)) & 1;
  v21 = *((_QWORD *)a2 + 2);
  if ( v21 )
  {
    v22 = v21 + 360;
    if ( v22 && *(struct _KTHREAD **)(v22 + 8) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16, v18, v19);
      *(_QWORD *)(v23 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *(_DWORD *)(v22 + 24);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockExclusiveEx(v22, 0LL);
    }
    *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
    v27 = (VIDMM_ALLOC *)((char *)v17 + 112);
    v28 = (struct VIDMM_DEVICE **)*((_QWORD *)a2 + 22);
    if ( *v28 != (struct VIDMM_DEVICE *)((char *)a2 + 168) )
      goto LABEL_130;
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
      *(_QWORD *)(v34 + 24) = 659LL;
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
          McTemplateK0q_EtwWriteTransfer(v31, &EventBlockThread, v37, v38);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v29 + 8));
      ExAcquirePushLockExclusiveEx(v29, 0LL);
    }
    if ( *(_QWORD *)(v29 + 16) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v31, v36, v37);
      *(_QWORD *)(v39 + 24) = 683LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( *(_DWORD *)(v29 + 24) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v31, v36, v37);
      *(_QWORD *)(v40 + 24) = 684LL;
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
    goto LABEL_119;
  }
  v41 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v41) + 24) = a3;
    LODWORD(v13) = -1071775470;
    goto LABEL_119;
  }
  v42 = *((_QWORD *)a3 + 12);
  v115 = v42;
  if ( (v41 & 4) != 0 )
    v110 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL)
                                                 + 8LL * *((unsigned int *)this[3] + 58));
  v43 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, *((struct VIDMM_PROCESS **)a2 + 1), a4, a8);
  v108 = v43;
  v45 = v43;
  if ( !v43 )
  {
    LODWORD(v13) = -1071775488;
LABEL_119:
    VIDMM_DEVICE::NotifyAllocationClosed(a2, v17);
    operator delete(v17);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v98);
    return (unsigned int)v13;
  }
  v114 = *((_QWORD *)a3 + 12);
  *((_QWORD *)v17 + 2) = a6;
  *(_QWORD *)v17 = v43;
  *((_QWORD *)v17 + 1) = a2;
  *((_QWORD *)v17 + 12) = *((_QWORD *)a3 + 62);
  *((_DWORD *)v17 + 7) ^= (*((_DWORD *)v17 + 7) ^ (**((_DWORD **)a3 + 62) >> 26)) & 8;
  LOBYTE(v44) = a5 != 0;
  *((_BYTE *)v17 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 62) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 346LL) )
  {
    v46 = a5 != 0;
    if ( *((_DWORD *)this + 1750) > 1u )
      v46 = 0;
    *((_BYTE *)v17 + 24) = v46;
  }
  *((_QWORD *)v17 + 18) = 0LL;
  *((_QWORD *)v17 + 17) = (char *)v17 + 128;
  v47 = (VIDMM_ALLOC *)((char *)v17 + 40);
  *((_QWORD *)v17 + 16) = (char *)v17 + 128;
  v48 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v45 + 6);
  if ( *v48 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v45 + 40) )
LABEL_130:
    __fastfail(3u);
  *(_QWORD *)v47 = (char *)v45 + 40;
  *((_QWORD *)v17 + 6) = v48;
  *v48 = v47;
  *((_QWORD *)v45 + 6) = v47;
  if ( ((_BYTE)this[5117] & 4) != 0 )
  {
    if ( (**((_DWORD **)a3 + 62) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v49 = *((_QWORD *)a3 + 45);
      }
      else
      {
        v109 = 0LL;
        v113 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v48);
        v51 = MmMapViewOfSection(
                *((_QWORD *)a3 + 44),
                CurrentProcess,
                &v109,
                0LL,
                *((_QWORD *)a3 + 1),
                &v113,
                (char *)a3 + 8,
                2,
                0,
                4);
        v13 = v51;
        if ( v51 < 0 )
        {
          _InterlockedIncrement(&dword_1C005168C);
          v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v48);
          v52[3] = a3;
          v54 = PsGetCurrentProcess(v53);
          v52[5] = v13;
          v52[4] = v54;
          WdLogEvent5_WdLowResource(v52);
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v55);
LABEL_112:
          v86 = *((_DWORD *)a3 + 19) & 0x3F;
          v123 = 0LL;
          v87 = 176 * v86;
          v127 = 0LL;
          v128 = 0LL;
          v129 = 0LL;
          v88 = *((_QWORD *)v17 + 1);
          v124 = 0;
          v126 = 0LL;
          v122 = 200;
          v89 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v88 + 72) + v87);
          v125 = v17;
          v90 = VIDMM_GLOBAL::QueueDeferredCommand(
                  (VIDMM_GLOBAL *)this,
                  v89,
                  (struct _VIDMM_DEFERRED_COMMAND *)&v122,
                  1,
                  0LL);
          v93 = v90;
          if ( v90 < 0 )
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91);
            v94[3] = 270LL;
            v94[4] = 5LL;
            v94[5] = 200LL;
            v94[6] = v93;
            v94[7] = 0LL;
            WdLogEvent5_WdCriticalError(v94);
          }
          KeWaitForSingleObject((char *)v17 + 72, Executive, 0, 0, 0LL);
          DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
          v95 = *((_QWORD *)v17 + 5);
          v96 = (char *)v17 + 40;
          if ( !v95 )
            goto LABEL_118;
          if ( *(char **)(v95 + 8) == v96 )
          {
            v97 = (char **)*((_QWORD *)v17 + 6);
            if ( *v97 == v96 )
            {
              *v97 = (char *)v95;
              *(_QWORD *)(v95 + 8) = v97;
LABEL_118:
              VIDMM_GLOBAL::CloseLocalAllocation((VIDMM_GLOBAL *)this, v45, 1);
              goto LABEL_119;
            }
          }
          goto LABEL_130;
        }
        v49 = v109;
      }
    }
    else
    {
      v49 = *((_QWORD *)v45 + 2);
    }
    *((_QWORD *)v17 + 18) = v49;
  }
  v56 = *((_QWORD *)a3 + 39);
  if ( *(struct _KTHREAD **)(v56 + 16) != KeGetCurrentThread() )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
    v57[3] = 275LL;
    v57[4] = 4LL;
    v57[5] = v56;
    v57[6] = 0LL;
    v57[7] = 0LL;
    WdLogEvent5_WdCriticalError(v57);
  }
  v58 = *(_DWORD *)(v56 + 24);
  if ( v58 <= 0 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v48, v47, v44);
    *(_QWORD *)(v59 + 24) = 703LL;
    WdLogEvent5_WdAssertion(v59);
    v58 = *(_DWORD *)(v56 + 24);
  }
  v60 = v58 - 1;
  *(_DWORD *)(v56 + 24) = v60;
  if ( !v60 )
  {
    *(_QWORD *)(v56 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v56, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v115 != v114 )
  {
    if ( v45 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 12) && g_IsInternalRelease )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v61);
      v63[3] = 270LL;
      v63[4] = 9LL;
      v63[5] = 0LL;
      v63[6] = 0LL;
      v63[7] = 0LL;
      WdLogEvent5_WdCriticalError(v63);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 62) + 4LL) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v119, this + 4996, 0);
      DXGPUSHLOCK::AcquireExclusive(v120);
      v65 = (__int64 *)((char *)a3 + 408);
      v121 = 2;
      if ( *((_QWORD *)a3 + 51) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v64, a3, v110);
      if ( (*((_BYTE *)a3 + 84) & 0xC0) == 0xC0 )
      {
        v66 = *((unsigned int *)this[3] + 58);
        v67 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 1) + 16LL) + 8 * v66) + 424LL;
        v68 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 1) + 16LL) + 8 * v66) + 432LL);
        if ( *v68 != (__int64 *)v67 )
          goto LABEL_130;
        *v65 = v67;
        *((_QWORD *)a3 + 52) = v68;
        *v68 = v65;
        *(_QWORD *)(v67 + 8) = v65;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v119);
    }
  }
  if ( (**((_DWORD **)a3 + 62) & 0x40000000) != 0 )
  {
    if ( ((_DWORD)this[881] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v45 + 496LL) & 0x20000000) != 0
      && v45 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v45 + 96LL) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_112;
    }
    v69 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v17, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
    v13 = v69;
    if ( v69 < 0 )
    {
      _InterlockedIncrement(&dword_1C00516FC);
      v71 = WdLogNewEntry5_WdLowResource(v70);
      *(_QWORD *)(v71 + 24) = v17;
      *(_QWORD *)(v71 + 32) = v13;
      WdLogEvent5_WdLowResource(v71);
      goto LABEL_112;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
    if ( *((_BYTE *)a3 + 88) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v73) + 24) = a3;
      LODWORD(v13) = -1071775482;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v72);
      goto LABEL_112;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v73) + 24) = a3;
      LODWORD(v13) = -1071775470;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v72);
      goto LABEL_112;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v72);
  }
  else
  {
    v74 = a2;
    v80 = *((_QWORD *)a2 + 3);
    if ( !v80
      || (*(_BYTE *)(v80 + 1871)
       || *(_DWORD *)(v80 + 432) == 2 && *(int *)(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 16LL) + 2572LL) >= 2000)
      && (*((_DWORD *)a3 + 20) & 0x20) == 0 )
    {
      goto LABEL_98;
    }
    v81 = *((_DWORD *)a3 + 19) & 0x3F;
    v111 = 0LL;
    v82 = 176 * v81;
    v83 = *((_QWORD *)v17 + 1);
    v116 = 0LL;
    v117 = v17;
    v84 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v83 + 72) + v82);
    Resident = VIDMM_GLOBAL::MakeResident(
                 (VIDMM_GLOBAL *)this,
                 (struct VIDMM_PAGING_QUEUE *)v84,
                 &v117,
                 1uLL,
                 0,
                 &v111,
                 &v116);
    LODWORD(v13) = Resident;
    if ( Resident == 259 )
    {
      v107 = v84[11];
      v118 = v111;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v107, &v118, 1u, 0LL);
      LODWORD(v13) = 0;
    }
    else if ( Resident < 0 )
    {
      goto LABEL_112;
    }
  }
  v74 = a2;
LABEL_98:
  *((_DWORD *)v17 + 7) |= 0x40u;
  v75 = bTracingEnabled == 0;
  *a7 = v17;
  if ( !v75 )
  {
    v76 = *((_QWORD *)v17 + 2);
    if ( v76 )
    {
      v106 = *(_DWORD *)(v76 + 16);
      v77 = *(_QWORD *)(v76 + 40);
      if ( v77 )
      {
        v78 = *(_DWORD *)(v77 + 16);
        v112 = *(_QWORD *)(v77 + 48);
        v105 = v78;
      }
    }
    if ( (**((_DWORD **)a3 + 62) & 8) != 0 )
      v79 = *((_QWORD *)a3 + 45);
    else
      v79 = *((_QWORD *)v45 + 2);
    if ( v76 && (v99 = *(_QWORD *)(v76 + 40)) != 0 )
      v100 = *(_QWORD *)(v99 + 56);
    else
      v100 = 0LL;
    if ( v76 )
      v8 = *(_QWORD *)(v76 + 40);
    v107 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v74 + 3);
    v131 = (struct VIDMM_ALLOC **)*((_QWORD *)v108 + 3);
    v108 = this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp_EtwWriteTransfer(
        v105,
        &EventCreateDeviceAllocation,
        (__int64)v131,
        CurrentProcessId,
        v107,
        v108,
        v17,
        a3,
        v8,
        v100,
        v106,
        v105,
        v112,
        v79,
        v131);
  }
  v102 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1918);
  this[960] = (DXGADAPTER *)((char *)this[960] + v102);
  return (unsigned int)v13;
}

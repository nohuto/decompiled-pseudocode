/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0
 * Callers:
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C008EC28 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00A1478 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00A51D8 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A5624 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C001E426 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E424 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C007BB6C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0086C50 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C008A00C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00932B0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00A9CA0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00DD9B0 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_ALLOC ***a3,
        __int64 a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // r12
  struct VIDMM_DEVICE *v11; // r14
  VIDMM_GLOBAL *v12; // rsi
  VIDMM_ALLOC *v13; // rax
  VIDMM_ALLOC *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  struct VIDMM_DEVICE *v19; // rcx
  struct VIDMM_DEVICE **v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  struct _VIDMM_LOCAL_ALLOC *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  struct _VIDMM_LOCAL_ALLOC *v29; // rdi
  struct _VIDMM_LOCAL_ALLOC *v30; // r15
  char *v31; // rax
  struct _VIDMM_LOCAL_ALLOC **v32; // rcx
  __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // rax
  struct VIDMM_ALLOC **v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 v41; // r14
  HANDLE CurrentProcessId; // rax
  struct VIDMM_ALLOC **v43; // rax
  unsigned int v45; // ecx
  struct VIDMM_ALLOC **v46; // rax
  int v47; // r9d
  __int64 v48; // rcx
  __int64 v49; // rax
  VIDMM_ALLOC *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // edi
  struct VIDMM_ALLOC **v53; // rsi
  __int64 CurrentProcess; // rax
  struct VIDMM_ALLOC **v55; // r15
  __int64 v56; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  VIDMM_GLOBAL *v70; // rcx
  __int64 *v71; // r8
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 **v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  int Resident; // eax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  struct VIDMM_PAGING_QUEUE *v89; // rdx
  int v90; // eax
  __int64 v91; // r9
  __int64 v92; // rax
  struct _VIDMM_LOCAL_ALLOC **v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // [rsp+38h] [rbp-C8h]
  unsigned int v96; // [rsp+80h] [rbp-80h]
  unsigned int v97; // [rsp+84h] [rbp-7Ch]
  unsigned int v98; // [rsp+88h] [rbp-78h]
  struct _VIDMM_LOCAL_ALLOC *v99; // [rsp+90h] [rbp-70h]
  struct VIDMM_ALLOC **v100; // [rsp+98h] [rbp-68h]
  struct _VIDSCH_SYNC_OBJECT **v101; // [rsp+98h] [rbp-68h]
  struct _VIDSCH_SYNC_OBJECT *v102; // [rsp+A0h] [rbp-60h] BYREF
  struct _VIDMM_MULTI_ALLOC *v103; // [rsp+A8h] [rbp-58h] BYREF
  DXGFASTMUTEX *v104; // [rsp+B0h] [rbp-50h]
  struct VIDMM_ALLOC **v105; // [rsp+B8h] [rbp-48h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v106; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v107; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v108; // [rsp+D0h] [rbp-30h]
  __int64 v109; // [rsp+D8h] [rbp-28h] BYREF
  struct VIDMM_ALLOC **v110; // [rsp+E0h] [rbp-20h]
  char v111[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v112; // [rsp+F0h] [rbp-10h]
  int v113; // [rsp+F8h] [rbp-8h]
  int v114; // [rsp+100h] [rbp+0h] BYREF
  __int64 v115; // [rsp+104h] [rbp+4h]
  int v116; // [rsp+10Ch] [rbp+Ch]
  VIDMM_ALLOC *v117; // [rsp+110h] [rbp+10h]
  __int64 v118; // [rsp+118h] [rbp+18h]
  __int128 v119; // [rsp+120h] [rbp+20h]
  __int128 v120; // [rsp+130h] [rbp+30h]
  __int128 v121; // [rsp+140h] [rbp+40h]
  struct VIDMM_ALLOC **v124; // [rsp+1C0h] [rbp+C0h]

  v8 = 0LL;
  v96 = 0;
  v98 = 0;
  v11 = a2;
  v97 = 0;
  v12 = this;
  v108 = 0LL;
  v106 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v49 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v49 + 24) = a3;
    *(_QWORD *)(v49 + 32) = v11;
  }
  *a7 = 0LL;
  if ( !g_IsInternalReleaseOrDbg )
  {
    v13 = (VIDMM_ALLOC *)operator new(240LL, 0x33306956u, 64LL);
    v14 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0xF0uLL);
      KeInitializeEvent((PRKEVENT)v14 + 3, NotificationEvent, 0);
      KeInitializeEvent((PRKEVENT)v14 + 7, SynchronizationEvent, 0);
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)v14 + 29);
      goto LABEL_6;
    }
LABEL_108:
    _InterlockedIncrement(&dword_1C006E728);
    WdLogSingleEntry1(6LL, 4424LL);
    DxgkLogInternalTriageEvent(v94, 262145LL);
    return (unsigned int)-1073741801;
  }
  v50 = (VIDMM_ALLOC *)operator new(288LL, 0x33306956u, 64LL);
  v14 = v50;
  if ( !v50 )
    goto LABEL_108;
  VIDMM_ALLOC::VIDMM_ALLOC(v50);
  *((_DWORD *)v14 + 7) |= 0x20u;
  *((_QWORD *)v14 + 30) = 0LL;
  *((_QWORD *)v14 + 31) = 0LL;
  *((_QWORD *)v14 + 32) = 0LL;
  *((_QWORD *)v14 + 33) = 0LL;
  *((_QWORD *)v14 + 34) = 0LL;
  *((_QWORD *)v14 + 35) = 0LL;
LABEL_6:
  *((_BYTE *)v14 + 36) = ((*((_DWORD *)v12 + 1764) & 0x2000) != 0) | *((_BYTE *)v14 + 36) & 0xFE;
  v15 = *((_QWORD *)v11 + 2);
  if ( v15 )
  {
    v16 = v15 + 360;
    if ( v16 && *(struct _KTHREAD **)(v16 + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1425LL);
      HIDWORD(v95) = 0;
      DxgkLogInternalTriageEvent(v51, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v47 = *(_DWORD *)(v16 + 24);
        if ( v47 != -1 && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventBlockThread, v18, v47);
      }
      ExAcquirePushLockExclusiveEx(v16, 0LL);
    }
    v19 = (VIDMM_ALLOC *)((char *)v14 + 112);
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    v20 = (struct VIDMM_DEVICE **)*((_QWORD *)v11 + 23);
    if ( *v20 != (struct VIDMM_DEVICE *)((char *)v11 + 176) )
      goto LABEL_107;
    *((_QWORD *)v14 + 15) = v20;
    *(_QWORD *)v19 = (char *)v11 + 176;
    *v20 = v19;
    *((_QWORD *)v11 + 23) = v19;
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v14 + 8) ^= (*((_DWORD *)v14 + 8) ^ (4 * *((_DWORD *)a3 + 17))) & 0xFC;
  v104 = (DXGFASTMUTEX *)(a3 + 37);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a3 + 37));
  if ( *((_BYTE *)a3 + 81) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = a3;
    v52 = -1071775482;
    goto LABEL_106;
  }
  v25 = *((unsigned int *)a3 + 19);
  if ( (v25 & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, v21, v23, v24) + 24) = a3;
    v52 = -1071775470;
    goto LABEL_106;
  }
  v100 = a3[11];
  if ( (v25 & 4) != 0 )
    v106 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)a3[11][1] + 2)
                                                 + 8LL * *(unsigned int *)(*((_QWORD *)v12 + 3) + 240LL));
  v26 = VIDMM_GLOBAL::OpenLocalAllocation(
          v12,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          *((struct VIDMM_PROCESS **)v11 + 1),
          a4,
          a8);
  v99 = v26;
  v29 = v26;
  if ( !v26 )
  {
    v52 = -1071775488;
LABEL_106:
    VIDMM_DEVICE::NotifyAllocationClosed(v11, v14);
    operator delete(v14);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v104);
    return v52;
  }
  v110 = a3[11];
  *((_QWORD *)v14 + 2) = a6;
  *(_QWORD *)v14 = v26;
  *((_QWORD *)v14 + 1) = v11;
  *((_QWORD *)v14 + 12) = a3[66];
  *((_DWORD *)v14 + 7) ^= (*((_DWORD *)v14 + 7) ^ (*(_DWORD *)a3[66] >> 26)) & 8;
  *((_BYTE *)v14 + 24) = a5 != 0;
  if ( a5
    && (*(_DWORD *)a3[66] & 0x200000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 424LL) & 4) != 0
    && *((_DWORD *)v12 + 1754) > 1u )
  {
    *((_BYTE *)v14 + 24) = 0;
  }
  *((_QWORD *)v14 + 18) = 0LL;
  *((_QWORD *)v14 + 17) = (char *)v14 + 128;
  v30 = (VIDMM_ALLOC *)((char *)v14 + 40);
  *((_QWORD *)v14 + 16) = (char *)v14 + 128;
  v31 = (char *)v26 + 40;
  v32 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v29 + 6);
  if ( *v32 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v29 + 40) )
LABEL_107:
    __fastfail(3u);
  *(_QWORD *)v30 = v31;
  *((_QWORD *)v14 + 6) = v32;
  *v32 = v30;
  *((_QWORD *)v29 + 6) = v30;
  if ( (*((_BYTE *)v12 + 40936) & 4) != 0 )
  {
    if ( (*(_DWORD *)a3[66] & 0x10000008) != 0 )
    {
      v48 = *(unsigned int *)(*((_QWORD *)v12 + 3) + 436LL);
      if ( (v48 & 0x10) != 0 )
      {
        v46 = a3[48];
      }
      else
      {
        v53 = a3[1];
        v105 = 0LL;
        v109 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v48, a6, v27, v28);
        v55 = a3[47];
        v56 = CurrentProcess;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        LODWORD(v95) = 2;
        v58 = (*((__int64 (__fastcall **)(struct VIDMM_ALLOC **, __int64, struct VIDMM_ALLOC ***, _QWORD, struct VIDMM_ALLOC **, __int64 *, char *, __int64, _DWORD, int))VirtualMemoryInterface
               + 3))(
                v55,
                v56,
                &v105,
                0LL,
                v53,
                &v109,
                (char *)a3 + 8,
                v95,
                0,
                4);
        v96 = v58;
        if ( v58 < 0 )
        {
          _InterlockedIncrement(&dword_1C006E73C);
          v63 = v58;
          v64 = PsGetCurrentProcess(v60, v59, v61, v62);
          WdLogSingleEntry3(6LL, a3, v64, v63);
          PsGetCurrentProcess(v66, v65, v67, v68);
          DxgkLogInternalTriageEvent(v69, 262145LL);
          v12 = this;
          v30 = (VIDMM_ALLOC *)((char *)v14 + 40);
          v29 = v99;
          v11 = a2;
LABEL_92:
          DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 37);
          goto LABEL_99;
        }
        v46 = v105;
        v30 = (VIDMM_ALLOC *)((char *)v14 + 40);
        v12 = this;
        v29 = v99;
        v11 = a2;
      }
    }
    else
    {
      v46 = (struct VIDMM_ALLOC **)*((_QWORD *)v29 + 2);
    }
    *((_QWORD *)v14 + 18) = v46;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 37);
  if ( v100 != v110 )
  {
    if ( v29 != (struct _VIDMM_LOCAL_ALLOC *)a3[11] && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    if ( *((_WORD *)a3[66] + 2) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111, (struct _KTHREAD **)v12 + 4997, 0);
      DXGPUSHLOCK::AcquireExclusive(v112);
      v71 = (__int64 *)(a3 + 54);
      v113 = 2;
      if ( a3[54] )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v70, (struct _VIDMM_GLOBAL_ALLOC *)a3, v106);
        v71 = (__int64 *)(a3 + 54);
      }
      v72 = *((_DWORD *)a3 + 19);
      if ( (v72 & 0x40) != 0 && (v72 & 0x20) != 0 )
      {
        v73 = *(unsigned int *)(*((_QWORD *)v12 + 3) + 240LL);
        v74 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 1) + 16LL) + 8 * v73) + 424LL;
        v75 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 1) + 16LL) + 8 * v73) + 432LL);
        if ( *v75 != (__int64 *)v74 )
          goto LABEL_107;
        *v71 = v74;
        v71[1] = (__int64)v75;
        *v75 = v71;
        *(_QWORD *)(v74 + 8) = v71;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v111);
    }
  }
  if ( (*(_DWORD *)a3[66] & 0x40000000) == 0 )
  {
    v33 = *((_QWORD *)v11 + 3);
    if ( !v33
      || (*(_BYTE *)(v33 + 1871)
       || *(_DWORD *)(v33 + 432) == 2 && *(int *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 2692LL) >= 2000)
      && ((_DWORD)a3[9] & 0x20) == 0 )
    {
      goto LABEL_28;
    }
    v82 = *((_DWORD *)a3 + 17) & 0x3F;
    v107 = 0LL;
    v83 = 176 * v82;
    v84 = *((_QWORD *)v14 + 1);
    v102 = 0LL;
    v103 = v14;
    v101 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v84 + 80) + v83);
    Resident = VIDMM_GLOBAL::MakeResident(
                 v12,
                 (struct VIDMM_PAGING_QUEUE *)v101,
                 &v103,
                 1uLL,
                 0,
                 &v107,
                 (unsigned __int64 *)&v102);
    v96 = Resident;
    if ( Resident == 259 )
    {
      v102 = v101[11];
      v103 = (struct _VIDMM_MULTI_ALLOC *)v107;
      VIDMM_GLOBAL::WaitForFences(v12, &v102, (const unsigned __int64 *)&v103, 1u, 0LL);
      v96 = 0;
      goto LABEL_28;
    }
    if ( Resident >= 0 )
      goto LABEL_28;
    goto LABEL_99;
  }
  if ( (*((_DWORD *)v12 + 1764) & 2) != 0
    && (**(_DWORD **)(*(_QWORD *)v29 + 528LL) & 0x20000000) != 0
    && v29 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v29 + 88LL) )
  {
    v96 = -1071775487;
LABEL_99:
    v86 = *((_DWORD *)a3 + 17) & 0x3F;
    v115 = 0LL;
    v87 = 176 * v86;
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v88 = *((_QWORD *)v14 + 1);
    v116 = 0;
    v118 = 0LL;
    v114 = 200;
    v89 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v88 + 80) + v87);
    v117 = v14;
    v90 = VIDMM_GLOBAL::QueueDeferredCommand(v12, v89, (struct _VIDMM_DEFERRED_COMMAND *)&v114, 1, 0LL);
    if ( v90 < 0 )
      WdLogSingleEntry5(0LL, 270LL, 5LL, 200LL, v90, 0LL);
    KeWaitForSingleObject((char *)v14 + 72, Executive, 0, 0, 0LL);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a3 + 37));
    v92 = *(_QWORD *)v30;
    if ( !*(_QWORD *)v30 )
      goto LABEL_105;
    if ( *(struct _VIDMM_LOCAL_ALLOC **)(v92 + 8) == v30 )
    {
      v93 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v30 + 1);
      if ( *v93 == v30 )
      {
        *v93 = (struct _VIDMM_LOCAL_ALLOC *)v92;
        *(_QWORD *)(v92 + 8) = v93;
LABEL_105:
        VIDMM_GLOBAL::CloseLocalAllocation(v12, v29, 1LL, v91);
        v52 = v96;
        goto LABEL_106;
      }
    }
    goto LABEL_107;
  }
  v76 = VIDMM_GLOBAL::PinOneAllocation(v12, v14, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
  v96 = v76;
  if ( v76 < 0 )
  {
    _InterlockedIncrement(&dword_1C006E7AC);
    WdLogSingleEntry2(6LL, v14, v76);
    DxgkLogInternalTriageEvent(v77, 262145LL);
    v29 = v99;
    goto LABEL_99;
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a3 + 37));
  if ( *((_BYTE *)a3 + 81) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v79, v78, v80, v81) + 24) = a3;
    v96 = -1071775482;
    goto LABEL_92;
  }
  if ( (*((_DWORD *)a3 + 19) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v79, v78, v80, v81) + 24) = a3;
    v96 = -1071775470;
    goto LABEL_92;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 37);
LABEL_28:
  *((_DWORD *)v14 + 7) |= 0x40u;
  v34 = bTracingEnabled == 0;
  *a7 = v14;
  if ( !v34 )
  {
    v35 = *((_QWORD *)v14 + 2);
    if ( v35 )
    {
      v98 = *(_DWORD *)(v35 + 16);
      v36 = *(_QWORD *)(v35 + 40);
      if ( v36 )
      {
        v45 = *(_DWORD *)(v36 + 16);
        v108 = *(_QWORD *)(v36 + 48);
        v97 = v45;
      }
    }
    v104 = (DXGFASTMUTEX *)*((_QWORD *)v29 + 3);
    if ( (*(_DWORD *)a3[66] & 8) != 0 )
      v37 = a3[48];
    else
      v37 = (struct VIDMM_ALLOC **)*((_QWORD *)v29 + 2);
    v124 = v37;
    if ( v35 )
    {
      v38 = *(_QWORD *)(v35 + 40);
      if ( v38 )
        v8 = *(_QWORD *)(v38 + 56);
      v39 = *(_QWORD *)(v35 + 40);
    }
    else
    {
      v39 = 0LL;
    }
    v40 = *((_QWORD *)v12 + 3);
    v41 = *((_QWORD *)v11 + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (byte_1C006E941 & 8) != 0 )
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        v97,
        &EventCreateDeviceAllocation,
        v108,
        CurrentProcessId,
        v41,
        v40,
        v14,
        a3,
        v39,
        v8,
        v98,
        v97,
        v108,
        v124,
        v104);
  }
  v43 = a3[2];
  ++*((_DWORD *)v12 + 1920);
  *((_QWORD *)v12 + 961) += v43;
  return v96;
}

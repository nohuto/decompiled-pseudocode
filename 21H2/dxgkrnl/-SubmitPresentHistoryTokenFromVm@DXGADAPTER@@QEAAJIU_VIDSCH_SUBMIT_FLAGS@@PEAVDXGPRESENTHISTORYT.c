/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023ACE8
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FC80 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250060 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004534 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000D12C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017134 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001AE00 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DFD4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1C0040B00 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?AllocatePresentParams@DXGGLOBAL@@QEAAPEAUDXGK_PRESENT_PARAMS@@XZ @ 0x1C0040BF0 (-AllocatePresentParams@DXGGLOBAL@@QEAAPEAUDXGK_PRESENT_PARAMS@@XZ.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_42_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C00D7D18 (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_42_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0106FE0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0154FD4 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C022EDD4 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C027FE14 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C02825CC (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C0283CB4 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029EF34 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        volatile signed __int32 *ListEntry,
        unsigned int a11)
{
  unsigned int v11; // r13d
  __int64 v15; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD **v19; // r15
  __int64 v20; // rax
  struct _KTHREAD *v21; // r9
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  __int64 v29; // r9
  __int64 v30; // rdi
  ADAPTER_RENDER *v31; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v32; // rsi
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int SizeOfPresentToken; // eax
  __int64 v36; // rcx
  size_t v37; // rbx
  struct DXGGLOBAL *Global; // rax
  void **v39; // r13
  union _SLIST_HEADER *PresentHistoryTokenQueue; // r13
  __int64 v41; // rdx
  void *Alignment; // rcx
  struct _EX_RUNDOWN_REF *PresentHistoryTokenSlot; // r15
  char *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  DXGGLOBAL *v47; // rax
  struct DXGK_PRESENT_PARAMS *PresentParams; // rax
  struct DXGK_PRESENT_PARAMS *v49; // rbx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  DXGCONTEXT *v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  PERESOURCE *v61; // rax
  __int64 v62; // rdx
  struct _KTHREAD *v63; // rdx
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v69; // r9
  char v70; // [rsp+30h] [rbp-D0h]
  DXGCONTEXT *v71; // [rsp+38h] [rbp-C8h] BYREF
  struct _SLIST_ENTRY *v72; // [rsp+40h] [rbp-C0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v73[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v76[16]; // [rsp+68h] [rbp-98h] BYREF
  char v77[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v78; // [rsp+80h] [rbp-80h]
  char v79; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h]
  struct _KTHREAD **v81; // [rsp+98h] [rbp-68h]
  ADAPTER_RENDER *v82; // [rsp+A0h] [rbp-60h]
  struct _SLIST_ENTRY *v83; // [rsp+A8h] [rbp-58h] BYREF
  char v84[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v85; // [rsp+B8h] [rbp-48h]
  _BYTE v86[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+D0h] [rbp-30h]
  union _LARGE_INTEGER Timeout; // [rsp+D8h] [rbp-28h] BYREF
  DXGPUSHLOCK *v89[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v90; // [rsp+F0h] [rbp-10h]
  _BYTE v91[24]; // [rsp+F8h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v93; // [rsp+140h] [rbp+40h]
  _BYTE v94[160]; // [rsp+150h] [rbp+50h] BYREF

  v11 = a8;
  Src = a6;
  v87 = a4;
  v15 = 0LL;
  v70 = 0;
  v71 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a6);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76, a2, Current, &v71, 0);
  v81 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v18, v17);
  v19 = v81;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v91, v81);
  v20 = (a8 >> 6) & 0xFFFFFF;
  v74 = v20;
  if ( (unsigned int)v20 < *((_DWORD *)v19 + 64) )
  {
    v21 = v19[30];
    v22 = *((_DWORD *)v21 + 4 * v20 + 2);
    if ( ((a8 >> 25) & 0x60) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
    {
      v23 = v22 & 0x1F;
      if ( (_BYTE)v23 == 11 )
      {
        v25 = *((_QWORD *)v21 + 2 * (unsigned int)v20);
        if ( v25 )
          v15 = *(_QWORD *)(v25 + 16);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError((a8 >> 25) & 0x60, v23);
        *(_QWORD *)(v24 + 24) = 316LL;
        WdLogEvent5_WdError(v24);
      }
    }
  }
  if ( v71 || v15 )
  {
    if ( !v15 )
      v15 = *((_QWORD *)v71 + 2);
    _m_prefetchw((const void *)(v15 + 64));
    v26 = *(_QWORD *)(v15 + 64);
    do
    {
      if ( !v26 )
        goto LABEL_16;
      v27 = v26;
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 64), v26 + 1, v26);
    }
    while ( v27 != v26 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86,
      (struct DXGDEVICE *)v15);
    v78 = a1;
    v79 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    if ( *(_DWORD *)(a1 + 200) != 1 )
    {
      LODWORD(v30) = -1073741130;
LABEL_19:
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
LABEL_68:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
      return (unsigned int)v30;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, v15, 2, v29, 0);
    LODWORD(v30) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v94, 0LL);
    if ( (int)v30 < 0 )
      goto LABEL_65;
    v31 = *(ADAPTER_RENDER **)(a1 + 2704);
    v72 = 0LL;
    v73[0] = 0LL;
    v82 = v31;
    v73[1] = v31;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v73);
    v32 = v73[0];
    if ( !v73[0] )
    {
LABEL_22:
      LODWORD(v30) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v73);
      CAutoRefCountedBuffer::~CAutoRefCountedBuffer(&v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
      goto LABEL_19;
    }
    *((_DWORD *)v73[0] + 1) |= 8u;
    v33 = v87;
    v34 = a3 & 0x20 | *(_DWORD *)v32 & 0xFFFFFFDF;
    *((_DWORD *)v32 + 29) = -1;
    *(_DWORD *)v32 = v34 | 0x40000;
    *((_QWORD *)v32 + 68) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 104LL) + 128LL);
    *((_QWORD *)v32 + 71) = a7;
    *((_QWORD *)v32 + 69) = v33;
    *((_QWORD *)v32 + 70) = a5;
    *((_QWORD *)v32 + 12) = v33;
    *((_QWORD *)v32 + 13) = a5;
    if ( a11 != -1 )
    {
      if ( v19 )
      {
        if ( a9 )
        {
          if ( Src )
          {
            SizeOfPresentToken = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src);
            v37 = SizeOfPresentToken;
            if ( SizeOfPresentToken )
            {
              Object = 0LL;
              Global = DXGGLOBAL::GetGlobal(v36, v33);
              LODWORD(v30) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                               *((DXGSESSIONMGR **)Global + 102),
                               a11,
                               (struct _KPROCESS **)&Object);
              if ( (int)v30 < 0 )
                goto LABEL_64;
              v93 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
              v39 = (void **)v82;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89, (struct _KTHREAD **)v82 + 105, 0);
              DXGPUSHLOCK::AcquireShared(v89[1]);
              v90 = 1;
              PresentHistoryTokenQueue = (union _SLIST_HEADER *)ADAPTER_RENDER::GetPresentHistoryTokenQueue(v39, v89, 0);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v89);
              ObfDereferenceObject(Object);
              if ( v93 )
              {
                KeUnstackDetachProcess(&ApcState);
                v93 = 0;
              }
              if ( PresentHistoryTokenQueue )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v94, v41);
                Alignment = (void *)PresentHistoryTokenQueue[4].Alignment;
                Timeout.QuadPart = -20000000LL;
                KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
                PresentHistoryTokenSlot = (struct _EX_RUNDOWN_REF *)DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot((DXGPRESENTHISTORYTOKENQUEUE *)PresentHistoryTokenQueue);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v94, v44);
                if ( PresentHistoryTokenSlot )
                {
                  memmove(PresentHistoryTokenSlot, Src, v37);
                  *((_DWORD *)v32 + 1) |= 0x10u;
                  *((_QWORD *)v32 + 12) = PresentHistoryTokenQueue;
                  *((_QWORD *)v32 + 13) = PresentHistoryTokenSlot;
                  v47 = DXGGLOBAL::GetGlobal(v46, v45);
                  PresentParams = DXGGLOBAL::AllocatePresentParams(v47);
                  v49 = PresentParams;
                  if ( !PresentParams )
                    goto LABEL_22;
                  memset(PresentParams, 0, 0x5F8uLL);
                  *((_DWORD *)v49 + 5) = a9;
                  *((_BYTE *)v49 + 1512) = 1;
                  *((_QWORD *)v49 + 187) = &v71;
                  v83 = (struct _SLIST_ENTRY *)v49;
                  v50 = PrepareIndependentFlipToken(
                          PresentHistoryTokenSlot,
                          (struct _EX_RUNDOWN_REF *)v49,
                          (struct _EX_RUNDOWN_REF *)v32,
                          (struct _EX_RUNDOWN_REF *)v71,
                          0LL,
                          (struct CRefCountedBuffer *)ListEntry);
                  v30 = v50;
                  if ( v50 < 0 )
                  {
                    v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
                    *(_QWORD *)(v54 + 24) = v30;
                    WdLogEvent5_WdWarning(v54);
                    ExpInterlockedPushEntrySList(
                      PresentHistoryTokenQueue + 3,
                      (PSLIST_ENTRY)&PresentHistoryTokenSlot[-2]);
                    v55 = *((_QWORD *)v32 + 69);
                    *((_DWORD *)v32 + 1) &= ~0x10u;
                    *((_QWORD *)v32 + 12) = v55;
                    *((_QWORD *)v32 + 13) = *((_QWORD *)v32 + 70);
                  }
                  else
                  {
                    *((_DWORD *)v32 + 1) |= 0x20u;
                    if ( ListEntry )
                    {
                      _InterlockedIncrement(ListEntry + 3);
                      v32 = v73[0];
                      v70 = 1;
                    }
                    *((_QWORD *)v32 + 97) = ListEntry;
                  }
                  v72 = (struct _SLIST_ENTRY *)*((_QWORD *)v32 + 4);
                  DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_42_::ENSURE_DELETE::_ENSURE_DELETE(&v83, v51);
                }
                v19 = v81;
              }
              v11 = a8;
            }
          }
        }
      }
    }
    if ( (int)v30 >= 0 )
    {
      v56 = v71;
      if ( v71 )
      {
        if ( (*((_DWORD *)v71 + 105) & 0x10) != 0 )
        {
          v57 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v71, 0LL, 0, 1, 0LL, 1);
          v30 = v57;
          if ( v57 < 0 )
          {
            v60 = WdLogNewEntry5_WdError(v59, v58);
            *(_QWORD *)(v60 + 24) = v71;
            *(_QWORD *)(v60 + 32) = v30;
            WdLogEvent5_WdError(v60);
            goto LABEL_64;
          }
          v56 = v71;
        }
        LODWORD(v30) = DXGCONTEXT::SubmitCommandToImplicitQueue(v56, v32);
        goto LABEL_64;
      }
      v61 = (PERESOURCE *)DXGGLOBAL::GetGlobal(0LL, v33);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v84, v61, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v84, v62);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 26));
      if ( v74 < *((_DWORD *)v19 + 64) )
      {
        v63 = v19[30];
        v64 = *((_DWORD *)v63 + 4 * v74 + 2);
        if ( ((v11 >> 25) & 0x60) == (*((_BYTE *)v63 + 16 * v74 + 8) & 0x60) && (v64 & 0x2000) == 0 && (v64 & 0x1F) != 0 )
        {
          v65 = v64 & 0x1F;
          if ( (_BYTE)v65 == 11 )
          {
            v67 = *((_QWORD *)v63 + 2 * v74);
LABEL_56:
            ExReleasePushLockSharedEx(v19 + 26, 0LL);
            KeLeaveCriticalRegion();
            if ( v67 && *(_QWORD *)(v67 + 16) != v15 )
            {
              LODWORD(v30) = -1073741811;
              if ( v85 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v84);
              CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v73);
              CAutoRefCountedBuffer::~CAutoRefCountedBuffer(&v72);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
              goto LABEL_66;
            }
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(v67 + 32),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(v67 + 16) + 16LL));
            LODWORD(v30) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v82 + 77) + 8LL) + 1008LL))(
                             v32,
                             *(_QWORD *)(v69 + 768),
                             VidSchSyncObject);
            if ( v85 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v84);
            goto LABEL_64;
          }
          v66 = WdLogNewEntry5_WdError(v65, v63);
          *(_QWORD *)(v66 + 24) = 316LL;
          WdLogEvent5_WdError(v66);
        }
      }
      v67 = 0LL;
      goto LABEL_56;
    }
LABEL_64:
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v73);
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(&v72);
LABEL_65:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v86);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    if ( (int)v30 >= 0 )
      goto LABEL_68;
LABEL_66:
    if ( v70 )
      CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)ListEntry);
    goto LABEL_68;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
  return 3221225485LL;
}

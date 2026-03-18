/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0236CBC
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024BAD0 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024BEB0 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AAC0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016FF4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C00D8504 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C010A300 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C022ADE0 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C027B6F4 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C027DE38 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C027F514 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029A564 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        char a3,
        size_t a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        struct CRefCountedBuffer *a10,
        unsigned int a11)
{
  unsigned int v12; // r12d
  __int64 v15; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD **v19; // r13
  __int64 v20; // rax
  struct _KTHREAD *v21; // r9
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  __int64 v29; // r9
  __int64 v30; // rsi
  struct _SLIST_ENTRY *v31; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v32; // r15
  bool v33; // zf
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // eax
  DXGCONTEXT *v37; // rdi
  size_t v38; // rcx
  struct DXGGLOBAL *Global; // rax
  ADAPTER_RENDER *v40; // r13
  union _SLIST_HEADER *PresentHistoryTokenQueue; // r13
  void *Alignment; // rcx
  struct _EX_RUNDOWN_REF *PresentHistoryTokenSlot; // r12
  char *v44; // rdx
  int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  PERESOURCE *v53; // rax
  __int64 v54; // rdx
  struct _KTHREAD *v55; // rdx
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v62; // r9
  _BYTE v63[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+48h] [rbp-B8h]
  size_t Size; // [rsp+50h] [rbp-B0h]
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  DXGCONTEXT *v68; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  struct _KTHREAD **v70; // [rsp+70h] [rbp-90h]
  struct VIDSCH_SUBMIT_DATA_BASE *v71[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v72[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v73[16]; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A8h] [rbp-58h]
  ADAPTER_RENDER *v75; // [rsp+B0h] [rbp-50h]
  struct CRefCountedBuffer *v76; // [rsp+B8h] [rbp-48h]
  _BYTE v77[16]; // [rsp+C0h] [rbp-40h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+D0h] [rbp-30h] BYREF
  DXGPUSHLOCK *v79[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v80; // [rsp+E8h] [rbp-18h]
  _BYTE v81[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v82[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v83[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v84[88]; // [rsp+158h] [rbp+58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp+B0h] BYREF
  char v86; // [rsp+1E0h] [rbp+E0h]
  struct _EX_RUNDOWN_REF v87[192]; // [rsp+1F0h] [rbp+F0h] BYREF

  v12 = a8;
  Src = a6;
  Size = a4;
  v15 = 0LL;
  v76 = a10;
  v68 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a6);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72, a2, Current, &v68, 0);
  v70 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v18, v17);
  v19 = v70;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v81, v70);
  v20 = (a8 >> 6) & 0xFFFFFF;
  v67 = v20;
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
        *(_QWORD *)(v24 + 24) = 267LL;
        WdLogEvent5_WdError(v24);
      }
    }
  }
  if ( v68 || v15 )
  {
    if ( !v15 )
      v15 = *((_QWORD *)v68 + 2);
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
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73,
      (struct DXGDEVICE *)v15);
    v64 = a1;
    v65 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
    if ( *(_DWORD *)(a1 + 200) != 1 )
    {
      LODWORD(v30) = -1073741130;
LABEL_61:
      v33 = v65 == 0;
      goto LABEL_62;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, v15, 2, v29, 0);
    LODWORD(v30) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v82, 0LL);
    if ( (int)v30 < 0 )
    {
LABEL_60:
      COREACCESS::~COREACCESS((COREACCESS *)v84);
      COREACCESS::~COREACCESS((COREACCESS *)v83);
      goto LABEL_61;
    }
    v31 = 0LL;
    v75 = *(ADAPTER_RENDER **)(a1 + 2680);
    v71[0] = 0LL;
    v71[1] = v75;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v71);
    v32 = v71[0];
    if ( !v71[0] )
    {
      LODWORD(v30) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v71);
      COREACCESS::~COREACCESS((COREACCESS *)v84);
      COREACCESS::~COREACCESS((COREACCESS *)v83);
      v33 = v65 == 0;
LABEL_62:
      if ( !v33 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
      return (unsigned int)v30;
    }
    *((_DWORD *)v71[0] + 1) |= 8u;
    v34 = 0xFFFFFFFFLL;
    v35 = *(_DWORD *)v32 & 0xFFFFFFDF;
    *((_DWORD *)v32 + 29) = -1;
    v36 = a3 & 0x20 | v35;
    v37 = v68;
    *(_DWORD *)v32 = v36 | 0x40000;
    v38 = Size;
    *((_QWORD *)v32 + 68) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 104LL) + 128LL);
    *((_QWORD *)v32 + 70) = a5;
    *((_QWORD *)v32 + 13) = a5;
    *((_QWORD *)v32 + 69) = v38;
    *((_QWORD *)v32 + 12) = v38;
    if ( a11 != -1 )
    {
      if ( v19 )
      {
        if ( a9 )
        {
          if ( Src )
          {
            LODWORD(Size) = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src);
            if ( (_DWORD)Size )
            {
              Object = 0LL;
              Global = DXGGLOBAL::GetGlobal(v38, v34);
              LODWORD(v30) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                               *((DXGSESSIONMGR **)Global + 88),
                               a11,
                               (struct _KPROCESS **)&Object);
              if ( (int)v30 < 0 )
                goto LABEL_58;
              v86 = 0;
              CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
              v40 = v75;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79, (struct _KTHREAD **)v75 + 105, 0);
              DXGPUSHLOCK::AcquireShared(v79[1]);
              v80 = 1;
              PresentHistoryTokenQueue = (union _SLIST_HEADER *)ADAPTER_RENDER::GetPresentHistoryTokenQueue(v40, v79, 0);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
              ObfDereferenceObject(Object);
              if ( v86 )
              {
                KeUnstackDetachProcess(&ApcState);
                v86 = 0;
              }
              if ( PresentHistoryTokenQueue )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v82);
                Alignment = (void *)PresentHistoryTokenQueue[4].Alignment;
                Timeout.QuadPart = -20000000LL;
                KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
                PresentHistoryTokenSlot = (struct _EX_RUNDOWN_REF *)DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot((DXGPRESENTHISTORYTOKENQUEUE *)PresentHistoryTokenQueue);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v82, v44);
                if ( PresentHistoryTokenSlot )
                {
                  memmove(PresentHistoryTokenSlot, Src, (unsigned int)Size);
                  *((_DWORD *)v32 + 1) |= 0x10u;
                  *((_QWORD *)v32 + 12) = PresentHistoryTokenQueue;
                  *((_QWORD *)v32 + 13) = PresentHistoryTokenSlot;
                  memset(v87, 0, 0x5F8uLL);
                  HIDWORD(v87[2].Ptr) = a9;
                  v45 = PrepareIndependentFlipToken(
                          PresentHistoryTokenSlot,
                          v87,
                          (struct _EX_RUNDOWN_REF *)v32,
                          (struct _EX_RUNDOWN_REF *)v37,
                          0LL,
                          v76);
                  v30 = v45;
                  if ( v45 < 0 )
                  {
                    v47 = WdLogNewEntry5_WdWarning(v38, v34, v46);
                    *(_QWORD *)(v47 + 24) = v30;
                    WdLogEvent5_WdWarning(v47);
                    ExpInterlockedPushEntrySList(
                      PresentHistoryTokenQueue + 3,
                      (PSLIST_ENTRY)&PresentHistoryTokenSlot[-2]);
                    v48 = *((_QWORD *)v32 + 69);
                    *((_DWORD *)v32 + 1) &= ~0x10u;
                    *((_QWORD *)v32 + 12) = v48;
                    *((_QWORD *)v32 + 13) = *((_QWORD *)v32 + 70);
                  }
                  else
                  {
                    *((_DWORD *)v32 + 1) |= 0x20u;
                  }
                  v31 = (struct _SLIST_ENTRY *)*((_QWORD *)v32 + 4);
                }
                v12 = a8;
              }
              v19 = v70;
            }
          }
        }
      }
    }
    if ( (int)v30 < 0 )
    {
LABEL_58:
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v71);
      if ( v31 )
        CRefCountedBuffer::RefCountedBufferRelease(v31);
      goto LABEL_60;
    }
    *((_QWORD *)v32 + 96) = a7;
    if ( v37 )
    {
      if ( (*((_DWORD *)v37 + 105) & 0x10) != 0
        && (v49 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v37, 0LL, 0, 1, 0LL, 1), v30 = v49, v49 < 0) )
      {
        v52 = WdLogNewEntry5_WdError(v51, v50);
        *(_QWORD *)(v52 + 24) = v37;
        *(_QWORD *)(v52 + 32) = v30;
        WdLogEvent5_WdError(v52);
      }
      else
      {
        LODWORD(v30) = DXGCONTEXT::SubmitCommandToImplicitQueue(v37, v32);
      }
      goto LABEL_58;
    }
    v53 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v38, v34);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v77, v53, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v77, v54);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 26));
    if ( v67 < *((_DWORD *)v19 + 64) )
    {
      v55 = v19[30];
      v56 = *((_DWORD *)v55 + 4 * v67 + 2);
      if ( ((v12 >> 25) & 0x60) == (*((_BYTE *)v55 + 16 * v67 + 8) & 0x60) && (v56 & 0x2000) == 0 && (v56 & 0x1F) != 0 )
      {
        v57 = v56 & 0x1F;
        if ( (_BYTE)v57 == 11 )
        {
          v59 = *((_QWORD *)v55 + 2 * v67);
          goto LABEL_51;
        }
        v58 = WdLogNewEntry5_WdError(v57, v55);
        *(_QWORD *)(v58 + 24) = 267LL;
        WdLogEvent5_WdError(v58);
      }
    }
    v59 = 0LL;
LABEL_51:
    ExReleasePushLockSharedEx(v19 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( !v59 || *(_QWORD *)(v59 + 16) == v15 )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *(DXGSYNCOBJECT **)(v59 + 32),
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(v59 + 16) + 16LL));
      LODWORD(v30) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v75 + 77) + 8LL) + 1008LL))(
                       v32,
                       *(_QWORD *)(v62 + 768),
                       VidSchSyncObject);
    }
    else
    {
      LODWORD(v30) = -1073741811;
    }
    if ( v77[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v77, v60);
    goto LABEL_58;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v81);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v72);
  return 3221225485LL;
}

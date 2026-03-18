/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03822E0 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382810 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C002F308 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x1C002F3E0 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01DA08C (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02E2BD4 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0330344 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C0334978 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        struct _SLIST_ENTRY *a10,
        unsigned int a11)
{
  char v13; // di
  __int64 v15; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGPROCESS *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  __int64 v29; // r9
  __int64 v30; // rsi
  struct _SLIST_ENTRY *v31; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v32; // r13
  struct DXGPRESENTHISTORYTOKENQUEUE **v33; // r8
  unsigned int v34; // eax
  __int64 *v35; // rdx
  _DWORD *v36; // r12
  __int64 v37; // rcx
  unsigned int SizeOfPresentToken; // eax
  size_t v39; // r15
  struct DXGGLOBAL *Global; // rax
  void **v41; // rdi
  __int64 v42; // r9
  union _SLIST_HEADER *v43; // rsi
  void *Alignment; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *PresentHistoryTokenSlot; // rdi
  char *v46; // rdx
  struct _D3DKMT_PRESENTHISTORYTOKEN **v47; // rax
  struct DXGGLOBAL *v48; // rax
  char *v49; // rbx
  PSLIST_ENTRY v50; // r15
  __int64 (__fastcall *v51)(__int64, __int64, __int64, char *); // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  bool v55; // zf
  volatile signed __int32 *v56; // rbx
  int v57; // eax
  __int64 v58; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN **v59; // rcx
  struct DXGGLOBAL *v60; // rax
  union _SLIST_HEADER *v61; // rdi
  __int64 v62; // rdx
  void *v63; // rax
  int v64; // r11d
  int v65; // r15d
  __int64 v66; // r8
  int v67; // r10d
  int v68; // r12d
  int v69; // r8d
  int v70; // r8d
  int v71; // r8d
  int v72; // r8d
  int v73; // r8d
  int v74; // r8d
  int v75; // r8d
  unsigned int *v76; // r9
  __int128 v77; // xmm0
  int v78; // edi
  int v79; // esi
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  unsigned int v82; // esi
  int *v83; // r9
  __int64 v84; // r15
  unsigned __int64 v85; // rdi
  int v86; // ecx
  DXGCONTEXT *v87; // rcx
  int v88; // eax
  struct DXGGLOBAL *v89; // rax
  struct DXGPROCESS *v90; // r15
  char *v91; // rsi
  __int64 v92; // rdx
  int v93; // ecx
  __int64 v94; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v96; // r9
  struct CRefCountedBuffer *v97; // [rsp+28h] [rbp-158h]
  __int64 v98; // [rsp+30h] [rbp-150h]
  __int64 v99; // [rsp+40h] [rbp-140h]
  char v100; // [rsp+100h] [rbp-80h]
  DXGCONTEXT *v101; // [rsp+108h] [rbp-78h] BYREF
  struct DXGPRESENTHISTORYTOKENQUEUE **v102; // [rsp+110h] [rbp-70h]
  struct _D3DKMT_PRESENTHISTORYTOKEN **v103; // [rsp+118h] [rbp-68h]
  int v104; // [rsp+120h] [rbp-60h]
  void *Src; // [rsp+128h] [rbp-58h]
  char v106[8]; // [rsp+130h] [rbp-50h] BYREF
  __int64 v107; // [rsp+138h] [rbp-48h]
  char v108; // [rsp+140h] [rbp-40h]
  __int64 v109; // [rsp+148h] [rbp-38h] BYREF
  char v110; // [rsp+150h] [rbp-30h]
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // [rsp+158h] [rbp-28h]
  struct VIDSCH_SUBMIT_DATA_BASE *v112[2]; // [rsp+160h] [rbp-20h] BYREF
  unsigned int v113; // [rsp+170h] [rbp-10h]
  unsigned int v114; // [rsp+174h] [rbp-Ch]
  PVOID Object; // [rsp+178h] [rbp-8h] BYREF
  __int128 v116; // [rsp+180h] [rbp+0h]
  _BYTE v117[16]; // [rsp+190h] [rbp+10h] BYREF
  struct DXGPROCESS *v118; // [rsp+1A0h] [rbp+20h]
  ADAPTER_RENDER *v119; // [rsp+1A8h] [rbp+28h]
  PSLIST_ENTRY ListEntry; // [rsp+1B0h] [rbp+30h]
  union _LARGE_INTEGER Timeout; // [rsp+1B8h] [rbp+38h] BYREF
  __int128 v122; // [rsp+1C0h] [rbp+40h]
  __int128 v123; // [rsp+1D0h] [rbp+50h]
  _BYTE v124[16]; // [rsp+1E0h] [rbp+60h] BYREF
  char v125[8]; // [rsp+1F0h] [rbp+70h] BYREF
  char *v126; // [rsp+1F8h] [rbp+78h]
  int v127; // [rsp+200h] [rbp+80h]
  DXGPUSHLOCK *v128[2]; // [rsp+208h] [rbp+88h] BYREF
  int v129; // [rsp+218h] [rbp+98h]
  _BYTE v130[32]; // [rsp+220h] [rbp+A0h] BYREF
  char v131[8]; // [rsp+240h] [rbp+C0h] BYREF
  _BYTE v132[64]; // [rsp+248h] [rbp+C8h] BYREF
  _BYTE v133[88]; // [rsp+288h] [rbp+108h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E0h] [rbp+160h] BYREF
  char v135; // [rsp+310h] [rbp+190h]
  _BYTE v137[64]; // [rsp+320h] [rbp+1A0h] BYREF
  _BYTE v138[64]; // [rsp+360h] [rbp+1E0h] BYREF
  char v139[64]; // [rsp+3A0h] [rbp+220h] BYREF
  _DWORD v140[16]; // [rsp+3E0h] [rbp+260h] BYREF

  Src = a6;
  v13 = a3;
  v109 = a1;
  v114 = a8;
  v15 = 0LL;
  ListEntry = a10;
  v100 = 0;
  v101 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1, (__int64)a6, a3, a4);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117, a2, Current, &v101, 0, 1);
  v118 = DXGPROCESS::GetCurrent(v18, v17, v19, v20);
  v21 = v118;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v130, v118);
  v22 = (a8 >> 6) & 0xFFFFFF;
  v113 = v22;
  if ( (unsigned int)v22 < *((_DWORD *)v21 + 74) )
  {
    v23 = *((_QWORD *)v21 + 35);
    v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
    if ( ((a8 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
    {
      if ( (v24 & 0x1F) == 0xB )
      {
        v25 = *(_QWORD *)(v23 + 16LL * (unsigned int)v22);
        if ( v25 )
          v15 = *(_QWORD *)(v25 + 16);
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  if ( v101 || v15 )
  {
    if ( !v15 )
      v15 = *((_QWORD *)v101 + 2);
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
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v130);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v124,
      (struct DXGDEVICE *)v15);
    v126 = 0LL;
    v127 = 0;
    if ( v101 )
    {
      v126 = (char *)v101 + 448;
      DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)v101 + 448));
      v127 = 2;
    }
    v107 = a1;
    v108 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
    if ( *(_DWORD *)(a1 + 200) == 1 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v131, v15, 2, v29, 0);
      LODWORD(v30) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v131, 0LL);
      if ( (int)v30 < 0 )
        goto LABEL_116;
      v119 = *(ADAPTER_RENDER **)(a1 + 2800);
      v31 = 0LL;
      v112[1] = v119;
      v112[0] = 0LL;
      CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v112);
      v32 = v112[0];
      if ( v112[0] )
      {
        v33 = (struct DXGPRESENTHISTORYTOKENQUEUE **)((char *)v112[0] + 560);
        v34 = *(_DWORD *)v112[0] & 0xFFFFFFDF;
        v102 = (struct DXGPRESENTHISTORYTOKENQUEUE **)((char *)v112[0] + 560);
        v35 = (__int64 *)((char *)v112[0] + 104);
        v103 = (struct _D3DKMT_PRESENTHISTORYTOKEN **)((char *)v112[0] + 104);
        v36 = (_DWORD *)((char *)v112[0] + 4);
        *((_DWORD *)v112[0] + 1) |= 8u;
        *(_DWORD *)v32 = v13 & 0x20 | v34 | 0x40000;
        *((_DWORD *)v32 + 29) = -1;
        *((_QWORD *)v32 + 70) = *(_QWORD *)(*(_QWORD *)(v15 + 112) + 104LL) + 160LL;
        v37 = a5;
        *((_DWORD *)v32 + 142) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 112) + 104LL) + 392LL);
        *((_QWORD *)v32 + 74) = a7;
        *((_QWORD *)v32 + 72) = a4;
        *((_QWORD *)v32 + 73) = a5;
        *((_QWORD *)v32 + 12) = a4;
        *((_QWORD *)v32 + 13) = a5;
        if ( a11 != -1 && v118 && a9 && Src )
        {
          SizeOfPresentToken = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src);
          v39 = SizeOfPresentToken;
          if ( SizeOfPresentToken )
          {
            Object = 0LL;
            Global = DXGGLOBAL_GetGlobal();
            LODWORD(v30) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                             *((DXGSESSIONMGR **)Global + 122),
                             a11,
                             (struct _KPROCESS **)&Object);
            if ( (int)v30 < 0 )
              goto LABEL_114;
            v135 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v41 = (void **)v119;
            DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v128, (struct _KTHREAD **)v119 + 108, 0);
            DXGPUSHLOCK::AcquireShared(v128[1]);
            v129 = 1;
            PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(v41, v128, 0LL, v42);
            v43 = (union _SLIST_HEADER *)PresentHistoryTokenQueue;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v128);
            ObfDereferenceObject(Object);
            if ( v135 )
            {
              KeUnstackDetachProcess(&ApcState);
              v135 = 0;
            }
            if ( v43 )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)v131);
              Alignment = (void *)v43[4].Alignment;
              Timeout.QuadPart = -20000000LL;
              KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
              PresentHistoryTokenSlot = (struct _D3DKMT_PRESENTHISTORYTOKEN *)DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot(v43);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v131, v46);
              if ( PresentHistoryTokenSlot )
              {
                memmove(PresentHistoryTokenSlot, Src, v39);
                v47 = v103;
                *v36 |= 0x10u;
                *((_QWORD *)v32 + 12) = v43;
                *v47 = PresentHistoryTokenSlot;
                v48 = DXGGLOBAL_GetGlobal();
                v49 = (char *)v48 + 1168;
                ++*((_DWORD *)v48 + 297);
                v50 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v48 + 73);
                if ( !v50 )
                {
                  v51 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v49 + 6);
                  v52 = *((unsigned int *)v49 + 11);
                  v53 = *((unsigned int *)v49 + 10);
                  v54 = *((unsigned int *)v49 + 9);
                  ++*((_DWORD *)v49 + 6);
                  v50 = (PSLIST_ENTRY)v51(v54, v52, v53, v49);
                  if ( !v50 )
                  {
                    LODWORD(v30) = -1073741801;
                    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v112);
                    COREACCESS::~COREACCESS((COREACCESS *)v133);
                    COREACCESS::~COREACCESS((COREACCESS *)v132);
                    v55 = v108 == 0;
LABEL_124:
                    if ( !v55 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
                    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v125);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v124);
                    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
LABEL_127:
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
                    return (unsigned int)v30;
                  }
                }
                memset(v50, 0, 0x5F8uLL);
                v56 = (volatile signed __int32 *)ListEntry;
                HIDWORD(v50[1].Next) = a9;
                *((_BYTE *)&v50[94].Next + 8) = 1;
                *((_QWORD *)&v50[93].Next + 1) = &v101;
                v57 = PrepareIndependentFlipToken(
                        PresentHistoryTokenSlot,
                        (struct DXGK_PRESENT_PARAMS *)v50,
                        v32,
                        v101,
                        0LL,
                        (struct CRefCountedBuffer *)v56);
                LODWORD(v30) = v57;
                if ( v57 < 0 )
                {
                  WdLogSingleEntry1(3LL, v57);
                  ExpInterlockedPushEntrySList(
                    (PSLIST_HEADER)PresentHistoryTokenQueue + 3,
                    (PSLIST_ENTRY)(&PresentHistoryTokenSlot[-1].Token.SurfaceComplete + 131));
                  v58 = *((_QWORD *)v32 + 72);
                  v59 = v103;
                  *v36 &= ~0x10u;
                  *((_QWORD *)v32 + 12) = v58;
                  *v59 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v32 + 73);
                }
                else
                {
                  *v36 |= 0x20u;
                  if ( v56 )
                  {
                    _InterlockedIncrement(v56 + 3);
                    v32 = v112[0];
                    v100 = 1;
                  }
                  *((_QWORD *)v32 + 100) = v56;
                }
                v31 = (struct _SLIST_ENTRY *)*((_QWORD *)v32 + 4);
                v60 = DXGGLOBAL_GetGlobal();
                v61 = (union _SLIST_HEADER *)((char *)v60 + 1168);
                ++*((_DWORD *)v60 + 299);
                if ( ExQueryDepthSList((PSLIST_HEADER)v60 + 73) < *((_WORD *)v60 + 592) )
                {
                  ExpInterlockedPushEntrySList(v61, v50);
                }
                else
                {
                  ++LODWORD(v61[2].Alignment);
                  ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v61[3].Region)(v50, v61);
                }
                if ( (int)v30 < 0 )
                  goto LABEL_114;
              }
            }
          }
          v33 = v102;
          v35 = (__int64 *)v103;
        }
        if ( !bTracingEnabled )
        {
LABEL_89:
          v87 = v101;
          if ( v101 )
          {
            if ( (*((_DWORD *)v101 + 101) & 0x10) != 0 )
            {
              v88 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v101, 0LL, 0, 1, 0LL, 1);
              v30 = v88;
              if ( v88 < 0 )
              {
                WdLogSingleEntry2(2LL, v101, v88);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"DXGCONTEXT: 0x%I64x Failed to SynchronizeImplicitQueueWithRenderQueues, returning",
                  (__int64)v101,
                  v30,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_114;
              }
              v87 = v101;
            }
            LODWORD(v30) = DXGCONTEXT::SubmitCommandToImplicitQueue(v87, v32);
LABEL_114:
            CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v112);
            if ( v31 )
              CRefCountedBuffer::RefCountedBufferRelease(v31);
LABEL_116:
            COREACCESS::~COREACCESS((COREACCESS *)v133);
            COREACCESS::~COREACCESS((COREACCESS *)v132);
            if ( v108 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v125);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v124);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
            if ( (int)v30 >= 0 )
              goto LABEL_127;
            goto LABEL_119;
          }
          v89 = DXGGLOBAL_GetGlobal();
          DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v109, v89, 0);
          DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v109);
          v90 = v118;
          v91 = (char *)v118 + 248;
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v118 + 248));
          if ( v113 < *((_DWORD *)v90 + 74) )
          {
            v92 = *((_QWORD *)v90 + 35);
            v93 = *(_DWORD *)(v92 + 16LL * v113 + 8);
            if ( ((v114 >> 25) & 0x60) == (*(_BYTE *)(v92 + 16LL * v113 + 8) & 0x60)
              && (v93 & 0x2000) == 0
              && (v93 & 0x1F) != 0 )
            {
              if ( (v93 & 0x1F) == 0xB )
              {
                v94 = *(_QWORD *)(v92 + 16LL * v113);
LABEL_102:
                ExReleasePushLockSharedEx(v91, 0LL);
                KeLeaveCriticalRegion();
                if ( v94 && *(_QWORD *)(v94 + 16) != v15 )
                {
                  LODWORD(v30) = -1073741811;
                  if ( v110 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v109);
                  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v112);
                  if ( v31 )
                    CRefCountedBuffer::RefCountedBufferRelease(v31);
                  COREACCESS::~COREACCESS((COREACCESS *)v133);
                  COREACCESS::~COREACCESS((COREACCESS *)v132);
                  if ( v108 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
                  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v125);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v124);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
LABEL_119:
                  if ( v100 )
                    CRefCountedBuffer::RefCountedBufferRelease(ListEntry);
                  goto LABEL_127;
                }
                VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                     *(DXGSYNCOBJECT **)(v94 + 32),
                                     *(struct ADAPTER_RENDER **)(*(_QWORD *)(v94 + 16) + 16LL));
                LODWORD(v30) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v119 + 78) + 8LL) + 1008LL))(
                                 v32,
                                 *(_QWORD *)(v96 + 768),
                                 VidSchSyncObject);
                if ( v110 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v109);
                goto LABEL_114;
              }
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
          v94 = 0LL;
          goto LABEL_102;
        }
        if ( (*v36 & 0x10) == 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          {
            LODWORD(v99) = 0;
            LODWORD(v98) = 0;
            LODWORD(v97) = 2;
            McTemplateK0ppqqxdqp_EtwWriteTransfer(
              v37,
              &EventSubmitPresentHistory,
              (__int64)v33,
              v109,
              *v35,
              v97,
              v98,
              0LL,
              v99,
              0,
              *v33);
          }
          goto LABEL_89;
        }
        v62 = *v35;
        PresentHistoryTokenQueue = *v33;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
          goto LABEL_89;
        LOBYTE(v63) = 0;
        LODWORD(v102) = 0;
        v64 = 0;
        v104 = 0;
        v65 = 0;
        v66 = 0LL;
        Src = 0LL;
        v67 = 0;
        v68 = 0;
        v116 = 0LL;
        v123 = 0LL;
        v122 = 0LL;
        if ( !v62 )
          goto LABEL_88;
        v64 = *(_DWORD *)v62;
        v69 = *(_DWORD *)v62;
        v65 = *(_DWORD *)(v62 + 4);
        LODWORD(v103) = v65;
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( !v71 )
          {
            v66 = *(_QWORD *)(v62 + 24);
            goto LABEL_72;
          }
          v72 = v71 - 1;
          if ( !v72 )
          {
            v66 = *(_QWORD *)(v62 + 16);
            goto LABEL_70;
          }
          v73 = v72 - 1;
          if ( !v73 || (v74 = v73 - 1) == 0 || (v75 = v74 - 1) == 0 || (unsigned int)(v75 - 1) < 2 )
          {
            v66 = *(_QWORD *)(v62 + 16);
            goto LABEL_63;
          }
          v66 = 0LL;
          if ( v64 != 1 )
          {
            if ( v64 != 2 )
            {
              if ( v64 != 3 )
              {
LABEL_63:
                v76 = 0LL;
                if ( v64 != 1 )
                {
                  if ( v64 != 2 )
                  {
                    if ( v64 == 6 )
                    {
                      v67 = *(_DWORD *)(v62 + 24);
                      goto LABEL_79;
                    }
                    if ( v64 == 9 )
                    {
                      v67 = *(_DWORD *)(v62 + 32);
                      goto LABEL_79;
                    }
                    goto LABEL_78;
                  }
LABEL_73:
                  v77 = *(_OWORD *)(v62 + 100);
                  v63 = *(void **)(v62 + 116);
                  Src = v63;
                  v116 = v77;
                  v78 = *(_DWORD *)(v62 + 756);
                  v79 = *(_DWORD *)(v62 + 760);
                  v67 = *(_DWORD *)(v62 + 60);
                  LODWORD(v102) = v78;
                  v104 = v79;
                  v80 = *(_OWORD *)(v62 + 764);
                  v123 = *(_OWORD *)(v62 + 740);
                  v122 = v80;
                  if ( v64 == 2 )
                  {
                    v68 = *(_DWORD *)(v62 + 804);
                    LODWORD(v102) = v78;
                    v104 = v79;
                  }
LABEL_79:
                  if ( v76 )
                  {
                    v82 = *v76;
                    if ( *v76 >= 0x10 )
                    {
                      v82 = 16;
                    }
                    else if ( !v82 )
                    {
LABEL_87:
                      McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
                        HIDWORD(Src),
                        v62,
                        v66,
                        v109,
                        v62,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v116,
                        SBYTE8(v116),
                        SBYTE4(v116),
                        SBYTE12(v116),
                        (char)v63,
                        SBYTE4(Src),
                        v82,
                        (__int64)v140,
                        (__int64)v139,
                        (__int64)v138,
                        (__int64)v137,
                        v123,
                        SBYTE8(v123),
                        SBYTE4(v123),
                        SBYTE12(v123),
                        (char)v102,
                        v104,
                        v122,
                        SBYTE8(v122),
                        SBYTE4(v122),
                        SBYTE12(v122),
                        (char)PresentHistoryTokenQueue);
                      goto LABEL_89;
                    }
                    v83 = (int *)(v76 + 3);
                    v84 = v82;
                    v85 = 0LL;
                    do
                    {
                      v140[v85 / 4] = *(v83 - 2);
                      v85 += 4LL;
                      v86 = *v83;
                      v83 += 4;
                      *(_DWORD *)&v138[v85 + 60] = v86;
                      *(_DWORD *)&v137[v85 + 60] = *(v83 - 5);
                      *(_DWORD *)&v137[v85 - 4] = *(v83 - 3);
                      --v84;
                    }
                    while ( v84 );
                    LOBYTE(v65) = (_BYTE)v103;
                    goto LABEL_87;
                  }
LABEL_88:
                  LODWORD(v99) = v67;
                  LODWORD(v98) = v65;
                  LODWORD(v97) = v64;
                  McTemplateK0ppqqxdqp_EtwWriteTransfer(
                    (__int64)PresentHistoryTokenQueue,
                    &EventSubmitPresentHistory,
                    v66,
                    v109,
                    v62,
                    v97,
                    v98,
                    v66,
                    v99,
                    v68,
                    PresentHistoryTokenQueue);
                  goto LABEL_89;
                }
                goto LABEL_77;
              }
LABEL_70:
              v76 = (unsigned int *)(v62 + 40);
LABEL_78:
              v67 = 0;
              goto LABEL_79;
            }
LABEL_72:
            v76 = (unsigned int *)(v62 + 820);
            goto LABEL_73;
          }
        }
        else
        {
          v66 = *(_QWORD *)(v62 + 16);
        }
        v76 = (unsigned int *)(v62 + 56);
LABEL_77:
        v81 = *(_OWORD *)(v62 + 32);
        v63 = *(void **)(v62 + 48);
        Src = v63;
        v116 = v81;
        goto LABEL_78;
      }
      LODWORD(v30) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v112);
      COREACCESS::~COREACCESS((COREACCESS *)v133);
      COREACCESS::~COREACCESS((COREACCESS *)v132);
    }
    else
    {
      LODWORD(v30) = -1073741130;
    }
    v55 = v108 == 0;
    goto LABEL_124;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v130);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v117);
  return 3221225485LL;
}

/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02DC4C0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0001C18 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C001A49C (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C001AC18 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C002F776 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00574F4 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C015A224 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C015A2D4 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C015A36C (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01E5974 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C01EC7EC (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v7; // rdi
  struct DXGGLOBAL *Global; // rax
  char *v9; // rsi
  PSLIST_ENTRY v10; // rbx
  D3DKMT_HANDLE v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGADAPTER **v14; // rax
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  struct DXGALLOCATION *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int Next_high; // esi
  char *v27; // r13
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  struct DXGALLOCATION *v31; // rdx
  DXGPRESENT *v32; // rax
  DXGPRESENT *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v36; // rdx
  int v37; // ecx
  __int64 v38; // rax
  int v39; // esi
  int v40; // eax
  COREDEVICEACCESS *v41; // r12
  int v42; // eax
  struct DXGPRESENTMUTEX *v43; // r8
  __int64 v44; // r12
  unsigned __int8 v45; // si
  __int64 v46; // r13
  unsigned int *v47; // r13
  const RECT **v48; // r12
  int updated; // eax
  UINT v50; // eax
  ADAPTER_DISPLAY *v51; // r13
  int v52; // ecx
  int CurrentOrientation; // eax
  UINT Value; // eax
  UINT i; // r15d
  const RECT *v56; // rcx
  const RECT *v57; // rcx
  __int64 v58; // r8
  struct _VIDMM_DMA_BUFFER *v59; // r12
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  UINT v62; // esi
  __int64 v63; // rdx
  unsigned int v64; // r10d
  unsigned int v65; // r9d
  __int64 v66; // rcx
  struct COREDEVICEACCESS *v67; // r14
  struct DXGGLOBAL *v68; // rax
  char *v69; // rdi
  __int64 (__fastcall *v71)(__int64, __int64, __int64, char *); // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rcx
  int v75; // r9d
  __int64 v76; // r8
  int v77; // ecx
  int v78; // r9d
  __int64 v79; // r8
  int v80; // ecx
  char *v81; // rdx
  const RECT *DdiSubRectList; // r15
  __int64 v83; // rsi
  UINT v84; // r12d
  int v85; // r13d
  _QWORD *v86; // rbx
  int v87; // edi
  __int64 v88; // rsi
  LONG left; // r8d
  LONG v90; // edx
  LONG top; // eax
  struct DXGCONTEXT **v92; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v93; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v95; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-70h] BYREF
  ADAPTER_DISPLAY *v97; // [rsp+B8h] [rbp-68h]
  __int64 v98; // [rsp+C0h] [rbp-60h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v99[2]; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v100; // [rsp+D8h] [rbp-48h] BYREF
  struct DXGHWQUEUE *v101; // [rsp+E0h] [rbp-40h] BYREF
  PSLIST_ENTRY v102; // [rsp+E8h] [rbp-38h]
  COREDEVICEACCESS *v103; // [rsp+F0h] [rbp-30h]
  DXGADAPTERSTOPRESETLOCKSHARED *v104; // [rsp+F8h] [rbp-28h]
  __int64 v105; // [rsp+100h] [rbp-20h]
  _QWORD *v106; // [rsp+108h] [rbp-18h]
  DXGCONTEXT *v107; // [rsp+110h] [rbp-10h]
  _BYTE v108[24]; // [rsp+118h] [rbp-8h] BYREF
  _BYTE v109[16]; // [rsp+130h] [rbp+10h] BYREF
  struct _DXGKARG_PRESENT v110; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v112[64]; // [rsp+1F0h] [rbp+D0h] BYREF
  _BYTE v113[64]; // [rsp+230h] [rbp+110h] BYREF
  _BYTE v114[64]; // [rsp+270h] [rbp+150h] BYREF
  _BYTE v115[64]; // [rsp+2B0h] [rbp+190h] BYREF

  v104 = a5;
  v7 = this;
  v100.QuadPart = (LONGLONG)a6;
  v103 = a4;
  v107 = this;
  Global = DXGGLOBAL_GetGlobal();
  v9 = (char *)Global + 1168;
  ++*((_DWORD *)Global + 297);
  v102 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 73);
  v10 = v102;
  if ( !v102 )
  {
    v71 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v9 + 6);
    v72 = *((unsigned int *)v9 + 11);
    v73 = *((unsigned int *)v9 + 10);
    v74 = *((unsigned int *)v9 + 9);
    ++*((_DWORD *)v9 + 6);
    v102 = (PSLIST_ENTRY)v71(v74, v72, v73, v9);
    v10 = v102;
    if ( !v102 )
    {
      v39 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v39;
    }
  }
  memset(v10, 0, 0x5F8uLL);
  v101 = 0LL;
  memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
  v10[94].Next = (struct _SLIST_ENTRY *)&v101;
  if ( a2->hHwQueues )
    v11 = *a2->hHwQueues;
  else
    v11 = 0;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v109,
    v11,
    *(struct DXGPROCESS **)(*((_QWORD *)v7 + 2) + 40LL),
    &v101,
    1);
  v12 = *((_QWORD *)v7 + 2);
  v13 = *(_QWORD *)(v12 + 1848);
  v105 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 88LL);
  v14 = *(DXGADAPTER ***)(v13 + 2792);
  v97 = (ADAPTER_DISPLAY *)v14;
  if ( !v14 || !DXGADAPTER::IsCoreResourceSharedOwner(v14[2]) )
  {
    WdLogSingleEntry1(1LL, 6931LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayCore != NULL) && pDisplayCore->IsCoreResourceSharedOwner()",
      6931LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 6932LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      6932LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *((_QWORD *)&v10[4].Next + 1);
  v106 = &v10[4].Next + 1;
  if ( v15 )
  {
    if ( LODWORD(v10[4].Next) )
    {
      v16 = *((_DWORD *)&v10[5].Next + 2);
      if ( (((unsigned __int8)v16 ^ (unsigned __int8)(v16 >> 1)) & 1) != 0 && (v16 & 0x63C) == 0 )
      {
        memset(&v110, 0, sizeof(v110));
        v17 = *((_DWORD *)&v10[1].Next + 2);
        v96 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
        v18 = v96 + 248;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v96 + 248, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v75 = *(_DWORD *)(v96 + 272);
            if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, v75);
          }
          ExAcquirePushLockSharedEx(v18, 0LL);
        }
        v21 = (v17 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v21 < *(_DWORD *)(v96 + 296) )
        {
          v76 = *(_QWORD *)(v96 + 280);
          v77 = *(_DWORD *)(v76 + 16 * v21 + 8);
          if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v76 + 16 * v21 + 8) & 0x60)
            && (v77 & 0x2000) == 0
            && (v77 & 0x1F) != 0 )
          {
            if ( (v77 & 0x1F) == 5 )
            {
              v22 = *(struct DXGALLOCATION **)(v76 + 16LL * (unsigned int)v21);
              goto LABEL_17;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v22 = 0LL;
LABEL_17:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98, v22);
        ExReleasePushLockSharedEx(v18, 0LL);
        KeLeaveCriticalRegion();
        if ( !v98 )
        {
          v39 = -1073741811;
          WdLogSingleEntry5(
            2LL,
            -1073741811LL,
            v7,
            *((_QWORD *)&v10[4].Next + 1),
            LODWORD(v10[4].Next),
            *((unsigned int *)&v10[1].Next + 2));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x 0x%I64x fails Present invalid parameters 0x%I64x 0x%I64x 0x%I64x",
            -1073741811LL,
            (__int64)v7,
            *((_QWORD *)&v10[4].Next + 1),
            LODWORD(v10[4].Next),
            *((unsigned int *)&v10[1].Next + 2));
          goto LABEL_83;
        }
        if ( (*(_DWORD *)(&v10[5].Next + 1) & 1) != 0 )
        {
          Next_high = HIDWORD(v10[1].Next);
          v99[0] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)v7 + 2) + 40LL);
          v27 = (char *)v99[0] + 248;
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v78 = *((_DWORD *)v27 + 6);
              if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v28, (const EVENT_DESCRIPTOR *)"g", v29, v78);
            }
            ExAcquirePushLockSharedEx(v27, 0LL);
          }
          v30 = (Next_high >> 6) & 0xFFFFFF;
          if ( (unsigned int)v30 < *((_DWORD *)v99[0] + 74)
            && (v79 = *((_QWORD *)v99[0] + 35),
                v80 = *(_DWORD *)(v79 + 16 * v30 + 8),
                ((Next_high >> 25) & 0x60) == (*(_BYTE *)(v79 + 16 * v30 + 8) & 0x60))
            && (v80 & 0x2000) == 0
            && (v80 & 0x1F) != 0 )
          {
            if ( (v80 & 0x1F) == 5 )
            {
              v31 = *(struct DXGALLOCATION **)(v79 + 16LL * (unsigned int)v30);
            }
            else
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
              v31 = 0LL;
            }
          }
          else
          {
            v31 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v96, v31);
          ExReleasePushLockSharedEx(v27, 0LL);
          KeLeaveCriticalRegion();
          if ( !v96 )
          {
            v39 = -1073741811;
            WdLogSingleEntry3(2LL, -1073741811LL, v7, HIDWORD(v10[1].Next));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x 0x%I64x fails Present invalid source allocation 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              HIDWORD(v10[1].Next),
              0LL,
              0LL);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v96);
            goto LABEL_83;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v96);
        }
        if ( !*((_QWORD *)v7 + 19) )
        {
          v32 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL, v23, v24, v25);
          if ( v32 )
          {
            v33 = DXGPRESENT::DXGPRESENT(v32, 1u);
            *((_QWORD *)v7 + 19) = v33;
            if ( v33 )
              goto LABEL_29;
          }
          else
          {
            *((_QWORD *)v7 + 19) = 0LL;
          }
          v39 = -1073741801;
          WdLogSingleEntry4(
            6LL,
            -1073741801LL,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
            *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
            v7);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
            -1073741801LL,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
            *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
            (__int64)v7,
            0LL);
          goto LABEL_83;
        }
LABEL_29:
        v34 = *((_QWORD *)v7 + 2);
        v99[0] = 0LL;
        v99[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v34 + 16);
        CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v99);
        v36 = v99[0];
        if ( !v99[0] )
        {
          WdLogSingleEntry1(6LL, 6996LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate VidSchSubmitData",
            6996LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v39 = -1073741801;
          goto LABEL_82;
        }
        v37 = *(_DWORD *)v99[0] | 0x10000;
        *(_DWORD *)v99[0] = v37;
        if ( !_bittest((const signed __int32 *)&v10[5].Next + 2, 0xEu) )
        {
          v37 |= 1u;
          *(_DWORD *)v36 = v37;
        }
        *(_DWORD *)v36 = v37 | 0x100;
        LOBYTE(v35) = 1;
        v38 = *((_QWORD *)v7 + 2);
        v95 = 0LL;
        v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 648LL) + 8LL)
                                                                                              + 504LL))(
                *((_QWORD *)v7 + 29),
                0LL,
                v35,
                &v95);
        if ( v39 < 0 )
          goto LABEL_82;
        if ( !v95 )
        {
          WdLogSingleEntry1(1LL, 7014LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmDmaBuffer", 7014LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGPRESENTMUTEX::DXGPRESENTMUTEX(
          (DXGPRESENTMUTEX *)v108,
          *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
        v40 = *((_DWORD *)&v10[5].Next + 2);
        if ( (v40 & 0x4000) == 0 )
        {
          v41 = v103;
          COREDEVICEACCESS::Release(v103);
          DXGADAPTERSTOPRESETLOCKSHARED::Release(v104);
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v108);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v104);
          v42 = COREDEVICEACCESS::AcquireShared(v41, 0LL);
          v39 = v42;
          if ( v42 < 0 )
          {
            WdLogSingleEntry2(4LL, v42, v7);
            COREDEVICEACCESS::AcquireSharedUncheck(v41, v81);
            (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                               + 648LL)
                                                                                   + 8LL)
                                                                       + 512LL))(
              v95,
              0LL);
            goto LABEL_81;
          }
          v44 = v105;
          v45 = 0;
          if ( v105 )
          {
            v46 = *((_QWORD *)v7 + 19);
            if ( *(_DWORD *)(v46 + 8) != (*(unsigned int (**)(void))(v105 + 8))() )
            {
              *(_DWORD *)(v46 + 8) = (*(__int64 (**)(void))(v44 + 8))();
              DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL, 4294967293LL);
              v45 = 1;
            }
          }
          DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v43, v45);
          v40 = *((_DWORD *)&v10[5].Next + 2);
        }
        v47 = (unsigned int *)&v10[4];
        v48 = (const RECT **)(&v10[4].Next + 1);
        if ( (v40 & 1) == 0
          || HIDWORD(v10[1].Next) == *((_DWORD *)&v10[1].Next + 2)
          || (*(_DWORD *)(*(_QWORD *)(v98 + 48) + 4LL) & 2) == 0 )
        {
          goto LABEL_46;
        }
        updated = DxgkCddUpdatePresentRects(v97, a3, (const struct tagRECT **)&v10[4].Next + 1, (unsigned int *)&v10[4]);
        v39 = updated;
        if ( updated < 0 )
        {
          WdLogSingleEntry3(4LL, updated, *((_QWORD *)v7 + 2), a3);
LABEL_122:
          (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                             + 648LL)
                                                                                 + 8LL)
                                                                     + 512LL))(
            v95,
            0LL);
          v95 = 0LL;
          goto LABEL_81;
        }
        if ( *v47 )
        {
LABEL_46:
          v39 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), *v47);
          if ( v39 >= 0 )
          {
            v110.DstRect = (RECT)v10[2];
            v50 = *v47;
            v51 = v97;
            v110.SubRectCnt = v50;
            v52 = *((_DWORD *)&v10[5].Next + 2);
            if ( (v52 & 0x4000) != 0 )
            {
              Value = v110.Flags.Value;
            }
            else
            {
              CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(v97, a3, 1LL);
              Value = (CurrentOrientation != 1 ? 0x80 : 0) | v110.Flags.Value & 0xFFFFFF7F;
              v110.Flags.Value = Value;
              v52 = *((_DWORD *)&v10[5].Next + 2);
            }
            if ( (v52 & 1) == 0 )
            {
              if ( (v52 & 2) == 0 )
              {
                WdLogSingleEntry1(1LL, 7217LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPresent->Flags.ColorFill",
                  7217LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                Value = v110.Flags.Value;
              }
              v110.Flags.Value = Value | 2;
              v110.Color = *((_DWORD *)&v10[1].Next + 3);
              v110.pDstSubRects = *v48;
              goto LABEL_67;
            }
            v110.Flags.Value = Value | 1;
            v110.SrcRect = (RECT)v10[3];
            if ( HIDWORD(v10[1].Next) != *((_DWORD *)&v10[1].Next + 2) )
            {
              v110.pDstSubRects = *v48;
LABEL_52:
              for ( i = 0; i < v110.SubRectCnt; ++i )
              {
                v56 = *v48;
                if ( (*v48)[i].left >= (*v48)[i].right )
                {
                  WdLogSingleEntry1(1LL, 7201LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPresent->pSrcSubRects[i].left < pPresent->pSrcSubRects[i].right",
                    7201LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v56 = *v48;
                }
                if ( v56[i].top >= v56[i].bottom )
                {
                  WdLogSingleEntry1(1LL, 7202LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPresent->pSrcSubRects[i].top < pPresent->pSrcSubRects[i].bottom",
                    7202LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
                {
                  v57 = *v48;
                  if ( (*v48)[i].left < v110.SrcRect.left )
                  {
                    WdLogSingleEntry1(1LL, 7207LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pPresent->pSrcSubRects[i].left >= PresentDdiArg.SrcRect.left",
                      7207LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v57 = *v48;
                  }
                  if ( v57[i].right > v110.SrcRect.right )
                  {
                    WdLogSingleEntry1(1LL, 7208LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pPresent->pSrcSubRects[i].right <= PresentDdiArg.SrcRect.right",
                      7208LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v57 = *v48;
                  }
                  if ( v57[i].top < v110.SrcRect.top )
                  {
                    WdLogSingleEntry1(1LL, 7209LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pPresent->pSrcSubRects[i].top >= PresentDdiArg.SrcRect.top",
                      7209LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v57 = *v48;
                  }
                  if ( v57[i].bottom > v110.SrcRect.bottom )
                  {
                    WdLogSingleEntry1(1LL, 7210LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pPresent->pSrcSubRects[i].bottom <= PresentDdiArg.SrcRect.bottom",
                      7210LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
              }
LABEL_67:
              if ( bTracingEnabled )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                               + 648LL)
                                                                   + 8LL)
                                                       + 352LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 656LL),
                  *((unsigned int *)&v10[1].Next + 2));
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                               + 648LL)
                                                                   + 8LL)
                                                       + 352LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 656LL),
                  HIDWORD(v10[1].Next));
                v59 = v95;
                pDstSubRects = v110.pDstSubRects;
                SubRectCnt = v110.SubRectCnt;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    HIDWORD(*(_QWORD *)&v110.DstRect.left),
                    HIDWORD(*(_QWORD *)&v110.DstRect.right),
                    HIDWORD(*(_QWORD *)&v110.SrcRect.left),
                    0LL,
                    v95);
                v62 = 0;
                if ( SubRectCnt )
                {
                  while ( 1 )
                  {
                    v63 = SubRectCnt - v62;
                    if ( (unsigned int)v63 > 0x10 )
                      break;
                    v64 = SubRectCnt - v62;
                    if ( (_DWORD)v63 )
                      goto LABEL_73;
LABEL_75:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    {
                      LODWORD(v93) = v64;
                      LODWORD(v92) = SubRectCnt - v62 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)v115,
                        v63,
                        v58,
                        v59,
                        v92,
                        v93,
                        v115,
                        v114,
                        v113,
                        v112);
                    }
                    v62 += 16;
                    if ( v62 >= SubRectCnt )
                      goto LABEL_78;
                  }
                  v64 = 16;
LABEL_73:
                  v58 = 0LL;
                  v65 = 0;
                  do
                  {
                    v66 = v65 + v62;
                    ++v65;
                    v66 *= 2LL;
                    v58 += 4LL;
                    *(_DWORD *)&v114[v58 + 60] = *(&pDstSubRects->left + 2 * v66);
                    *(_DWORD *)&v113[v58 + 60] = *(&pDstSubRects->right + 2 * v66);
                    *(_DWORD *)&v112[v58 + 60] = *(&pDstSubRects->top + 2 * v66);
                    *(_DWORD *)&v112[v58 - 4] = *(&pDstSubRects->bottom + 2 * v66);
                  }
                  while ( v65 < v64 );
                  goto LABEL_75;
                }
              }
LABEL_78:
              v67 = v103;
              v39 = DXGCONTEXT::SubmitPresent(
                      v7,
                      (const struct _D3DKMT_PRESENT *)v10,
                      (struct DXGHWQUEUE **)v10[94].Next,
                      *((_DWORD *)&v10[5].Next + 3),
                      (struct DXGCONTEXT **)v100.QuadPart,
                      0LL,
                      HIDWORD(v10[1].Next),
                      *((_DWORD *)&v10[1].Next + 2),
                      &v110,
                      0LL,
                      v95,
                      v99[0],
                      D3DDDIFMT_A8B8G8R8,
                      v103);
              if ( v39 >= 0 && *((_DWORD *)&v10[22].Next + 2) == 1 )
              {
                v100.QuadPart = -100000LL;
                v39 = SubmitPresentHistoryToken(
                        (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v10[22].Next + 1),
                        v67,
                        v104,
                        0LL,
                        0,
                        &v100,
                        (struct DXGK_PRESENT_PARAMS *)v10,
                        0LL,
                        v7,
                        0LL,
                        0LL);
              }
              goto LABEL_81;
            }
            if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) != 0
              || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v51, a3) )
            {
              DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
              v110.pDstSubRects = DdiSubRectList;
              if ( v110.DstRect.right - v110.DstRect.left != v110.SrcRect.right - v110.SrcRect.left )
              {
                WdLogSingleEntry1(1LL, 7162LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.right - PresentDdiArg.DstRect.left == PresentDdiArg.SrcRect.right - Pre"
                            "sentDdiArg.SrcRect.left",
                  7162LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v110.DstRect.bottom - v110.DstRect.top != v110.SrcRect.bottom - v110.SrcRect.top )
              {
                WdLogSingleEntry1(1LL, 7165LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.bottom - PresentDdiArg.DstRect.top == PresentDdiArg.SrcRect.bottom - Pr"
                            "esentDdiArg.SrcRect.top",
                  7165LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v110.SrcRect.left >= v110.SrcRect.right )
              {
                WdLogSingleEntry1(1LL, 7167LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.left < PresentDdiArg.SrcRect.right",
                  7167LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v110.SrcRect.left < 0 )
              {
                WdLogSingleEntry1(1LL, 7168LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.left >= 0",
                  7168LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v83 = 4000LL * a3;
              if ( v110.SrcRect.right > *(_DWORD *)(*((_QWORD *)v51 + 16) + v83 + 636)
                                      - *(_DWORD *)(*((_QWORD *)v51 + 16) + v83 + 628) )
              {
                WdLogSingleEntry1(1LL, 7169LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.right <= pDisplayCore->GetContentRect(VidPnSourceId)->right - pDisplayC"
                            "ore->GetContentRect(VidPnSourceId)->left",
                  7169LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v110.DstRect.top >= v110.DstRect.bottom )
              {
                WdLogSingleEntry1(1LL, 7171LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.top < PresentDdiArg.DstRect.bottom",
                  7171LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v84 = 0;
              if ( v110.DstRect.top < 0 )
              {
                WdLogSingleEntry1(1LL, 7172LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.top >= 0",
                  7172LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v84 = 0;
              }
              if ( v110.SrcRect.bottom > *(_DWORD *)(*((_QWORD *)v51 + 16) + v83 + 640)
                                       - *(_DWORD *)(*((_QWORD *)v51 + 16) + v83 + 632) )
              {
                WdLogSingleEntry1(1LL, 7173LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.bottom <= pDisplayCore->GetContentRect(VidPnSourceId)->bottom - pDispla"
                            "yCore->GetContentRect(VidPnSourceId)->top",
                  7173LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v85 = v110.DstRect.left - v110.SrcRect.left;
              if ( v110.SubRectCnt )
              {
                v86 = v106;
                v87 = v110.DstRect.top - v110.SrcRect.top;
                do
                {
                  v88 = v84;
                  left = v85 + *(_DWORD *)(*v86 + 16LL * v84);
                  DdiSubRectList[v88].left = left;
                  v90 = v85 + *(_DWORD *)(*v86 + 16LL * v84 + 8);
                  DdiSubRectList[v88].right = v90;
                  DdiSubRectList[v88].top = v87 + *(_DWORD *)(*v86 + 16LL * v84 + 4);
                  DdiSubRectList[v88].bottom = v87 + *(_DWORD *)(*v86 + 16LL * v84 + 12);
                  if ( left >= v90 )
                  {
                    WdLogSingleEntry1(1LL, 7185LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].left < pDstSubRects[i].right",
                      7185LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    left = DdiSubRectList[v84].left;
                  }
                  if ( left < v110.DstRect.left )
                  {
                    WdLogSingleEntry1(1LL, 7186LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].left >= PresentDdiArg.DstRect.left",
                      7186LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v84].right > v110.DstRect.right )
                  {
                    WdLogSingleEntry1(1LL, 7187LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].right <= PresentDdiArg.DstRect.right",
                      7187LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  top = DdiSubRectList[v84].top;
                  if ( top >= DdiSubRectList[v84].bottom )
                  {
                    WdLogSingleEntry1(1LL, 7188LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].top < pDstSubRects[i].bottom",
                      7188LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    top = DdiSubRectList[v84].top;
                  }
                  if ( top < v110.DstRect.top )
                  {
                    WdLogSingleEntry1(1LL, 7189LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].top >= PresentDdiArg.DstRect.top",
                      7189LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v84].bottom > v110.DstRect.bottom )
                  {
                    WdLogSingleEntry1(1LL, 7190LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].bottom <= PresentDdiArg.DstRect.bottom",
                      7190LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  ++v84;
                }
                while ( v84 < v110.SubRectCnt );
                v10 = v102;
                v7 = v107;
              }
              v48 = (const RECT **)(&v10[4].Next + 1);
              goto LABEL_52;
            }
            v39 = -1071774910;
            WdLogSingleEntry4(4LL, -1071774910LL, *((_QWORD *)v7 + 2), *((unsigned int *)&v10[1].Next + 2), a3);
          }
          goto LABEL_122;
        }
        WdLogSingleEntry4(4LL, 0LL, *((_QWORD *)v7 + 2), *((unsigned int *)&v10[1].Next + 2), a3);
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                           + 648LL)
                                                                               + 8LL)
                                                                   + 512LL))(
          v95,
          0LL);
        v95 = 0LL;
        v39 = 0;
LABEL_81:
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v108);
LABEL_82:
        CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v99);
LABEL_83:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98);
        goto LABEL_84;
      }
    }
  }
  v39 = -1073741811;
  WdLogSingleEntry5(2LL, -1073741811LL, v7, v15, LODWORD(v10[4].Next), *((unsigned int *)&v10[5].Next + 2));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"ret = 0x%I64x 0x%I64x failed with invalid parameters 0x%I64x 0x%I64x 0x%I64x",
    -1073741811LL,
    (__int64)v7,
    *((_QWORD *)&v10[4].Next + 1),
    LODWORD(v10[4].Next),
    *((unsigned int *)&v10[5].Next + 2));
LABEL_84:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v109);
  v68 = DXGGLOBAL_GetGlobal();
  v69 = (char *)v68 + 1168;
  ++*((_DWORD *)v68 + 299);
  if ( ExQueryDepthSList((PSLIST_HEADER)v68 + 73) >= *((_WORD *)v68 + 592) )
  {
    ++*((_DWORD *)v69 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v69 + 7))(v10, v69);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v69, v10);
  }
  return (unsigned int)v39;
}

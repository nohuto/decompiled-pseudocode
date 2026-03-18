/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019CBB0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C019F2C8 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019F408 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00140C4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018B750 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C018C464 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C018D79C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C019D670 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C019E3E4 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C019EA24 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C01C6FF4 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01D8B68 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D747C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0329070 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0376620 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v7; // rax
  struct DXGRESOURCE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void **v15; // r12
  __int64 v16; // r13
  DXGALLOCATION *v17; // r13
  void *v18; // r14
  COREDEVICEACCESS *v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r8
  struct DXGALLOCATION *v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r8
  HMGRTABLE *v37; // rcx
  struct DXGALLOCATION *v38; // r13
  char v39; // di
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  void *v45; // rdx
  ADAPTER_RENDER *v46; // rcx
  unsigned int v47; // r8d
  char v48; // di
  COREDEVICEACCESS *v49; // r12
  DXGALLOCATION *v50; // rbx
  void **v51; // r12
  int v52; // eax
  DXGALLOCATION *v53; // r14
  struct DXGADAPTERALLOCATION *v54; // rdx
  void *v55; // rcx
  void **v56; // rbx
  DXGALLOCATION *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned int v63; // edx
  __int64 v64; // rax
  unsigned int v65; // r8d
  volatile signed __int32 *v66; // rcx
  __int64 v68; // rax
  unsigned int v69; // r14d
  unsigned int v70; // edi
  struct DXGPROCESS *Current; // rax
  unsigned int v72; // edi
  struct DXGPROCESS *v73; // rax
  DXGOVERLAY *i; // rdi
  __int64 v75; // rax
  char *v76; // rdx
  struct DXGTHREAD *v77; // rax
  int v78; // r9d
  DXGADAPTER *v79; // rcx
  char v80; // [rsp+50h] [rbp-B0h]
  unsigned int v82; // [rsp+58h] [rbp-A8h] BYREF
  void **v83; // [rsp+60h] [rbp-A0h]
  COREDEVICEACCESS *v84; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v86; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  _DXGKARG_CLOSEALLOCATION v88; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v89; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v90[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGRESOURCE *v91; // [rsp+C8h] [rbp-38h]
  _BYTE v92[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v93[128]; // [rsp+E0h] [rbp-20h] BYREF

  v84 = a5;
  v7 = *((_QWORD *)this + 2);
  P = a4;
  v9 = a2;
  v91 = a2;
  v10 = *(_QWORD *)(v7 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry1(1LL, 1283LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1283LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v93, 0, sizeof(v93));
  if ( ((unsigned __int64)v9 & -(__int64)(a3 != 0)) == 0
    || (v15 = *(void ***)(((unsigned __int64)v9 & -(__int64)(a3 != 0)) + 0x40), (v83 = v15) == 0LL) )
  {
    v15 = (void **)v93;
    v83 = (void **)v93;
  }
  v88 = 0LL;
  if ( v9 && a3 )
  {
    v58 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v58 + 24) = v9;
    v12 = (_QWORD *)*((_QWORD *)v9 + 1);
    v11 = v12[5];
    *(_QWORD *)(v58 + 32) = v11;
  }
  LOBYTE(v12) = 0;
  v80 = 0;
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v16 + 209) )
  {
    if ( a3 )
    {
      if ( v9 )
      {
        v69 = *((_DWORD *)v9 + 5);
        if ( v69 )
        {
          v70 = *((_DWORD *)this + 110);
          Current = DXGPROCESS::GetCurrent((__int64)v12, v11, v13, v14);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v16 + 4344),
            *((_DWORD *)Current + 126),
            v70,
            v69,
            0,
            0LL,
            a6);
          LOBYTE(v12) = 1;
          *((_DWORD *)v9 + 5) = 0;
          v80 = 1;
        }
      }
    }
  }
  v17 = (DXGALLOCATION *)P;
  v86 = (struct DXGALLOCATION *)P;
  v18 = P;
  if ( P )
  {
    v19 = v84;
    do
    {
      v84 = (COREDEVICEACCESS *)*((_QWORD *)v18 + 8);
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v20 + 209) )
      {
        if ( !(_BYTE)v12 && (*((_BYTE *)v18 + 128) & 4) != 0 )
        {
          v72 = *((_DWORD *)this + 110);
          v73 = DXGPROCESS::GetCurrent((__int64)v12, v11, v13, v14);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v20 + 4344),
            *((_DWORD *)v73 + 126),
            v72,
            0,
            1u,
            &v86,
            a6);
        }
        *((_BYTE *)v18 + 128) &= ~4u;
      }
      v21 = WdLogNewEntry5_WdTrace(v12, v11);
      *(_QWORD *)(v21 + 24) = v18;
      *(_QWORD *)(v21 + 32) = *(_QWORD *)(*((_QWORD *)v18 + 1) + 40LL);
      v24 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v24 & 1) != 0 )
      {
        v22 = *((unsigned int *)this + 464);
        if ( (_DWORD)v22 || (*(_DWORD *)(*((_QWORD *)this + 5) + 424LL) & 0x100) == 0 )
        {
          if ( ((v24 >> 6) & 0xF) >= (unsigned int)v22 )
          {
            WdLogSingleEntry1(1LL, 1379LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < this->GetNumVidPnSources()",
              1379LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGDEVICE::RemovePrimaryAllocation(this, (const struct DXGALLOCATION *)v18);
        }
      }
      v25 = *(unsigned int *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v25 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v90, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 744LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v90);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 60); i != (DXGDEVICE *)((char *)this + 480) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((void **)i + 6) == v18 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
        if ( v90[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
      }
      v26 = *((_QWORD *)v18 + 6);
      v27 = *(_DWORD *)(v26 + 4);
      if ( (v27 & 0x2000) != 0 && *((_QWORD *)v18 + 3) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v27 >> 6) & 0xF, (struct DXGALLOCATION *)v18);
        v26 = *((_QWORD *)v18 + 6);
      }
      v28 = *(_DWORD *)(v26 + 4);
      if ( (v28 & 0x2000) != 0 || (v28 & 2) != 0 || (v28 & 8) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          (v28 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v18,
          v23);
      v29 = *((_QWORD *)v18 + 3);
      if ( v29 && (*((_DWORD *)v18 + 18) & 0x800) != 0 )
      {
        if ( _bittest((const signed __int32 *)(*((_QWORD *)v18 + 6) + 4LL), 0xDu) )
        {
          v75 = *((_QWORD *)this + 2);
          v82 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v75 + 648)
                                                                                              + 8LL)
                                                                                  + 704LL))(
                 *(_QWORD *)(v75 + 656),
                 v29,
                 &v82) )
          {
            if ( v82 <= 1 && v19 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)v19 + 3)) )
            {
              COREDEVICEACCESS::Release(v19);
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                         + 8LL)
                                                             + 712LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                *((_QWORD *)v18 + 3),
                (*(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) >> 6) & 0xF);
              COREDEVICEACCESS::AcquireSharedUncheck(v19, v76);
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          *((_QWORD *)v18 + 3));
        *((_DWORD *)v18 + 18) &= ~0x800u;
      }
      CurrentProcess = PsGetCurrentProcess(v25, v29, v22, v23);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v32 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
        || (v77 = DXGTHREAD::GetCurrent()) == 0LL
        || (v33 = *((_QWORD *)v77 + 3)) == 0 )
      {
        v33 = v32;
      }
      v34 = v33 + 248;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v78 = *(_DWORD *)(v33 + 272);
          if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v35, (const EVENT_DESCRIPTOR *)"g", v36, v78);
        }
        ExAcquirePushLockExclusiveEx(v33 + 248, 0LL);
      }
      v37 = (HMGRTABLE *)(v33 + 280);
      v38 = v86;
      *(_QWORD *)(v34 + 8) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle(v37, *((_DWORD *)v38 + 4));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v38);
      *(_QWORD *)(v34 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v34, 0LL);
      KeLeaveCriticalRegion();
      v39 = 0;
      if ( v19 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)v19 + 3)) )
        {
          v39 = 1;
          COREACCESS::Release((COREDEVICEACCESS *)((char *)v19 + 8));
          if ( *((_BYTE *)v19 + 144) )
            COREACCESS::Release((COREDEVICEACCESS *)((char *)v19 + 72));
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v38 + 11);
      if ( v39 )
      {
        if ( *((_BYTE *)v19 + 144) )
          COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v19 + 72), 0LL);
        COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v19 + 8), 0LL);
      }
      v40 = *((_QWORD *)v18 + 3);
      if ( v40 )
      {
        v41 = *((_QWORD *)this + 2);
        Object = 0LL;
        v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v41 + 648) + 8LL)
                                                                          + 176LL))(
                *(_QWORD *)(v41 + 656),
                v40,
                &Object,
                a6.Value);
        if ( v42 < 0 )
        {
          if ( v42 != -1071775486 )
          {
            WdLogSingleEntry1(1LL, 1492LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"ntStatus == STATUS_GRAPHICS_ALLOCATION_BUSY",
              1492LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v44 = WdLogNewEntry5_WdTrace(v43, v11);
          *(_QWORD *)(v44 + 24) = *((_QWORD *)this + 95);
          *(_QWORD *)(v44 + 32) = *((_QWORD *)v18 + 3);
          if ( v19 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)v19 + 3)) )
          {
            COREACCESS::Release((COREDEVICEACCESS *)((char *)v19 + 8));
            if ( *((_BYTE *)v19 + 144) )
              COREACCESS::Release((COREDEVICEACCESS *)((char *)v19 + 72));
            if ( Object )
            {
              if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
              {
                DXGDEVICE::FlushScheduler(this, 3u, 0xFFFFFFFD, 0);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 648LL)
                                                                                  + 8LL)
                                                                      + 624LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                *((_QWORD *)v18 + 3),
                0LL,
                4LL);
            }
            if ( *((_BYTE *)v19 + 144) )
              COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v19 + 72), 0LL);
            COREACCESS::AcquireShared((COREDEVICEACCESS *)((char *)v19 + 8), 0LL);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                             + 8LL)
                                                                 + 168LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
            *((_QWORD *)v18 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v18 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(this, v38);
      }
      v12 = (_QWORD *)*((_QWORD *)v38 + 4);
      v15 = v83;
      if ( v12 )
      {
        v83[v88.NumAllocations++] = v12;
        *((_QWORD *)v38 + 4) = 0LL;
      }
      LOBYTE(v12) = v80;
      v18 = v84;
      v86 = v84;
    }
    while ( v84 );
    v9 = v91;
    v17 = (DXGALLOCATION *)P;
  }
  if ( v88.NumAllocations )
  {
    v45 = (void *)*((_QWORD *)this + 73);
    v46 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v88.pOpenHandleList = v15;
    ADAPTER_RENDER::DdiCloseAllocation(v46, v45, &v88);
  }
  v84 = 0LL;
  v47 = 1;
  v48 = 1;
  v49 = 0LL;
  if ( v9 )
  {
    if ( (*((_DWORD *)v9 + 1) & 1) != 0 )
    {
      v59 = *((_QWORD *)v9 + 7);
      if ( v59 )
      {
        v60 = *(_QWORD *)(v59 + 152);
        if ( v60 )
        {
          if ( *(DXGDEVICE **)(v60 + 80) == this && (*(_DWORD *)(v60 + 72))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v92,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v9 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v92);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 7) + 152LL) + 80LL) = 0LL;
            if ( v92[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92);
            v47 = 1;
          }
        }
        v61 = *((_QWORD *)v9 + 7);
        v62 = *(_QWORD *)(v61 + 136);
        v63 = *(_DWORD *)(v62 - 44);
        if ( (v63 & 2) != 0 )
        {
          if ( *(_DWORD *)(v61 + 132) != 1 )
          {
            v79 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
            if ( *((_DWORD *)v79 + 72) <= 1u || !DXGADAPTER::IsDxgmms2(v79) )
            {
              WdLogSingleEntry1(v47, 1612LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhysicalAdapterC"
                          "ount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                1612LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v63 = *(_DWORD *)(v62 - 44);
              v47 = 1;
            }
          }
          if ( ((v63 >> 6) & 0xF) >= *((_DWORD *)this + 464)
            && ((unsigned __int8)BYTE1(*(_DWORD *)(*((_QWORD *)this + 5) + 424LL)) & (unsigned __int8)v47) == 0 )
          {
            WdLogSingleEntry1(v47, 1613LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAdapterAlloc->m_VidPnSourceId < this->GetNumVidPnSources() || GetProcess()->IsVmProcess()",
              1613LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v63 = *(_DWORD *)(v62 - 44);
          }
          v68 = (v63 >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v68 + 79) == v9 )
            *((_QWORD *)this + v68 + 79) = 0LL;
        }
        v64 = *((_QWORD *)v9 + 3);
        v65 = 0;
        while ( v64 )
        {
          v64 = *(_QWORD *)(v64 + 64);
          ++v65;
        }
        v66 = (volatile signed __int32 *)*((_QWORD *)v9 + 7);
        if ( _InterlockedExchangeAdd(v66 + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v66, v83, v65);
        *((_QWORD *)v9 + 7) = 0LL;
      }
      v48 = 0;
    }
    else
    {
      v49 = (COREDEVICEACCESS *)*((_QWORD *)v9 + 7);
      v84 = v49;
    }
  }
  v50 = v17;
  memset(&v89, 0, sizeof(v89));
  if ( v17 )
  {
    v51 = v83;
    while ( 1 )
    {
      v52 = *((_DWORD *)v50 + 18);
      v53 = (DXGALLOCATION *)*((_QWORD *)v50 + 8);
      if ( (v52 & 0x800) != 0 )
      {
        WdLogSingleEntry1(1LL, 1665LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_Pinned == FALSE",
          1665LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v52 = *((_DWORD *)v50 + 18);
      }
      if ( (v52 & 0x7FE) != 0 )
      {
        WdLogSingleEntry1(1LL, 1666LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_DirectFlipIndex == 0",
          1666LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v54 = (struct DXGADAPTERALLOCATION *)*((_QWORD *)v50 + 6);
      if ( v54 )
      {
        if ( !v48 )
          goto LABEL_96;
        DXGDEVICE::DestroyAdapterAllocation(this, v54);
        v55 = *(void **)(*((_QWORD *)v50 + 6) + 16LL);
        if ( v55 )
        {
          v51[v89.NumAllocations++] = v55;
          *(_QWORD *)(*((_QWORD *)v50 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v48 )
      {
LABEL_96:
        if ( !v9 )
        {
          WdLogSingleEntry1(1LL, 1688LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 1688LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*((_DWORD *)v9 + 1) & 1) == 0 )
        {
          WdLogSingleEntry1(1LL, 1689LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pResource->m_SharedResource",
            1689LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !a3 )
        {
          WdLogSingleEntry1(1LL, 1690LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bDestroyResource", 1690LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v56 = (void **)*((_QWORD *)v50 + 6);
      if ( (!v9 || (*((_DWORD *)v9 + 1) & 1) == 0) && v56 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v56);
        operator delete(v56);
      }
      v50 = v53;
      if ( !v53 )
      {
        v49 = v84;
        v17 = (DXGALLOCATION *)P;
        break;
      }
    }
  }
  if ( v48 )
  {
    v89.Flags.Value = 0;
    if ( v9 )
      v89.Flags.Value = a3 != 0;
    v89.hResource = v49;
    if ( v89.NumAllocations )
    {
      v89.pAllocationList = v83;
    }
    else
    {
      v89.pAllocationList = 0LL;
      if ( !a3 || !v49 )
        goto LABEL_75;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v89, 0LL);
    if ( v9 && !a3 )
    {
      if ( (*((_DWORD *)v9 + 1) & 1) != 0 )
      {
        WdLogSingleEntry1(1LL, 1738LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!(pResource->m_SharedResource)",
          1738LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)v9 + 7) = v89.hResource;
    }
  }
LABEL_75:
  if ( v17 )
  {
    v57 = v17;
    do
    {
      v17 = (DXGALLOCATION *)*((_QWORD *)v17 + 8);
      DXGALLOCATION::~DXGALLOCATION(v57);
      ExFreePoolWithTag(v57, 0);
      v57 = v17;
    }
    while ( v17 );
  }
}

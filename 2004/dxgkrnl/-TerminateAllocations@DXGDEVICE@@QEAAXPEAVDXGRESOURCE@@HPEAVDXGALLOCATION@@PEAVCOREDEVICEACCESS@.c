/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0109590
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108470 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0117728 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0001C68 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C010325C (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0109F70 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010A040 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126EB0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126F74 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0127BF0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C016E920 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        char **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // rcx
  BOOL v9; // r14d
  int v10; // r12d
  struct DXGRESOURCE *v11; // r13
  struct DXGALLOCATION *v12; // rdi
  BOOL v13; // ebp
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdi
  PSLIST_ENTRY v19; // r14
  char v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rax
  struct _SLIST_ENTRY *v30; // rcx
  __int64 v31; // rdx
  char *v32; // rcx
  struct DXGALLOCATION *v33; // r9
  struct _SLIST_ENTRY *Next; // rdi
  char v35; // r12
  char **v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // r15
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // r15
  char *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct _KTHREAD **v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbp
  __int64 v70; // r15
  __int64 v71; // rcx
  __int64 v72; // r8
  char v73; // bp
  char *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct _KTHREAD **v77; // rcx
  __int64 v78; // rdx
  __int64 (__fastcall *v79)(__int64, __int64, __int64); // rax
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  int v87; // r9d
  int v88; // r9d
  int v89; // r9d
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // r9d
  __int64 v93; // rax
  __int64 v94; // rax
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v96; // rax
  _QWORD *v97; // rax
  struct DXGTHREAD *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  char *v102; // [rsp+38h] [rbp-60h]
  __int64 v103; // [rsp+A0h] [rbp+8h]
  struct DXGRESOURCE *v104; // [rsp+A8h] [rbp+10h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v107; // [rsp+C8h] [rbp+30h]

  v104 = a2;
  v103 = 0LL;
  v107.0 = 0;
  v8 = 1LL;
  v9 = (*(_BYTE *)&a6.0 & 2) == 0;
  v10 = a3;
  v11 = a2;
  v12 = a4;
  v13 = *((_DWORD *)this + 108) == 2;
  if ( a4 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(*((_QWORD *)v12 + 6) + 4LL);
      if ( (v8 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v12 + 18) & 0x800) != 0 )
        break;
      if ( (v8 & 0x800) != 0 )
        break;
      v14 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 209LL) )
        break;
      a2 = (struct DXGRESOURCE *)*((_QWORD *)v12 + 3);
      if ( !a2 )
        break;
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct DXGRESOURCE *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 640) + 8LL)
                                                                            + 632LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 648LL),
              a2,
              0LL);
      if ( !v17 )
      {
        v90 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v90 + 24) = 972LL;
        WdLogEvent5_WdAssertion(v90);
      }
      v103 += v17;
      *(_DWORD *)&v107.0 += (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                       + 8LL)
                                                                           + 648LL))(
                              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 16LL) + 648LL),
                              *((_QWORD *)v12 + 3));
      if ( v13
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                         + 8LL)
                                                             + 608LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
             *((_QWORD *)v12 + 3)) )
      {
        v13 = 0;
      }
      v12 = (struct DXGALLOCATION *)*((_QWORD *)v12 + 8);
      if ( !v12 )
        goto LABEL_11;
    }
    v9 = 0;
  }
LABEL_11:
  if ( v10 )
  {
    if ( this != (DXGDEVICE *)-240LL && *((struct _KTHREAD **)this + 31) == KeGetCurrentThread() )
    {
      v91 = WdLogNewEntry5_WdAssertion(v8, a2);
      *(_QWORD *)(v91 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v91);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 240, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v92 = *((_DWORD *)this + 66);
        if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v61, &EventBlockThread, v62, v92);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 240, 0LL);
    }
    *((_QWORD *)this + 31) = KeGetCurrentThread();
    if ( v11 == *((struct DXGRESOURCE **)this + 7) || *((_QWORD *)v11 + 4) )
    {
      v63 = *((_QWORD *)v11 + 5);
      if ( v63 )
        *(_QWORD *)(v63 + 32) = *((_QWORD *)v11 + 4);
      v64 = *((_QWORD *)v11 + 4);
      if ( v64 )
      {
        *(_QWORD *)(v64 + 40) = *((_QWORD *)v11 + 5);
      }
      else
      {
        if ( *((struct DXGRESOURCE **)this + 7) != v11 )
        {
          v93 = WdLogNewEntry5_WdAssertion(0LL, v60);
          *(_QWORD *)(v93 + 24) = 8847LL;
          WdLogEvent5_WdAssertion(v93);
        }
        *((_QWORD *)this + 7) = *((_QWORD *)v11 + 5);
      }
    }
    *((_QWORD *)this + 31) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 240, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v9 || v13 || (!v10 || !*((_QWORD *)v11 + 3)) && v11 )
    goto LABEL_102;
  v18 = *((_QWORD *)this + 2);
  ++*(_DWORD *)(v18 + 1364);
  v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v18 + 1344));
  if ( !v19 )
  {
    v78 = *(unsigned int *)(v18 + 1388);
    v79 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v18 + 1392);
    v80 = *(unsigned int *)(v18 + 1384);
    v81 = *(unsigned int *)(v18 + 1380);
    ++*(_DWORD *)(v18 + 1368);
    v19 = (PSLIST_ENTRY)v79(v81, v78, v80);
    if ( !v19 )
    {
      v94 = WdLogNewEntry5_WdLowResource(v83, v82, v84, v85);
      *(_QWORD *)(v94 + 24) = 4423LL;
      WdLogEvent5_WdLowResource(v94);
      goto LABEL_102;
    }
  }
  v20 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v18 + 1224, 0LL);
  *(_QWORD *)(v18 + 1232) = KeGetCurrentThread();
  v21 = *(_QWORD *)(v18 + 1208) + v103;
  CurrentProcess = PsGetCurrentProcess(v23, v22);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v28 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v27, v26)) == 0LL
    || (v29 = *((_QWORD *)Current + 1)) == 0 )
  {
    v29 = v28;
  }
  if ( (*(_BYTE *)(v29 + 346) || v21 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 94))
    && v21 >= *(_QWORD *)(v18 + 1208) )
  {
    v20 = 1;
    *(_QWORD *)(v18 + 1208) = v21;
  }
  *(_QWORD *)(v18 + 1232) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 1224, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v86 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v86 + 24) = 4414LL;
    WdLogEvent5_WdEvent(v86);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v18, v19);
    v11 = v104;
    v10 = a3;
LABEL_102:
    if ( v10 )
      DXGDEVICE::DestroyResource(this, v11, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, v11, 0, a4, (struct COREDEVICEACCESS *)a5, a6);
    return;
  }
  v19->Next = (struct _SLIST_ENTRY *)v104;
  *((_QWORD *)&v19->Next + 1) = a4;
  v30 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)&v19[2].Next + 1) = v103;
  LODWORD(v19[2].Next) = v107;
  v19[1].Next = v30;
  *((_QWORD *)&v19[1].Next + 1) = this;
  LODWORD(v19[3].Next) = a6;
  ObfReferenceObject(v30);
  Next = v19->Next;
  v35 = 0;
  if ( v19->Next )
  {
    v65 = PsGetCurrentProcess(v32, v31);
    v66 = PsGetProcessDxgProcess(v65);
    v69 = v66;
    if ( v66 && (*(_BYTE *)(v66 + 347) & 0x10) == 0
      || (v96 = DXGTHREAD::GetCurrent(v68, v67)) == 0LL
      || (v70 = *((_QWORD *)v96 + 1)) == 0 )
    {
      v70 = v69;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v70 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v89 = *(_DWORD *)(v70 + 232);
        if ( v89 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v71, &EventBlockThread, v72, v89);
      }
      ExAcquirePushLockExclusiveEx(v70 + 208, 0LL);
    }
    *(_QWORD *)(v70 + 216) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v70 + 240), (unsigned int)Next[1].Next);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)Next);
    *(_QWORD *)(v70 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v70 + 208, 0LL);
    KeLeaveCriticalRegion();
    v36 = a5;
    v73 = 0;
    if ( a5 )
    {
      v74 = a5[3];
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v74 + 23)
        && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v74 + 21)) )
      {
        v73 = 1;
        if ( !*((_BYTE *)a5 + 32) )
        {
          v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75);
          v97[5] = a5 + 1;
          v97[3] = 275LL;
          v97[4] = 4LL;
          v97[6] = 0LL;
          v97[7] = 0LL;
          WdLogEvent5_WdCriticalError(v97);
        }
        v77 = (struct _KTHREAD **)a5[3];
        *((_BYTE *)a5 + 32) = 0;
        if ( KeGetCurrentThread() != v77[23] )
          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v77, a5[5]);
        a5[5] = 0LL;
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::Release((COREACCESS *)(a5 + 9));
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
    if ( v73 )
    {
      if ( *((_BYTE *)a5 + 144) )
        COREACCESS::AcquireShared((COREACCESS *)(a5 + 9), 0LL);
      COREACCESS::AcquireShared((COREACCESS *)(a5 + 1), 0LL);
    }
  }
  else
  {
    v36 = a5;
  }
  v37 = *((_QWORD *)&v19->Next + 1);
  if ( v37 )
  {
    do
    {
      v38 = *(_QWORD *)(v37 + 48);
      v39 = *(_DWORD *)(v38 + 4);
      if ( (v39 & 0x2000) != 0 && *(_QWORD *)(v37 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v39 >> 6) & 0xF, (struct DXGALLOCATION *)v37);
        v38 = *(_QWORD *)(v37 + 48);
      }
      v40 = *(unsigned int *)(v38 + 4);
      if ( (v40 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          this,
          ((unsigned int)v40 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v37,
          v33);
      v41 = PsGetCurrentProcess(v32, v40);
      v42 = PsGetProcessDxgProcess(v41);
      v45 = v42;
      if ( v42 && (*(_BYTE *)(v42 + 347) & 0x10) == 0
        || (v98 = DXGTHREAD::GetCurrent(v44, v43)) == 0LL
        || (v46 = *((_QWORD *)v98 + 1)) == 0 )
      {
        v46 = v45;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v88 = *(_DWORD *)(v46 + 232);
          if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v47, &EventBlockThread, v48, v88);
        }
        ExAcquirePushLockExclusiveEx(v46 + 208, 0LL);
      }
      *(_QWORD *)(v46 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v46 + 240), *(_DWORD *)(v37 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v37);
      *(_QWORD *)(v46 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v46 + 208, 0LL);
      KeLeaveCriticalRegion();
      v49 = 0;
      if ( v36 )
      {
        v50 = v36[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 23)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v50 + 21)) )
        {
          v49 = 1;
          if ( !*((_BYTE *)v36 + 32) )
          {
            v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51);
            v99[3] = 275LL;
            v99[4] = 4LL;
            v99[5] = v36 + 1;
            v99[6] = 0LL;
            v99[7] = 0LL;
            WdLogEvent5_WdCriticalError(v99);
          }
          v53 = (struct _KTHREAD **)v36[3];
          *((_BYTE *)v36 + 32) = 0;
          if ( KeGetCurrentThread() != v53[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v53, v36[5]);
          v36[5] = 0LL;
          if ( *((_BYTE *)v36 + 144) )
            COREACCESS::Release((COREACCESS *)(v36 + 9));
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v37 + 88));
      if ( v49 )
      {
        if ( *((_BYTE *)v36 + 144) )
          COREACCESS::AcquireShared((COREACCESS *)(v36 + 9), 0LL);
        if ( *((_BYTE *)v36 + 32) )
        {
          v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v54);
          v100[3] = 275LL;
          v100[4] = 4LL;
          v100[5] = v36 + 1;
          v100[6] = 0LL;
          v100[7] = 0LL;
          WdLogEvent5_WdCriticalError(v100);
        }
        v32 = v36[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v32 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v32 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v55, &EventBlockThread, v56, 72);
            KeWaitForSingleObject(v36[3] + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v36[3], 0LL);
        }
        v36[5] = 0LL;
        *((_BYTE *)v36 + 32) = 1;
      }
      v57 = *(_QWORD *)(v37 + 64);
      if ( *(_QWORD *)(v37 + 24) )
      {
        if ( !v35 )
        {
          v35 = 1;
          v102 = (char *)this + 176;
          if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
          {
            v101 = WdLogNewEntry5_WdAssertion((char *)this + 176, v54);
            *(_QWORD *)(v101 + 24) = 1571LL;
            WdLogEvent5_WdAssertion(v101);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v102, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v87 = *((_DWORD *)this + 50);
              if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v58, &EventBlockThread, v59, v87);
            }
            ExAcquirePushLockExclusiveEx(v102, 0LL);
          }
          *((_QWORD *)this + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 468) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 235));
          *((_QWORD *)this + 23) = 0LL;
          ExReleasePushLockExclusiveEx(v102, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                         + 8LL)
                                                                             + 152LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *(_QWORD *)(v37 + 24),
          (*(_DWORD *)(*(_QWORD *)(v37 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v19);
      }
      v37 = v57;
    }
    while ( v57 );
  }
}

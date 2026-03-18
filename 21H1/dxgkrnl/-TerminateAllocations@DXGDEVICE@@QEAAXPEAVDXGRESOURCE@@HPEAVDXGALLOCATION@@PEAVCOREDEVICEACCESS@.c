/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010D860
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01207F8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0018CD0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F0840 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F08D4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010E240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010E310 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C010EE60 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0119C6C (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015EEC0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
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
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _SLIST_ENTRY *v32; // rcx
  __int64 v33; // rdx
  char *v34; // rcx
  struct DXGALLOCATION *v35; // r9
  struct _SLIST_ENTRY *Next; // rdi
  char v37; // r12
  char **v38; // r13
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // r15
  char *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _KTHREAD **v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r15
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbp
  __int64 v72; // r15
  __int64 v73; // rcx
  __int64 v74; // r8
  char v75; // bp
  char *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  struct _KTHREAD **v79; // rcx
  __int64 v80; // rdx
  __int64 (__fastcall *v81)(__int64, __int64, __int64); // rax
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  int v89; // r9d
  int v90; // r9d
  int v91; // r9d
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rax
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v98; // rax
  _QWORD *v99; // rax
  struct DXGTHREAD *v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  char *v104; // [rsp+38h] [rbp-60h]
  __int64 v105; // [rsp+A0h] [rbp+8h]
  struct DXGRESOURCE *v106; // [rsp+A8h] [rbp+10h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v109; // [rsp+C8h] [rbp+30h]

  v106 = a2;
  v105 = 0LL;
  v109.0 = 0;
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
        v92 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v92 + 24) = 971LL;
        WdLogEvent5_WdAssertion(v92);
      }
      v105 += v17;
      *(_DWORD *)&v109.0 += (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
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
      v93 = WdLogNewEntry5_WdAssertion(v8, a2);
      *(_QWORD *)(v93 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v93);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 240, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v94 = *((_DWORD *)this + 66);
        if ( v94 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v63, &EventBlockThread, v64, v94);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 240, 0LL);
    }
    *((_QWORD *)this + 31) = KeGetCurrentThread();
    if ( v11 == *((struct DXGRESOURCE **)this + 7) || *((_QWORD *)v11 + 4) )
    {
      v65 = *((_QWORD *)v11 + 5);
      if ( v65 )
        *(_QWORD *)(v65 + 32) = *((_QWORD *)v11 + 4);
      v66 = *((_QWORD *)v11 + 4);
      if ( v66 )
      {
        *(_QWORD *)(v66 + 40) = *((_QWORD *)v11 + 5);
      }
      else
      {
        if ( *((struct DXGRESOURCE **)this + 7) != v11 )
        {
          v95 = WdLogNewEntry5_WdAssertion(0LL, v62);
          *(_QWORD *)(v95 + 24) = 8844LL;
          WdLogEvent5_WdAssertion(v95);
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
    v80 = *(unsigned int *)(v18 + 1388);
    v81 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v18 + 1392);
    v82 = *(unsigned int *)(v18 + 1384);
    v83 = *(unsigned int *)(v18 + 1380);
    ++*(_DWORD *)(v18 + 1368);
    v19 = (PSLIST_ENTRY)v81(v83, v80, v82);
    if ( !v19 )
    {
      v96 = WdLogNewEntry5_WdLowResource(v85, v84, v86, v87);
      *(_QWORD *)(v96 + 24) = 4423LL;
      WdLogEvent5_WdLowResource(v96);
      goto LABEL_102;
    }
  }
  v20 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v18 + 1224, 0LL);
  *(_QWORD *)(v18 + 1232) = KeGetCurrentThread();
  v21 = *(_QWORD *)(v18 + 1208) + v105;
  CurrentProcess = PsGetCurrentProcess(v23, v22);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v28 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v27, v26)) == 0LL
    || (v29 = *((_QWORD *)Current + 1)) == 0 )
  {
    v29 = v28;
  }
  if ( (*(_BYTE *)(v29 + 346) || v21 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 80))
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
    v88 = WdLogNewEntry5_WdEvent(v31, v30);
    *(_QWORD *)(v88 + 24) = 4414LL;
    WdLogEvent5_WdEvent(v88);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v18, (struct DXGTERMINATIONTRACKER *)v19);
    v11 = v106;
    v10 = a3;
LABEL_102:
    if ( v10 )
      DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)v11, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, v11, 0, a4, (PERESOURCE **)a5, a6);
    return;
  }
  v19->Next = (struct _SLIST_ENTRY *)v106;
  *((_QWORD *)&v19->Next + 1) = a4;
  v32 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)&v19[2].Next + 1) = v105;
  LODWORD(v19[2].Next) = v109;
  v19[1].Next = v32;
  *((_QWORD *)&v19[1].Next + 1) = this;
  LODWORD(v19[3].Next) = a6;
  ObfReferenceObject(v32);
  Next = v19->Next;
  v37 = 0;
  if ( v19->Next )
  {
    v67 = PsGetCurrentProcess(v34, v33);
    v68 = PsGetProcessDxgProcess(v67);
    v71 = v68;
    if ( v68 && (*(_BYTE *)(v68 + 347) & 0x10) == 0
      || (v98 = DXGTHREAD::GetCurrent(v70, v69)) == 0LL
      || (v72 = *((_QWORD *)v98 + 1)) == 0 )
    {
      v72 = v71;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v72 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v91 = *(_DWORD *)(v72 + 232);
        if ( v91 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v73, &EventBlockThread, v74, v91);
      }
      ExAcquirePushLockExclusiveEx(v72 + 208, 0LL);
    }
    *(_QWORD *)(v72 + 216) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v72 + 240), (unsigned int)Next[1].Next);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)Next);
    *(_QWORD *)(v72 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v72 + 208, 0LL);
    KeLeaveCriticalRegion();
    v38 = a5;
    v75 = 0;
    if ( a5 )
    {
      v76 = a5[3];
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v76 + 23)
        && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v76 + 21)) )
      {
        v75 = 1;
        if ( !*((_BYTE *)a5 + 32) )
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77);
          v99[5] = a5 + 1;
          v99[3] = 275LL;
          v99[4] = 4LL;
          v99[6] = 0LL;
          v99[7] = 0LL;
          WdLogEvent5_WdCriticalError(v99);
        }
        v79 = (struct _KTHREAD **)a5[3];
        *((_BYTE *)a5 + 32) = 0;
        if ( KeGetCurrentThread() != v79[23] )
          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v79, a5[5]);
        a5[5] = 0LL;
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::Release((COREACCESS *)(a5 + 9));
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
    if ( v75 )
    {
      if ( *((_BYTE *)a5 + 144) )
        COREACCESS::AcquireShared((COREACCESS *)(a5 + 9), 0LL);
      COREACCESS::AcquireShared((COREACCESS *)(a5 + 1), 0LL);
    }
  }
  else
  {
    v38 = a5;
  }
  v39 = *((_QWORD *)&v19->Next + 1);
  if ( v39 )
  {
    do
    {
      v40 = *(_QWORD *)(v39 + 48);
      v41 = *(_DWORD *)(v40 + 4);
      if ( (v41 & 0x2000) != 0 && *(_QWORD *)(v39 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v41 >> 6) & 0xF, (struct DXGALLOCATION *)v39);
        v40 = *(_QWORD *)(v39 + 48);
      }
      v42 = *(unsigned int *)(v40 + 4);
      if ( (v42 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          ((unsigned int)v42 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v39,
          v35);
      v43 = PsGetCurrentProcess(v34, v42);
      v44 = PsGetProcessDxgProcess(v43);
      v47 = v44;
      if ( v44 && (*(_BYTE *)(v44 + 347) & 0x10) == 0
        || (v100 = DXGTHREAD::GetCurrent(v46, v45)) == 0LL
        || (v48 = *((_QWORD *)v100 + 1)) == 0 )
      {
        v48 = v47;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v48 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v90 = *(_DWORD *)(v48 + 232);
          if ( v90 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v49, &EventBlockThread, v50, v90);
        }
        ExAcquirePushLockExclusiveEx(v48 + 208, 0LL);
      }
      *(_QWORD *)(v48 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v48 + 240), *(_DWORD *)(v39 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v39);
      *(_QWORD *)(v48 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v48 + 208, 0LL);
      KeLeaveCriticalRegion();
      v51 = 0;
      if ( v38 )
      {
        v52 = v38[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 23)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v52 + 21)) )
        {
          v51 = 1;
          if ( !*((_BYTE *)v38 + 32) )
          {
            v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53);
            v101[3] = 275LL;
            v101[4] = 4LL;
            v101[5] = v38 + 1;
            v101[6] = 0LL;
            v101[7] = 0LL;
            WdLogEvent5_WdCriticalError(v101);
          }
          v55 = (struct _KTHREAD **)v38[3];
          *((_BYTE *)v38 + 32) = 0;
          if ( KeGetCurrentThread() != v55[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v55, v38[5]);
          v38[5] = 0LL;
          if ( *((_BYTE *)v38 + 144) )
            COREACCESS::Release((COREACCESS *)(v38 + 9));
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v39 + 88));
      if ( v51 )
      {
        if ( *((_BYTE *)v38 + 144) )
          COREACCESS::AcquireShared((COREACCESS *)(v38 + 9), 0LL);
        if ( *((_BYTE *)v38 + 32) )
        {
          v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v56);
          v102[3] = 275LL;
          v102[4] = 4LL;
          v102[5] = v38 + 1;
          v102[6] = 0LL;
          v102[7] = 0LL;
          WdLogEvent5_WdCriticalError(v102);
        }
        v34 = v38[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v34 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v34 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v57, &EventBlockThread, v58, 72);
            KeWaitForSingleObject(v38[3] + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v38[3], 0LL);
        }
        v38[5] = 0LL;
        *((_BYTE *)v38 + 32) = 1;
      }
      v59 = *(_QWORD *)(v39 + 64);
      if ( *(_QWORD *)(v39 + 24) )
      {
        if ( !v37 )
        {
          v37 = 1;
          v104 = (char *)this + 176;
          if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
          {
            v103 = WdLogNewEntry5_WdAssertion((char *)this + 176, v56);
            *(_QWORD *)(v103 + 24) = 1569LL;
            WdLogEvent5_WdAssertion(v103);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v104, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v89 = *((_DWORD *)this + 50);
              if ( v89 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v60, &EventBlockThread, v61, v89);
            }
            ExAcquirePushLockExclusiveEx(v104, 0LL);
          }
          *((_QWORD *)this + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 468) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 235));
          *((_QWORD *)this + 23) = 0LL;
          ExReleasePushLockExclusiveEx(v104, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                         + 8LL)
                                                                             + 152LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *(_QWORD *)(v39 + 24),
          (*(_DWORD *)(*(_QWORD *)(v39 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v19);
      }
      v39 = v59;
    }
    while ( v59 );
  }
}

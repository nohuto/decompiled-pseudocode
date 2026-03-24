/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010A5F0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0001C68 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006860 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FDD00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0103F1C (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010B170 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010B190 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C012A560 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C012A624 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C015CCC0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C017300C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v8; // r12d
  __int64 v9; // r9
  struct DXGRESOURCE *v10; // rsi
  DXGDEVICE *v11; // r15
  __int64 v12; // r13
  BOOL v13; // ebp
  struct DXGALLOCATION *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(__int64, __int64, __int64); // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r13
  struct DXGTHREAD *Current; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  struct DXGTERMINATIONTRACKER *v49; // r12
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct DXGALLOCATION *v53; // r9
  __int64 v54; // rbp
  char v55; // r13
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rsi
  struct DXGTHREAD *v61; // rax
  __int64 v62; // rdi
  unsigned int v63; // r8d
  __int64 v64; // rax
  __int64 v65; // r9
  int v66; // edx
  char v67; // si
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  struct _KTHREAD **v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rax
  unsigned int v75; // edx
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdi
  struct DXGTHREAD *v82; // rax
  __int64 v83; // rbp
  __int64 v84; // rcx
  __int64 v85; // r8
  int v86; // r9d
  char v87; // bp
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  _QWORD *v91; // rax
  struct _KTHREAD **v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rbp
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // r9d
  __int64 v102; // [rsp+30h] [rbp-68h]
  struct DXGTERMINATIONTRACKER *v103; // [rsp+38h] [rbp-60h]
  _BYTE v104[88]; // [rsp+40h] [rbp-58h] BYREF
  int v105; // [rsp+A0h] [rbp+8h]
  char v108; // [rsp+C8h] [rbp+30h]

  v102 = 0LL;
  v105 = 0;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v9 = a3;
  v10 = a2;
  v11 = this;
  v12 = 0LL;
  v13 = *((_DWORD *)this + 108) == 2;
  v14 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      this = (DXGDEVICE *)*(unsigned int *)(*((_QWORD *)v14 + 6) + 4LL);
      if ( ((unsigned __int8)this & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v14 + 18) & 0x800) != 0 )
        break;
      if ( ((unsigned __int16)this & 0x800) != 0 )
        break;
      v15 = *((_QWORD *)v11 + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 209LL) )
        break;
      a2 = (struct DXGRESOURCE *)*((_QWORD *)v14 + 3);
      if ( !a2 )
        break;
      v18 = (*(__int64 (__fastcall **)(_QWORD, struct DXGRESOURCE *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v15 + 640)
                                                                                                 + 8LL)
                                                                                     + 632LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 648LL),
              a2,
              0LL,
              v9);
      if ( !v18 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v19 + 24) = 986LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v102 += v18;
      v105 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 640LL) + 8LL)
                                                        + 648LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 648LL),
                *((_QWORD *)v14 + 3));
      if ( v13
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 640LL)
                                                                         + 8LL)
                                                             + 608LL))(
             *(_QWORD *)(*((_QWORD *)v11 + 2) + 648LL),
             *((_QWORD *)v14 + 3)) )
      {
        v13 = 0;
      }
      v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
      if ( !v14 )
        goto LABEL_16;
    }
    v8 = 0;
LABEL_16:
    LODWORD(v9) = a3;
    v12 = v102;
  }
  if ( (_DWORD)v9 )
  {
    if ( v11 != (DXGDEVICE *)-240LL && *((struct _KTHREAD **)v11 + 31) == KeGetCurrentThread() )
    {
      v20 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v20 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 240, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v24 = *((_DWORD *)v11 + 66);
        if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, v24);
      }
      ExAcquirePushLockExclusiveEx((char *)v11 + 240, 0LL);
    }
    *((_QWORD *)v11 + 31) = KeGetCurrentThread();
    if ( v10 == *((struct DXGRESOURCE **)v11 + 7) || *((_QWORD *)v10 + 4) )
    {
      v25 = *((_QWORD *)v10 + 5);
      if ( v25 )
        *(_QWORD *)(v25 + 32) = *((_QWORD *)v10 + 4);
      v26 = *((_QWORD *)v10 + 4);
      if ( v26 )
      {
        *(_QWORD *)(v26 + 40) = *((_QWORD *)v10 + 5);
      }
      else
      {
        if ( *((struct DXGRESOURCE **)v11 + 7) != v10 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0LL, v21);
          *(_QWORD *)(v27 + 24) = 8954LL;
          WdLogEvent5_WdAssertion(v27);
        }
        *((_QWORD *)v11 + 7) = *((_QWORD *)v10 + 5);
      }
    }
    *((_QWORD *)v11 + 31) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v11 + 240, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v9) = a3;
  }
  if ( !v8 || v13 || (!(_DWORD)v9 || !*((_QWORD *)v10 + 3)) && v10 )
    goto LABEL_45;
  v28 = *((_QWORD *)v11 + 2);
  ++*(_DWORD *)(v28 + 1364);
  v103 = (struct DXGTERMINATIONTRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)(v28 + 1344));
  if ( !v103 )
  {
    v29 = *(unsigned int *)(v28 + 1388);
    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v28 + 1392);
    v31 = *(unsigned int *)(v28 + 1384);
    v32 = *(unsigned int *)(v28 + 1380);
    ++*(_DWORD *)(v28 + 1368);
    v103 = (struct DXGTERMINATIONTRACKER *)v30(v32, v29, v31);
    if ( !v103 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = 4423LL;
      WdLogEvent5_WdLowResource(v37);
      goto LABEL_45;
    }
  }
  v108 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v28 + 1224, 0LL);
  *(_QWORD *)(v28 + 1232) = KeGetCurrentThread();
  v38 = v12 + *(_QWORD *)(v28 + 1208);
  CurrentProcess = PsGetCurrentProcess(v40, v39);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v45 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v44, v43)) == 0LL
    || (v47 = *((_QWORD *)Current + 1)) == 0 )
  {
    v47 = v45;
  }
  if ( (*(_BYTE *)(v47 + 346) || v38 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v47, v43) + 94))
    && v38 >= *(_QWORD *)(v28 + 1208) )
  {
    v108 = 1;
    *(_QWORD *)(v28 + 1208) = v38;
  }
  *(_QWORD *)(v28 + 1232) = 0LL;
  ExReleasePushLockExclusiveEx(v28 + 1224, 0LL);
  KeLeaveCriticalRegion();
  if ( !v108 )
  {
    v48 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v48 + 24) = 4414LL;
    WdLogEvent5_WdEvent(v48);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v28, (struct _SLIST_ENTRY *)v103);
LABEL_45:
    if ( a3 )
      DXGDEVICE::DestroyResource(v11, v10, a5, a6);
    else
      DXGDEVICE::DestroyAllocations(v11, v10, 0, a4, a5, a6);
    return;
  }
  v49 = v103;
  *(_QWORD *)v103 = v10;
  *((_QWORD *)v103 + 1) = a4;
  v50 = *(void **)(*((_QWORD *)v11 + 5) + 56LL);
  *((_QWORD *)v103 + 5) = v102;
  *((_DWORD *)v103 + 8) = v105;
  *((_QWORD *)v103 + 2) = v50;
  *((_QWORD *)v103 + 3) = v11;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v103 + 12) = a6;
  ObfReferenceObject(v50);
  v54 = *(_QWORD *)v103;
  v55 = 0;
  if ( *(_QWORD *)v103 )
  {
    v56 = PsGetCurrentProcess(v52, v51);
    v57 = PsGetProcessDxgProcess(v56);
    v60 = v57;
    if ( v57 && (*(_BYTE *)(v57 + 347) & 0x10) == 0
      || (v61 = DXGTHREAD::GetCurrent(v59, v58)) == 0LL
      || (v62 = *((_QWORD *)v61 + 1)) == 0 )
    {
      v62 = v60;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v104,
      (struct _KTHREAD **)v62);
    v63 = *(_DWORD *)(v54 + 16);
    v64 = (v63 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v64 < *(_DWORD *)(v62 + 256) )
    {
      v65 = *(_QWORD *)(v62 + 240);
      v66 = *(_DWORD *)(v65 + 16 * v64 + 8);
      if ( ((v63 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x60) && (v66 & 0x2000) == 0 && (v66 & 0x1F) != 0 )
        *(_DWORD *)(v65 + 16LL * ((v63 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v54);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v104);
    v67 = 0;
    if ( a5 )
    {
      v68 = *((_QWORD *)a5 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v68 + 184)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v68 + 168)) )
      {
        v67 = 1;
        if ( !*((_BYTE *)a5 + 32) )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v70, v69);
          v71[5] = (char *)a5 + 8;
          v71[3] = 275LL;
          v71[4] = 4LL;
          v71[6] = 0LL;
          v71[7] = 0LL;
          WdLogEvent5_WdCriticalError(v71);
        }
        v72 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
        *((_BYTE *)a5 + 32) = 0;
        if ( KeGetCurrentThread() != v72[23] )
          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v72, *((char **)a5 + 5));
        *((_QWORD *)a5 + 5) = 0LL;
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
        v49 = v103;
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v54 + 72));
    if ( v67 )
    {
      if ( *((_BYTE *)a5 + 144) )
        COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 8), 0LL);
    }
    DXGPROCESS::FreeResourceHandleNoRefSafe((DXGPROCESS *)v62, *(_DWORD *)(v54 + 16));
  }
  v73 = *((_QWORD *)v49 + 1);
  if ( v73 )
  {
    do
    {
      v74 = *(_QWORD *)(v73 + 48);
      v75 = *(_DWORD *)(v74 + 4);
      if ( (v75 & 0x2000) != 0 && *(_QWORD *)(v73 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(v11, (v75 >> 6) & 0xF, (struct DXGALLOCATION *)v73);
        v74 = *(_QWORD *)(v73 + 48);
      }
      v76 = *(unsigned int *)(v74 + 4);
      if ( (v76 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          v11,
          ((unsigned int)v76 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v73,
          v53);
      v77 = PsGetCurrentProcess(v52, v76);
      v78 = PsGetProcessDxgProcess(v77);
      v81 = v78;
      if ( v78 && (*(_BYTE *)(v78 + 347) & 0x10) == 0
        || (v82 = DXGTHREAD::GetCurrent(v80, v79)) == 0LL
        || (v83 = *((_QWORD *)v82 + 1)) == 0 )
      {
        v83 = v81;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v83 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v86 = *(_DWORD *)(v83 + 232);
          if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v84, &EventBlockThread, v85, v86);
        }
        ExAcquirePushLockExclusiveEx(v83 + 208, 0LL);
      }
      *(_QWORD *)(v83 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v83 + 240), *(_DWORD *)(v73 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v73);
      *(_QWORD *)(v83 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v83 + 208, 0LL);
      KeLeaveCriticalRegion();
      v87 = 0;
      if ( a5 )
      {
        v88 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v88 + 184)
          && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v88 + 168)) )
        {
          v87 = 1;
          if ( !*((_BYTE *)a5 + 32) )
          {
            v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v90, v89);
            v91[3] = 275LL;
            v91[4] = 4LL;
            v91[5] = (char *)a5 + 8;
            v91[6] = 0LL;
            v91[7] = 0LL;
            WdLogEvent5_WdCriticalError(v91);
          }
          v92 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v92[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v92, *((char **)a5 + 5));
          *((_QWORD *)a5 + 5) = 0LL;
          if ( *((_BYTE *)a5 + 144) )
            COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v73 + 88));
      if ( v87 )
      {
        if ( *((_BYTE *)a5 + 144) )
          COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
        if ( *((_BYTE *)a5 + 32) )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v93);
          v94[3] = 275LL;
          v94[4] = 4LL;
          v94[5] = (char *)a5 + 8;
          v94[6] = 0LL;
          v94[7] = 0LL;
          WdLogEvent5_WdCriticalError(v94);
        }
        v52 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v52 + 184) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v52 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v95, &EventBlockThread, v96, 72);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3), 0LL);
        }
        *((_QWORD *)a5 + 5) = 0LL;
        *((_BYTE *)a5 + 32) = 1;
      }
      v97 = *(_QWORD *)(v73 + 64);
      if ( *(_QWORD *)(v73 + 24) )
      {
        if ( !v55 )
        {
          v55 = 1;
          if ( v11 != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)v11 + 23) == KeGetCurrentThread() )
          {
            v98 = WdLogNewEntry5_WdAssertion(v52, v93);
            *(_QWORD *)(v98 + 24) = 1571LL;
            WdLogEvent5_WdAssertion(v98);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v11 + 176, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v101 = *((_DWORD *)v11 + 50);
              if ( v101 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v99, &EventBlockThread, v100, v101);
            }
            ExAcquirePushLockExclusiveEx((char *)v11 + 176, 0LL);
          }
          *((_QWORD *)v11 + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)v11 + 468) == 1 )
            KeClearEvent(*((PRKEVENT *)v11 + 235));
          *((_QWORD *)v11 + 23) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v11 + 176, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct DXGTERMINATIONTRACKER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 640LL) + 8LL)
                                                                                               + 152LL))(
          *(_QWORD *)(*((_QWORD *)v11 + 2) + 648LL),
          *(_QWORD *)(v73 + 24),
          (*(_DWORD *)(*(_QWORD *)(v73 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v49);
      }
      v73 = v97;
    }
    while ( v97 );
  }
}

/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019CBB0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00140C4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018BCD0 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C019D670 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C019D690 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019F408 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01D8B68 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v7; // esi
  struct DXGRESOURCE *v9; // r12
  BOOL v11; // r14d
  __int64 v12; // r15
  struct DXGALLOCATION *v13; // rdi
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rsi
  PSLIST_ENTRY v19; // r12
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  struct _SLIST_ENTRY *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGALLOCATION *v33; // r9
  struct _SLIST_ENTRY *Next; // rdi
  char v35; // r13
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46; // r14
  __int64 v47; // rcx
  struct _KTHREAD **v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r14
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r14
  __int64 v62; // rcx
  __int64 v63; // r8
  char v64; // r14
  __int64 v65; // rcx
  struct _KTHREAD **v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 (__fastcall *v69)(__int64, __int64, __int64); // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rcx
  int v73; // r9d
  int v74; // r9d
  int v75; // r9d
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v77; // rax
  int v78; // r9d
  struct DXGTHREAD *v79; // rax
  __int64 v80; // [rsp+B0h] [rbp+8h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v83; // [rsp+D8h] [rbp+30h]

  v80 = 0LL;
  v7 = (*(_BYTE *)&a6.0 & 2) == 0;
  v83.0 = 0;
  v9 = a2;
  v11 = *((_DWORD *)this + 108) == 2;
  v12 = 0LL;
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( (v14 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v13 + 18) & 0x800) != 0 )
        break;
      if ( (v14 & 0x800) != 0 )
        break;
      v15 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 209LL) )
        break;
      v16 = *((_QWORD *)v13 + 3);
      if ( !v16 )
        break;
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 648) + 8LL) + 640LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 656LL),
              v16,
              0LL);
      if ( !v17 )
      {
        WdLogSingleEntry1(1LL, 970LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IndividualAllocationSize > 0", 970LL, 0LL, 0LL, 0LL, 0LL);
      }
      v80 += v17;
      *(_DWORD *)&v83.0 += (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 648LL)
                                                                                      + 8LL)
                                                                          + 656LL))(
                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 656LL),
                             *((_QWORD *)v13 + 3));
      if ( v11
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                         + 8LL)
                                                             + 616LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
             *((_QWORD *)v13 + 3)) )
      {
        v11 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      if ( !v13 )
        goto LABEL_11;
    }
    v7 = 0;
LABEL_11:
    v12 = v80;
  }
  if ( a3 )
  {
    if ( this != (DXGDEVICE *)-240LL && *((struct _KTHREAD **)this + 31) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1425LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1425LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 240, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v75 = *((_DWORD *)this + 66);
        if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v54, (const EVENT_DESCRIPTOR *)"g", v55, v75);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 240, 0LL);
    }
    *((_QWORD *)this + 31) = KeGetCurrentThread();
    if ( v9 == *((struct DXGRESOURCE **)this + 7) || *((_QWORD *)v9 + 4) )
    {
      v56 = *((_QWORD *)v9 + 5);
      if ( v56 )
        *(_QWORD *)(v56 + 32) = *((_QWORD *)v9 + 4);
      v57 = *((_QWORD *)v9 + 4);
      if ( v57 )
      {
        *(_QWORD *)(v57 + 40) = *((_QWORD *)v9 + 5);
      }
      else
      {
        if ( *((struct DXGRESOURCE **)this + 7) != v9 )
        {
          WdLogSingleEntry1(1LL, 8960LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pResourceList == pResource",
            8960LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_QWORD *)this + 7) = *((_QWORD *)v9 + 5);
      }
    }
    *((_QWORD *)this + 31) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 240, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v7 || v11 || (!a3 || !*((_QWORD *)v9 + 3)) && v9 )
    goto LABEL_104;
  v18 = *((_QWORD *)this + 2);
  ++*(_DWORD *)(v18 + 1428);
  v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v18 + 1408));
  if ( v19
    || (v69 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v18 + 1456),
        v70 = *(unsigned int *)(v18 + 1452),
        v71 = *(unsigned int *)(v18 + 1448),
        v72 = *(unsigned int *)(v18 + 1444),
        ++*(_DWORD *)(v18 + 1432),
        (v19 = (PSLIST_ENTRY)v69(v72, v70, v71)) != 0LL) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v18 + 1248, 0LL);
    *(_QWORD *)(v18 + 1256) = KeGetCurrentThread();
    v20 = *(_QWORD *)(v18 + 1232) + v12;
    CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v27 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
      || (Current = DXGTHREAD::GetCurrent()) == 0LL
      || (v28 = *((_QWORD *)Current + 3)) == 0 )
    {
      v28 = v27;
    }
    if ( (*(_DWORD *)(v28 + 424) & 4) == 0 && v20 > *((_QWORD *)DXGGLOBAL_GetGlobal() + 114)
      || v20 < *(_QWORD *)(v18 + 1232) )
    {
      *(_QWORD *)(v18 + 1256) = 0LL;
      ExReleasePushLockExclusiveEx(v18 + 1248, 0LL);
      KeLeaveCriticalRegion();
      WdLogSingleEntry1(4LL, 4504LL);
      ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v18, v19);
      goto LABEL_103;
    }
    *(_QWORD *)(v18 + 1232) = v20;
    *(_QWORD *)(v18 + 1256) = 0LL;
    ExReleasePushLockExclusiveEx(v18 + 1248, 0LL);
    KeLeaveCriticalRegion();
    v19->Next = (struct _SLIST_ENTRY *)a2;
    *((_QWORD *)&v19->Next + 1) = a4;
    v29 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 56LL);
    *((_QWORD *)&v19[2].Next + 1) = v80;
    LODWORD(v19[2].Next) = v83;
    v19[1].Next = v29;
    *((_QWORD *)&v19[1].Next + 1) = this;
    LODWORD(v19[3].Next) = a6;
    ObfReferenceObject(v29);
    Next = v19->Next;
    v35 = 0;
    if ( !v19->Next )
      goto LABEL_25;
    v58 = PsGetCurrentProcess(v31, v30, v32, v33);
    v59 = PsGetProcessDxgProcess(v58);
    v60 = v59;
    if ( v59 && (*(_DWORD *)(v59 + 424) & 0x80) == 0
      || (v77 = DXGTHREAD::GetCurrent()) == 0LL
      || (v61 = *((_QWORD *)v77 + 3)) == 0 )
    {
      v61 = v60;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v61 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v78 = *(_DWORD *)(v61 + 272);
        if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v62, (const EVENT_DESCRIPTOR *)"g", v63, v78);
      }
      ExAcquirePushLockExclusiveEx(v61 + 248, 0LL);
    }
    *(_QWORD *)(v61 + 256) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v61 + 280), (unsigned int)Next[1].Next);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)Next);
    *(_QWORD *)(v61 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v61 + 248, 0LL);
    KeLeaveCriticalRegion();
    v64 = 0;
    if ( !a5 )
      goto LABEL_87;
    v65 = *((_QWORD *)a5 + 3);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v65 + 184)
      || ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v65 + 168)) )
    {
      goto LABEL_87;
    }
    v64 = 1;
    if ( !*((_BYTE *)a5 + 32) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
    v66 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
    *((_BYTE *)a5 + 32) = 0;
    if ( KeGetCurrentThread() != v66[23] )
      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v66, *((char **)a5 + 5));
    *((_QWORD *)a5 + 5) = 0LL;
    if ( *((_BYTE *)a5 + 144) )
    {
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
    }
    else
    {
LABEL_87:
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
      if ( !v64 )
        goto LABEL_25;
    }
    if ( *((_BYTE *)a5 + 144) )
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
    if ( *((_BYTE *)a5 + 32) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
    v31 = *((_QWORD *)a5 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v31 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v67, (const EVENT_DESCRIPTOR *)"g", v68, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3), 0LL);
    }
    *((_QWORD *)a5 + 5) = 0LL;
    *((_BYTE *)a5 + 32) = 1;
LABEL_25:
    v36 = *((_QWORD *)&v19->Next + 1);
    if ( !v36 )
      return;
    while ( 1 )
    {
      v37 = *(_QWORD *)(v36 + 48);
      v38 = *(_DWORD *)(v37 + 4);
      if ( (v38 & 0x2000) != 0 && *(_QWORD *)(v36 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v38 >> 6) & 0xF, (struct DXGALLOCATION *)v36);
        v37 = *(_QWORD *)(v36 + 48);
      }
      v39 = *(unsigned int *)(v37 + 4);
      if ( (v39 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          ((unsigned int)v39 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v36,
          v33);
      v40 = PsGetCurrentProcess(v31, v39, v32, v33);
      v41 = PsGetProcessDxgProcess(v40);
      v42 = v41;
      if ( v41 && (*(_DWORD *)(v41 + 424) & 0x80) == 0
        || (v79 = DXGTHREAD::GetCurrent()) == 0LL
        || (v43 = *((_QWORD *)v79 + 3)) == 0 )
      {
        v43 = v42;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v43 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v74 = *(_DWORD *)(v43 + 272);
          if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v44, (const EVENT_DESCRIPTOR *)"g", v45, v74);
        }
        ExAcquirePushLockExclusiveEx(v43 + 248, 0LL);
      }
      *(_QWORD *)(v43 + 256) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v43 + 280), *(_DWORD *)(v36 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v36);
      *(_QWORD *)(v43 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v43 + 248, 0LL);
      KeLeaveCriticalRegion();
      v46 = 0;
      if ( a5 )
      {
        v47 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 184)
          && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v47 + 168)) )
        {
          v46 = 1;
          if ( !*((_BYTE *)a5 + 32) )
            WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
          v48 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v48[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v48, *((char **)a5 + 5));
          *((_QWORD *)a5 + 5) = 0LL;
          if ( *((_BYTE *)a5 + 144) )
            break;
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v36 + 88));
      if ( v46 )
        goto LABEL_42;
LABEL_50:
      v51 = *(_QWORD *)(v36 + 64);
      if ( *(_QWORD *)(v36 + 24) )
      {
        if ( !v35 )
        {
          v35 = 1;
          if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 1425LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
              1425LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 176, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v73 = *((_DWORD *)this + 50);
              if ( v73 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v52, (const EVENT_DESCRIPTOR *)"g", v53, v73);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
          }
          *((_QWORD *)this + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 468) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 235));
          *((_QWORD *)this + 23) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                         + 8LL)
                                                                             + 152LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          *(_QWORD *)(v36 + 24),
          (*(_DWORD *)(*(_QWORD *)(v36 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v19);
      }
      v36 = v51;
      if ( !v51 )
        return;
    }
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v36 + 88));
LABEL_42:
    if ( *((_BYTE *)a5 + 144) )
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
    if ( *((_BYTE *)a5 + 32) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
    v31 = *((_QWORD *)a5 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v31 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v49, (const EVENT_DESCRIPTOR *)"g", v50, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3), 0LL);
    }
    *((_QWORD *)a5 + 5) = 0LL;
    *((_BYTE *)a5 + 32) = 1;
    goto LABEL_50;
  }
  WdLogSingleEntry1(6LL, 4513LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for deferred allocation tracker, destroying allocation synchronously.",
    4513LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_103:
  v9 = a2;
LABEL_104:
  if ( a3 )
    DXGDEVICE::DestroyResource(this, v9, a5, a6);
  else
    DXGDEVICE::DestroyAllocations(this, v9, 0, a4, a5, a6);
}

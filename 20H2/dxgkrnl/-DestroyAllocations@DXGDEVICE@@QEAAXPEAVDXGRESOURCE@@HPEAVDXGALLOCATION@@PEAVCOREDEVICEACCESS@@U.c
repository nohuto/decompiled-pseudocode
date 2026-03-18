/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0125DF4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F1850 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0108410 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0125CB0 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0125D30 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0001C68 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C00DE64C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E36B8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C01028C8 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C0110104 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0126760 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01268EC (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0126A90 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C0126D20 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C016D770 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0246BF8 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0278D00 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  PERESOURCE **v8; // r12
  struct DXGALLOCATION *v9; // r13
  struct DXGRESOURCE *v11; // rsi
  DXGADAPTER *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION *v24; // r14
  __int64 v25; // rcx
  unsigned int v26; // edi
  struct DXGPROCESS *v27; // rax
  __int64 v28; // rax
  struct DXGALLOCATION *v29; // r9
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rax
  ADAPTER_RENDER *v34; // rcx
  __int64 v35; // rdx
  DXGOVERLAY *i; // rdi
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // edx
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  char *v46; // rdx
  void *v47; // rdx
  ADAPTER_RENDER *v48; // rcx
  void *v49; // r12
  char v50; // di
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r8d
  struct DXGALLOCATION *v62; // rbx
  int v63; // eax
  struct DXGALLOCATION *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  void *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  void **v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  DXGALLOCATION *v76; // rbx
  char v77; // [rsp+40h] [rbp-C0h]
  void **v79; // [rsp+48h] [rbp-B8h]
  void *v80; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_CLOSEALLOCATION v82; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v83; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v84; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v85; // [rsp+98h] [rbp-68h]
  struct DXGRESOURCE *v86; // [rsp+A0h] [rbp-60h] BYREF
  char v87; // [rsp+A8h] [rbp-58h]
  _BYTE v88[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGALLOCATION *v89; // [rsp+C0h] [rbp-40h]
  _BYTE v90[128]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = *((_QWORD *)this + 2);
  v8 = a5;
  v9 = a4;
  v85 = a4;
  v11 = a2;
  v12 = *(DXGADAPTER **)(v6 + 16);
  v86 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v15 + 24) = 1285LL;
    WdLogEvent5_WdAssertion(v15);
  }
  memset(v90, 0, sizeof(v90));
  if ( ((unsigned __int64)v11 & -(__int64)(a3 != 0)) == 0
    || (v79 = *(void ***)(((unsigned __int64)v11 & -(__int64)(a3 != 0)) + 0x40)) == 0LL )
  {
    v79 = (void **)v90;
  }
  v82 = 0LL;
  if ( v11 && a3 )
  {
    v20 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = v11;
    v16 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 40LL);
    *(_QWORD *)(v20 + 32) = v16;
  }
  v77 = 0;
  v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v21 + 209) && a3 && v11 && *((_DWORD *)v11 + 5) )
  {
    v22 = *((_DWORD *)this + 110);
    Current = DXGPROCESS::GetCurrent(v21, v16);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
      *((_DWORD *)Current + 106),
      v22,
      *((_DWORD *)v11 + 5),
      0,
      0LL,
      a6);
    *((_DWORD *)v11 + 5) = 0;
    v77 = 1;
  }
  v84 = v9;
  v24 = v9;
  if ( v9 )
  {
    do
    {
      v89 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 8);
      v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v25 + 209) )
      {
        if ( !v77 && *((_DWORD *)v24 + 24) )
        {
          v26 = *((_DWORD *)this + 110);
          v27 = DXGPROCESS::GetCurrent(v25, v16);
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
            *((_DWORD *)v27 + 106),
            v26,
            0,
            1u,
            &v84,
            a6);
        }
        *((_DWORD *)v24 + 24) = 0;
      }
      v28 = WdLogNewEntry5_WdTrace(v25, v16, v18, v19);
      *(_QWORD *)(v28 + 24) = v24;
      v30 = *(_QWORD *)(*((_QWORD *)v24 + 1) + 40LL);
      *(_QWORD *)(v28 + 32) = v30;
      v31 = *(_DWORD *)(*((_QWORD *)v24 + 6) + 4LL);
      if ( (v31 & 1) != 0 )
      {
        v32 = (v31 >> 6) & 0xF;
        if ( (unsigned int)v32 >= *((_DWORD *)this + 464) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v32, v30);
          *(_QWORD *)(v33 + 24) = 1381LL;
          WdLogEvent5_WdAssertion(v33);
        }
        DXGDEVICE::RemovePrimaryAllocation((DXGADAPTER **)this, v24);
      }
      v34 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v24 + 6) + 4LL);
      if ( ((unsigned __int8)v34 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v88, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 728LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 60); i != (DXGDEVICE *)((char *)this + 480) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v24 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88, v35);
        if ( v88[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88, v37);
        v8 = a5;
      }
      v38 = *((_QWORD *)v24 + 6);
      v39 = *(_DWORD *)(v38 + 4);
      if ( (v39 & 0x2000) != 0 && *((_QWORD *)v24 + 3) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v39 >> 6) & 0xF, v24);
        v38 = *((_QWORD *)v24 + 6);
      }
      v40 = *(_DWORD *)(v38 + 4);
      if ( (v40 & 0x2000) != 0 || (v40 & 2) != 0 || (v40 & 8) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(this, (v40 >> 6) & 0xF, v24, v29);
      if ( *((_QWORD *)v24 + 3) && (*((_DWORD *)v24 + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL));
        *((_DWORD *)v24 + 18) &= ~0x800u;
      }
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v34, v24, (struct COREDEVICEACCESS *)v8);
      v16 = *((_QWORD *)v24 + 3);
      if ( v16 )
      {
        Object = 0LL;
        v41 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 640LL)
                                                                                      + 8LL)
                                                                          + 176LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                v16,
                &Object,
                a6.Value);
        if ( v41 < 0 )
        {
          if ( v41 != -1071775486 )
          {
            v43 = WdLogNewEntry5_WdAssertion(v42, v16);
            *(_QWORD *)(v43 + 24) = 1459LL;
            WdLogEvent5_WdAssertion(v43);
          }
          v44 = WdLogNewEntry5_WdTrace(v42, v16, v18, v19);
          *(_QWORD *)(v44 + 24) = *((_QWORD *)this + 95);
          *(_QWORD *)(v44 + 32) = *((_QWORD *)v24 + 3);
          if ( v8 && !DXGADAPTER::IsCoreResourceExclusiveOwner(v8[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v8, v45);
            if ( Object )
            {
              if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
              {
                DXGDEVICE::FlushScheduler(this, 3u);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 616LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                *((_QWORD *)v24 + 3),
                0LL,
                4LL);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v8, v46);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                             + 8LL)
                                                                 + 168LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            *((_QWORD *)v24 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v24 + 3) = 0LL;
      }
      v21 = *((_QWORD *)v24 + 4);
      if ( v21 )
      {
        v79[v82.NumAllocations++] = (void *)v21;
        *((_QWORD *)v24 + 4) = 0LL;
      }
      v84 = v89;
      v24 = v89;
    }
    while ( v89 );
    v11 = v86;
    v9 = v85;
  }
  if ( v82.NumAllocations )
  {
    v47 = (void *)*((_QWORD *)this + 73);
    v48 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v82.pOpenHandleList = v79;
    ADAPTER_RENDER::DdiCloseAllocation(v48, v47, &v82);
  }
  v49 = 0LL;
  v80 = 0LL;
  v50 = 1;
  if ( v11 )
  {
    if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
    {
      v51 = *((_QWORD *)v11 + 7);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v51 + 152);
        if ( v52 )
        {
          if ( *(DXGDEVICE **)(v52 + 72) == this && (*(_DWORD *)(v52 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&v86,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v11 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v86);
            v21 = *(_QWORD *)(*((_QWORD *)v11 + 7) + 152LL);
            *(_QWORD *)(v21 + 72) = 0LL;
            if ( v87 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v86, v54);
          }
        }
        v55 = *((_QWORD *)v11 + 7);
        v56 = *(_QWORD *)(v55 + 136);
        v16 = *(unsigned int *)(v56 - 44);
        if ( (v16 & 2) != 0 )
        {
          if ( *(_DWORD *)(v55 + 132) != 1 )
          {
            v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v21 + 280) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v21) )
            {
              v57 = WdLogNewEntry5_WdAssertion(v21, v16);
              *(_QWORD *)(v57 + 24) = 1575LL;
              WdLogEvent5_WdAssertion(v57);
              v16 = *(unsigned int *)(v56 - 44);
            }
          }
          if ( (((unsigned int)v16 >> 6) & 0xF) >= *((_DWORD *)this + 464) )
          {
            v58 = WdLogNewEntry5_WdAssertion(v21, v16);
            *(_QWORD *)(v58 + 24) = 1576LL;
            WdLogEvent5_WdAssertion(v58);
            v16 = *(unsigned int *)(v56 - 44);
          }
          v59 = ((unsigned int)v16 >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v59 + 79) == v11 )
            *((_QWORD *)this + v59 + 79) = 0LL;
        }
        v60 = *((_QWORD *)v11 + 3);
        v61 = 0;
        while ( v60 )
        {
          v60 = *(_QWORD *)(v60 + 64);
          ++v61;
        }
        v21 = *((_QWORD *)v11 + 7);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 68), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v21, v79, v61);
        *((_QWORD *)v11 + 7) = 0LL;
      }
      v50 = 0;
    }
    else
    {
      v49 = (void *)*((_QWORD *)v11 + 7);
      v80 = v49;
    }
  }
  v62 = v9;
  memset(&v83, 0, sizeof(v83));
  if ( v9 )
  {
    while ( 1 )
    {
      v63 = *((_DWORD *)v62 + 18);
      v64 = (struct DXGALLOCATION *)*((_QWORD *)v62 + 8);
      if ( (v63 & 0x800) != 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v21, v16);
        *(_QWORD *)(v65 + 24) = 1628LL;
        WdLogEvent5_WdAssertion(v65);
        v63 = *((_DWORD *)v62 + 18);
      }
      if ( (v63 & 0x7FE) != 0 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v21, v16);
        *(_QWORD *)(v66 + 24) = 1629LL;
        WdLogEvent5_WdAssertion(v66);
      }
      v67 = *((_QWORD *)v62 + 6);
      if ( !v67 )
        break;
      if ( !v50 )
        goto LABEL_100;
      if ( *(_QWORD *)(v67 + 8) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 136LL))(
          *((_QWORD *)this + 95),
          0LL);
        *(_QWORD *)(*((_QWORD *)v62 + 6) + 8LL) = 0LL;
        v67 = *((_QWORD *)v62 + 6);
      }
      v68 = *(void **)(v67 + 16);
      if ( !v68 )
        goto LABEL_106;
      v79[v83.NumAllocations] = v68;
      v21 = 1LL;
      ++v83.NumAllocations;
      *(_QWORD *)(*((_QWORD *)v62 + 6) + 16LL) = 0LL;
LABEL_107:
      v72 = (void **)*((_QWORD *)v62 + 6);
      if ( (!v11 || (*((_DWORD *)v11 + 1) & 1) == 0) && v72 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v72);
        operator delete(v72);
      }
      v62 = v64;
      if ( !v64 )
      {
        v9 = v85;
        v49 = v80;
        goto LABEL_113;
      }
    }
    if ( !v50 )
    {
LABEL_100:
      if ( !v11 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v21, v16);
        *(_QWORD *)(v69 + 24) = 1657LL;
        WdLogEvent5_WdAssertion(v69);
      }
      v21 = 1LL;
      if ( (*((_DWORD *)v11 + 1) & 1) == 0 )
      {
        v70 = WdLogNewEntry5_WdAssertion(1LL, v16);
        *(_QWORD *)(v70 + 24) = 1658LL;
        WdLogEvent5_WdAssertion(v70);
        v21 = 1LL;
      }
      if ( a3 )
        goto LABEL_107;
      v71 = WdLogNewEntry5_WdAssertion(1LL, v16);
      *(_QWORD *)(v71 + 24) = 1659LL;
      WdLogEvent5_WdAssertion(v71);
    }
LABEL_106:
    v21 = 1LL;
    goto LABEL_107;
  }
LABEL_113:
  if ( v50 )
  {
    v83.Flags.Value = 0;
    if ( v11 )
      v83.Flags.Value = a3 != 0;
    v83.hResource = v49;
    if ( v83.NumAllocations )
    {
      v83.pAllocationList = v79;
    }
    else
    {
      v83.pAllocationList = 0LL;
      if ( !a3 || !v49 )
        goto LABEL_126;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v83, 0);
    if ( v11 && !a3 )
    {
      if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v74, v73);
        *(_QWORD *)(v75 + 24) = 1707LL;
        WdLogEvent5_WdAssertion(v75);
      }
      *((_QWORD *)v11 + 7) = v83.hResource;
    }
  }
LABEL_126:
  if ( v9 )
  {
    v76 = v9;
    do
    {
      v9 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      if ( v76 )
      {
        DXGALLOCATION::~DXGALLOCATION(v76);
        ExFreePoolWithTag(v76, 0);
      }
      v76 = v9;
    }
    while ( v9 );
  }
}

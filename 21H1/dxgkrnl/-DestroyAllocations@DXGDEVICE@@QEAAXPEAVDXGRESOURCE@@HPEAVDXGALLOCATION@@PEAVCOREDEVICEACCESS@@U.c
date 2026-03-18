/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F08D4
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00F07C0 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F0840 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010D860 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0018CD0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00F1240 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F13CC (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C011A458 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C011A490 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C011A4B0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C011A8D0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C014D9A8 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015EEC0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C02439C8 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0275880 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
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
  char *v45; // rdx
  void *v46; // rdx
  ADAPTER_RENDER *v47; // rcx
  void *v48; // r12
  char v49; // di
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r8d
  struct DXGALLOCATION *v61; // rbx
  int v62; // eax
  struct DXGALLOCATION *v63; // r14
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  DXGADAPTERALLOCATION *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  DXGALLOCATION *v75; // rbx
  char v76; // [rsp+40h] [rbp-C0h]
  void **v78; // [rsp+48h] [rbp-B8h]
  void *v79; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_CLOSEALLOCATION v81; // [rsp+60h] [rbp-A0h] BYREF
  _DXGKARG_DESTROYALLOCATION v82; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v83; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v84; // [rsp+98h] [rbp-68h]
  struct DXGRESOURCE *v85; // [rsp+A0h] [rbp-60h] BYREF
  char v86; // [rsp+A8h] [rbp-58h]
  _BYTE v87[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGALLOCATION *v88; // [rsp+C0h] [rbp-40h]
  _BYTE v89[128]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = *((_QWORD *)this + 2);
  v8 = a5;
  v9 = a4;
  v84 = a4;
  v11 = a2;
  v12 = *(DXGADAPTER **)(v6 + 16);
  v85 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v15 + 24) = 1284LL;
    WdLogEvent5_WdAssertion(v15);
  }
  memset(v89, 0, sizeof(v89));
  if ( ((unsigned __int64)v11 & -(__int64)(a3 != 0)) == 0
    || (v78 = *(void ***)(((unsigned __int64)v11 & -(__int64)(a3 != 0)) + 0x40)) == 0LL )
  {
    v78 = (void **)v89;
  }
  v81 = 0LL;
  if ( v11 && a3 )
  {
    v20 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = v11;
    v16 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 40LL);
    *(_QWORD *)(v20 + 32) = v16;
  }
  v76 = 0;
  v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v21 + 209) && a3 && v11 && *((_DWORD *)v11 + 5) )
  {
    v22 = *((_DWORD *)this + 110);
    Current = DXGPROCESS::GetCurrent();
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
      *((_DWORD *)Current + 106),
      v22,
      *((_DWORD *)v11 + 5),
      0,
      0LL,
      a6);
    *((_DWORD *)v11 + 5) = 0;
    v76 = 1;
  }
  v83 = v9;
  v24 = v9;
  if ( v9 )
  {
    do
    {
      v88 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 8);
      v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_BYTE *)(v25 + 209) )
      {
        if ( !v76 && *((_DWORD *)v24 + 24) )
        {
          v26 = *((_DWORD *)this + 110);
          v27 = DXGPROCESS::GetCurrent();
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
            *((_DWORD *)v27 + 106),
            v26,
            0,
            1u,
            &v83,
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
          *(_QWORD *)(v33 + 24) = 1380LL;
          WdLogEvent5_WdAssertion(v33);
        }
        DXGDEVICE::RemovePrimaryAllocation(this, v24);
      }
      v34 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v24 + 6) + 4LL);
      if ( ((unsigned __int8)v34 & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v87, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 728LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v87);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 60); i != (DXGDEVICE *)((char *)this + 480) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v24 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v87, v35);
        if ( v87[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v87, v37);
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
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, (v40 >> 6) & 0xF, v24, v29);
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
            *(_QWORD *)(v43 + 24) = 1458LL;
            WdLogEvent5_WdAssertion(v43);
          }
          v44 = WdLogNewEntry5_WdTrace(v42, v16, v18, v19);
          *(_QWORD *)(v44 + 24) = *((_QWORD *)this + 95);
          *(_QWORD *)(v44 + 32) = *((_QWORD *)v24 + 3);
          if ( v8 && !DXGADAPTER::IsCoreResourceExclusiveOwner(v8[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v8);
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
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v8, v45);
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
        v78[v81.NumAllocations++] = (void *)v21;
        *((_QWORD *)v24 + 4) = 0LL;
      }
      v83 = v88;
      v24 = v88;
    }
    while ( v88 );
    v11 = v85;
    v9 = v84;
  }
  if ( v81.NumAllocations )
  {
    v46 = (void *)*((_QWORD *)this + 73);
    v47 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v81.pOpenHandleList = v78;
    ADAPTER_RENDER::DdiCloseAllocation(v47, v46, &v81);
  }
  v48 = 0LL;
  v79 = 0LL;
  v49 = 1;
  if ( v11 )
  {
    if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
    {
      v50 = *((_QWORD *)v11 + 7);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 152);
        if ( v51 )
        {
          if ( *(DXGDEVICE **)(v51 + 72) == this && (*(_DWORD *)(v51 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&v85,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v11 + 7) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v85);
            v21 = *(_QWORD *)(*((_QWORD *)v11 + 7) + 152LL);
            *(_QWORD *)(v21 + 72) = 0LL;
            if ( v86 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v85, v53);
          }
        }
        v54 = *((_QWORD *)v11 + 7);
        v55 = *(_QWORD *)(v54 + 136);
        v16 = *(unsigned int *)(v55 - 44);
        if ( (v16 & 2) != 0 )
        {
          if ( *(_DWORD *)(v54 + 132) != 1 )
          {
            v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v21 + 280) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v21) )
            {
              v56 = WdLogNewEntry5_WdAssertion(v21, v16);
              *(_QWORD *)(v56 + 24) = 1574LL;
              WdLogEvent5_WdAssertion(v56);
              v16 = *(unsigned int *)(v55 - 44);
            }
          }
          if ( (((unsigned int)v16 >> 6) & 0xF) >= *((_DWORD *)this + 464) )
          {
            v57 = WdLogNewEntry5_WdAssertion(v21, v16);
            *(_QWORD *)(v57 + 24) = 1575LL;
            WdLogEvent5_WdAssertion(v57);
            v16 = *(unsigned int *)(v55 - 44);
          }
          v58 = ((unsigned int)v16 >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v58 + 79) == v11 )
            *((_QWORD *)this + v58 + 79) = 0LL;
        }
        v59 = *((_QWORD *)v11 + 3);
        v60 = 0;
        while ( v59 )
        {
          v59 = *(_QWORD *)(v59 + 64);
          ++v60;
        }
        v21 = *((_QWORD *)v11 + 7);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 68), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v21, v78, v60);
        *((_QWORD *)v11 + 7) = 0LL;
      }
      v49 = 0;
    }
    else
    {
      v48 = (void *)*((_QWORD *)v11 + 7);
      v79 = v48;
    }
  }
  v61 = v9;
  memset(&v82, 0, sizeof(v82));
  if ( v9 )
  {
    while ( 1 )
    {
      v62 = *((_DWORD *)v61 + 18);
      v63 = (struct DXGALLOCATION *)*((_QWORD *)v61 + 8);
      if ( (v62 & 0x800) != 0 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v21, v16);
        *(_QWORD *)(v64 + 24) = 1627LL;
        WdLogEvent5_WdAssertion(v64);
        v62 = *((_DWORD *)v61 + 18);
      }
      if ( (v62 & 0x7FE) != 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v21, v16);
        *(_QWORD *)(v65 + 24) = 1628LL;
        WdLogEvent5_WdAssertion(v65);
      }
      v66 = *((_QWORD *)v61 + 6);
      if ( !v66 )
        break;
      if ( !v49 )
        goto LABEL_100;
      if ( *(_QWORD *)(v66 + 8) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 136LL))(
          *((_QWORD *)this + 95),
          0LL);
        *(_QWORD *)(*((_QWORD *)v61 + 6) + 8LL) = 0LL;
        v66 = *((_QWORD *)v61 + 6);
      }
      v67 = *(void **)(v66 + 16);
      if ( !v67 )
        goto LABEL_106;
      v78[v82.NumAllocations] = v67;
      v21 = 1LL;
      ++v82.NumAllocations;
      *(_QWORD *)(*((_QWORD *)v61 + 6) + 16LL) = 0LL;
LABEL_107:
      v71 = (DXGADAPTERALLOCATION *)*((_QWORD *)v61 + 6);
      if ( (!v11 || (*((_DWORD *)v11 + 1) & 1) == 0) && v71 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v71);
        operator delete(v71);
      }
      v61 = v63;
      if ( !v63 )
      {
        v9 = v84;
        v48 = v79;
        goto LABEL_113;
      }
    }
    if ( !v49 )
    {
LABEL_100:
      if ( !v11 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v21, v16);
        *(_QWORD *)(v68 + 24) = 1656LL;
        WdLogEvent5_WdAssertion(v68);
      }
      v21 = 1LL;
      if ( (*((_DWORD *)v11 + 1) & 1) == 0 )
      {
        v69 = WdLogNewEntry5_WdAssertion(1LL, v16);
        *(_QWORD *)(v69 + 24) = 1657LL;
        WdLogEvent5_WdAssertion(v69);
        v21 = 1LL;
      }
      if ( a3 )
        goto LABEL_107;
      v70 = WdLogNewEntry5_WdAssertion(1LL, v16);
      *(_QWORD *)(v70 + 24) = 1658LL;
      WdLogEvent5_WdAssertion(v70);
    }
LABEL_106:
    v21 = 1LL;
    goto LABEL_107;
  }
LABEL_113:
  if ( v49 )
  {
    v82.Flags.Value = 0;
    if ( v11 )
      v82.Flags.Value = a3 != 0;
    v82.hResource = v48;
    if ( v82.NumAllocations )
    {
      v82.pAllocationList = v78;
    }
    else
    {
      v82.pAllocationList = 0LL;
      if ( !a3 || !v48 )
        goto LABEL_126;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v82, 0);
    if ( v11 && !a3 )
    {
      if ( (*((_DWORD *)v11 + 1) & 1) != 0 )
      {
        v74 = WdLogNewEntry5_WdAssertion(v73, v72);
        *(_QWORD *)(v74 + 24) = 1706LL;
        WdLogEvent5_WdAssertion(v74);
      }
      *((_QWORD *)v11 + 7) = v82.hResource;
    }
  }
LABEL_126:
  if ( v9 )
  {
    v75 = v9;
    do
    {
      v9 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      if ( v75 )
      {
        DXGALLOCATION::~DXGALLOCATION(v75);
        ExFreePoolWithTag(v75, 0);
      }
      v75 = v9;
    }
    while ( v9 );
  }
}

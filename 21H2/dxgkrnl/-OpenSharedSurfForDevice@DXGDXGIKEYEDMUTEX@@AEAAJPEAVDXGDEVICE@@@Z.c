/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B390
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C029AFA8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9DC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011D460 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C011D7A0 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02497B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C02499A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C024DA10 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DDDI_OPENALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C027E698 (--1-$PagedPoolZeroedArray@U_D3DDDI_OPENALLOCATIONINFO2@@$03@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int Resident; // ebx
  __int64 v12; // rax
  __int64 hAsyncEvent_high; // rbx
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v16; // r14d
  int hAsyncEvent; // r13d
  UINT v18; // eax
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  void *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r14d
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _EX_RUNDOWN_REF *v42; // rdx
  __int64 v43; // rcx
  struct _EX_RUNDOWN_REF *v44; // rdx
  char v45; // r15
  __int64 v46; // rcx
  _QWORD *v47; // rdi
  ULONG_PTR Count; // r13
  struct DXGPROCESS *Current; // rax
  char v50; // r14
  int *v51; // r12
  char v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  struct D3DDDI_MAKERESIDENT_FLAGS v70; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v72; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+70h] [rbp-90h] BYREF
  struct _EX_RUNDOWN_REF *v76; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v77; // [rsp+80h] [rbp-80h] BYREF
  __int64 v78; // [rsp+88h] [rbp-78h] BYREF
  void *v79; // [rsp+90h] [rbp-70h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v80; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v81[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v82[14]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v83; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v84; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v85[320]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v86; // [rsp+2F8h] [rbp+1F8h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 235LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)this;
  memset(&v80, 0, sizeof(v80));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v80, v6, v8);
  if ( Resident < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v80.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v80.Flags.Value;
  v16 = HIDWORD(v80.hAsyncEvent) + v80.Flags.Value;
  if ( HIDWORD(v80.hAsyncEvent) + v80.Flags.Value < HIDWORD(v80.hAsyncEvent) )
  {
    v69 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v69 + 24) = 251LL;
  }
  else
  {
    hAsyncEvent = (int)v80.hAsyncEvent;
    v18 = v16 + LODWORD(v80.hAsyncEvent);
    if ( v16 + LODWORD(v80.hAsyncEvent) >= v16 )
    {
      v19 = v18;
      v79 = operator new[](v18, 0x674D444Fu, PagedPool);
      if ( !v79 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v19;
        WdLogEvent5_WdLowResource(v24);
        return 3221225495LL;
      }
      memset(v82, 0, 0x68uLL);
      v84 = 0LL;
      v86 = 0;
      v29 = *((unsigned int *)&v80.Flags + 1);
      if ( *((_DWORD *)&v80.Flags + 1) <= 4u )
      {
        PoolWithTag = v85;
        v84 = v85;
      }
      else
      {
        v25 = 0xFFFFFFFFFFFFFFFFuLL % *((unsigned int *)&v80.Flags + 1);
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v80.Flags + 1) < 0x50 )
          goto LABEL_64;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * *((unsigned int *)&v80.Flags + 1), 0x4B677844u);
        v84 = PoolWithTag;
      }
      v86 = v29;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v29);
        PoolWithTag = v84;
        if ( v84 )
        {
          LODWORD(v82[0]) = *((_DWORD *)a2 + 109);
          v30 = (void *)v82[9];
          v82[3] = v84;
          if ( (_DWORD)hAsyncEvent_high )
            v30 = v79;
          LODWORD(v82[2]) = v29;
          v82[9] = v30;
          LODWORD(v82[8]) = hAsyncEvent_high;
          if ( Value )
            v82[7] = (char *)v79 + hAsyncEvent_high;
          LODWORD(v82[6]) = Value;
          if ( hAsyncEvent )
            v82[5] = (char *)v79 + v16;
          v31 = *(_QWORD *)this;
          LODWORD(v82[4]) = hAsyncEvent;
          Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       a2,
                       (__int64)v82,
                       0,
                       v31,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0LL);
          if ( Resident < 0 )
          {
            v67 = WdLogNewEntry5_WdEvent(v33, v32);
            *(_QWORD *)(v67 + 24) = this;
            *(_QWORD *)(v67 + 32) = *(_QWORD *)this;
            WdLogEvent5_WdEvent(v67);
LABEL_63:
            operator delete[](v79);
LABEL_65:
            PagedPoolZeroedArray<_D3DDDI_OPENALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_OPENALLOCATIONINFO2,4>((__int64)&v84);
            return (unsigned int)Resident;
          }
          v34 = *((_QWORD *)this + 1);
          v35 = v82[10];
          *((_DWORD *)this + 22) = v82[10];
          v36 = *(_QWORD *)(v34 + 40);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v36 + 208));
          v37 = (v35 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v37 < *(_DWORD *)(v36 + 256) )
          {
            v38 = *(_QWORD *)(v36 + 240);
            v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
            if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
              && (v39 & 0x2000) == 0
              && (v39 & 0x1F) != 0 )
            {
              v40 = v39 & 0x1F;
              if ( (_BYTE)v40 == 4 )
              {
                v42 = *(struct _EX_RUNDOWN_REF **)(v38 + 16LL * (unsigned int)v37);
                goto LABEL_30;
              }
              v41 = WdLogNewEntry5_WdError(v40, 2LL * (unsigned int)v37);
              *(_QWORD *)(v41 + 24) = 316LL;
              WdLogEvent5_WdError(v41);
            }
          }
          v42 = 0LL;
LABEL_30:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v75, v42);
          ExReleasePushLockSharedEx(v36 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( v75 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v81, (struct DXGFASTMUTEX *const)&v75[10], 0);
            if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v81);
            v44 = v75;
            v45 = 0;
            v46 = *(unsigned int *)(v75[3].Count + 16);
            *((_DWORD *)this + 23) = v46;
            v47 = (_QWORD *)*((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v73 = 0LL;
            v78 = 0LL;
            Count = v44[3].Count;
            Current = DXGPROCESS::GetCurrent(v46, (__int64)v44);
            v50 = *((_BYTE *)a2 + 1869);
            v51 = (int *)Current;
            v74 = v47[2];
            v52 = v50 & 1;
            if ( !v52
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2060LL) & 0x40) != 0) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v47[80] + 8LL) + 984LL))(
                *((_QWORD *)a2 + 95),
                (*(_DWORD *)(Count + 72) >> 12) & 0x3F,
                &v73,
                &v78);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v72 = 0LL;
              v77 = 0LL;
              if ( v52 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v76,
                  (struct _EX_RUNDOWN_REF *)Count);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4240),
                             (unsigned int)v51[106],
                             *((_DWORD *)a2 + 110),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v76,
                             &v72,
                             &v77);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76, v53);
              }
              else
              {
                Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v47[80] + 8LL) + 776LL))(
                             v47[81],
                             v73,
                             Count + 24,
                             1LL,
                             3,
                             &v72,
                             &v77);
              }
              if ( Resident >= 0 )
              {
                if ( Resident == 259 )
                {
                  v45 = 1;
                  PagingFenceValue = v72;
                  Resident = 0;
                }
              }
              else
              {
                v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
                *(_QWORD *)(v57 + 24) = Resident;
                WdLogEvent5_WdWarning(v57);
              }
            }
            if ( Resident >= 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2060LL) & 0x40) != 0 )
              {
                memset(&v83, 0, sizeof(v83));
                v58 = v47[2];
                v83.Protection.Value = 1LL;
                v83.MinimumAddress = *(_QWORD *)(v58 + 2544);
                v83.MaximumAddress = *(_QWORD *)(v58 + 2552);
                if ( v52 )
                {
                  v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4240),
                          v51[106],
                          a2,
                          0,
                          *(_DWORD *)(Count + 16),
                          &v83);
                }
                else
                {
                  *(_BYTE *)&v70.0 = 1;
                  v59 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, struct D3DDDI_MAKERESIDENT_FLAGS, int))(*(_QWORD *)(v47[80] + 8LL) + 800LL))(
                          v47[81],
                          v73,
                          *(_QWORD *)(Count + 24),
                          &v83,
                          v70,
                          -2);
                }
                Resident = v59;
                if ( v59 >= 0 )
                {
                  if ( v59 == 259 )
                  {
                    v45 = 1;
                    PagingFenceValue = v83.PagingFenceValue;
                    Resident = 0;
                  }
                }
                else
                {
                  v63 = WdLogNewEntry5_WdWarning(v61, v60, v62);
                  *(_QWORD *)(v63 + 24) = Resident;
                  WdLogEvent5_WdWarning(v63);
                }
              }
              if ( v45 )
              {
                if ( v52 )
                {
                  v64 = *((unsigned int *)a2 + 110);
                  v80.ObjectHandleArray = 0LL;
                  v80.hDevice = v64;
                  v80.ObjectCount = 1;
                  *(_OWORD *)&v80.hAsyncEvent = 0LL;
                  v80.FenceValueArray = &PagingFenceValue;
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4240),
                               (struct DXGPROCESS *)v51,
                               v64,
                               &v80,
                               1u);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v47[80] + 8LL)
                                                                                         + 992LL))(
                    v47[81],
                    &v78,
                    &PagingFenceValue,
                    1LL);
                }
              }
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v81);
          }
          else
          {
            v66 = WdLogNewEntry5_WdError(v43, 0LL);
            *(_QWORD *)(v66 + 24) = this;
            *(_QWORD *)(v66 + 32) = *((unsigned int *)this + 22);
            WdLogEvent5_WdError(v66);
            Resident = -1073741811;
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v75, v65);
          goto LABEL_63;
        }
      }
LABEL_64:
      v68 = WdLogNewEntry5_WdLowResource(PoolWithTag, v25, v27, v28);
      *(_QWORD *)(v68 + 24) = 278LL;
      WdLogEvent5_WdLowResource(v68);
      Resident = -1073741801;
      goto LABEL_65;
    }
    v69 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v69 + 24) = 257LL;
  }
  WdLogEvent5_WdError(v69);
  return 3221225621LL;
}

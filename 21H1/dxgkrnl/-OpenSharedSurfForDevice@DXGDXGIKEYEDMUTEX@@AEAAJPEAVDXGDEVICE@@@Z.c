/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C02969C0
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C02965D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000A6F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C010C6F8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0123F30 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0124270 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0245678 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0245860 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C02498BC (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
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
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _EX_RUNDOWN_REF *v45; // rax
  ULONG_PTR Count; // rcx
  char v47; // r15
  __int64 v48; // rdx
  _QWORD *v49; // rsi
  ULONG_PTR v50; // r13
  struct DXGPROCESS *Current; // rax
  char v52; // r14
  int *v53; // r12
  char v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r8
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
  unsigned __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  __int64 v77; // [rsp+80h] [rbp-80h] BYREF
  struct _EX_RUNDOWN_REF *v78; // [rsp+88h] [rbp-78h] BYREF
  void *v79; // [rsp+90h] [rbp-70h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v80; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v81[14]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v82; // [rsp+130h] [rbp+30h] BYREF
  PVOID P; // [rsp+1A0h] [rbp+A0h]
  _BYTE v84[320]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v85; // [rsp+2E8h] [rbp+1E8h]

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
      memset(v81, 0, 0x68uLL);
      P = 0LL;
      v85 = 0;
      v29 = *((unsigned int *)&v80.Flags + 1);
      if ( *((_DWORD *)&v80.Flags + 1) <= 4u )
      {
        PoolWithTag = v84;
        P = v84;
      }
      else
      {
        v25 = 0xFFFFFFFFFFFFFFFFuLL % *((unsigned int *)&v80.Flags + 1);
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v80.Flags + 1) < 0x50 )
          goto LABEL_61;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * *((unsigned int *)&v80.Flags + 1), 0x4B677844u);
        P = PoolWithTag;
      }
      v85 = v29;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v29);
        PoolWithTag = P;
        if ( P )
        {
          LODWORD(v81[0]) = *((_DWORD *)a2 + 109);
          v30 = (void *)v81[9];
          v81[3] = P;
          if ( (_DWORD)hAsyncEvent_high )
            v30 = v79;
          LODWORD(v81[2]) = v29;
          v81[9] = v30;
          LODWORD(v81[8]) = hAsyncEvent_high;
          if ( Value )
            v81[7] = (char *)v79 + hAsyncEvent_high;
          LODWORD(v81[6]) = Value;
          if ( hAsyncEvent )
            v81[5] = (char *)v79 + v16;
          v31 = *(_QWORD *)this;
          LODWORD(v81[4]) = hAsyncEvent;
          Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       a2,
                       (__int64)v81,
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
LABEL_60:
            operator delete[](v79);
            goto LABEL_62;
          }
          v34 = *((_QWORD *)this + 1);
          v35 = v81[10];
          *((_DWORD *)this + 22) = v81[10];
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
              *(_QWORD *)(v41 + 24) = 267LL;
              WdLogEvent5_WdError(v41);
            }
          }
          v42 = 0LL;
LABEL_30:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v78, v42);
          ExReleasePushLockSharedEx(v36 + 208, 0LL);
          KeLeaveCriticalRegion();
          v45 = v78;
          if ( v78 )
          {
            Count = v78[3].Count;
            v47 = 0;
            v48 = *(unsigned int *)(Count + 16);
            *((_DWORD *)this + 23) = v48;
            v49 = (_QWORD *)*((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v73 = 0LL;
            v77 = 0LL;
            v50 = v45[3].Count;
            Current = DXGPROCESS::GetCurrent(Count, v48);
            v52 = *((_BYTE *)a2 + 1869);
            v53 = (int *)Current;
            v74 = v49[2];
            v54 = v52 & 1;
            if ( !v54
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2036LL) & 0x40) != 0) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v49[80] + 8LL) + 984LL))(
                *((_QWORD *)a2 + 95),
                (*(_DWORD *)(v50 + 72) >> 12) & 0x3F,
                &v73,
                &v77);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v72 = 0LL;
              v76 = 0LL;
              if ( v54 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v75,
                  (struct _EX_RUNDOWN_REF *)v50);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4208),
                             (unsigned int)v53[106],
                             *((_DWORD *)a2 + 110),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v75,
                             &v72,
                             &v76);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75, v56);
              }
              else
              {
                Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v49[80] + 8LL) + 776LL))(
                             v49[81],
                             v73,
                             v50 + 24,
                             1LL,
                             3,
                             &v72,
                             &v76);
              }
              if ( Resident >= 0 )
              {
                if ( Resident == 259 )
                {
                  v47 = 1;
                  PagingFenceValue = v72;
                  Resident = 0;
                }
              }
              else
              {
                v59 = WdLogNewEntry5_WdWarning(v57, v55, v58);
                *(_QWORD *)(v59 + 24) = Resident;
                WdLogEvent5_WdWarning(v59);
              }
            }
            if ( Resident >= 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2036LL) & 0x40) != 0 )
              {
                memset(&v82, 0, sizeof(v82));
                v60 = v49[2];
                v82.Protection.Value = 1LL;
                v82.MinimumAddress = *(_QWORD *)(v60 + 2520);
                v82.MaximumAddress = *(_QWORD *)(v60 + 2528);
                if ( v54 )
                {
                  v61 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4208),
                          v53[106],
                          a2,
                          0,
                          *(_DWORD *)(v50 + 16),
                          &v82);
                }
                else
                {
                  *(_BYTE *)&v70.0 = 1;
                  v61 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, struct D3DDDI_MAKERESIDENT_FLAGS, int))(*(_QWORD *)(v49[80] + 8LL) + 800LL))(
                          v49[81],
                          v73,
                          *(_QWORD *)(v50 + 24),
                          &v82,
                          v70,
                          -2);
                }
                Resident = v61;
                if ( v61 >= 0 )
                {
                  if ( v61 == 259 )
                  {
                    v47 = 1;
                    PagingFenceValue = v82.PagingFenceValue;
                    Resident = 0;
                  }
                }
                else
                {
                  v64 = WdLogNewEntry5_WdWarning(v62, v55, v63);
                  *(_QWORD *)(v64 + 24) = Resident;
                  WdLogEvent5_WdWarning(v64);
                }
              }
              if ( v47 )
              {
                if ( v54 )
                {
                  v65 = *((unsigned int *)a2 + 110);
                  v80.ObjectHandleArray = 0LL;
                  v80.hDevice = v65;
                  v80.ObjectCount = 1;
                  *(_OWORD *)&v80.hAsyncEvent = 0LL;
                  v80.FenceValueArray = &PagingFenceValue;
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4208),
                               (struct DXGPROCESS *)v53,
                               v65,
                               &v80,
                               1u);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v49[80] + 8LL)
                                                                                         + 992LL))(
                    v49[81],
                    &v77,
                    &PagingFenceValue,
                    1LL);
                }
              }
            }
          }
          else
          {
            v66 = WdLogNewEntry5_WdError(v44, v43);
            *(_QWORD *)(v66 + 24) = this;
            *(_QWORD *)(v66 + 32) = *((unsigned int *)this + 22);
            WdLogEvent5_WdError(v66);
            Resident = -1073741811;
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v78, v55);
          goto LABEL_60;
        }
      }
LABEL_61:
      v68 = WdLogNewEntry5_WdLowResource(PoolWithTag, v25, v27, v28);
      *(_QWORD *)(v68 + 24) = 278LL;
      WdLogEvent5_WdLowResource(v68);
      Resident = -1073741801;
LABEL_62:
      if ( P != v84 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)Resident;
    }
    v69 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v69 + 24) = 257LL;
  }
  WdLogEvent5_WdError(v69);
  return 3221225621LL;
}

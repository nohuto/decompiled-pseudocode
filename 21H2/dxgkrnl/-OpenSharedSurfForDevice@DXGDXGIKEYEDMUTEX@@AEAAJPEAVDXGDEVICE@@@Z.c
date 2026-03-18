/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C032252C
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03220AC (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C019F668 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C019F7B4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C03798B4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0379B34 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C037F5E4 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int Resident; // edi
  __int64 v7; // r9
  __int64 hAsyncEvent_high; // r14
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v11; // r15d
  int hAsyncEvent; // r13d
  UINT v13; // eax
  __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // edi
  _BYTE *Pool2; // rcx
  void *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _EX_RUNDOWN_REF *v29; // rax
  ULONG_PTR Count; // rcx
  char v31; // r12
  __int64 v32; // rdx
  _QWORD *v33; // r14
  ULONG_PTR v34; // r13
  struct DXGPROCESS *Current; // rax
  char v36; // r15
  char v37; // r15
  __int64 v38; // rcx
  int v39; // eax
  D3DKMT_HANDLE v40; // r8d
  int v41; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v46; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v50; // [rsp+90h] [rbp-70h] BYREF
  void *v51; // [rsp+98h] [rbp-68h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v52; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v53[14]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v54; // [rsp+140h] [rbp+40h] BYREF
  PVOID P; // [rsp+1B0h] [rbp+B0h]
  _BYTE v56[320]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v57; // [rsp+2F8h] [rbp+1F8h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 231LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      231LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)this;
  memset(&v52, 0, sizeof(v52));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v52, v4, v5);
  if ( Resident < 0 )
  {
    WdLogSingleEntry1(4LL, a2);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v52.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v52.Flags.Value;
  v11 = HIDWORD(v52.hAsyncEvent) + v52.Flags.Value;
  if ( HIDWORD(v52.hAsyncEvent) + v52.Flags.Value < HIDWORD(v52.hAsyncEvent) )
  {
    WdLogSingleEntry1(2LL, 247LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Overflow while calculating buffer size",
      247LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    hAsyncEvent = (int)v52.hAsyncEvent;
    v13 = v11 + LODWORD(v52.hAsyncEvent);
    if ( v11 + LODWORD(v52.hAsyncEvent) >= v11 )
    {
      v14 = v13;
      v51 = (void *)operator new[](v13, 0x674D444Fu, 256LL, v7);
      if ( !v51 )
      {
        WdLogSingleEntry2(6LL, this, (unsigned int)v14);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"KeyedMutex 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
          (__int64)this,
          v14,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      memset(v53, 0, 0x68uLL);
      P = 0LL;
      v57 = 0;
      v16 = *((_DWORD *)&v52.Flags + 1);
      if ( *((_DWORD *)&v52.Flags + 1) <= 4u )
      {
        Pool2 = v56;
        P = v56;
        if ( *((_DWORD *)&v52.Flags + 1) )
        {
          memset(v56, 0, 80LL * *((unsigned int *)&v52.Flags + 1));
          Pool2 = P;
        }
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v52.Flags + 1) < 0x50 )
        {
LABEL_16:
          WdLogSingleEntry1(6LL, 274LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
            274LL,
            0LL,
            0LL,
            0LL,
            0LL);
          Resident = -1073741801;
          goto LABEL_61;
        }
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * *((unsigned int *)&v52.Flags + 1), 1265072196LL, v15);
        P = Pool2;
      }
      v57 = v16;
      if ( !Pool2 )
        goto LABEL_16;
      LODWORD(v53[0]) = *((_DWORD *)a2 + 109);
      v18 = (void *)v53[9];
      v53[3] = Pool2;
      if ( (_DWORD)hAsyncEvent_high )
        v18 = v51;
      LODWORD(v53[2]) = v16;
      v53[9] = v18;
      LODWORD(v53[8]) = hAsyncEvent_high;
      if ( Value )
        v53[7] = (char *)v51 + hAsyncEvent_high;
      LODWORD(v53[6]) = Value;
      if ( hAsyncEvent )
        v53[5] = (char *)v51 + v11;
      v19 = *(_QWORD *)this;
      LODWORD(v53[4]) = hAsyncEvent;
      Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                   a2,
                   (__int64)v53,
                   0,
                   v19,
                   0,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0LL);
      if ( Resident < 0 )
      {
        WdLogSingleEntry2(4LL, this, *(_QWORD *)this);
        goto LABEL_60;
      }
      v20 = *((_QWORD *)this + 1);
      v21 = v53[10];
      *((_DWORD *)this + 22) = v53[10];
      v22 = *(_QWORD *)(v20 + 40);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 248));
      v23 = (v21 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *(_DWORD *)(v22 + 296) )
      {
        v24 = *(_QWORD *)(v22 + 280);
        v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
        if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0 )
        {
          if ( (v25 & 0x1F) == 4 )
          {
            v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v23);
LABEL_31:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v50, v26);
            ExReleasePushLockSharedEx(v22 + 248, 0LL);
            KeLeaveCriticalRegion();
            v29 = v50;
            if ( !v50 )
            {
              WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 22));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"KeyedMutex 0x%I64x failed to find resource for handle 0x%I64x",
                (__int64)this,
                *((unsigned int *)this + 22),
                0LL,
                0LL,
                0LL);
              Resident = -1073741811;
              goto LABEL_58;
            }
            Count = v50[3].Count;
            v31 = 0;
            v32 = *(unsigned int *)(Count + 16);
            *((_DWORD *)this + 23) = v32;
            v33 = (_QWORD *)*((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v44 = 0LL;
            v49 = 0LL;
            v34 = v29[3].Count;
            Current = DXGPROCESS::GetCurrent(Count, v32, v27, v28);
            v36 = *((_BYTE *)a2 + 1869);
            v46 = Current;
            v45 = v33[2];
            v37 = v36 & 1;
            if ( !v37
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2156LL) & 0x40) != 0) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v33[81] + 8LL) + 992LL))(
                *((_QWORD *)a2 + 95),
                (*(_DWORD *)(v34 + 72) >> 12) & 0x3F,
                &v44,
                &v49);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v43 = 0LL;
              v48 = 0LL;
              if ( v37 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v47,
                  (struct _EX_RUNDOWN_REF *)v34);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v45 + 4344),
                             *((_DWORD *)v46 + 126),
                             *((_DWORD *)a2 + 110),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v47,
                             &v43,
                             &v48);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
              }
              else
              {
                Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v33[81] + 8LL) + 784LL))(
                             v33[82],
                             v44,
                             v34 + 24,
                             1LL,
                             3,
                             &v43,
                             &v48);
              }
              if ( Resident < 0 )
              {
                WdLogSingleEntry1(3LL, Resident);
LABEL_58:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v50);
LABEL_60:
                operator delete[](v51);
LABEL_61:
                if ( P != v56 )
                {
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                }
                return (unsigned int)Resident;
              }
              if ( Resident == 259 )
              {
                v31 = 1;
                PagingFenceValue = v43;
                Resident = 0;
              }
            }
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2156LL) & 0x40) != 0 )
            {
              memset(&v54, 0, sizeof(v54));
              v38 = v33[2];
              v54.Protection.Value = 1LL;
              v54.MinimumAddress = *(_QWORD *)(v38 + 2640);
              v54.MaximumAddress = *(_QWORD *)(v38 + 2648);
              if ( v37 )
              {
                v39 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v45 + 4344),
                        *((_DWORD *)v46 + 126),
                        a2,
                        0,
                        *(_DWORD *)(v34 + 16),
                        &v54);
              }
              else
              {
                LOBYTE(v41) = 1;
                v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v33[81] + 8LL) + 808LL))(
                        v33[82],
                        v44,
                        *(_QWORD *)(v34 + 24),
                        &v54,
                        v41,
                        -2);
              }
              Resident = v39;
              if ( v39 >= 0 )
              {
                if ( v39 == 259 )
                {
                  Resident = 0;
                  PagingFenceValue = v54.PagingFenceValue;
                  goto LABEL_54;
                }
              }
              else
              {
                WdLogSingleEntry1(3LL, v39);
              }
            }
            if ( !v31 )
              goto LABEL_58;
LABEL_54:
            if ( v37 )
            {
              v40 = *((_DWORD *)a2 + 110);
              v52.ObjectHandleArray = 0LL;
              *(_OWORD *)&v52.hAsyncEvent = 0LL;
              v52.hDevice = v40;
              v52.ObjectCount = 1;
              v52.FenceValueArray = &PagingFenceValue;
              Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v45 + 4344),
                           v46,
                           v40,
                           &v52,
                           1u);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v33[81] + 8LL)
                                                                                     + 1000LL))(
                v33[82],
                &v49,
                &PagingFenceValue,
                1LL);
            }
            goto LABEL_58;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v26 = 0LL;
      goto LABEL_31;
    }
    WdLogSingleEntry1(2LL, 253LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Overflow while calculating buffer size",
      253LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225621LL;
}

/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370080
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C7E4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01CA5F0 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // rdx
  _BOOL8 v9; // rcx
  unsigned __int64 v10; // rdx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v12; // r12
  struct DXGDEVICE *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // ecx
  struct _EX_RUNDOWN_REF *v24; // rdx
  struct _EX_RUNDOWN_REF *v25; // rbx
  _QWORD *v26; // rdx
  int v27; // ecx
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v33; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v34; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  _BYTE v42[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v43[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v44[88]; // [rsp+108h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v38);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v39 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v7 = v4;
    if ( !v4 )
      goto LABEL_47;
    v41 = 0LL;
    v40 = 0LL;
    v8 = *(unsigned int *)(v4 + 128);
    v9 = (_DWORD)v8 == 0;
    if ( v9 == (*(_DWORD *)(v4 + 24) == 0) )
    {
      LODWORD(v41) = -1073741811;
      WdLogSingleEntry1(2LL, 5249LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Both device and paging queue are set or not set",
        5249LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_46:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v40, 0x18u);
      v3 = 1;
      goto LABEL_47;
    }
    if ( !(_DWORD)v8 )
    {
      v27 = DxgkMapGpuVirtualAddress(v4 + 24, v8, v5);
      LODWORD(v41) = v27;
      goto LABEL_43;
    }
    v10 = *(_QWORD *)(v4 + 80);
    if ( v10 >= 0x20 || (v10 & 0xC) != 0 )
    {
      WdLogSingleEntry3(2LL, v10, *((_QWORD *)a1 + 11), 5264LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid protection flags specified 0x%I64x DXGPROCESS=0x%I64x",
        *(_QWORD *)(v7 + 80),
        *((_QWORD *)a1 + 11),
        5264LL,
        0LL,
        0LL);
      LODWORD(v41) = -1073741811;
      goto LABEL_46;
    }
    v34 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v10, v5, v6);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, *(_DWORD *)(v7 + 128), Current, &v34);
    v12 = v34;
    if ( *(_DWORD *)(v7 + 128) && !v34 )
    {
      LODWORD(v41) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, *(unsigned int *)(v7 + 128));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        (int)v41,
        *(unsigned int *)(v7 + 128),
        0LL,
        0LL,
        0LL);
      goto LABEL_12;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v36,
      v34);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v12, 0, v14, 0);
    LODWORD(v41) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42, 0LL);
    if ( (int)v41 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v44);
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v36);
LABEL_12:
      v13 = v31;
      if ( !v31 )
        goto LABEL_46;
LABEL_13:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
      goto LABEL_46;
    }
    v15 = *((_QWORD *)a1 + 11);
    v16 = *(_DWORD *)(v7 + 56);
    v33 = 0LL;
    v32 = v15;
    v17 = v15 + 248;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v17, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *(_DWORD *)(v17 + 24);
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, v20);
      }
      ExAcquirePushLockSharedEx(v17, 0LL);
    }
    v21 = (v16 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *(_DWORD *)(v32 + 296) )
    {
      v22 = *(_QWORD *)(v32 + 280);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      {
        if ( (v23 & 0x1F) == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v21);
          goto LABEL_30;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v24 = 0LL;
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35, v24);
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v33, &v35);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
    v25 = v33;
    if ( !v33 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, *(unsigned int *)(v7 + 56), *((_QWORD *)a1 + 11));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        *(unsigned int *)(v7 + 56),
        *((_QWORD *)a1 + 11),
        0LL,
        0LL);
      goto LABEL_32;
    }
    v26 = (_QWORD *)*((_QWORD *)v12 + 2);
    if ( *(_QWORD *)(*(_QWORD *)(v33[1].Count + 16) + 16LL) != v26[2] )
    {
      WdLogSingleEntry3(2LL, v12, v33, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v12,
        (__int64)v25,
        -1073741811LL,
        0LL,
        0LL);
LABEL_32:
      LODWORD(v41) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33);
      COREACCESS::~COREACCESS((COREACCESS *)v44);
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v36);
      v13 = v31;
      if ( !v31 )
        goto LABEL_46;
      goto LABEL_13;
    }
    LOBYTE(v30) = 0;
    LODWORD(v41) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(v26[81] + 8LL)
                                                                                              + 808LL))(
                     v26[82],
                     0LL,
                     v33[3].Count,
                     v7 + 24,
                     v30,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33);
    COREACCESS::~COREACCESS((COREACCESS *)v44);
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v36);
    if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    v27 = v41;
LABEL_43:
    *((_QWORD *)&v40 + 1) = *(_QWORD *)(v7 + 120);
    v28 = *(_QWORD *)(v7 + 112);
    *(_QWORD *)&v40 = v28;
    if ( v27 < 0 || !v28 )
    {
      WdLogSingleEntry2(2LL, v27, v28);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkMapGpuVirtualAddress failed: 0x%I64x 0x%I64x",
        (int)v41,
        v40,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_46;
  }
  WdLogSingleEntry1(2LL, 5240LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5240LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_47:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  return v3;
}

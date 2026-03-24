/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02431F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004073C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0158230 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  _BOOL8 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _KTHREAD **Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // r15
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r13
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _EX_RUNDOWN_REF *v31; // rbx
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  signed __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  int v40; // [rsp+28h] [rbp-E0h]
  struct DXGDEVICE *v41; // [rsp+48h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v42; // [rsp+50h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v43; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v44; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v45[16]; // [rsp+68h] [rbp-A0h] BYREF
  DXGPUSHLOCK *v46[2]; // [rsp+78h] [rbp-90h] BYREF
  int v47; // [rsp+88h] [rbp-80h]
  __int128 v48; // [rsp+90h] [rbp-78h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-68h]
  _BYTE v50[8]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v51[64]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v52[88]; // [rsp+F0h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v46[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v47 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_40;
    v49 = 0LL;
    v48 = 0LL;
    v10 = *(unsigned int *)(v7 + 128);
    v11 = *(_DWORD *)(v7 + 24) == 0;
    if ( ((_DWORD)v10 == 0) == v11 )
    {
      LODWORD(v49) = -1073741811;
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = 4703LL;
LABEL_38:
      WdLogEvent5_WdError(v12);
      goto LABEL_39;
    }
    if ( !(_DWORD)v10 )
    {
      LODWORD(v49) = DxgkMapGpuVirtualAddress(v7 + 24, v10, v8);
      goto LABEL_35;
    }
    v13 = *(_QWORD *)(v7 + 80);
    if ( v13 >= 0x20 || (v13 & 0xC) != 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v37[3] = *(_QWORD *)(v9 + 80);
      v37[4] = *((_QWORD *)a1 + 6);
      v37[5] = 4718LL;
      WdLogEvent5_WdError(v37);
      LODWORD(v49) = -1073741811;
LABEL_39:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v48, 0x18u);
      v5 = 1;
      goto LABEL_40;
    }
    v44 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, *(unsigned int *)(v9 + 128), Current, &v44);
    v17 = v44;
    if ( *(_DWORD *)(v9 + 128) && !v44 )
    {
      LODWORD(v49) = -1073741811;
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = (int)v49;
      *(_QWORD *)(v18 + 32) = *(unsigned int *)(v9 + 128);
      WdLogEvent5_WdError(v18);
LABEL_12:
      if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
      goto LABEL_39;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v45,
      v44);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v17, 0, v19, 0);
    LODWORD(v49) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL);
    if ( (int)v49 < 0 )
    {
LABEL_16:
      COREACCESS::~COREACCESS((COREACCESS *)v52);
      COREACCESS::~COREACCESS((COREACCESS *)v51);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v45);
      goto LABEL_12;
    }
    v20 = *((_QWORD *)a1 + 6);
    v21 = *(_DWORD *)(v9 + 56);
    v43 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 208));
    v22 = (v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *(_DWORD *)(v20 + 256) )
    {
      v23 = *(_QWORD *)(v20 + 240);
      v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
      if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
      {
        v25 = v24 & 0x1F;
        if ( (_BYTE)v25 == 5 )
        {
          v27 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * (unsigned int)v22);
          goto LABEL_24;
        }
        v26 = WdLogNewEntry5_WdError(v25, 2LL * (unsigned int)v22);
        *(_QWORD *)(v26 + 24) = 316LL;
        WdLogEvent5_WdError(v26);
      }
    }
    v27 = 0LL;
LABEL_24:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v42, v27);
    ExReleasePushLockSharedEx(v20 + 208, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v43, &v42);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42, v28);
    v31 = v43;
    if ( !v43 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v32[3] = -1073741811LL;
      v32[4] = *(unsigned int *)(v9 + 56);
      v32[5] = *((_QWORD *)a1 + 6);
LABEL_26:
      WdLogEvent5_WdError(v32);
      LODWORD(v49) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v43, v33);
      goto LABEL_16;
    }
    if ( (struct DXGDEVICE *)v43[1].Count != v17 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v32[3] = v17;
      v32[4] = v31;
      v32[5] = -1073741811LL;
      goto LABEL_26;
    }
    LOBYTE(v40) = 0;
    LODWORD(v49) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL) + 8LL)
                                                                                              + 800LL))(
                     *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                     0LL,
                     v43[3].Count,
                     v9 + 24,
                     v40,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v43, v34);
    COREACCESS::~COREACCESS((COREACCESS *)v52);
    COREACCESS::~COREACCESS((COREACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v45);
    if ( v41 )
    {
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v36 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    }
LABEL_35:
    *((_QWORD *)&v48 + 1) = *(_QWORD *)(v9 + 120);
    v38 = *(_QWORD *)(v9 + 112);
    *(_QWORD *)&v48 = v38;
    if ( (int)v49 >= 0 && v38 )
      goto LABEL_39;
    v12 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v12 + 24) = (int)v49;
    *(_QWORD *)(v12 + 32) = v48;
    goto LABEL_38;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4694LL;
  WdLogEvent5_WdError(v6);
LABEL_40:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  return v5;
}

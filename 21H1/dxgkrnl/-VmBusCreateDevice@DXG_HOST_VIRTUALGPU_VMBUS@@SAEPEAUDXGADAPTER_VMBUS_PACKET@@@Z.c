/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C003E7A8 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E8CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00EA600 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00EABC0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  struct DXG_SET_GUEST_DATA *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  int Device; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  DXGDEVICE *v24; // rbx
  struct VMBPACKETCOMPLETION__ *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  struct DXGADAPTER **v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  struct VMBPACKETCOMPLETION__ *v33; // rcx
  D3DKMT_HANDLE hDevice; // [rsp+50h] [rbp-B0h] BYREF
  struct DXG_SET_GUEST_DATA *v36; // [rsp+58h] [rbp-A8h] BYREF
  DXGDEVICE *v37; // [rsp+60h] [rbp-A0h] BYREF
  char v38[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  _D3DKMT_CREATEDEVICE v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[144]; // [rsp+C0h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v39);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v40 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 706LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
LABEL_25:
    v5 = 0;
    goto LABEL_26;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v7 )
    goto LABEL_25;
  v8 = *((_QWORD *)a1 + 5);
  hDevice = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 128LL);
  v10 = (struct DXG_SET_GUEST_DATA *)operator new(0x10uLL, 0x4B677844u, 0, (POOL_TYPE)512);
  if ( v10 )
  {
    v12 = *(_QWORD *)(v7 + 32);
    *((_QWORD *)v10 + 1) = v12;
    *(_QWORD *)v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  v36 = v10;
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v6 + 24) = 718LL;
    goto LABEL_3;
  }
  v13 = *((_QWORD *)a1 + 6);
  v14 = *(_BYTE *)(v13 + 344);
  if ( *(_BYTE *)(v7 + 28) )
  {
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v15 + 24) = 726LL;
LABEL_23:
      WdLogEvent5_WdError(v15);
      goto LABEL_24;
    }
    v16 = v13 + 176;
    v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2680LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    v18 = v17 + 48;
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17 + 48, 0LL);
    *(_QWORD *)(v17 + 56) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v42,
      *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 16LL),
      0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL) < 0 )
    {
LABEL_14:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42, v19);
      *(_QWORD *)(v18 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v18, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
LABEL_24:
      operator delete(v36);
      goto LABEL_25;
    }
    v37 = 0LL;
    Device = ADAPTER_RENDER::CreateDevice(
               (DXGADAPTER **)v17,
               (__int64 *)&v37,
               0,
               2,
               0LL,
               0,
               0,
               1,
               *((_QWORD *)a1 + 5),
               (__int64)&v36);
    v23 = Device;
    if ( Device < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v27 + 24) = v23;
      *(_QWORD *)(v27 + 32) = 761LL;
      WdLogEvent5_WdError(v27);
      goto LABEL_14;
    }
    v24 = v37;
    DXGDEVICE::SetVirtualGpu(v37, *((struct DXGK_VIRTUAL_GPU_PARAV **)a1 + 5));
    v25 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    hDevice = *((_DWORD *)v24 + 109);
    VmBusCompletePacket(v25, &hDevice, 4u);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42, v26);
    *(_QWORD *)(v18 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v14 )
    {
      v15 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v15 + 24) = 767LL;
      goto LABEL_23;
    }
    memset(&v41, 0, sizeof(v41));
    v28 = (struct DXGADAPTER **)*((_QWORD *)a1 + 5);
    v41.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v7 + 24);
    v29 = DxgkCreateDeviceImpl(&v41, v28, &v36, 0);
    v32 = v29;
    if ( v29 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v15 + 24) = v32;
      *(_QWORD *)(v15 + 32) = 783LL;
      goto LABEL_23;
    }
    v33 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    hDevice = v41.hDevice;
    VmBusCompletePacket(v33, &hDevice, 4u);
  }
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  return v5;
}

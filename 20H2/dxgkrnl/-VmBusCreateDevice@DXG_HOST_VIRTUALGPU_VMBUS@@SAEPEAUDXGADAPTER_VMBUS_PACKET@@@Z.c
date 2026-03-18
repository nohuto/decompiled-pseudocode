/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??1DXGADAPTERDEVICECREATIONLOCKCDD@@QEAA@XZ @ 0x1C003AC6C (--1DXGADAPTERDEVICECREATIONLOCKCDD@@QEAA@XZ.c)
 *     ??1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C003ACA4 (--1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C003F618 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C012A150 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C012A7DC (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  struct DXG_SET_GUEST_DATA *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rdx
  int Device; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  DXGDEVICE *v23; // rbx
  struct VMBPACKETCOMPLETION__ *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  struct DXGADAPTER **v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  struct VMBPACKETCOMPLETION__ *v32; // rcx
  D3DKMT_HANDLE hDevice; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  struct DXG_SET_GUEST_DATA *v37; // [rsp+68h] [rbp-98h] BYREF
  DXGDEVICE *v38; // [rsp+70h] [rbp-90h] BYREF
  char v39[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  _D3DKMT_CREATEDEVICE v42; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v43[144]; // [rsp+D0h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v40);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v41 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 718LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
LABEL_26:
    v5 = 0;
    goto LABEL_27;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v7 )
    goto LABEL_26;
  hDevice = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 128LL);
  v9 = (struct DXG_SET_GUEST_DATA *)operator new(0x10uLL, 0x4B677844u, 0, (POOL_TYPE)512);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v7 + 32);
    *((_QWORD *)v9 + 1) = v11;
    *(_QWORD *)v9 = v8;
  }
  v37 = v9;
  if ( !v9 )
  {
    v6 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v6 + 24) = 730LL;
    goto LABEL_3;
  }
  v12 = *((_QWORD *)a1 + 6);
  v13 = *(_BYTE *)(v12 + 344);
  if ( *(_BYTE *)(v7 + 28) )
  {
    if ( !v13 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v12);
      *(_QWORD *)(v14 + 24) = 738LL;
LABEL_24:
      WdLogEvent5_WdError(v14);
      goto LABEL_25;
    }
    v15 = *((_QWORD *)a1 + 5);
    v16 = v12 + 176;
    v36 = *((_QWORD *)a1 + 6);
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 2704LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
    v35 = v17;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17 + 48, 0LL);
    *(_QWORD *)(v17 + 56) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v43,
      *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 16LL),
      0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43, 0LL) >= 0
      && (!(unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() || *(char *)(*((_QWORD *)a1 + 7) + 347LL) >= 0) )
    {
      v38 = 0LL;
      Device = ADAPTER_RENDER::CreateDevice(
                 (DXGADAPTER **)v17,
                 (__int64 *)&v38,
                 0,
                 2,
                 0LL,
                 0,
                 0,
                 1,
                 *((_QWORD *)a1 + 5),
                 (__int64)&v37);
      v22 = Device;
      if ( Device >= 0 )
      {
        v23 = v38;
        DXGDEVICE::SetVirtualGpu(v38, *((struct DXGK_VIRTUAL_GPU_PARAV **)a1 + 5));
        v24 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
        hDevice = *((_DWORD *)v23 + 109);
        VmBusCompletePacket(v24, &hDevice, 4u);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43, v25);
        DXGADAPTERDEVICECREATIONLOCKCDD::~DXGADAPTERDEVICECREATIONLOCKCDD((DXGADAPTERDEVICECREATIONLOCKCDD *)&v35);
        DXGPROCESSDEVICECREATIONLOCK::~DXGPROCESSDEVICECREATIONLOCK((DXGPROCESSDEVICECREATIONLOCK *)&v36);
        goto LABEL_27;
      }
      v26 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v26 + 24) = v22;
      *(_QWORD *)(v26 + 32) = 780LL;
      WdLogEvent5_WdError(v26);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43, v18);
    DXGADAPTERDEVICECREATIONLOCKCDD::~DXGADAPTERDEVICECREATIONLOCKCDD((DXGADAPTERDEVICECREATIONLOCKCDD *)&v35);
    DXGPROCESSDEVICECREATIONLOCK::~DXGPROCESSDEVICECREATIONLOCK((DXGPROCESSDEVICECREATIONLOCK *)&v36);
LABEL_25:
    operator delete(v37);
    goto LABEL_26;
  }
  if ( v13 )
  {
    v14 = WdLogNewEntry5_WdError(v11, v12);
    *(_QWORD *)(v14 + 24) = 786LL;
    goto LABEL_24;
  }
  memset(&v42, 0, sizeof(v42));
  v27 = (struct DXGADAPTER **)*((_QWORD *)a1 + 5);
  v42.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v7 + 24);
  v28 = DxgkCreateDeviceImpl(&v42, v27, &v37, 0);
  v31 = v28;
  if ( v28 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v14 + 24) = v31;
    *(_QWORD *)(v14 + 32) = 802LL;
    goto LABEL_24;
  }
  v32 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
  hDevice = v42.hDevice;
  VmBusCompletePacket(v32, &hDevice, 4u);
LABEL_27:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  return v5;
}

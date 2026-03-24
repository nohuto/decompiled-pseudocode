/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C02383C8
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285624 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0237CB8 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C02387D4 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGPROCESSVMWP *a3)
{
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  struct _UNICODE_STRING v13; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v14[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v20; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID v21; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v22; // [rsp+C0h] [rbp+27h] BYREF
  int v23; // [rsp+D0h] [rbp+37h]

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  v23 = *(_DWORD *)L"t";
  v13.Buffer = (wchar_t *)&v22;
  v15 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v16 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v22 = *(_OWORD *)L"DXGK_Host";
  v18 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted;
  v19 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  *(_QWORD *)&v13.Length = 1310738LL;
  v14[0] = 1;
  v14[1] = 48;
  v20 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v21 = (struct _GUID)DxgkPerVmVmBusChannelType;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v7 = CreateServerVmBusChannel(
         a2,
         a3,
         (struct _DEVICE_OBJECT *)g_pDeviceObject,
         &v21,
         &v20,
         &v13,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v14,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         *((_QWORD *)Global + 203) >> 20,
         this);
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    *((_BYTE *)this + 56) = 1;
    this[10] = a3;
  }
  return (unsigned int)v10;
}

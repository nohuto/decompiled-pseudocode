/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C0234540
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0231D70 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0233CBC (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C02347D8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGK_VIRTUAL_GPU_PARAV *a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-49h] BYREF
  struct _GUID v15; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v16[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-9h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+A8h] [rbp-1h]
  struct _GUID v22; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v23[2]; // [rsp+C0h] [rbp+17h] BYREF

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  *(_QWORD *)v15.Data4 = 0LL;
  v14.Buffer = (wchar_t *)v23;
  *(_QWORD *)&v15.Data1 = *(_QWORD *)((char *)a3 + 28);
  v17 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v19 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v20 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v21 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v6 = *((_QWORD *)a3 + 2);
  v23[0] = *(_OWORD *)L"DXGK_VirtualGpu";
  *(_QWORD *)&v14.Length = 2097182LL;
  v23[1] = *(_OWORD *)L"tualGpu";
  v16[0] = 1;
  v16[1] = 48;
  v7 = *(struct _DEVICE_OBJECT **)(v6 + 216);
  v22 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         a3,
         v7,
         &v22,
         &v15,
         &v14,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v16,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         0,
         this);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    *((_BYTE *)this + 56) = 1;
  }
  return (unsigned int)v11;
}

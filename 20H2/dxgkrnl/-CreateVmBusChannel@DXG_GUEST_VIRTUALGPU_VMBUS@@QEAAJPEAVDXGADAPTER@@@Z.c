/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0237264
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpReadDeviceSpace @ 0x1C0020CE0 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0236A64 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C02378B4 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct DXGADAPTER *a2)
{
  struct _KEVENT *v4; // rcx
  struct VMBCHANNEL__ *v5; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct _DEVICE_OBJECT *v12; // rdx
  int v13; // eax
  struct VMBCHANNEL__ *v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  void (*v20)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-71h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v22; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v23[2]; // [rsp+70h] [rbp-39h] BYREF
  __int64 (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-31h]
  void (__fastcall *v25)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-29h]
  void (__fastcall *v26)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v27)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v28)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  struct _GUID v29; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v30; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v31[2]; // [rsp+C0h] [rbp+17h] BYREF
  int v32; // [rsp+E0h] [rbp+37h]

  v4 = (struct _KEVENT *)this[6];
  if ( v4 )
  {
    KeClearEvent(v4);
  }
  else
  {
    v5 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    this[6] = v5;
    if ( !v5 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v5, NotificationEvent, 0);
  }
  Timeout[0].LowPart = 0;
  this[8] = a2;
  v7 = *((_QWORD *)a2 + 27);
  v32 = *(_DWORD *)L"t";
  v22.Buffer = (wchar_t *)v31;
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v31[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  v31[1] = *(_OWORD *)L"pterGuest";
  *(_QWORD *)&v22.Length = 2359330LL;
  v23[0] = 1;
  v23[1] = 48;
  v30 = 0LL;
  v8 = DpReadDeviceSpace(v7, 0LL, &v30, 0xC0u, 0x10u, (ULONG *)Timeout);
  v11 = v8;
  if ( v8 >= 0
    && Timeout[0].LowPart == 16
    && (v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 27),
        *(_OWORD *)&Timeout[0].LowPart = v30,
        v29 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType,
        v13 = CreateClientVmBusChannel(
                (__int64)a2,
                v12,
                &v29,
                (struct _GUID *)Timeout,
                &v22,
                (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v23,
                (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
                v20,
                this),
        v11 = v13,
        v13 >= 0) )
  {
    v14 = this[6];
    Timeout[0].QuadPart = -80000000LL;
    v15 = KeWaitForSingleObject(v14, Executive, 0, 0, Timeout);
    v11 = v15;
    if ( v15 )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = v11;
      WdLogEvent5_WdError(v18);
      LODWORD(v11) = -1073741823;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v19 + 24) = v11;
    WdLogEvent5_WdError(v19);
  }
  if ( (int)v11 >= 0 )
    *((_BYTE *)this + 56) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v11;
}

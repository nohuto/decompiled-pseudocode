/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0361A90
 * Callers:
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0364904 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C036141C (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C03623F4 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // rbx
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rax
  int v9; // eax
  __int64 v10; // rdi
  void *v11; // rcx
  NTSTATUS v12; // eax
  struct DXGGLOBAL *Global; // rax
  void (*v14)(struct VMBCHANNEL__ *, unsigned int); // [rsp+40h] [rbp-61h]
  char v15[8]; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-41h] BYREF
  union _LARGE_INTEGER Timeout[2]; // [rsp+78h] [rbp-29h] BYREF
  _DWORD v18[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-11h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-9h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-1h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+A8h] [rbp+7h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+B0h] [rbp+Fh]
  struct _GUID v24; // [rsp+B8h] [rbp+17h] BYREF
  _OWORD v25[2]; // [rsp+C8h] [rbp+27h] BYREF
  wchar_t v26; // [rsp+E8h] [rbp+47h]

  v4 = (struct _DEVICE_OBJECT *)g_pDeviceObject;
  v6 = (struct _KEVENT *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    KeClearEvent(v6);
  }
  else
  {
    v7 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, 64LL, a4);
    *((_QWORD *)this + 7) = v7;
    if ( !v7 )
      return 3221225495LL;
    KeInitializeEvent(v7, NotificationEvent, 0);
  }
  v26 = aDxgkGlobalgues[16];
  v16.Buffer = (wchar_t *)v25;
  v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_QWORD *)&v16.Length = 2228256LL;
  v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed;
  v18[0] = 1;
  v21 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v22 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelStarted;
  v23 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v25[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  v18[1] = 48;
  v25[1] = *(_OWORD *)L"balGuest";
  *(_OWORD *)&Timeout[0].LowPart = DxgkPerVmVmBusChanelInstanceId;
  v24 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v9 = CreateClientVmBusChannel(
         (__int64)this,
         v4,
         &v24,
         (struct _GUID *)Timeout,
         &v16,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v18,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         v14,
         (struct VMBCHANNEL__ **)this);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create the guest VM bus channel. Status: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_12:
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(this);
    return (unsigned int)v10;
  }
  v11 = (void *)*((_QWORD *)this + 7);
  Timeout[0].QuadPart = -80000000LL;
  v12 = KeWaitForSingleObject(v11, Executive, 0, 0, Timeout);
  v10 = v12;
  if ( v12 )
  {
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed waiting for VM bus channel to start: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v10) = -1073741823;
  }
  if ( (int)v10 < 0 )
    goto LABEL_12;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  *((_BYTE *)this + 68) = 1;
  v15[0] = 1;
  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))GlobalVmBusStatChangeCallback,
    (__int64)v15,
    1LL);
  return (unsigned int)v10;
}

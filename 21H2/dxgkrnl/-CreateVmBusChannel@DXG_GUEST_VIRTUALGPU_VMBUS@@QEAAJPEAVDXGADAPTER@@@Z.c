/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0361D14
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02BBED4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpReadDeviceSpace @ 0x1C0025680 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C036141C (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0362480 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  struct _KEVENT *v5; // rcx
  struct VMBCHANNEL__ *v7; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  struct _DEVICE_OBJECT *v12; // rdx
  __int128 v13; // xmm0
  int v14; // eax
  struct VMBCHANNEL__ *v15; // rcx
  NTSTATUS v16; // eax
  void (*v17)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-71h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v19; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v20[2]; // [rsp+70h] [rbp-39h] BYREF
  __int64 (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-31h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-29h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v24)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v25)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  struct _GUID v26; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v27; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v28[2]; // [rsp+C0h] [rbp+17h] BYREF
  int v29; // [rsp+E0h] [rbp+37h]

  this[9] = a2;
  v5 = (struct _KEVENT *)this[7];
  if ( v5 )
  {
    KeClearEvent(v5);
  }
  else
  {
    v7 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, 64LL, a4);
    this[7] = v7;
    if ( !v7 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v7, NotificationEvent, 0);
  }
  v9 = *((_QWORD *)a2 + 27);
  v29 = *(_DWORD *)L"t";
  *(_QWORD *)&v19.Length = 2359330LL;
  v19.Buffer = (wchar_t *)v28;
  v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v28[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  v28[1] = *(_OWORD *)L"pterGuest";
  v20[0] = 1;
  v20[1] = 48;
  v27 = 0LL;
  Timeout[0].LowPart = 0;
  v10 = DpReadDeviceSpace(v9, 0LL, &v27, 0xC0u, 0x10u, (ULONG *)Timeout);
  v11 = v10;
  if ( v10 >= 0 && Timeout[0].LowPart == 16 )
  {
    v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 27);
    v13 = v27;
    *(_QWORD *)((char *)a2 + 4452) = v27;
    *(_OWORD *)&Timeout[0].LowPart = v13;
    v26 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
    v14 = CreateClientVmBusChannel(
            (__int64)a2,
            v12,
            &v26,
            (struct _GUID *)Timeout,
            &v19,
            (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v20,
            (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
            v17,
            this);
    v11 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create the guest VM bus channel. Status: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v15 = this[7];
      Timeout[0].QuadPart = -80000000LL;
      v16 = KeWaitForSingleObject(v15, Executive, 0, 0, Timeout);
      v11 = v16;
      if ( v16 )
      {
        WdLogSingleEntry1(2LL, v16);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed waiting for VM bus channel to start: 0x%I64x",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v11) = -1073741823;
      }
    }
    this[1] = *this;
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VM bus channel instance ID: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v11 >= 0 )
    *((_BYTE *)this + 68) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v11;
}

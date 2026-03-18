/*
 * XREFs of ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1C037FE78
 * Callers:
 *     ?SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z @ 0x1C030C790 (-SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x1C005E160 (-VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
        DXG_HOST_GLOBAL_VMBUS *this,
        struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *a2,
        unsigned int a3)
{
  __int64 v6; // rsi
  struct VMBPACKET__ *v7; // rbp
  int v8; // eax

  LODWORD(v6) = 0;
  DXGPUSHLOCK::AcquireShared((DXG_HOST_GLOBAL_VMBUS *)((char *)this + 16));
  if ( *((_BYTE *)this + 68) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 19);
    if ( *((int *)this + 19) >= 16 )
    {
LABEL_7:
      _InterlockedDecrement((volatile signed __int32 *)this + 19);
      goto LABEL_8;
    }
    v7 = (struct VMBPACKET__ *)((__int64 (__fastcall *)(_QWORD))qword_1C0131C98)(*(_QWORD *)this);
    if ( !v7 )
    {
      WdLogSingleEntry1(6LL, 6450LL);
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate VMBPACKET", 6450LL, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v6) = -1073741801;
      goto LABEL_7;
    }
    ((void (__fastcall *)(struct VMBPACKET__ *, DXG_HOST_GLOBAL_VMBUS *))qword_1C0131CE0)(v7, this);
    ((void (__fastcall *)(struct VMBPACKET__ *, void (__fastcall *)(struct VMBPACKET__ *, __int64, void *)))qword_1C0131CD8)(
      v7,
      WnfPacketCompletionRoutine);
    v8 = VmBusSendAsyncPacket(v7, a2, a3);
    v6 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendAsyncPacket failed. 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      ((void (__fastcall *)(struct VMBPACKET__ *))qword_1C0131CA0)(v7);
      goto LABEL_7;
    }
  }
LABEL_8:
  ExReleasePushLockSharedEx((char *)this + 16, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}

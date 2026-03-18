/*
 * XREFs of ?VmBusInterfaceDereference@@YAXXZ @ 0x1C024155C
 * Callers:
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0236A64 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0236D98 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C02377F4 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B16A8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C02B1A9C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

void __fastcall VmBusInterfaceDereference(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *v5; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 768));
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    --g_VgpuVmBusInterfaceRefCount;
    ((void (__fastcall *)(__int64))qword_1C00B2048)(qword_1C00B2038);
    if ( !g_VgpuVmBusInterfaceRefCount )
      memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  }
  v5 = DXGGLOBAL::GetGlobal(v4, v3);
  *((_QWORD *)v5 + 97) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v5 + 768, 0LL);
  KeLeaveCriticalRegion();
}

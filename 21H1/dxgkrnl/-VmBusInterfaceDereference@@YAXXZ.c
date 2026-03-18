/*
 * XREFs of ?VmBusInterfaceDereference@@YAXXZ @ 0x1C023E38C
 * Callers:
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0233988 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0233CBC (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C0234718 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02AE148 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C02AE53C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

void __fastcall VmBusInterfaceDereference(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *v5; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 656));
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    --g_VgpuVmBusInterfaceRefCount;
    ((void (__fastcall *)(__int64))qword_1C00B0F18)(qword_1C00B0F08);
    if ( !g_VgpuVmBusInterfaceRefCount )
      memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  }
  v5 = DXGGLOBAL::GetGlobal(v4, v3);
  *((_QWORD *)v5 + 83) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v5 + 656, 0LL);
  KeLeaveCriticalRegion();
}

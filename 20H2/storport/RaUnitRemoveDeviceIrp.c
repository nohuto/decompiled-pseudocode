/*
 * XREFs of RaUnitRemoveDeviceIrp @ 0x1C001C77C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA18 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C00058F0 (RaidUnitReenablePendingTimer.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001A018 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001C818 (RaUnitDeleteDeviceIrp.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0047450 (RaUnitDisableDeviceIrp.c)
 */

__int64 __fastcall RaUnitRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  char v4; // al
  unsigned int v5; // esi

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids, a1, a2);
  }
  if ( *(_DWORD *)(a1 + 48) == 6 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 13LL, &WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids, a1, a2);
    }
    return RaidCompleteRequestEx(a2, 0, 0xC000000E);
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 448);
    if ( (v4 & 0x20) == 0 )
    {
      RaUnitDeregisterFromIdleDetection(a1);
      v4 = *(_BYTE *)(a1 + 448);
    }
    if ( (v4 & 4) != 0 )
    {
      v5 = RaUnitDisableDeviceIrp(a1, a2);
      RaidUnitReenablePendingTimer(a1, 0);
    }
    else
    {
      v5 = RaUnitDeleteDeviceIrp(a1, a2);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids, a1, a2, v5);
    }
    return v5;
  }
}

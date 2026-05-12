/*
 * XREFs of RaidAdapterSetDevicePowerIrp @ 0x1C0012848
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x1C00123D8 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     RaidAdapterPowerUpDevice @ 0x1C001375C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0013810 (RaidAdapterPowerDownDevice.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     WPP_SF_DD @ 0x1C00332BC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     McTemplateK0qpdudddd_EtwWriteTransfer @ 0x1C003DCCC (McTemplateK0qpdudddd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterSetDevicePowerIrp(__int64 a1, IRP *a2)
{
  int v4; // edi
  int LowPart; // ebp
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  __int128 v9; // [rsp+60h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids, a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 292);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    v9 = 0LL;
    IoGetActivityIdIrp(a2, &v9);
    if ( (byte_1C0069841 & 1) != 0 )
      McTemplateK0qpdudddd_EtwWriteTransfer(
        a2->Tail.Overlay.CurrentStackLocation,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(a1 + 56),
        (char)a2,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v4,
        LowPart,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( v4 == 1 )
  {
    if ( LowPart > 1 )
    {
      v6 = RaidAdapterPowerDownDevice(a1, a2);
      goto LABEL_9;
    }
  }
  else if ( v4 > 1 && LowPart == 1 )
  {
    v6 = RaidAdapterPowerUpDevice(a1, a2);
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      18LL,
      &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids,
      (unsigned int)v4,
      LowPart);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v6 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_9:
  v7 = v6;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids, a1, a2, v6);
  }
  return v7;
}

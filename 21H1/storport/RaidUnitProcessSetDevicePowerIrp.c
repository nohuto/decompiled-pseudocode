/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x1C000FA2C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000EC1C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000F34C (RaidUnitSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006D50 (RaidIsUnitControlSupported.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000FB38 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C000FF10 (RaidUnitSendPowerToMiniport.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1C0031E78 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x1C00320D0 (WPP_SF_qq.c)
 *     McTemplateK0quuupdudddd_EtwWriteTransfer @ 0x1C003C978 (McTemplateK0quuupdudddd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrp(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  unsigned int LowPart; // esi
  unsigned int v7; // eax
  __int128 v9; // [rsp+70h] [rbp-48h] BYREF

  v9 = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *(_DWORD *)(Context + 492);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v9);
    if ( (byte_1C0068841 & 1) != 0 )
      McTemplateK0quuupdudddd_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *(_DWORD *)(Context + 816) = 0;
  if ( RaidIsUnitControlSupported(Context, 3) )
  {
    v7 = RaidUnitSendPowerToMiniport(Context, Irp);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids, v7);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete((PVOID)Context, Irp);
  return 0LL;
}

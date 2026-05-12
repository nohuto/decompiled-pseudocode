/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x1C00117EC
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00109DC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C001110C (RaidUnitSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00118F8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0011D84 (RaidUnitSendPowerToMiniport.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1C00323F8 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x1C0032650 (WPP_SF_qq.c)
 *     McTemplateK0quuupdudddd_EtwWriteTransfer @ 0x1C003CF48 (McTemplateK0quuupdudddd_EtwWriteTransfer.c)
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
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids, Context, Irp);
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
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids, v7);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete((PVOID)Context, Irp);
  return 0LL;
}

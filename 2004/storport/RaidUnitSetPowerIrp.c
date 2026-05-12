/*
 * XREFs of RaidUnitSetPowerIrp @ 0x1C0010E1C
 * Callers:
 *     RaUnitPowerIrp @ 0x1C0010D38 (RaUnitPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010FA8 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C001110C (RaidUnitSetDevicePowerIrp.c)
 *     WPP_SF_qq @ 0x1C0032650 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00326A0 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0032700 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaidUnitSetPowerIrp(PVOID Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // r14d
  unsigned int v6; // eax
  unsigned int v7; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart <= 6 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        48LL,
        &WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids,
        Context,
        Irp,
        Options);
    }
    if ( Options )
    {
      if ( Options != 1 )
      {
        v7 = -1073741823;
        goto LABEL_8;
      }
      v6 = RaidUnitSetDevicePowerIrp(Context, Irp);
    }
    else
    {
      v6 = RaidUnitSetSystemPowerIrp(Context, Irp);
    }
    v7 = v6;
LABEL_8:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        49LL,
        &WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids,
        Context,
        Irp,
        Options,
        v7);
    }
    return v7;
  }
  v7 = RaidCompleteRequestEx(Irp, 0, 0);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 47LL, &WPP_e3909ed325cf3aaa071da1dbc70c911f_Traceguids, Context, Irp);
  }
  return v7;
}

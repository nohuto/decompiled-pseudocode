/*
 * XREFs of ACPIDockIrpQueryPower @ 0x1C00490D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0052450 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIDockIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // rdx
  _IO_STACK_LOCATION *v10; // rax
  int v11; // edx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  v6 = DeviceExtension[23];
  if ( !v6 )
  {
    v7 = DeviceExtension[1];
    v8 = (const char *)&unk_1C006FB8B;
    CurrentStackLocation = (_IO_STACK_LOCATION *)&unk_1C006FB8B;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)DeviceExtension[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        CurrentStackLocation = (_IO_STACK_LOCATION *)DeviceExtension[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x19u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v8,
        (const char *)CurrentStackLocation);
    goto LABEL_7;
  }
  v10 = a2->Tail.Overlay.CurrentStackLocation;
  if ( !v10->Parameters.Create.Options && v10->Parameters.Create.EaLength == 7 )
  {
    CurrentStackLocation = *(_IO_STACK_LOCATION **)(v6 + 760);
    switch ( (v10->Parameters.Read.Length >> 8) & 0xF )
    {
      case 2u:
        v11 = 826951007;
        break;
      case 3u:
        v11 = 843728223;
        break;
      case 4u:
        v11 = 860505439;
        break;
      case 5u:
        v11 = 877282655;
        break;
      default:
        goto LABEL_7;
    }
    if ( !AMLIIsNamedChildPresent((__int64 *)CurrentStackLocation, v11) )
    {
      a2->IoStatus.Status = -1073741823;
      IofCompleteRequest(a2, 0);
      return 259LL;
    }
  }
LABEL_7:
  ACPIDispatchPowerIrpSuccess(a1, a2, CurrentStackLocation);
  return 259LL;
}

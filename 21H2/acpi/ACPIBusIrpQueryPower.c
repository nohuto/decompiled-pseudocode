/*
 * XREFs of ACPIBusIrpQueryPower @ 0x1C004D4F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C001F220 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0052EA0 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIBusIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  __int64 v6; // r8
  __int64 *v7; // rsi
  int v8; // edx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_15;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) != 0 )
    goto LABEL_14;
  v7 = *(__int64 **)(DeviceExtension + 720);
  if ( ACPIDockIsDockDevice(v7) )
    goto LABEL_15;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 2u:
      v8 = 826951007;
LABEL_13:
      if ( !AMLIIsNamedChildPresent(v7, v8) )
        break;
LABEL_15:
      ACPIDispatchPowerIrpSuccess(a1, a2, v6);
      return 259LL;
    case 3u:
      v8 = 843728223;
      goto LABEL_13;
    case 4u:
      v8 = 860505439;
      goto LABEL_13;
    case 5u:
      v8 = 877282655;
      goto LABEL_13;
  }
LABEL_14:
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 259LL;
}

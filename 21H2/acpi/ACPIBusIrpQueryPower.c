/*
 * XREFs of ACPIBusIrpQueryPower @ 0x1C004C270
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C000A480 (ACPIDockIsDockDevice.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C0052450 (ACPIDispatchPowerIrpSuccess.c)
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
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
    goto LABEL_14;
  v7 = *(__int64 **)(DeviceExtension + 760);
  if ( ACPIDockIsDockDevice() )
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

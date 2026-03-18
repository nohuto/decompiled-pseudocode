/*
 * XREFs of ?GetBiosNumLockStatus@@YGXXZ @ 0xD4E70
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

void __stdcall GetBiosNumLockStatus()
{
  enum _INTERFACE_TYPE v0; // esi
  enum _INTERFACE_TYPE BusType; // [esp+8h] [ebp-10h] BYREF
  _CONFIGURATION_TYPE ControllerType; // [esp+Ch] [ebp-Ch] BYREF
  enum _CONFIGURATION_TYPE PeripheralType; // [esp+10h] [ebp-8h] BYREF
  int Context; // [esp+14h] [ebp-4h] BYREF

  ControllerType = KeyboardController;
  Context = 0;
  v0 = Internal;
  PeripheralType = KeyboardPeripheral;
  while ( 1 )
  {
    BusType = v0;
    IoQueryDeviceDescription(
      &BusType,
      0,
      &ControllerType,
      0,
      &PeripheralType,
      0,
      KeyboardDeviceSpecificCallout,
      &Context);
    if ( BYTE2(Context) )
      break;
    if ( (unsigned int)++v0 >= (MaximumInterfaceType|Eisa) )
      return;
  }
  _gklpBootTime[1] = Context;
}

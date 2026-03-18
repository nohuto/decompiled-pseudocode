/*
 * XREFs of ?KeyboardDeviceSpecificCallout@@YGJPAXPAU_UNICODE_STRING@@W4_INTERFACE_TYPE@@KPAPAU_KEY_VALUE_FULL_INFORMATION@@W4_CONFIGURATION_TYPE@@K34K3@Z @ 0xEC66C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeyboardDeviceSpecificCallout(
        _BYTE *Context,
        PUNICODE_STRING PathName,
        INTERFACE_TYPE BusType,
        ULONG BusNumber,
        PKEY_VALUE_FULL_INFORMATION *BusInformation,
        CONFIGURATION_TYPE ControllerType,
        ULONG ControllerNumber,
        PKEY_VALUE_FULL_INFORMATION *ControllerInformation,
        CONFIGURATION_TYPE PeripheralType,
        ULONG PeripheralNumber,
        PKEY_VALUE_FULL_INFORMATION *PeripheralInformation)
{
  int v11; // ecx
  PKEY_VALUE_FULL_INFORMATION v12; // eax
  ULONG DataOffset; // esi
  unsigned int v14; // edi
  char *i; // eax
  __int16 v16; // ax

  if ( !Context[2] )
  {
    v11 = 0;
    v12 = PeripheralInformation[1];
    if ( v12->DataLength )
    {
      DataOffset = v12->DataOffset;
      v14 = *(ULONG *)((char *)&v12->DataLength + DataOffset);
      if ( v14 )
      {
        for ( i = (char *)&v12->NameLength + DataOffset; *i != 5; i += 16 )
        {
          if ( ++v11 >= v14 )
            return 0;
        }
        v16 = (*((_WORD *)i + 11) >> 4) & 7;
        Context[2] = 1;
        *(_WORD *)Context = v16;
      }
    }
  }
  return 0;
}

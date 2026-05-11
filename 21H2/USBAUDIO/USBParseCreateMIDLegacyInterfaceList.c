/*
 * XREFs of USBParseCreateMIDLegacyInterfaceList @ 0x1C002F0D0
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002D390 (USBHwSelectAudioConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBParseCreateMIDLegacyInterfaceList(
        PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
        __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // edi
  PUSB_INTERFACE_DESCRIPTOR v6; // rcx
  __int64 v7; // rax

  v2 = *a2;
  v3 = 0;
  v5 = 0;
  v6 = USBD_ParseConfigurationDescriptorEx(ConfigurationDescriptor, ConfigurationDescriptor, -1, -1, 1, 3, -1);
  if ( !v6 )
    return (unsigned int)-1073741438;
  do
  {
    if ( v5 >= ConfigurationDescriptor->bNumInterfaces )
      break;
    v7 = 2LL * v5++;
    *(_QWORD *)(v2 + 8 * v7) = v6;
    v6 = USBD_ParseConfigurationDescriptorEx(ConfigurationDescriptor, &v6->bLength + v6->bLength, -1, -1, 1, 3, -1);
  }
  while ( v6 );
  if ( v6 && v5 == ConfigurationDescriptor->bNumInterfaces )
    return (unsigned int)-1073741438;
  else
    *(_QWORD *)(v2 + 16LL * v5) = 0LL;
  return v3;
}

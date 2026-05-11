/*
 * XREFs of USBParseCreateInterfaceList @ 0x1C002F1B4
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002D390 (USBHwSelectAudioConfiguration.c)
 * Callees:
 *     Feature_1240224058__private_IsEnabledDeviceUsage @ 0x1C00046B8 (Feature_1240224058__private_IsEnabledDeviceUsage.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002EF28 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseCreateInterfaceList(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        unsigned __int8 *a2,
        _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v4; // r12
  UCHAR *v6; // rdi
  unsigned int v7; // esi
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rbp
  __int64 v10; // r15
  PUSB_INTERFACE_DESCRIPTOR v11; // rcx
  __int64 v12; // rax

  v3 = 0;
  v4 = (_QWORD *)*a3;
  v6 = &StartPosition->bLength + StartPosition->wTotalLength;
  *(_QWORD *)*a3 = a2;
  v7 = 1;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(StartPosition, a2, (__int64)a3, 8uLL);
  if ( AudioSpecificInterface )
  {
    if ( (unsigned int)Feature_1240224058__private_IsEnabledDeviceUsage()
      && (char *)&AudioSpecificInterface[4] + AudioSpecificInterface[3].bDescriptorType > (char *)v6 )
    {
      return 3221225858LL;
    }
    v10 = 0LL;
    do
    {
      if ( (unsigned int)v10 >= AudioSpecificInterface[3].bDescriptorType )
        break;
      v11 = USBD_ParseConfigurationDescriptorEx(
              StartPosition,
              StartPosition,
              *(&AudioSpecificInterface[4].bLength + v10),
              -1,
              1,
              2,
              -1);
      if ( v11
        || (v11 = USBD_ParseConfigurationDescriptorEx(
                    StartPosition,
                    StartPosition,
                    *(&AudioSpecificInterface[4].bLength + v10),
                    -1,
                    1,
                    3,
                    -1)) != 0LL )
      {
        v12 = 2LL * v7++;
        v4[v12] = v11;
      }
      else
      {
        v3 = -1073741438;
      }
      if ( v7 > StartPosition->bNumInterfaces )
        v3 = -1073741438;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v3 >= 0 );
    if ( v3 >= 0 )
    {
      if ( v7 != StartPosition->bNumInterfaces )
        v3 = -1073741438;
      if ( v3 >= 0 )
        v4[2 * v7] = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v3;
}

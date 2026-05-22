/*
 * XREFs of ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x180097F88
 * Callers:
 *     ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x180098EC8 (-OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18003D2A4 (--_U@YAPEAX_K@Z.c)
 */

unsigned __int16 *__fastcall MobileButtonDeviceCollection::GetDevicePath(MobileButtonDeviceCollection *this)
{
  WCHAR *v1; // rax
  WCHAR *v2; // rbx
  ULONG pulLen; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(this);
  pulLen = 0;
  CM_Get_Device_Interface_List_SizeW(&pulLen, &GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0LL, 0);
  if ( pulLen == 1 )
    return 0LL;
  v1 = (WCHAR *)operator new[](saturated_mul(pulLen, 2uLL));
  v2 = v1;
  if ( !v1 )
    return 0LL;
  CM_Get_Device_Interface_ListW(&GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0LL, v1, pulLen, 0);
  return v2;
}

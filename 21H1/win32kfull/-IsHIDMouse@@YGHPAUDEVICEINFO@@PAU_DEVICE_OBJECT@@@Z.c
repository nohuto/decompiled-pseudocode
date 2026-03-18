/*
 * XREFs of ?IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xE6EA2
 * Callers:
 *     _IsLegacyTouchPadDevice@4 @ 0xE6B7C (_IsLegacyTouchPadDevice@4.c)
 *     _IsMouseDeviceOnIgnoreList@4 @ 0xE6D1C (_IsMouseDeviceOnIgnoreList@4.c)
 * Callees:
 *     _GetPointerDevicePDO@8 @ 0xE6F66 (_GetPointerDevicePDO@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall IsHIDMouse(int a1, struct _DEVICE_OBJECT *a2)
{
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD *v6; // [esp+10h] [ebp-30h]
  ULONG ResultLength; // [esp+18h] [ebp-28h] BYREF
  GUID v8; // [esp+1Ch] [ebp-24h]
  _DWORD v9[4]; // [esp+2Ch] [ebp-14h]

  v2 = 0;
  if ( GetPointerDevicePDO(a2) >= 0 )
  {
    ResultLength = 0;
    if ( IoGetDeviceProperty(0, DevicePropertyBusTypeGuid, 0, 0, &ResultLength) == -1073741789 )
    {
      v3 = (_DWORD *)Win32AllocPool(ResultLength, 1886417749);
      v6 = v3;
      if ( v3 )
      {
        if ( IoGetDeviceProperty(0, DevicePropertyBusTypeGuid, ResultLength, v3, &ResultLength) >= 0 )
        {
          v4 = 0;
          v9[0] = *v6;
          v9[1] = v6[1];
          v9[2] = v6[2];
          v9[3] = v6[3];
          v8 = GUID_BUS_TYPE_HID;
          while ( v9[v4] == *(&v8.Data1 + v4) )
          {
            if ( ++v4 == 4 )
            {
              v2 = 1;
              break;
            }
          }
        }
        Win32FreePool(v6);
      }
    }
    ObfDereferenceObject(0);
  }
  return v2;
}

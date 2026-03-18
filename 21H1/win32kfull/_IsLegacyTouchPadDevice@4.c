/*
 * XREFs of _IsLegacyTouchPadDevice@4 @ 0xE6B7C
 * Callers:
 *     <none>
 * Callees:
 *     _GetContainerId@12 @ 0xE6C84 (_GetContainerId@12.c)
 *     ?IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xE6EA2 (-IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z.c)
 *     _GetDeviceObjectPointer@24 @ 0xE6FF0 (_GetDeviceObjectPointer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?CheckLegacyPadControlledStatus@@YGXPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xF4038 (-CheckLegacyPadControlledStatus@@YGXPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z @ 0xF4210 (-IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YGHPAUDEVICEINFO@@PAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z @ 0x183AE3 (-IsHIDMouseDeviceRelative@@YGHPAUDEVICEINFO@@PAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z.c)
 */

int __stdcall IsLegacyTouchPadDevice(int a1)
{
  int v1; // edi
  struct DEVICEINFO *v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v7; // eax
  struct DEVICEINFO *v8; // [esp+0h] [ebp-38h]
  struct _DEVICE_OBJECT *v9; // [esp+4h] [ebp-34h]
  int v10; // [esp+Ch] [ebp-2Ch]
  struct DEVICEINFO *v11; // [esp+10h] [ebp-28h]
  PVOID v12; // [esp+14h] [ebp-24h] BYREF
  PVOID Object; // [esp+18h] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-1Ch] BYREF
  HANDLE Handle; // [esp+20h] [ebp-18h] BYREF
  _BYTE v16[16]; // [esp+24h] [ebp-14h] BYREF

  memset(v16, 0, sizeof(v16));
  v1 = 0;
  Object = 0;
  v14 = 0;
  v12 = 0;
  Handle = 0;
  v11 = 0;
  if ( _gPlatformRole == 2 || (v10 = 0, _gPlatformRole == 8) )
    v10 = 1;
  if ( GetDeviceObjectPointer(a1 + 128, 0, 1, &Handle, &v12, &Object) >= 0 )
  {
    v2 = (struct DEVICEINFO *)Object;
    ObfReferenceObject(Object);
    if ( GetContainerId(v2, v16, &v14) >= 0 )
    {
      v3 = IsHIDMouse(v8, v9);
      v4 = 0;
      v11 = (struct DEVICEINFO *)v3;
      if ( v3 )
      {
        v7 = IsHIDMouseDeviceRelative(v2, (struct _FILE_OBJECT *)v8, v9);
        v3 = (int)v11;
        v4 = v7;
      }
      v5 = v10;
      if ( v14 )
        goto LABEL_16;
      if ( !v10 )
      {
LABEL_9:
        ZwClose(Handle);
        ObfDereferenceObject(v12);
        ObfDereferenceObject(v2);
        return v1;
      }
      if ( v3 && !v4 )
      {
LABEL_16:
        if ( v5 )
        {
          if ( v1 )
            goto LABEL_21;
          v1 = IsMouseDeviceOnWhiteList(v11, (struct _DEVICE_OBJECT *)v8, (int)v9);
          if ( !v1 )
            goto LABEL_9;
          EtwTraceTouchPadWhiteListDeviceDetected();
          *(_WORD *)(a1 + 696) |= 1u;
        }
        if ( !v1 )
          goto LABEL_9;
LABEL_21:
        if ( _gPlatformRole != 8 )
          CheckLegacyPadControlledStatus(v8, v9);
        goto LABEL_9;
      }
      EtwTraceLegacyTouchPadDetected();
      *(_WORD *)(a1 + 696) |= 1u;
      v1 = 1;
    }
    v5 = v10;
    goto LABEL_16;
  }
  return 0;
}

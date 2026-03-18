/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YGHPAUDEVICEINFO@@PAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z @ 0x183AE3
 * Callers:
 *     _IsLegacyTouchPadDevice@4 @ 0xE6B7C (_IsLegacyTouchPadDevice@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?SendSyncOutputIrpRequest@@YGJKPADKPAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z @ 0x183C28 (-SendSyncOutputIrpRequest@@YGJKPADKPAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z.c)
 */

int __userpurge IsHIDMouseDeviceRelative@<eax>(
        char *a1@<edx>,
        int a2@<ecx>,
        struct DEVICEINFO *a3,
        struct _FILE_OBJECT *a4,
        struct _DEVICE_OBJECT *a5)
{
  int v5; // ebx
  char *v7; // edi
  struct _HIDP_PREPARSED_DATA *v9; // esi
  ULONG v10; // [esp-8h] [ebp-C4h]
  struct _FILE_OBJECT *v11; // [esp+0h] [ebp-BCh]
  struct _FILE_OBJECT *v12; // [esp+0h] [ebp-BCh]
  struct _DEVICE_OBJECT *v13; // [esp+4h] [ebp-B8h]
  struct _DEVICE_OBJECT *v14; // [esp+4h] [ebp-B8h]
  USHORT ValueCapsLength[2]; // [esp+10h] [ebp-ACh] BYREF
  char *v16; // [esp+14h] [ebp-A8h]
  PDEVICE_OBJECT DeviceObject; // [esp+18h] [ebp-A4h]
  ULONG OutputBufferLength; // [esp+1Ch] [ebp-A0h]
  int v19; // [esp+20h] [ebp-9Ch]
  int v20; // [esp+24h] [ebp-98h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [esp+28h] [ebp-94h] BYREF
  _HIDP_CAPS Capabilities; // [esp+70h] [ebp-4Ch] BYREF

  DeviceObject = (PDEVICE_OBJECT)a3;
  v5 = 0;
  v16 = a1;
  memset(&Capabilities, 0, sizeof(Capabilities));
  OutputBufferLength = 0;
  v19 = 0;
  v20 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v7 = v16;
  *(_DWORD *)ValueCapsLength = 1;
  if ( SendSyncOutputIrpRequest(0xCu, v16, (PDEVICE_OBJECT)a3, v11, v13) < 0 )
    return 0;
  v10 = OutputBufferLength;
  *(_WORD *)(a2 + 698) = HIWORD(v19);
  *(_WORD *)(a2 + 700) = v20;
  v9 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPoolNonPaged(v10, 1147695957);
  if ( v9 )
  {
    if ( SendSyncOutputIrpRequest(OutputBufferLength, v7, DeviceObject, v12, v14) >= 0
      && HidP_GetCaps(v9, &Capabilities) == 1114112
      && Capabilities.UsagePage == 1
      && (Capabilities.Usage == 2 || Capabilities.Usage == 1)
      && HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0x30u, &ValueCaps, ValueCapsLength, v9) >= 0
      && !ValueCaps.IsAbsolute )
    {
      v5 = 1;
    }
    Win32FreePool(v9);
  }
  return v5;
}

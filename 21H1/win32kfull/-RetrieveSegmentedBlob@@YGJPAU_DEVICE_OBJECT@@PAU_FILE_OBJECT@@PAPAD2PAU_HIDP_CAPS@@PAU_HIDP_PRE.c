/*
 * XREFs of ?RetrieveSegmentedBlob@@YGJPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD2PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x157B81
 * Callers:
 *     ?RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPAK@Z @ 0x1579FA (-RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HI.c)
 * Callees:
 *     ?BuildSignatureFeatureReport@@YGJPAU_HIDP_CAPS@@PAU_HIDP_VALUE_CAPS@@PAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD4@Z @ 0x156B36 (-BuildSignatureFeatureReport@@YGJPAU_HIDP_CAPS@@PAU_HIDP_VALUE_CAPS@@PAU_DEVICE_OBJECT@@PAU_FILE.c)
 */

NTSTATUS __userpurge RetrieveSegmentedBlob@<eax>(
        int a1@<edx>,
        struct _DEVICE_OBJECT *a2@<ecx>,
        struct _FILE_OBJECT *UsageValue,
        struct _DEVICE_OBJECT *OutputBuffer,
        char **a5,
        char **PreparsedData,
        struct _HIDP_CAPS *a7,
        struct _HIDP_PREPARSED_DATA *a8,
        struct _HIDP_VALUE_CAPS a9)
{
  NTSTATUS result; // eax
  ULONG v11; // esi
  PIRP v12; // eax
  PIRP v13; // eax
  NTSTATUS Status; // eax
  char **v15; // [esp+0h] [ebp-30h]
  char **v16; // [esp+4h] [ebp-2Ch]
  struct _KEVENT Event; // [esp+10h] [ebp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-10h] BYREF
  int v19; // [esp+28h] [ebp-8h]
  PDEVICE_OBJECT DeviceObject; // [esp+2Ch] [ebp-4h]
  CHAR *UsageValuea; // [esp+38h] [ebp+8h]
  PVOID OutputBuffera; // [esp+3Ch] [ebp+Ch]

  v19 = a1;
  DeviceObject = a2;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  result = BuildSignatureFeatureReport(0, (int)a5, 0, 0, OutputBuffer, UsageValue, v15, v16);
  if ( result >= 0 )
  {
    v11 = 0;
    UsageValuea = *(CHAR **)&UsageValue->Type;
    OutputBuffera = *(PVOID *)&OutputBuffer->Type;
    **(_BYTE **)&OutputBuffer->Type = BYTE2(a7);
    while ( 1 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      HidP_SetUsageValue(
        HidP_Feature,
        (USAGE)a7,
        0,
        0xC6u,
        v11,
        (PHIDP_PREPARSED_DATA)PreparsedData,
        *(PCHAR *)&OutputBuffer->Type,
        *((unsigned __int16 *)a5 + 4));
      v12 = IoBuildDeviceIoControlRequest(
              (ULONG)&loc_B0191,
              DeviceObject,
              *(PVOID *)&OutputBuffer->Type,
              *((unsigned __int16 *)a5 + 4),
              0,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v12 )
        break;
      *(_DWORD *)(v12->Tail.Overlay.PacketType - 12) = v19;
      result = IofCallDriver(DeviceObject, v12);
      if ( result == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
        result = IoStatusBlock.Status;
      }
      if ( result >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v13 = IoBuildDeviceIoControlRequest(
                0xB0192u,
                DeviceObject,
                0,
                0,
                OutputBuffera,
                *((unsigned __int16 *)a5 + 4),
                0,
                &Event,
                &IoStatusBlock);
        if ( !v13 )
          return -1073741668;
        *(_DWORD *)(v13->Tail.Overlay.PacketType - 12) = v19;
        Status = IofCallDriver(DeviceObject, v13);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
          Status = IoStatusBlock.Status;
        }
        if ( Status )
          return -1073741668;
        result = HidP_GetUsageValueArray(
                   HidP_Feature,
                   (USAGE)a7,
                   0,
                   0xC7u,
                   UsageValuea,
                   0x20u,
                   (PHIDP_PREPARSED_DATA)PreparsedData,
                   (PCHAR)OutputBuffera,
                   *((unsigned __int16 *)a5 + 4));
        if ( result < 0 )
          return result;
        UsageValuea += 32;
      }
      if ( ++v11 >= 8 )
        return result;
    }
    return -1073741668;
  }
  return result;
}

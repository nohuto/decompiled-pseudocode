/*
 * XREFs of ?BuildSignatureFeatureReport@@YGJPAU_HIDP_CAPS@@PAU_HIDP_VALUE_CAPS@@PAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD4@Z @ 0x156B36
 * Callers:
 *     ?RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPAK@Z @ 0x1579FA (-RetrieveAndVerifySignature@@YGHPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@GPAU_HIDP_VALUE_CAPS@@PAU_HI.c)
 *     ?RetrieveSegmentedBlob@@YGJPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD2PAU_HIDP_CAPS@@PAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x157B81 (-RetrieveSegmentedBlob@@YGJPAU_DEVICE_OBJECT@@PAU_FILE_OBJECT@@PAPAD2PAU_HIDP_CAPS@@PAU_HIDP_PRE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge BuildSignatureFeatureReport@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        PDEVICE_OBJECT DeviceObject,
        struct _HIDP_VALUE_CAPS *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6,
        char **a7,
        char **a8)
{
  NTSTATUS Status; // esi
  _BYTE *v10; // eax
  PIRP v11; // eax
  int v12; // eax
  int v14; // [esp-8h] [ebp-38h]
  struct _KEVENT Event; // [esp+Ch] [ebp-24h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+1Ch] [ebp-14h] BYREF
  PVOID OutputBuffer; // [esp+24h] [ebp-Ch]
  int v18; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v18 = a2;
  Status = -1073741811;
  v14 = *(unsigned __int16 *)(a2 + 8);
  v19 = a1;
  v10 = (_BYTE *)Win32AllocPoolNonPaged(v14, 1768321877);
  OutputBuffer = v10;
  *(_DWORD *)&a5->Type = v10;
  if ( v10 )
  {
    if ( a1 && DeviceObject && a4 )
    {
      *v10 = *(_BYTE *)(v19 + 2);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v11 = IoBuildDeviceIoControlRequest(
              0xB0192u,
              DeviceObject,
              0,
              0,
              OutputBuffer,
              *(unsigned __int16 *)(v18 + 8),
              0,
              &Event,
              &IoStatusBlock);
      if ( !v11 )
        goto LABEL_12;
      *(_DWORD *)(v11->Tail.Overlay.PacketType - 12) = a4;
      Status = IofCallDriver(DeviceObject, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
        goto LABEL_12;
    }
    else
    {
      Status = 0;
    }
    v12 = Win32AllocPoolZInit(256, 1768321877);
    *(_DWORD *)&a6->Type = v12;
    if ( !v12 )
LABEL_12:
      Status = -1073741668;
  }
  if ( !*(_DWORD *)&a6->Type && *(_DWORD *)&a5->Type )
  {
    Win32FreePool(*(_DWORD *)&a5->Type);
    *(_DWORD *)&a5->Type = 0;
  }
  return Status;
}

/*
 * XREFs of USBDeviceGetOffloadCapability @ 0x1C002C6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     USBD_CreateHandle @ 0x1C0011074 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C00114BC (USBD_CloseHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0011954 (USBD_QueryUsbCapability.c)
 */

__int64 __fastcall USBDeviceGetOffloadCapability(__int64 a1, int *a2, ULONG a3)
{
  int v3; // edi
  const GUID *v5; // rdx
  NTSTATUS v6; // ebx
  ULONG v7; // r8d
  unsigned __int16 v8; // r9
  NTSTATUS v9; // eax
  ULONG v11; // [rsp+28h] [rbp-20h]
  int OutputBuffer; // [rsp+50h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+60h] [rbp+18h] BYREF

  USBDHandle = 0LL;
  v3 = 0;
  OutputBuffer = 0;
  ResultLength = 0;
  v6 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(a1 + 24), *(PDEVICE_OBJECT *)(a1 + 40), a3, 0x38627845u, &USBDHandle);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v8 = 25;
    v11 = v6;
    goto LABEL_4;
  }
  v9 = USBD_QueryUsbCapability(USBDHandle, v5, v7, (PUCHAR)&OutputBuffer, &ResultLength);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( ResultLength == 4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)v5,
          9u,
          0x1Cu,
          (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids,
          OutputBuffer);
      if ( OutputBuffer )
      {
        if ( OutputBuffer == 1 )
        {
          v3 = 1;
        }
        else if ( OutputBuffer == 2 )
        {
          v3 = 2;
        }
      }
    }
    else
    {
      v6 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 27;
        v11 = ResultLength;
LABEL_4:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)v5,
          9u,
          v8,
          (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids,
          v11);
      }
    }
  }
  else
  {
    if ( v9 != -1073741637 && v9 != -1073741822 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v5,
        9u,
        0x1Au,
        (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids,
        v9);
    v6 = 0;
  }
LABEL_21:
  if ( USBDHandle )
    USBD_CloseHandle(USBDHandle);
  *a2 = v3;
  return (unsigned int)v6;
}

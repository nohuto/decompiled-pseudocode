/*
 * XREFs of ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x1C000A010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::PublishInterface(struct _UNICODE_STRING *this, __int64 a2)
{
  struct _UNICODE_STRING *v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-20h]
  NTSTATUS v11; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x14u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  v3 = this + 3;
  v4 = IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(*(_QWORD *)&this[2].Length + 32LL),
         &GUID_DEVINTERFACE_USB_SIDEBAND_AUDIO_HS_HCIBYPASS,
         (PUNICODE_STRING)&ReferenceString,
         this + 3);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v4 = IoSetDeviceInterfaceState(v3, 1u);
    v6 = v4;
    if ( v4 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v6;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0x17u,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v7 = 22;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v7 = 21;
  }
  v11 = v4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    9u,
    v7,
    (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
    v11);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      0x18u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
      v10);
  }
  return v6;
}

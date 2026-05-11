/*
 * XREFs of ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E350
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C000A3C0 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceDescriptor(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  ULONG Length; // eax
  NTSTATUS v6; // ecx
  unsigned __int16 v7; // r9
  unsigned int *UserBuffer; // rbx
  int NumberOfEndpointsInDevice; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-18h]
  unsigned int v15; // [rsp+80h] [rbp+40h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0xAu,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length != 4 )
    {
      v6 = -1073741811;
      v15 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        0xDu,
        (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
        4,
        -1073741811);
LABEL_17:
      v6 = v15;
      goto LABEL_18;
    }
    UserBuffer = (unsigned int *)a2->UserBuffer;
    NumberOfEndpointsInDevice = CSidebandDevice::GetNumberOfEndpointsInDevice(this, UserBuffer);
    v15 = NumberOfEndpointsInDevice;
    v6 = NumberOfEndpointsInDevice;
    if ( NumberOfEndpointsInDevice >= 0 )
    {
      a2->IoStatus.Information = 4LL;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      NumberOfEndpointsInDevice = *UserBuffer;
      v7 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v7 = 14;
    }
    v13 = NumberOfEndpointsInDevice;
    goto LABEL_16;
  }
  v6 = -1073741789;
  a2->IoStatus.Information = 4LL;
  v15 = -1073741789;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 12;
    v13 = -1073741789;
LABEL_16:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      v7,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v13);
    goto LABEL_17;
  }
LABEL_18:
  v10 = v6;
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0xBu,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v12);
  }
  return v10;
}

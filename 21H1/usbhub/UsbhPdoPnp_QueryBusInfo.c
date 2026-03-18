/*
 * XREFs of UsbhPdoPnp_QueryBusInfo @ 0x1C0055D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryBusInfo(__int64 a1, IRP *a2)
{
  GUID *PoolWithTag; // rax
  unsigned int v4; // ebx

  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 15LL;
    v4 = 0;
    *PoolWithTag = GUID_BUS_TYPE_USB;
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      v4);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}

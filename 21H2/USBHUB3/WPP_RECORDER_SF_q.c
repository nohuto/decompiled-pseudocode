/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0013D04
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00173D0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceProcessQueryInterfaceRequest @ 0x1C0019200 (HUBPDO_EvtDeviceProcessQueryInterfaceRequest.c)
 *     HUBDSM_WaitingForD0EntryOnHwWake @ 0x1C0021C00 (HUBDSM_WaitingForD0EntryOnHwWake.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00234D0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C00244F8 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C0027D40 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped @ 0x1C002A944 (HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped.c)
 *     HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x1C002A9C0 (HUBMISC_GetGenericErrorResponseOnDescriptorFailure.c)
 *     TUNNEL_EvtIoTargetRemoveComplete @ 0x1C00888D0 (TUNNEL_EvtIoTargetRemoveComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}

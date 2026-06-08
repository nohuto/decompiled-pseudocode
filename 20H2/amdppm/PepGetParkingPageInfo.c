/*
 * XREFs of PepGetParkingPageInfo @ 0x1C00356F4
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C000DB00 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepGetParkingPageInfo(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v6) = *(_DWORD *)(a1 + 56);
  v8 = 24;
  v3 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, int *))HalDispatchTable->HalQuerySystemInformation)(
         29LL,
         24LL,
         &v6,
         &v8);
  if ( v3 >= 0 )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    a2[1] = v7;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x15u,
      (__int64)&WPP_26255293f6d13ac9c2d7d7a8bbb4918d_Traceguids,
      v5);
  }
  return (unsigned int)v3;
}

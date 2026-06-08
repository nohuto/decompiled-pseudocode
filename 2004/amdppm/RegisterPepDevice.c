/*
 * XREFs of RegisterPepDevice @ 0x1C0034954
 * Callers:
 *     InitPep @ 0x1C0034204 (InitPep.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000ED80 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  int v4; // ebx
  _QWORD v6[12]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v7; // [rsp+90h] [rbp+37h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  v8 = 0LL;
  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  v2 = *a1;
  v3 = a1 + 138;
  LODWORD(v8) = -1;
  v6[7] = a1;
  v6[0] = 0x100000001LL;
  LODWORD(v6[10]) = 1;
  v6[11] = &v7;
  v6[6] = PepDevicePowerControlCallback;
  v4 = PoFxRegisterDevice(v2, v6, a1 + 138);
  if ( v4 >= 0 )
  {
    PoFxActivateComponent(*v3, 0LL, 0LL);
    PoFxStartDevicePowerManagement(*v3);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xFu,
        (__int64)&WPP_26255293f6d13ac9c2d7d7a8bbb4918d_Traceguids,
        v4);
    *v3 = 0LL;
  }
  return (unsigned int)v4;
}

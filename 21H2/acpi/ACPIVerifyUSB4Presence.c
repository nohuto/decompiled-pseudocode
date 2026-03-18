/*
 * XREFs of ACPIVerifyUSB4Presence @ 0x1C00027F4
 * Callers:
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIVerifyUSB4Presence(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v6[4]; // [rsp+40h] [rbp-28h] BYREF

  v6[1] = 0;
  v6[0] = 1;
  v6[2] = 15;
  v3 = *(_QWORD *)(RootDeviceExtension + 760);
  *(_OWORD *)v5 = SB_OSC_USB4_UUID;
  return ACPIAmliEvaluateOsc(v3, (int)v5, a3, 3, v6);
}

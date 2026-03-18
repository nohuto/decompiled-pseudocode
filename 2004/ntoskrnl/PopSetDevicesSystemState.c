/*
 * XREFs of PopSetDevicesSystemState @ 0x14098DC04
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140C22E5D;
  v3 = byte_140C22E42;
  v5 = byte_140C22E5C;
  v2[0] = dword_140C22E6C;
  v2[1] = dword_140C22E68;
  v0 = dword_140C22E60;
  if ( (dword_140C22E4C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140C22E4C;
  v2[2] = v0;
  v2[3] = dword_140C22E64;
  v2[4] = qword_140C22E44;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}

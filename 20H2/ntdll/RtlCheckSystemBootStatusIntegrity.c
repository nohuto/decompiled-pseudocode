/*
 * XREFs of RtlCheckSystemBootStatusIntegrity @ 0x1800EDFC0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009DC80 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlCheckSystemBootStatusIntegrity(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-38h] BYREF
  char v3; // [rsp+48h] [rbp-20h] BYREF
  __int64 v4; // [rsp+50h] [rbp-18h]
  int v5; // [rsp+58h] [rbp-10h]

  if ( !a1 )
    return -1073741811;
  v4 = a1;
  v5 = 1;
  InputBuffer[1] = 1LL;
  InputBuffer[0] = 34LL;
  InputBuffer[2] = &v3;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, 0LL, 0);
}

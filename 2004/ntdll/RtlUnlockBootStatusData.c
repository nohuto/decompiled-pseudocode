/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800EDFA0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009D9E0 (NtPowerInformation.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  result = 0;
  if ( !FileHandle )
  {
    v2[0] = 38LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    return NtPowerInformation(PowerInformationInternal, v2, 0x18u, 0LL, 0);
  }
  return result;
}

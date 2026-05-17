/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x180085814
 * Callers:
 *     RtlSetSystemBootStatus @ 0x1800857E0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x18008B810 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1800EDDD0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x1800EDF80 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     NtPowerInformation @ 0x18009D9E0 (NtPowerInformation.c)
 */

__int64 __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  if ( a4 && 4 * (unsigned __int64)a3 > 0xFFFFFFFF )
    return 3221225621LL;
  v5[1] = 0;
  v5[3] = 0;
  v5[2] = a3;
  v5[0] = a1;
  v6 = a2;
  return NtPowerInformation(87LL, v5);
}

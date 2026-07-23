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

NTSTATUS __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned __int64 OutputBufferLength; // rax
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( !a4 )
  {
    LODWORD(OutputBufferLength) = 0;
LABEL_3:
    InputBuffer[1] = 0;
    InputBuffer[3] = 0;
    InputBuffer[2] = a3;
    InputBuffer[0] = a1;
    v7 = a2;
    return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  OutputBufferLength = 4LL * a3;
  if ( OutputBufferLength <= 0xFFFFFFFF )
    goto LABEL_3;
  return -1073741675;
}

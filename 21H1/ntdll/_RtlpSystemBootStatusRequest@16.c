/*
 * XREFs of _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD
 * Callers:
 *     _RtlGetSystemBootStatus@16 @ 0x4B350B70 (_RtlGetSystemBootStatus@16.c)
 *     _RtlGetSystemBootStatusEx@12 @ 0x4B350BB0 (_RtlGetSystemBootStatusEx@12.c)
 *     _RtlSetSystemBootStatus@16 @ 0x4B350CE0 (_RtlSetSystemBootStatus@16.c)
 *     _RtlSetSystemBootStatusEx@12 @ 0x4B350D20 (_RtlSetSystemBootStatusEx@12.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

NTSTATUS __fastcall RtlpSystemBootStatusRequest(int a1, int a2, int a3, PVOID OutputBuffer)
{
  NTSTATUS result; // eax
  ULONG v7; // eax
  _DWORD InputBuffer[4]; // [esp+Ch] [ebp-14h] BYREF
  ULONG OutputBufferLength; // [esp+1Ch] [ebp-4h] BYREF

  if ( OutputBuffer )
  {
    result = RtlULongLongToUInt((int *)&OutputBufferLength, 4 * a3, (unsigned __int64)(unsigned int)a3 >> 30);
    if ( result < 0 )
      return result;
    v7 = OutputBufferLength;
  }
  else
  {
    v7 = 0;
  }
  InputBuffer[1] = 0;
  InputBuffer[0] = a1;
  InputBuffer[2] = a3;
  InputBuffer[3] = a2;
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x10u, OutputBuffer, v7);
}

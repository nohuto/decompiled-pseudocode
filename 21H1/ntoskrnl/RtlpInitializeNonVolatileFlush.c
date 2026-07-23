/*
 * XREFs of RtlpInitializeNonVolatileFlush @ 0x1403CB1E4
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 */

NTSTATUS RtlpInitializeNonVolatileFlush()
{
  NTSTATUS result; // eax
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    if ( (BYTE8(SystemInformation[0]) & 1) != 0 )
      RtlpIsFlushRequired = 0;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_6:
        result = DWORD1(SystemInformation[0]);
        RtlpClFlushSize = DWORD1(SystemInformation[0]);
        return result;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_6;
  }
  return result;
}

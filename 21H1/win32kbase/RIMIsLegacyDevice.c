/*
 * XREFs of RIMIsLegacyDevice @ 0x1C004C6D8
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C004C66C (RIMSearchHidTLCInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsLegacyDevice(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = 1;
  if ( (_WORD)a1 != 1 )
    goto LABEL_2;
  if ( a2 == 2 || a2 == 6 )
    v2 = 1;
  if ( a2 != 6 && a2 != 2 )
LABEL_2:
    v3 = 0;
  if ( v2 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return v2;
}

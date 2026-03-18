/*
 * XREFs of RIMIsLegacyDevice @ 0x1C0071A20
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00718D8 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00719B4 (RIMSearchHidTLCInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsLegacyDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // eax

  v4 = 0;
  v5 = 1;
  if ( (_WORD)a1 != 1 )
    goto LABEL_2;
  if ( (_WORD)a2 == 2 || (_WORD)a2 == 6 )
    v4 = 1;
  if ( (_WORD)a2 != 6 && (_WORD)a2 != 2 )
LABEL_2:
    v5 = 0;
  if ( v4 != v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return v4;
}

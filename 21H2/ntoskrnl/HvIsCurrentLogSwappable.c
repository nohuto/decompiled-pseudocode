/*
 * XREFs of HvIsCurrentLogSwappable @ 0x1406E72CC
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1406890A0 (CmpGenerateFlushControlData.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r8

  v1 = *(_DWORD *)(a1 + 168);
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v2 = HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v1 != 4));
  return *(_BYTE *)(v2 + v3 + 192) == 0;
}

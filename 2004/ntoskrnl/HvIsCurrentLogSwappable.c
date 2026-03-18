/*
 * XREFs of HvIsCurrentLogSwappable @ 0x14070C5A4
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140639278 (CmpGenerateFlushControlData.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1406397A0 (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r8

  v1 = *(_DWORD *)(a1 + 164);
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v2 = HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v1 != 4));
  return *(_BYTE *)(v2 + v3 + 188) == 0;
}

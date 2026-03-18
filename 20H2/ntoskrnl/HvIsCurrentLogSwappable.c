/*
 * XREFs of HvIsCurrentLogSwappable @ 0x1406DE6D4
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1405DC3D0 (CmpGenerateFlushControlData.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1405DC8F8 (HvpLogTypeToLogArrayIndex.c)
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

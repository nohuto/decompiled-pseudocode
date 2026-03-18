/*
 * XREFs of HvpIsLogEntryCoherent @ 0x140925444
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140925338 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     HvpLogEntryCheckDataChecksum @ 0x140919024 (HvpLogEntryCheckDataChecksum.c)
 *     HvpIsMetadataArrayCoherent @ 0x140925504 (HvpIsMetadataArrayCoherent.c)
 */

bool __fastcall HvpIsLogEntryCoherent(__int64 a1, __int64 a2)
{
  return (unsigned __int8)HvpIsMetadataArrayCoherent(a2, a1 + 40, *(unsigned int *)(a2 + 20))
      && HvpLogEntryCheckDataChecksum(a1, *(_DWORD *)(a2 + 4), a2);
}

/*
 * XREFs of PopEtAppIdDereference @ 0x1405F8134
 * Callers:
 *     PopEtGetProcessAppId @ 0x1405F6D20 (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x1405F805C (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x14067D90C (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1405F8164 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}

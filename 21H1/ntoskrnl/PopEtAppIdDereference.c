/*
 * XREFs of PopEtAppIdDereference @ 0x1405F2160
 * Callers:
 *     PopEtAggregateKeyCleanup @ 0x1405F2088 (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x14066031C (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x1406C6AB8 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1405F2190 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}

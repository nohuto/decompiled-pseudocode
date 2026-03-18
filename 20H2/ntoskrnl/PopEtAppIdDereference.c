/*
 * XREFs of PopEtAppIdDereference @ 0x140667990
 * Callers:
 *     PopEtGetProcessAppId @ 0x14062F82C (PopEtGetProcessAppId.c)
 *     PoEnergyContextCleanup @ 0x14066122C (PoEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x1406678B8 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1406679C0 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}

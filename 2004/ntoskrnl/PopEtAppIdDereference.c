/*
 * XREFs of PopEtAppIdDereference @ 0x14069BCC4
 * Callers:
 *     PoEnergyContextCleanup @ 0x14061ABFC (PoEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x14069BBEC (PopEtAggregateKeyCleanup.c)
 *     PopEtGetProcessAppId @ 0x1406E73B0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x14069BCF4 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}

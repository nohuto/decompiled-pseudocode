/*
 * XREFs of PopEtStringSet @ 0x14069AAC0
 * Callers:
 *     PopEtEnergyContextSetState @ 0x14065A1F0 (PopEtEnergyContextSetState.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x14069A9DC (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtProcessSnapshotCreate @ 0x1406F735C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x14069BCF4 (RtlInternEntryDereference.c)
 */

void __fastcall PopEtStringSet(_QWORD *a1, __int64 a2)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rcx
  signed __int64 v6; // rtt

  if ( *a1 )
    RtlInternEntryDereference(PopEtGlobals + 56);
  *a1 = a2;
  if ( a2 )
  {
    _m_prefetchw((const void *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 16);
    for ( i = v4 + 1; i > 1; i = v4 + 1 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), i, v4);
      if ( v6 == v4 )
        return;
    }
    if ( i != 1 )
      __fastfail(0xEu);
  }
}

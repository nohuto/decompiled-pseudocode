/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x14074B910
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14074B884 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x14074CCA0 (PipCheckIfAllProvidersHaveDevnodes.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsDeviceReadyForPowerRelations(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 300) != 769 )
        return 1;
    }
  }
  return result;
}

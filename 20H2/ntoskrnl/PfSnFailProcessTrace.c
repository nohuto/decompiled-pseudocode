/*
 * XREFs of PfSnFailProcessTrace @ 0x140730BF0
 * Callers:
 *     PfSnLogHelper @ 0x1406820DC (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x140682158 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1406BCB1C (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1406F1174 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}

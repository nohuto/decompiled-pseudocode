/*
 * XREFs of PfSnFailProcessTrace @ 0x140722AE0
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1406989E0 (PfSnVolumeKeyQuery.c)
 *     PfSnLogHelper @ 0x1406B7F6C (PfSnLogHelper.c)
 *     PfSnLogStreamDelete @ 0x14070E874 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x14070876C (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}

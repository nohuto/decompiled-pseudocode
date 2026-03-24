/*
 * XREFs of PfSnFailProcessTrace @ 0x140734CC0
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x14069543C (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x140698C2C (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x1406CC79C (PfSnLogHelper.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1406BA3DC (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}

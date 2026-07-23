/*
 * XREFs of PfSnFailProcessTrace @ 0x140734E80
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1405F498C (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1405F7924 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x14067B08C (PfSnLogHelper.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x14061954C (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}

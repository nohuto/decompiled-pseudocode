/*
 * XREFs of PfSnFailProcessTrace @ 0x140720C20
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1405EF4D0 (PfSnVolumeKeyQuery.c)
 *     PfSnLogHelper @ 0x14064FDDC (PfSnLogHelper.c)
 *     PfSnLogStreamDelete @ 0x1406EAC04 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1405D40A8 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}

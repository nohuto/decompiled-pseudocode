/*
 * XREFs of sub_1800072B0 @ 0x1800072B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 */

void __fastcall sub_1800072B0(__int64 a1)
{
  if ( *(_BYTE *)a1 )
    sub_1800065B0((LPCRITICAL_SECTION)(a1 + 176), (PSRWLOCK)(a1 + 32));
}

/*
 * XREFs of sub_180007280 @ 0x180007280
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 */

void __fastcall sub_180007280(__int64 a1)
{
  if ( *(_BYTE *)a1 )
    sub_1800065B0((LPCRITICAL_SECTION)(a1 + 104), (PSRWLOCK)(a1 + 32));
}

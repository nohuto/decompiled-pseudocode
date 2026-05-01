/*
 * XREFs of sub_180007250 @ 0x180007250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 */

__int64 __fastcall sub_180007250(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_BYTE *)a4 )
    sub_1800065B0((LPCRITICAL_SECTION)(a4 + 104), (PSRWLOCK)(a4 + 32));
  return 0LL;
}

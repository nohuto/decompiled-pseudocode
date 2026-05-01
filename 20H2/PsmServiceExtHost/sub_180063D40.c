/*
 * XREFs of sub_180063D40 @ 0x180063D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180065814 @ 0x180065814 (sub_180065814.c)
 */

__int64 __fastcall sub_180063D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_BYTE *)a4 )
    sub_180065814((LPCRITICAL_SECTION)(a4 + 104), (PSRWLOCK)(a4 + 32));
  return 0LL;
}

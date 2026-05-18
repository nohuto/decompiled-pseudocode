/*
 * XREFs of sub_1800162F0 @ 0x1800162F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BFF4 @ 0x18001BFF4 (sub_18001BFF4.c)
 */

__int64 __fastcall sub_1800162F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_BYTE *)a4 )
    sub_18001BFF4((LPCRITICAL_SECTION)(a4 + 72), (PSRWLOCK)(a4 + 32));
  return 0LL;
}

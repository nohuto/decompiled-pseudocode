/*
 * XREFs of sub_180063DA0 @ 0x180063DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180065814 @ 0x180065814 (sub_180065814.c)
 */

__int64 __fastcall sub_180063DA0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
    return sub_180065814((LPCRITICAL_SECTION)(a1 + 104), (PSRWLOCK)(a1 + 32));
  return result;
}

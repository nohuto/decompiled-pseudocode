/*
 * XREFs of sub_180016310 @ 0x180016310
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BFF4 @ 0x18001BFF4 (sub_18001BFF4.c)
 */

__int64 __fastcall sub_180016310(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
    return sub_18001BFF4((LPCRITICAL_SECTION)(a1 + 168), (PSRWLOCK)(a1 + 32));
  return result;
}

/*
 * XREFs of sub_180036A48 @ 0x180036A48
 * Callers:
 *     sub_180034400 @ 0x180034400 (sub_180034400.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180036A48(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 - 16);
  if ( *a1 <= v2 )
    return (unsigned int)-(*a1 < v2);
  else
    return 1LL;
}

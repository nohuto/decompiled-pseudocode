/*
 * XREFs of sub_180139A2C @ 0x180139A2C
 * Callers:
 *     sub_180138FF0 @ 0x180138FF0 (sub_180138FF0.c)
 *     sub_180139164 @ 0x180139164 (sub_180139164.c)
 *     sub_180139250 @ 0x180139250 (sub_180139250.c)
 *     sub_18013A54C @ 0x18013A54C (sub_18013A54C.c)
 *     sub_18013A5F8 @ 0x18013A5F8 (sub_18013A5F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180139A2C(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 8) )
    return 0LL;
  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0LL;
  if ( !v1 )
    return 0LL;
  while ( 1 )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 8 * v2);
    if ( result )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v1 )
      return 0LL;
  }
  return result;
}

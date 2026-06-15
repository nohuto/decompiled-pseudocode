/*
 * XREFs of sub_18002C4D0 @ 0x18002C4D0
 * Callers:
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18009218B @ 0x18009218B (sub_18009218B.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 *     sub_1800CEAE4 @ 0x1800CEAE4 (sub_1800CEAE4.c)
 *     sub_1800CEBD8 @ 0x1800CEBD8 (sub_1800CEBD8.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002C4D0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  __int64 v3; // rdx

  if ( !*(_QWORD *)(a1 + 8) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 8 * v3);
    if ( result )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return result;
}

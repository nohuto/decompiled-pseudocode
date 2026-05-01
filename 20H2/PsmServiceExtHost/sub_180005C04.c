/*
 * XREFs of sub_180005C04 @ 0x180005C04
 * Callers:
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 * Callees:
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 */

__int64 __fastcall sub_180005C04(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 192) += a2;
  result = sub_18000CA8C(a1 + 144, *(unsigned int *)(a1 + 192));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

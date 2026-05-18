/*
 * XREFs of sub_1800F15C4 @ 0x1800F15C4
 * Callers:
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800F0E44 @ 0x1800F0E44 (sub_1800F0E44.c)
 */

__int64 __fastcall sub_1800F15C4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a1[1];
  if ( a1[2] == v2 )
    return sub_1800F0E44(a1, a1[1], a2);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  sub_180020B7C((_QWORD *)v2, a2);
  *(_WORD *)(v2 + 32) = *(_WORD *)(a2 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(v2 + 44) = *(_DWORD *)(a2 + 44);
  result = *(unsigned int *)(a2 + 48);
  *(_DWORD *)(v2 + 48) = result;
  a1[1] += 56LL;
  return result;
}

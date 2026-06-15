/*
 * XREFs of sub_1800F22A4 @ 0x1800F22A4
 * Callers:
 *     sub_1800F3374 @ 0x1800F3374 (sub_1800F3374.c)
 *     sub_1800F4D90 @ 0x1800F4D90 (sub_1800F4D90.c)
 * Callees:
 *     sub_1800F5128 @ 0x1800F5128 (sub_1800F5128.c)
 */

bool __fastcall sub_1800F22A4(__int64 a1, _WORD *a2)
{
  _WORD *v2; // rdi
  bool result; // al

  v2 = a2;
  result = (!*(_WORD *)a1 || (a2 += 148, !*a2) || !(unsigned int)o__wcsicmp(a1, a2))
        && (unsigned int)sub_1800F5128(a1 + 402, a2, v2 + 349)
        && *(_DWORD *)(a1 + 924) == *((_DWORD *)v2 + 305);
  return result;
}

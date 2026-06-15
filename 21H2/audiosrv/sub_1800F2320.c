/*
 * XREFs of sub_1800F2320 @ 0x1800F2320
 * Callers:
 *     sub_1800F2AF0 @ 0x1800F2AF0 (sub_1800F2AF0.c)
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 * Callees:
 *     sub_1800F5128 @ 0x1800F5128 (sub_1800F5128.c)
 */

bool __fastcall sub_1800F2320(__int64 a1, __int64 a2)
{
  return (!*(_WORD *)a1 || !*(_WORD *)a2 || !(unsigned int)o__wcsicmp(a1, a2))
      && (unsigned int)sub_1800F5128(a1 + 402, a2, a2 + 402)
      && *(_DWORD *)(a1 + 924) == *(_DWORD *)(a2 + 924);
}

/*
 * XREFs of sub_1800EE614 @ 0x1800EE614
 * Callers:
 *     sub_1800F05BC @ 0x1800F05BC (sub_1800F05BC.c)
 *     sub_1800F05F8 @ 0x1800F05F8 (sub_1800F05F8.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

int __fastcall sub_1800EE614(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = 16LL * a4;
  v7 = (void *)sub_1800EFCBC(a1, a2, 5LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}

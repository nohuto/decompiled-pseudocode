/*
 * XREFs of sub_1800EE5A8 @ 0x1800EE5A8
 * Callers:
 *     sub_1800EFFFC @ 0x1800EFFFC (sub_1800EFFFC.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

int __fastcall sub_1800EE5A8(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)sub_1800EFCBC(a1, a2, 7LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}

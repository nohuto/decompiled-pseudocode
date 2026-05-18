/*
 * XREFs of sub_1800F3EE4 @ 0x1800F3EE4
 * Callers:
 *     sub_1800F5E8C @ 0x1800F5E8C (sub_1800F5E8C.c)
 *     sub_1800F5EC8 @ 0x1800F5EC8 (sub_1800F5EC8.c)
 * Callees:
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 */

int __fastcall sub_1800F3EE4(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = 16LL * a4;
  v7 = (void *)sub_1800F558C(a1, a2, 5LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}

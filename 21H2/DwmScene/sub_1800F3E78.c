/*
 * XREFs of sub_1800F3E78 @ 0x1800F3E78
 * Callers:
 *     sub_1800F58CC @ 0x1800F58CC (sub_1800F58CC.c)
 * Callees:
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 */

int __fastcall sub_1800F3E78(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)sub_1800F558C(a1, a2, 7LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}

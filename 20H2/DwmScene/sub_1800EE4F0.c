/*
 * XREFs of sub_1800EE4F0 @ 0x1800EE4F0
 * Callers:
 *     sub_1800EFFC8 @ 0x1800EFFC8 (sub_1800EFFC8.c)
 * Callees:
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

int __fastcall sub_1800EE4F0(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v5; // rdi
  int result; // eax

  v5 = (_OWORD *)sub_1800EFCBC(a1, a2, 7LL);
  result = memcmp(v5, a3, 0x40uLL);
  if ( result )
  {
    *v5 = *a3;
    v5[1] = a3[1];
    v5[2] = a3[2];
    v5[3] = a3[3];
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}

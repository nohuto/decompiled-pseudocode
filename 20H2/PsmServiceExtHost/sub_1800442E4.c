/*
 * XREFs of sub_1800442E4 @ 0x1800442E4
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_1800442E4(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 60) = 0;
  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 0;
  v4 = sub_18002BF9C(v3);
  memcpy(v6, v5, v4);
  result = sub_18002B0F8(a1 + 64, 4);
  if ( (int)result >= 0 )
  {
    result = sub_18002B0F8(a1 + 88, 8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

/*
 * XREFs of sub_1800849F0 @ 0x1800849F0
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_1800849F0(__int64 a1)
{
  unsigned int v2; // eax
  const void *v3; // rdx
  void *v4; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v2 = sub_18002BF9C(*(_DWORD *)a1);
  memcpy(v4, v3, v2);
  result = sub_18002B0F8(a1 + 64, 0);
  if ( (int)result >= 0 )
    return sub_18002B0F8(a1 + 96, 1);
  return result;
}

/*
 * XREFs of sub_180032BA8 @ 0x180032BA8
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_180032C18 @ 0x180032C18 (sub_180032C18.c)
 *     sub_180032CE4 @ 0x180032CE4 (sub_180032CE4.c)
 *     memset @ 0x18004683A (memset.c)
 */

bool __fastcall sub_180032BA8(__int64 a1)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  memset(v3, 0, 0x40uLL);
  v3[6] = a1;
  sub_180032CE4(v3, 1LL, 8LL);
  return (v3[7] & 0x8000000000000LL) == 0
      || (int)sub_180032C18(v3, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 528LL), &v4) < 0
      || v4 == 0;
}

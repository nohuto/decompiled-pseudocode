/*
 * XREFs of sub_180064888 @ 0x180064888
 * Callers:
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_1800C6108 @ 0x1800C6108 (sub_1800C6108.c)
 * Callees:
 *     sub_1800C6894 @ 0x1800C6894 (sub_1800C6894.c)
 *     sub_1800C8E8C @ 0x1800C8E8C (sub_1800C8E8C.c)
 */

char __fastcall sub_180064888(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned int v5; // edi
  __int64 v6; // rax

  v2 = 0;
  if ( (unsigned __int64)(a2 - 1) <= 0xFFFE )
  {
    v5 = (unsigned __int16)a2;
    v6 = sub_1800C6894((unsigned __int16)a2);
    if ( v6 )
      sub_1800C8E8C(a1, v6, v5);
    return 1;
  }
  return v2;
}

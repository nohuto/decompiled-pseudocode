/*
 * XREFs of sub_1800AD52C @ 0x1800AD52C
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_1800ABC44 @ 0x1800ABC44 (sub_1800ABC44.c)
 *     sub_1800ABEDC @ 0x1800ABEDC (sub_1800ABEDC.c)
 */

void __fastcall sub_1800AD52C(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  __int64 *v3; // rdi
  _QWORD *v5; // rax

  v2 = *(char **)(a1 + 424);
  v3 = (__int64 *)(a1 + 416);
  if ( sub_1800ABEDC(*(char **)(a1 + 416), v2, a2) == v2 )
  {
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)v3[2] == v5 )
    {
      sub_1800ABC44(v3, (_QWORD *)v3[1], a2);
    }
    else
    {
      v5[2] = 0LL;
      v5[3] = 0LL;
      sub_18001277C(v5, a2);
      v3[1] += 32LL;
    }
  }
}

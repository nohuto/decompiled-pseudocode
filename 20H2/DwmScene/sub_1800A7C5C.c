/*
 * XREFs of sub_1800A7C5C @ 0x1800A7C5C
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_1800A6374 @ 0x1800A6374 (sub_1800A6374.c)
 *     sub_1800A660C @ 0x1800A660C (sub_1800A660C.c)
 */

void __fastcall sub_1800A7C5C(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  __int64 *v3; // rdi
  _QWORD *v5; // rax

  v2 = *(char **)(a1 + 424);
  v3 = (__int64 *)(a1 + 416);
  if ( sub_1800A660C(*(char **)(a1 + 416), v2, a2) == v2 )
  {
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)v3[2] == v5 )
    {
      sub_1800A6374(v3, (_QWORD *)v3[1], a2);
    }
    else
    {
      v5[2] = 0LL;
      v5[3] = 0LL;
      sub_18001269C(v5, a2);
      v3[1] += 32LL;
    }
  }
}

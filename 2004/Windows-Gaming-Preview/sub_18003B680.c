/*
 * XREFs of sub_18003B680 @ 0x18003B680
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18003B680(_QWORD *a1, char a2)
{
  volatile signed __int64 *v4; // rcx

  `eh vector destructor iterator'(a1 + 4, 8uLL, 1uLL, (void (*)(void *))sub_1800081D0);
  v4 = (volatile signed __int64 *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    sub_180011B00(v4);
  }
  *a1 = &off_18004ADE8;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 40LL);
  return a1;
}

/*
 * XREFs of sub_180032EA0 @ 0x180032EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180032EA0(_QWORD *a1, char a2)
{
  volatile signed __int64 *v4; // rcx

  `eh vector destructor iterator'(a1 + 4, 8uLL, 1uLL, (void (*)(void *))sub_1800081D0);
  v4 = (volatile signed __int64 *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    sub_1800120A0(v4);
  }
  *a1 = &off_18004ADE8;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 40LL);
  return a1;
}

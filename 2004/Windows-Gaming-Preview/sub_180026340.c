/*
 * XREFs of sub_180026340 @ 0x180026340
 * Callers:
 *     <none>
 * Callees:
 *     j_j_j__o_free @ 0x1800440F8 (j_j_j__o_free.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180026340(__int64 a1, __int64 a2)
{
  char v3; // si
  char *v4; // rcx
  char *v5; // rbx

  *(_QWORD *)a1 = off_18004AE18;
  v3 = a2;
  v4 = *(char **)(a1 + 16);
  if ( v4 )
  {
    v5 = v4 - 8;
    `eh vector destructor iterator'(v4, 8uLL, *((_QWORD *)v4 - 1), (void (*)(void *))sub_1800081D0);
    j_j_j__o_free(v5, 8LL * *(_QWORD *)v5 + 8);
  }
  j_j__o_free(*(_QWORD *)(a1 + 32), a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (v3 & 1) != 0 )
    j_j__o_free(a1, 40LL);
  return a1;
}

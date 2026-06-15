/*
 * XREFs of sub_180107110 @ 0x180107110
 * Callers:
 *     sub_180056A7C @ 0x180056A7C (sub_180056A7C.c)
 *     sub_1801062A0 @ 0x1801062A0 (sub_1801062A0.c)
 *     sub_18010630C @ 0x18010630C (sub_18010630C.c)
 *     sub_180107EE4 @ 0x180107EE4 (sub_180107EE4.c)
 *     sub_180108014 @ 0x180108014 (sub_180108014.c)
 *     sub_18010826C @ 0x18010826C (sub_18010826C.c)
 *     sub_180108310 @ 0x180108310 (sub_180108310.c)
 *     sub_1801394A4 @ 0x1801394A4 (sub_1801394A4.c)
 *     sub_180139510 @ 0x180139510 (sub_180139510.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 *     sub_18013A0F0 @ 0x18013A0F0 (sub_18013A0F0.c)
 *     sub_18013A194 @ 0x18013A194 (sub_18013A194.c)
 *     sub_18013ED04 @ 0x18013ED04 (sub_18013ED04.c)
 *     sub_1801427B4 @ 0x1801427B4 (sub_1801427B4.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056C2C @ 0x180056C2C (sub_180056C2C.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

char __fastcall sub_180107110(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v4; // rdi
  void *v6; // rcx
  void *v7; // rax

  v4 = a2;
  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180033A70(v6);
    *(_QWORD *)a1 = 0LL;
  }
  if ( !a3 )
    goto LABEL_6;
  v7 = sub_180055F40(saturated_mul(v4, 8uLL));
  *(_QWORD *)a1 = v7;
  if ( v7 )
  {
    memset(v7, 0, 8 * v4);
LABEL_6:
    *(_DWORD *)(a1 + 16) = v4;
    sub_180056C2C(a1);
    LOBYTE(v7) = 1;
  }
  return (char)v7;
}

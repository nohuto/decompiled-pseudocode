/*
 * XREFs of sub_1800DC6A0 @ 0x1800DC6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F61F8 @ 0x1800F61F8 (sub_1800F61F8.c)
 */

char __fastcall sub_1800DC6A0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 8);
  if ( !*v2 )
  {
    *v2 = 1;
    sub_1800F61F8(a1, *(unsigned int *)(a2 + 4), **(_QWORD **)(a1 + 16));
  }
  return 0;
}

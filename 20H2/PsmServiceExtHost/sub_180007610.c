/*
 * XREFs of sub_180007610 @ 0x180007610
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 */

unsigned int __fastcall sub_180007610(_QWORD *a1)
{
  int v1; // eax

  v1 = sub_180007740(*a1);
  if ( v1 < 0 )
    return v1 & 0xEFFFFFFF;
  else
    return 0;
}

/*
 * XREFs of sub_1800854DC @ 0x1800854DC
 * Callers:
 *     _initp_eh_hooks @ 0x180003FD0 (_initp_eh_hooks.c)
 *     _initp_eh_hooks_0 @ 0x180004020 (_initp_eh_hooks_0.c)
 *     sub_180078800 @ 0x180078800 (sub_180078800.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800854DC(_QWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v1 = 0;
  if ( a1 )
  {
    v2 = 5381;
    while ( *(_BYTE *)a1 )
    {
      v2 = *(char *)a1 + 33 * v2;
      a1 = (_QWORD *)((char *)a1 + 1);
    }
    return v2;
  }
  return v1;
}

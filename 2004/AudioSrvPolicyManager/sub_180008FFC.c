/*
 * XREFs of sub_180008FFC @ 0x180008FFC
 * Callers:
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18003B245 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_180008FFC(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_180009CF0(v3 + 2);
      sub_180039D98(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_180039D98(*a1);
}

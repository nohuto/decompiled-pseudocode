/*
 * XREFs of sub_18002B9D0 @ 0x18002B9D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EF90 @ 0x18000EF90 (sub_18000EF90.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void __fastcall sub_18002B9D0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v2; // rcx
  _QWORD *v3; // rdi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (volatile signed __int32 *)v1[1];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        sub_18000EF90(v2);
      sub_180039D98(v1);
      v1 = v3;
    }
    while ( v3 );
  }
}

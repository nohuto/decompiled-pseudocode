/*
 * XREFs of sub_180019B7C @ 0x180019B7C
 * Callers:
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x18003C0F5 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 * Callees:
 *     sub_180019AE8 @ 0x180019AE8 (sub_180019AE8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_180019B7C(void **a1)
{
  void **v1; // rdx
  void **v3; // rdi
  void **v4; // rbx

  v1 = (void **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = (void **)*v1;
  if ( *v1 )
  {
    do
    {
      v4 = (void **)*v3;
      sub_180019AE8(v3 + 3);
      sub_180039D98(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_180039D98(*a1);
}

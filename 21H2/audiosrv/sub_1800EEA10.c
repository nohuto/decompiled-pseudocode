/*
 * XREFs of sub_1800EEA10 @ 0x1800EEA10
 * Callers:
 *     <none>
 * Callees:
 *     _isctype_l @ 0x1800EE8BC (_isctype_l.c)
 */

int __fastcall sub_1800EEA10(__int64 a1, int a2, struct localeinfo_struct *a3, int a4)
{
  int result; // eax

  if ( a2 == 100 )
    return isctype_l((int)a3, a4, a3);
  return result;
}

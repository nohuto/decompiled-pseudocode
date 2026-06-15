/*
 * XREFs of sub_18002D5F0 @ 0x18002D5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_18002D5F0(_QWORD *a1, char a2)
{
  void *v4; // rcx

  *a1 = off_18003F490;
  v4 = (void *)a1[1];
  if ( v4 )
  {
    CoTaskMemFree(v4);
    a1[1] = 0LL;
  }
  *a1 = &off_18003EAC8;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

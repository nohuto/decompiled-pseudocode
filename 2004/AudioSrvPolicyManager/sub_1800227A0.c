/*
 * XREFs of sub_1800227A0 @ 0x1800227A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_DWORD *__fastcall sub_1800227A0(_DWORD *a1, char a2)
{
  a1[6] = 1;
  *((_QWORD *)a1 + 2) = off_18003F2C0;
  *(_QWORD *)a1 = &off_18003ED78;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

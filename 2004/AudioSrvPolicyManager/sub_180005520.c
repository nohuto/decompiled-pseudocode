/*
 * XREFs of sub_180005520 @ 0x180005520
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_180005520(_QWORD *a1, char a2)
{
  __int64 v4; // rax
  REGHANDLE v5; // rcx

  *a1 = off_18003EAF8;
  if ( *((_BYTE *)a1 + 16) )
  {
    v4 = a1[1];
    v5 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)v4 = 0;
    EventUnregister(v5);
  }
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

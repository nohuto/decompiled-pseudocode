/*
 * XREFs of sub_18002B478 @ 0x18002B478
 * Callers:
 *     sub_1800289C8 @ 0x1800289C8 (sub_1800289C8.c)
 *     sub_180028C94 @ 0x180028C94 (sub_180028C94.c)
 *     sub_1800292E8 @ 0x1800292E8 (sub_1800292E8.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18002AE20 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18002B478(__int64 a1, __int64 *a2)
{
  if ( a2 == (__int64 *)qword_18004FF98 )
    qword_18004FF98 = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_18004FFA0 )
    qword_18004FFA0 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  --dword_18004FFA8;
  *a2 = 0LL;
  a2[1] = 0LL;
  return sub_180039D98(a2);
}

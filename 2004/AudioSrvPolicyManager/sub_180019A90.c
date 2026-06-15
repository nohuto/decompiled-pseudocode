/*
 * XREFs of sub_180019A90 @ 0x180019A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019BE4 @ 0x180019BE4 (sub_180019BE4.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180019A90(__int64 a1, char a2)
{
  sub_180019BE4(a1 + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98((void *)a1);
  return a1;
}

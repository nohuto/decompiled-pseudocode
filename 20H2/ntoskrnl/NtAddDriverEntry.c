/*
 * XREFs of NtAddDriverEntry @ 0x1409557F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C19690 == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}

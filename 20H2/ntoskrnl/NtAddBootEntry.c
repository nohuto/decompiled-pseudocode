/*
 * XREFs of NtAddBootEntry @ 0x1409557C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C19690 == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}

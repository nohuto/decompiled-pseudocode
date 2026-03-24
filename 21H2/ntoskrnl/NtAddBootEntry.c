/*
 * XREFs of NtAddBootEntry @ 0x140952F90
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140951100 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C19850 == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}

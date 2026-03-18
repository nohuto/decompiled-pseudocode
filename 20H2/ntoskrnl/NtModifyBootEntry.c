/*
 * XREFs of NtModifyBootEntry @ 0x140956910
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140C19690 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}

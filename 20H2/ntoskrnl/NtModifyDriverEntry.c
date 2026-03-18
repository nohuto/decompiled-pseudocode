/*
 * XREFs of NtModifyDriverEntry @ 0x140956940
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C19690 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}

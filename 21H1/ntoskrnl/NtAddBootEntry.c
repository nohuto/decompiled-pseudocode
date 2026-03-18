/*
 * XREFs of NtAddBootEntry @ 0x14094E660
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C19730 == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}

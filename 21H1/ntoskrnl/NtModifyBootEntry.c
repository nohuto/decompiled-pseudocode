/*
 * XREFs of NtModifyBootEntry @ 0x14094F7B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140C19730 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}

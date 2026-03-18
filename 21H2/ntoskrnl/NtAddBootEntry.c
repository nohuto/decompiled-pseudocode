/*
 * XREFs of NtAddBootEntry @ 0x1409FF330
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FD4A0 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C15C70 == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}

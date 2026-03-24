/*
 * XREFs of NtModifyDriverEntry @ 0x140954110
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409518F4 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C19850 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}

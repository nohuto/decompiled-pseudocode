/*
 * XREFs of NtModifyDriverEntry @ 0x14094F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C19730 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}

/*
 * XREFs of NtAddDriverEntry @ 0x14094E690
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C19730 == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}

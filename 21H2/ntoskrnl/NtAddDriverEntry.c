/*
 * XREFs of NtAddDriverEntry @ 0x1409FF360
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FDC88 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C15C70 == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}

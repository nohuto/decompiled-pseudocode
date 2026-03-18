/*
 * XREFs of NtModifyDriverEntry @ 0x140950B80
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C19590 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}

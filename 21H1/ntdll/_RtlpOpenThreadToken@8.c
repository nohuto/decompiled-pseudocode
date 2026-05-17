/*
 * XREFs of _RtlpOpenThreadToken@8 @ 0x4B349188
 * Callers:
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 * Callees:
 *     _NtOpenThreadTokenEx@20 @ 0x4B2F2C70 (_NtOpenThreadTokenEx@20.c)
 */

int __fastcall RtlpOpenThreadToken(int a1, int a2)
{
  int result; // eax

  result = NtOpenThreadTokenEx(-2, a1, 1, 512, a2);
  if ( result < 0 )
    return NtOpenThreadTokenEx(-2, a1, 0, 512, a2);
  return result;
}

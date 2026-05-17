/*
 * XREFs of RtlpOpenThreadToken @ 0x18007739C
 * Callers:
 *     RtlAcquirePrivilege @ 0x180077180 (RtlAcquirePrivilege.c)
 * Callees:
 *     NtOpenThreadTokenEx @ 0x18009D690 (NtOpenThreadTokenEx.c)
 */

__int64 __fastcall RtlpOpenThreadToken(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  result = NtOpenThreadTokenEx(-2LL, a1, a3);
  if ( (int)result < 0 )
    return NtOpenThreadTokenEx(-2LL, a1, 0LL);
  return result;
}

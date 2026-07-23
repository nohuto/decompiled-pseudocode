/*
 * XREFs of MiLocateExclusiveSecure @ 0x14027D7C0
 * Callers:
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateExclusiveSecure(__int64 a1)
{
  __int64 *result; // rax

  for ( result = *(__int64 **)(a1 + 56); result; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 16) == 2 )
    {
      if ( (result[1] & 0x20) != 0 )
        return result;
      return 0LL;
    }
  }
  return 0LL;
}

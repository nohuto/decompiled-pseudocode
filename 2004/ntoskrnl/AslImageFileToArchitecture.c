/*
 * XREFs of AslImageFileToArchitecture @ 0x14073E9F4
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14073E198 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140963D00 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_140C11FB0[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_140C11FB0[2 * v1];
}

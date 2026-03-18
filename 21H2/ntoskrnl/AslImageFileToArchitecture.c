/*
 * XREFs of AslImageFileToArchitecture @ 0x140A180E8
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A12DA0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A142D0 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_140C0DAD0[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_140C0DAD0[2 * v1];
}

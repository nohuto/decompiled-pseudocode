/*
 * XREFs of _RtlComputeCrc32@12 @ 0x4B35A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG v3; // edx
  ULONG32 i; // ecx

  v3 = 0;
  for ( i = ~PartialCrc; v3 < Length; ++v3 )
    i = RtlCrc32Table[(unsigned __int8)(i ^ *((_BYTE *)Buffer + v3))] ^ (i >> 8);
  return ~i;
}

/*
 * XREFs of _RtlpCopyLegacyContext@16 @ 0x4B35BCDD
 * Callers:
 *     _RtlCopyContext@12 @ 0x4B35B5F0 (_RtlCopyContext@12.c)
 *     _RtlpCopyExtendedContext@24 @ 0x4B35BC77 (_RtlpCopyExtendedContext@24.c)
 * Callees:
 *     _RtlpCopyLegacyContextAmd64@16 @ 0x4B35BD2F (_RtlpCopyLegacyContextAmd64@16.c)
 *     _RtlpCopyLegacyContextArm64@16 @ 0x4B35BE5E (_RtlpCopyLegacyContextArm64@16.c)
 *     _RtlpCopyLegacyContextArm@16 @ 0x4B35BFE4 (_RtlpCopyLegacyContextArm@16.c)
 *     _RtlpCopyLegacyContextX86@16 @ 0x4B35C0BC (_RtlpCopyLegacyContextX86@16.c)
 */

int __stdcall RtlpCopyLegacyContext(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( (a1 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86(a1, a2);
  if ( (a1 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64(a1, a2);
  if ( (a1 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm(a1, a2);
  if ( (a1 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64(a1, a2);
  return result;
}

/*
 * XREFs of _RtlpValidateContextFlags@8 @ 0x4B35C543
 * Callers:
 *     _RtlCopyContext@12 @ 0x4B35B5F0 (_RtlCopyContext@12.c)
 *     _RtlGetExtendedContextLength2@16 @ 0x4B35B780 (_RtlGetExtendedContextLength2@16.c)
 *     _RtlGetExtendedContextLength@8 @ 0x4B35B830 (_RtlGetExtendedContextLength@8.c)
 *     _RtlInitializeExtendedContext2@20 @ 0x4B35B8A0 (_RtlInitializeExtendedContext2@20.c)
 *     _RtlInitializeExtendedContext@12 @ 0x4B35BA20 (_RtlInitializeExtendedContext@12.c)
 *     _RtlpCopyExtendedContext@24 @ 0x4B35BC77 (_RtlpCopyExtendedContext@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v3; // edi

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
  {
    return -1073741811;
  }
  v3 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v3 = 3;
  }
  if ( a2 )
    *a2 = v3;
  return 0;
}

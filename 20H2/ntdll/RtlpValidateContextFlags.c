/*
 * XREFs of RtlpValidateContextFlags @ 0x18005212C
 * Callers:
 *     RtlCopyContext @ 0x180050F10 (RtlCopyContext.c)
 *     RtlGetExtendedContextLength @ 0x180051C00 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x180051C50 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x180051D60 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x180051DB0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180051FE0 (RtlInitializeExtendedContext2.c)
 *     RtlpCopyExtendedContext @ 0x1800F5F74 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r9d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}

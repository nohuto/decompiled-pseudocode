/*
 * XREFs of RtlpValidateContextFlags @ 0x1402EA4D0
 * Callers:
 *     RtlInitializeExtendedContext @ 0x1402E9C90 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1402E9D14 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     KiContinuePreviousModeUser @ 0x1402EA1A0 (KiContinuePreviousModeUser.c)
 *     RtlGetExtendedContextLength @ 0x1402EA9B0 (RtlGetExtendedContextLength.c)
 *     RtlCopyContext @ 0x1406AD83C (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1406AD950 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406E5DA4 (RtlpWriteExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406E621C (RtlpWow64SanitizeContextFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r8d

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
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}

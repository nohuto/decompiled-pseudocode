/*
 * XREFs of RtlpValidateContextFlags @ 0x1402E6DF0
 * Callers:
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402E65B0 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1402E6634 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     KiContinuePreviousModeUser @ 0x1402E6AC0 (KiContinuePreviousModeUser.c)
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140693CD0 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140695B90 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x140695BE8 (RtlpWriteExtendedContext.c)
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

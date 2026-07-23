/*
 * XREFs of NtCompareSigningLevels @ 0x1406E7150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( qword_140C1DAA0 )
    v2 = qword_140C1DAA0(FirstSigningLevel, SecondSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}

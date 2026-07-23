/*
 * XREFs of NtCompareSigningLevels @ 0x14070B080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( qword_140C1D8E0 )
    v2 = ((__int64 (__fastcall *)(SE_SIGNING_LEVEL, SE_SIGNING_LEVEL))qword_140C1D8E0)(
           FirstSigningLevel,
           SecondSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}

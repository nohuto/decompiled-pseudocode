/*
 * XREFs of RtlpInvalidatePathCache @ 0x180080740
 * Callers:
 *     RtlSetSearchPathMode @ 0x1800803A0 (RtlSetSearchPathMode.c)
 *     LdrSetDllDirectory @ 0x180080640 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008BD10 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008C420 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DF334 (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_QWORD *)(result + 80))-- != 1LL )
      return 0LL;
  }
  return result;
}

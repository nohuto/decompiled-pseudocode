/*
 * XREFs of RtlpInvalidatePathCache @ 0x18007FD20
 * Callers:
 *     RtlSetSearchPathMode @ 0x18007F980 (RtlSetSearchPathMode.c)
 *     LdrSetDllDirectory @ 0x18007FC20 (LdrSetDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008B610 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008BD20 (LdrRemoveDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DF224 (RtlpSignalSystemDirsModification.c)
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

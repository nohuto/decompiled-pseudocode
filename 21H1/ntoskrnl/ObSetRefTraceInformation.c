/*
 * XREFs of ObSetRefTraceInformation @ 0x1408D995C
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ObpStartRuntimeStackTrace @ 0x1408DA648 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1408DAA74 (ObpStopRuntimeStackTrace.c)
 */

__int64 __fastcall ObSetRefTraceInformation(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _BYTE *v5; // rcx

  v2 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( (unsigned int)v2 < 0x28 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = &a1[v2];
    if ( (unsigned __int64)&a1[v2] > 0x7FFFFFFF0000LL || v5 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( *a1 )
    return ObpStartRuntimeStackTrace(a1);
  else
    return ObpStopRuntimeStackTrace(v5);
}

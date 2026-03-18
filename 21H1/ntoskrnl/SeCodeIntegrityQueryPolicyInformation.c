/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1406B5C80
 * Callers:
 *     SepIsSModeEnabled @ 0x1402E9110 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140C1DAE8 )
    return qword_140C1DAE8(a1);
  else
    return 3221225473LL;
}

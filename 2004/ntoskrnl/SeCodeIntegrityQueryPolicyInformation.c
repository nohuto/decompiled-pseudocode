/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1406D4300
 * Callers:
 *     SepIsSModeEnabled @ 0x140323F90 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140C1D928 )
    return qword_140C1D928(a1);
  else
    return 3221225473LL;
}

/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1406A0700
 * Callers:
 *     SepIsSModeEnabled @ 0x1402F0F80 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140C1D9C8 )
    return qword_140C1D9C8(a1);
  else
    return 3221225473LL;
}

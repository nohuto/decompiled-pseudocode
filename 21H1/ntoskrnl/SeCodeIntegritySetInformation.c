/*
 * XREFs of SeCodeIntegritySetInformation @ 0x1409177D8
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegritySetInformation()
{
  if ( qword_140C1DB08 )
    return qword_140C1DB08();
  else
    return 3221225659LL;
}

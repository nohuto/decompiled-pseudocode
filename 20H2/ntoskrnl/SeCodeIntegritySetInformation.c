/*
 * XREFs of SeCodeIntegritySetInformation @ 0x14091E678
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegritySetInformation()
{
  if ( qword_140C1D9E8 )
    return qword_140C1D9E8();
  else
    return 3221225659LL;
}

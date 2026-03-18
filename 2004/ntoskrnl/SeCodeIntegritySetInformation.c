/*
 * XREFs of SeCodeIntegritySetInformation @ 0x140918A48
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegritySetInformation()
{
  if ( qword_140C1D948 )
    return qword_140C1D948();
  else
    return 3221225659LL;
}

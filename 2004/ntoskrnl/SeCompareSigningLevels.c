/*
 * XREFs of SeCompareSigningLevels @ 0x14076CA30
 * Callers:
 *     MiCreateSystemSection @ 0x14036FEA4 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1D8E0 )
    return ((__int64 (*)(void))qword_140C1D8E0)();
  return result;
}

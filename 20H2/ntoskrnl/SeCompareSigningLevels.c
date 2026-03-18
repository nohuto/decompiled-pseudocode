/*
 * XREFs of SeCompareSigningLevels @ 0x14077B460
 * Callers:
 *     MiCreateSystemSection @ 0x140371DF4 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1D980 )
    return ((__int64 (*)(void))qword_140C1D980)();
  return result;
}

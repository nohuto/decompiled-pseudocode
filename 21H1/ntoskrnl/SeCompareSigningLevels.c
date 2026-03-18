/*
 * XREFs of SeCompareSigningLevels @ 0x140769DA0
 * Callers:
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     MiValidateSectionSigningPolicy @ 0x14063B5E4 (MiValidateSectionSigningPolicy.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1DAA0 )
    return ((__int64 (*)(void))qword_140C1DAA0)();
  return result;
}

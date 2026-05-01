/*
 * XREFs of ?IsAuditMode@@YA_NXZ @ 0x1800E0120
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF570 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     RegExists @ 0x1800EE204 (RegExists.c)
 *     RegGetDword @ 0x1800EE2E8 (RegGetDword.c)
 */

char IsAuditMode(void)
{
  char v0; // bl

  v0 = 1;
  if ( ((unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status", L"AuditBoot") != 1
     || !(unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status"))
    && (unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status\\AuditBootVolatile", 0LL) != 1 )
  {
    return 0;
  }
  return v0;
}

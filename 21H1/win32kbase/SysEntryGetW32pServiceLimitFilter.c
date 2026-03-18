/*
 * XREFs of SysEntryGetW32pServiceLimitFilter @ 0x1C01FDD74
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256E38;
  if ( qword_1C0256E38 )
    return (__int64 (*)(void))qword_1C0256E38();
  return result;
}

/*
 * XREFs of SysEntryGetW32pServiceLimitFilter @ 0x1C01F6A38
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024EE58;
  if ( qword_1C024EE58 )
    return (__int64 (*)(void))qword_1C024EE58();
  return result;
}

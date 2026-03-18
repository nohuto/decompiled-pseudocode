/*
 * XREFs of IsFreeSMSSupported @ 0x1C0021B98
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0020D6C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013F3A0 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeSMSSupported()
{
  if ( qword_1C0251AE0 )
    return qword_1C0251AE0();
  else
    return 3221225659LL;
}

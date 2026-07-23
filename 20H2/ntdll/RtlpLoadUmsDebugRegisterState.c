/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x18010DDB0
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800A21A0 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800F74D0 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x180052218 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwContinue @ 0x18009D910 (ZwContinue.c)
 */

NTSTATUS __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  RtlpCopyLegacyContext(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}

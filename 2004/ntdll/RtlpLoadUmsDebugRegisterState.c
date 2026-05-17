/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x18010D8A0
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800A1F00 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800F6FC0 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1800521C8 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwContinue @ 0x18009D670 (ZwContinue.c)
 */

__int64 __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  _BYTE v2[1232]; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  RtlpCopyLegacyContext(a1, (__int64)v2, 1048592);
  return ZwContinue();
}

/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800FD950
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x18008CBD0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180053F24 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x180053FC8 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlFailFast2 @ 0x1800A29C0 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800FD920 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD9B4 (RtlpUnsuppressForwardReferencingCallTarget.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess(a1, 1u);
  if ( !LdrControlFlowGuardEnforcedWithExportSuppression(a1)
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), (int)result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}

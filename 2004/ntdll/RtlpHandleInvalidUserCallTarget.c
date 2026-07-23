/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800FD5A0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x18008C4D0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800475A8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18004764C (RtlGuardIsExportSuppressedAddress.c)
 *     RtlFailFast2 @ 0x1800A2120 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800FD570 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD604 (RtlpUnsuppressForwardReferencingCallTarget.c)
 */

NTSTATUS __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  NTSTATUS result; // eax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
  if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}

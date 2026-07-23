/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800FDAB0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x18008C5D0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800475F8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18004769C (RtlGuardIsExportSuppressedAddress.c)
 *     RtlFailFast2 @ 0x1800A23C0 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800FDA80 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FDB14 (RtlpUnsuppressForwardReferencingCallTarget.c)
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

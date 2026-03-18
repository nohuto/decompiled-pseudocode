/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C0069514
 * Callers:
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C0069444 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0071A4C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C0253838 )
    return qword_1C0253838();
  else
    return 3221225659LL;
}

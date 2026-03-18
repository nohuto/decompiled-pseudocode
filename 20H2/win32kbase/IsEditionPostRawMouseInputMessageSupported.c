/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C00A6000
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0035F38 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C00A5F30 (ApiSetEditionPostRawMouseInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C0251838 )
    return qword_1C0251838();
  else
    return 3221225659LL;
}

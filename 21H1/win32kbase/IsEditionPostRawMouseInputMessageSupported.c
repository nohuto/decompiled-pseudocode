/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1C005F9D0
 * Callers:
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C005F900 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0065E6C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionPostRawMouseInputMessageSupported()
{
  if ( qword_1C02597F8 )
    return qword_1C02597F8();
  else
    return 3221225659LL;
}

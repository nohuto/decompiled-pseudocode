/*
 * XREFs of longjmp @ 0x1403CC230
 * Callers:
 *     XmInOp @ 0x1403930D0 (XmInOp.c)
 *     XmOutOp @ 0x140393120 (XmOutOp.c)
 *     XmPushStack @ 0x140393868 (XmPushStack.c)
 *     XmPopStack @ 0x1403939BC (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x140393B14 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140393E68 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140393F40 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403BD0FC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403BD170 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403BFB10 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403C1144 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C4D0C (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403C4E80 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x1404DFC40 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1404DFDA0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404DFE20 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1404E0050 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1404E0DB0 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E0E60 (XmHltOp.c)
 *     XmBoundOp @ 0x1404E1540 (XmBoundOp.c)
 *     XmIllOp @ 0x1404E1610 (XmIllOp.c)
 *     XmIdivOp @ 0x1404E1830 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E19E8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140303870 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1403F1B30 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}

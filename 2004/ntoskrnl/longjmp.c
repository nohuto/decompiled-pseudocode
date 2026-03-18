/*
 * XREFs of longjmp @ 0x1403CD070
 * Callers:
 *     XmInOp @ 0x140393CA0 (XmInOp.c)
 *     XmOutOp @ 0x140393CF0 (XmOutOp.c)
 *     XmPushStack @ 0x140394438 (XmPushStack.c)
 *     XmPopStack @ 0x14039458C (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x1403946E4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140394A38 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140394B10 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403BE08C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403BE100 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403C09D0 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403C2004 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C5C7C (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403C5DF0 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x1404E0200 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1404E0360 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E03E0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1404E0610 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1404E1370 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E1420 (XmHltOp.c)
 *     XmBoundOp @ 0x1404E1B00 (XmBoundOp.c)
 *     XmIllOp @ 0x1404E1BD0 (XmIllOp.c)
 *     XmIdivOp @ 0x1404E1DF0 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E1FA8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140340640 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1403F2DC0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}

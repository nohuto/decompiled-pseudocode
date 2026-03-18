/*
 * XREFs of longjmp @ 0x1403CFD00
 * Callers:
 *     XmInOp @ 0x140396160 (XmInOp.c)
 *     XmOutOp @ 0x1403961B0 (XmOutOp.c)
 *     XmPushStack @ 0x1403968F8 (XmPushStack.c)
 *     XmPopStack @ 0x140396A4C (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x140396BA4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140396EF8 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140396FD0 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403C05AC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403C0620 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403C3140 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403C4774 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C866C (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403C8880 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x1404E3790 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1404E38F0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E3970 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1404E3BA0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1404E4900 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E49B0 (XmHltOp.c)
 *     XmBoundOp @ 0x1404E5090 (XmBoundOp.c)
 *     XmIllOp @ 0x1404E5160 (XmIllOp.c)
 *     XmIdivOp @ 0x1404E5380 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E5538 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140311670 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1403F7970 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}

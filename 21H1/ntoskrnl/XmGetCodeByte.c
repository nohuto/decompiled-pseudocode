/*
 * XREFs of XmGetCodeByte @ 0x140393E68
 * Callers:
 *     XmGetImmediateSourceValue @ 0x140393AC0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140393B14 (XmEvaluateAddressSpecifier.c)
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 *     XmShortJump @ 0x140394C10 (XmShortJump.c)
 *     XmGroup2ByByte @ 0x1403BD4C0 (XmGroup2ByByte.c)
 *     XmGroup8BitOffset @ 0x1404DFE80 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404DFF30 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1404E01C0 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1404E0280 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E19E8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140394650 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CC230 (longjmp.c)
 */

char __fastcall XmGetCodeByte(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)v1 > *(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  ++*(_WORD *)(a1 + 20);
  return *(_BYTE *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), v1);
}

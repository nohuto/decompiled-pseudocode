/*
 * XREFs of XmGetCodeByte @ 0x140396EF8
 * Callers:
 *     XmGetImmediateSourceValue @ 0x140396B50 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396BA4 (XmEvaluateAddressSpecifier.c)
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 *     XmShortJump @ 0x140397CA0 (XmShortJump.c)
 *     XmGroup2ByByte @ 0x1403C0970 (XmGroup2ByByte.c)
 *     XmGroup8BitOffset @ 0x1404E39D0 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1404E3A80 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1404E3D10 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1404E3DD0 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E5538 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403976E0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CFD00 (longjmp.c)
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

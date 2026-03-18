/*
 * XREFs of XmGetWordImmediate @ 0x140393F40
 * Callers:
 *     XmRetOp @ 0x140393310 (XmRetOp.c)
 *     XmGetImmediateSourceValue @ 0x140393AC0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140393B14 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x140393F00 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403C4CA0 (XmSegmentOffset.c)
 *     XmImmediateEnter @ 0x1404DFF30 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404DFF80 (XmImmediateJump.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140394650 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CC230 (longjmp.c)
 */

__int64 __fastcall XmGetWordImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 1 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 2;
  return *(unsigned __int16 *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), (unsigned __int16)v1);
}

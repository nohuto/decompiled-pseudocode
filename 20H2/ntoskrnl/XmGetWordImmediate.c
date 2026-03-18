/*
 * XREFs of XmGetWordImmediate @ 0x140396FD0
 * Callers:
 *     XmRetOp @ 0x1403963A0 (XmRetOp.c)
 *     XmGetImmediateSourceValue @ 0x140396B50 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396BA4 (XmEvaluateAddressSpecifier.c)
 *     XmLongJump @ 0x140396F90 (XmLongJump.c)
 *     XmSegmentOffset @ 0x1403C8600 (XmSegmentOffset.c)
 *     XmImmediateEnter @ 0x1404E3A80 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1404E3AD0 (XmImmediateJump.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403976E0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CFD00 (longjmp.c)
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

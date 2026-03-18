/*
 * XREFs of XmGetOffsetAddress @ 0x1403C5C7C
 * Callers:
 *     XmGroup45General @ 0x1403C09D0 (XmGroup45General.c)
 *     XmSegmentOffset @ 0x1403C5C10 (XmSegmentOffset.c)
 *     XmGeneralBitOffset @ 0x1404E02C0 (XmGeneralBitOffset.c)
 *     XmGroup8BitOffset @ 0x1404E0440 (XmGroup8BitOffset.c)
 *     XmLoadSegment @ 0x1404E0610 (XmLoadSegment.c)
 *     XmXlatOpcode @ 0x1404E08C0 (XmXlatOpcode.c)
 *     XmBoundOp @ 0x1404E1B00 (XmBoundOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140395220 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CD070 (longjmp.c)
 */

int *__fastcall XmGetOffsetAddress(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( a2 > v3 || a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(_WORD *)(a1 + 2 * v2 + 56), a2);
}

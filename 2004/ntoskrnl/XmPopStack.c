/*
 * XREFs of XmPopStack @ 0x14039458C
 * Callers:
 *     XmIretOp @ 0x140393BB0 (XmIretOp.c)
 *     XmRetOp @ 0x140393EE0 (XmRetOp.c)
 *     XmPopOp @ 0x140394040 (XmPopOp.c)
 *     XmPopaOp @ 0x1403C0680 (XmPopaOp.c)
 *     XmLeaveOp @ 0x1404E14F0 (XmLeaveOp.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403945D8 (XmSetSourceValue.c)
 *     x86BiosTranslateAddress @ 0x140395220 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CD070 (longjmp.c)
 */

__int64 __fastcall XmPopStack(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = *(unsigned int *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 120);
  if ( (unsigned int)v1 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v3 )
    longjmp((_JBTYPE *)(a1 + 160), 16);
  v4 = v3 + v1 + 1;
  v5 = *(unsigned __int16 *)(a1 + 60);
  *(_DWORD *)(a1 + 40) = v4;
  v6 = x86BiosTranslateAddress(v5, v1);
  XmSetSourceValue(a1, v6, v7, v8);
  return *(unsigned int *)(a1 + 108);
}

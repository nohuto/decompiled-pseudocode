/*
 * XREFs of XmPopStack @ 0x1403939BC
 * Callers:
 *     XmIretOp @ 0x140392FE0 (XmIretOp.c)
 *     XmRetOp @ 0x140393310 (XmRetOp.c)
 *     XmPopOp @ 0x140393470 (XmPopOp.c)
 *     XmPopaOp @ 0x1403BF7C0 (XmPopaOp.c)
 *     XmLeaveOp @ 0x1404E0F30 (XmLeaveOp.c)
 * Callees:
 *     XmSetSourceValue @ 0x140393A08 (XmSetSourceValue.c)
 *     x86BiosTranslateAddress @ 0x140394650 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CC230 (longjmp.c)
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

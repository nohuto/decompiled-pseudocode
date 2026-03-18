/*
 * XREFs of XmMoveImmediate @ 0x1404E06E0
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmGetImmediateSourceValue @ 0x140394690 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403946E4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140394A98 (XmSetDataType.c)
 */

__int64 __fastcall XmMoveImmediate(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  XmSetDataType(a1);
  *(_QWORD *)(a1 + 88) = XmEvaluateAddressSpecifier(a1, &v3);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}

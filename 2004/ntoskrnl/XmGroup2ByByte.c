/*
 * XREFs of XmGroup2ByByte @ 0x1403BE450
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x140394668 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403946E4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140394A38 (XmGetCodeByte.c)
 *     XmSetDataType @ 0x140394A98 (XmSetDataType.c)
 */

__int64 __fastcall XmGroup2ByByte(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  XmSetDataType(a1);
  v2 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, &v4);
  *(_DWORD *)(a1 + 108) = XmGetCodeByte(a1) & 0x1F;
  XmSetDestinationValue(a1, v2);
  *(_DWORD *)(a1 + 124) += v4;
  return 1LL;
}

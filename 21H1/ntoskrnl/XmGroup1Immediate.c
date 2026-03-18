/*
 * XREFs of XmGroup1Immediate @ 0x140393A30
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x140393A98 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x140393AC0 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140393B14 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140393EC8 (XmSetDataType.c)
 */

__int64 __fastcall XmGroup1Immediate(_DWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // r8d
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  XmSetDataType();
  v2 = XmEvaluateAddressSpecifier(a1, &v5);
  XmGetImmediateSourceValue(a1, a1[28] & 2);
  XmSetDestinationValue(a1, v2);
  a1[31] += v5;
  result = 1LL;
  a1[27] = v4;
  return result;
}

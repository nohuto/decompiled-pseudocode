/*
 * XREFs of XmAccumImmediate @ 0x140396300
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x140396B28 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x140396B50 (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x140396F58 (XmSetDataType.c)
 */

__int64 __fastcall XmAccumImmediate(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d

  XmSetDataType();
  XmGetImmediateSourceValue(a1, 0LL);
  XmSetDestinationValue(a1, a1 + 24);
  result = 1LL;
  *(_DWORD *)(a1 + 108) = v3;
  return result;
}

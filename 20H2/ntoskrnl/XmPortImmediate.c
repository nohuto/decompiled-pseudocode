/*
 * XREFs of XmPortImmediate @ 0x1404E3D10
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x140396EF8 (XmGetCodeByte.c)
 *     XmSetDataType @ 0x140396F58 (XmSetDataType.c)
 */

__int64 __fastcall XmPortImmediate(__int64 a1)
{
  unsigned __int8 CodeByte; // al
  unsigned int v3; // r8d

  CodeByte = XmGetCodeByte(a1);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = CodeByte;
  XmSetDataType(a1);
  return v3;
}

/*
 * XREFs of XmPortImmediate @ 0x1404E01C0
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x140393E68 (XmGetCodeByte.c)
 *     XmSetDataType @ 0x140393EC8 (XmSetDataType.c)
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

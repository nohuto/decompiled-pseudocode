/*
 * XREFs of XmGetImmediateSourceValue @ 0x140394690
 * Callers:
 *     XmGroup3General @ 0x140393DA0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393E40 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x140393F50 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x140394600 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1404E01D0 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x1404E0590 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1404E06E0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1404E07C0 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x140394A38 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140394B10 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C2004 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte();
  if ( v2 == 1 )
  {
    if ( a2 )
      return (unsigned __int16)(char)XmGetCodeByte();
    else
      return (unsigned __int16)XmGetWordImmediate();
  }
  else if ( a2 )
  {
    return (unsigned int)(char)XmGetCodeByte();
  }
  else
  {
    return XmGetLongImmediate();
  }
}

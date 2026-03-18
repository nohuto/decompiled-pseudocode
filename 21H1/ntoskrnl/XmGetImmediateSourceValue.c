/*
 * XREFs of XmGetImmediateSourceValue @ 0x140393AC0
 * Callers:
 *     XmGroup3General @ 0x1403931D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140393270 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x140393380 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x140393A30 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1404DFC10 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x1404DFFD0 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1404E0120 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1404E0200 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x140393E68 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140393F40 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C1144 (XmGetLongImmediate.c)
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

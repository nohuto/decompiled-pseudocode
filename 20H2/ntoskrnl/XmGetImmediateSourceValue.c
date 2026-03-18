/*
 * XREFs of XmGetImmediateSourceValue @ 0x140396B50
 * Callers:
 *     XmGroup3General @ 0x140396260 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396300 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x140396410 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x140396AC0 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1404E3760 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x1404E3B20 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1404E3C70 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1404E3D50 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x140396EF8 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140396FD0 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C4774 (XmGetLongImmediate.c)
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

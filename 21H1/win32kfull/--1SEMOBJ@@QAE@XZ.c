/*
 * XREFs of ??1SEMOBJ@@QAE@XZ @ 0x1CCD37
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     _EngCreateWnd@20 @ 0x1E6AA4 (_EngCreateWnd@20.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __thiscall SEMOBJ::~SEMOBJ(SEMOBJ *this)
{
  SEMOBJ::vUnlock(this);
}

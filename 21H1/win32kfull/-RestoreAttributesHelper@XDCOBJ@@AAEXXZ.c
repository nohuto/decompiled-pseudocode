/*
 * XREFs of ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708
 * Callers:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A9C8 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AAEXXZ @ 0x5E6E4 (-RestoreAttributes@XDCOBJ@@AAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QAEXPAVXDCOBJ@@@Z @ 0x1D88B1 (-vInit@RESTORESAVEDCATTRS@@QAEXPAVXDCOBJ@@@Z.c)
 *     _NtGdiEndPage@4 @ 0x1D93FF (_NtGdiEndPage@4.c)
 *     _NtGdiStartPage@4 @ 0x1D9D27 (_NtGdiStartPage@4.c)
 * Callees:
 *     <none>
 */

void __thiscall XDCOBJ::RestoreAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // eax

  if ( !*((_DWORD *)this + 2) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
      DC::RestoreAttributes(*(DC **)this, UserAttr);
  }
}

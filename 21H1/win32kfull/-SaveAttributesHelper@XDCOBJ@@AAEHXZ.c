/*
 * XREFs of ?SaveAttributesHelper@XDCOBJ@@AAEHXZ @ 0x5A4BA
 * Callers:
 *     ??1RESTORESAVEDCATTRS@@QAE@XZ @ 0x1D6FE3 (--1RESTORESAVEDCATTRS@@QAE@XZ.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QAEXXZ @ 0x1D885B (-vDone@RESTORESAVEDCATTRS@@QAEXXZ.c)
 *     _NtGdiEndPage@4 @ 0x1D93FF (_NtGdiEndPage@4.c)
 *     _NtGdiStartPage@4 @ 0x1D9D27 (_NtGdiStartPage@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // eax
  BOOL result; // eax

  result = 1;
  if ( !*((_DWORD *)this + 2) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
    {
      if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
        return 0;
    }
  }
  return result;
}

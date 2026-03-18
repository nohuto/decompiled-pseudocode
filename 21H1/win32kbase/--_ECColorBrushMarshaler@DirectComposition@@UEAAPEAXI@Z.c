/*
 * XREFs of ??_ECColorBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0030AC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CColorBrushMarshaler *__fastcall DirectComposition::CColorBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CColorBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CColorBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}

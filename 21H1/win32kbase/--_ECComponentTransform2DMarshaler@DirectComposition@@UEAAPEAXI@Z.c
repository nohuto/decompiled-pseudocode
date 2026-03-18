/*
 * XREFs of ??_ECComponentTransform2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00038A0
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00D4F80 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CComponentTransform2DMarshaler *__fastcall DirectComposition::CComponentTransform2DMarshaler::`vector deleting destructor'(
        DirectComposition::CComponentTransform2DMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}

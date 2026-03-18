/*
 * XREFs of ??_GCSurfaceBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C003F6F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CSurfaceBrushMarshaler *__fastcall DirectComposition::CSurfaceBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CSurfaceBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}

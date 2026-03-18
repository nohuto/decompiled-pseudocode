/*
 * XREFs of ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C004BEB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009A87C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CLayerVisualMarshaler *__fastcall DirectComposition::CLayerVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CLayerVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLayerVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}

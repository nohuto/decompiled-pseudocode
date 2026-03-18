/*
 * XREFs of ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0096960
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00928CC (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CLayerVisualMarshaler *__fastcall DirectComposition::CLayerVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CLayerVisualMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &DirectComposition::CLayerVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}

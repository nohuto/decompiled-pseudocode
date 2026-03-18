/*
 * XREFs of ??_GCSuperWetInkVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00944C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00928CC (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSuperWetInkVisualMarshaler *__fastcall DirectComposition::CSuperWetInkVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CSuperWetInkVisualMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}

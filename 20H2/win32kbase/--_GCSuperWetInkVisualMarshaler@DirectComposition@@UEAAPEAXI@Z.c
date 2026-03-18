/*
 * XREFs of ??_GCSuperWetInkVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A4C50
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C005AB5C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CSuperWetInkVisualMarshaler *__fastcall DirectComposition::CSuperWetInkVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CSuperWetInkVisualMarshaler *this,
        char a2)
{
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}

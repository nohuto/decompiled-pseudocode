/*
 * XREFs of ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE510
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C005AB5C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCrossChannelChildVisualMarshaler *__fastcall DirectComposition::CCrossChannelChildVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}

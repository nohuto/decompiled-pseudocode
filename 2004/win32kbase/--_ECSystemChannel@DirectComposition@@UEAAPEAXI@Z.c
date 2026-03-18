/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C005ED10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C00A8980 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CSystemChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}

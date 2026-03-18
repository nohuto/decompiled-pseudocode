/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0067740
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0067110 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 */

union _SLIST_HEADER *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        union _SLIST_HEADER *this,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}

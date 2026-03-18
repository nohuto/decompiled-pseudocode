/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C01D0730
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00A8930 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *this,
        char a2)
{
  DirectComposition::CChannel::~CChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}

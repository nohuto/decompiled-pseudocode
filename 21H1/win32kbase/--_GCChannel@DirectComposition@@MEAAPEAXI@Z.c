/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C01D66B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00B42BC (--1CChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CChannel::~CChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}

/*
 * XREFs of ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C01CE3B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00670C0 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::`scalar deleting destructor'(
        DirectComposition::CChannel *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  DirectComposition::CChannel::~CChannel(this, a2);
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}

/*
 * XREFs of ?AddRef@AudioDeviceMgr@@UEAAKXZ @ 0x18004E300
 * Callers:
 *     ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x180075AE0 (-AddRef@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceMgr@@WBA@EAAKXZ @ 0x180075AF0 (-AddRef@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(AudioDeviceMgr *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

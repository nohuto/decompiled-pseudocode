/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180068420
 * Callers:
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x180075A20 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x180075A30 (-Release@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  return CUnknown::Release((AudioDeviceMgr *)((char *)this + 16));
}

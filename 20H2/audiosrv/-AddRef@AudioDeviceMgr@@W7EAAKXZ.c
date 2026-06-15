/*
 * XREFs of ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x180075020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(__int64 a1)
{
  return AudioDeviceMgr::AddRef((AudioDeviceMgr *)(a1 - 8));
}

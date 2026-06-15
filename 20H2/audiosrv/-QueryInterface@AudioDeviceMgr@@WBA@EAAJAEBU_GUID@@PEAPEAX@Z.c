/*
 * XREFs of ?QueryInterface@AudioDeviceMgr@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return AudioDeviceMgr::QueryInterface((AudioDeviceMgr *)(a1 - 16), a2, a3);
}

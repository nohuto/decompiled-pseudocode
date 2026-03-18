/*
 * XREFs of DxgkInitializeDpi @ 0x1C013CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C013CEF0 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 */

NTSTATUS __fastcall DxgkInitializeDpi(DpiPersistence *a1, __int64 a2)
{
  return DpiPersistence::SaveHKCUPathInSessionData(a1, a2);
}

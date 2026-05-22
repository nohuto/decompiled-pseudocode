/*
 * XREFs of ?GetRuntimeClassName@MPCManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180108870
 * Callers:
 *     ?GetRuntimeClassName@MPCManagerClient@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004C350 (-GetRuntimeClassName@MPCManagerClient@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@MPCManagerClient@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004C360 (-GetRuntimeClassName@MPCManagerClient@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MPCManagerClient::GetRuntimeClassName(MPCManagerClient *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.MPCManagerClient", 0x32u, a2);
}

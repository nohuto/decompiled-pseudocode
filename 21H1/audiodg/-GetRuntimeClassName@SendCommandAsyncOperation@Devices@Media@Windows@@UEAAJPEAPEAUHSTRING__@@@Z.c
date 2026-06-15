/*
 * XREFs of ?GetRuntimeClassName@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x14004E360
 * Callers:
 *     ?GetRuntimeClassName@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x140020360 (-GetRuntimeClassName@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAJPEAPEAUHSTRING__@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetRuntimeClassName(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Devices.ModuleCommandResult>",
           0x4Fu,
           a2);
}

/*
 * XREFs of ?GetDeviceInstanceListSize@Adapters@PnpApiWrapper@@YAKAEBU_GUID@@PEBGAEAI@Z @ 0x18003ADC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall PnpApiWrapper::Adapters::GetDeviceInstanceListSize(
        PnpApiWrapper::Adapters *this,
        const WCHAR *a2,
        ULONG *a3,
        unsigned int *a4)
{
  return CM_Get_Device_ID_List_SizeW(a3, a2, 0x100u);
}

/*
 * XREFs of ?GetDeviceInterfaceProperty@Adapters@PnpApiWrapper@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x180038A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall PnpApiWrapper::Adapters::GetDeviceInterfaceProperty(
        HSTRING *this,
        const DEVPROPKEY *a2,
        const struct _DEVPROPKEY *a3,
        BYTE *a4,
        ULONG *PropertyBufferSize)
{
  const WCHAR *StringRawBuffer; // rax

  StringRawBuffer = WindowsGetStringRawBuffer(*this, 0LL);
  return CM_Get_Device_Interface_PropertyW(StringRawBuffer, a2, &a3->fmtid.Data1, a4, PropertyBufferSize, 0);
}

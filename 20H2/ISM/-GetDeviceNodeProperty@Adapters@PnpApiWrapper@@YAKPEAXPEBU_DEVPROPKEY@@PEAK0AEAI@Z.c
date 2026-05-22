/*
 * XREFs of ?GetDeviceNodeProperty@Adapters@PnpApiWrapper@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x180033CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall PnpApiWrapper::Adapters::GetDeviceNodeProperty(
        DEVINST *this,
        const DEVPROPKEY *a2,
        const struct _DEVPROPKEY *a3,
        BYTE *a4,
        PULONG PropertyBufferSize)
{
  return CM_Get_DevNode_PropertyW(*this, a2, &a3->fmtid.Data1, a4, PropertyBufferSize, 0);
}

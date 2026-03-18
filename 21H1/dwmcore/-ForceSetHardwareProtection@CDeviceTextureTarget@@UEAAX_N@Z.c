/*
 * XREFs of ?ForceSetHardwareProtection@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1800DDC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::ForceSetHardwareProtection(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 32) = a2;
}

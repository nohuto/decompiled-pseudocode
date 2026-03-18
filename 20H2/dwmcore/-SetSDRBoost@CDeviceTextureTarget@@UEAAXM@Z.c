/*
 * XREFs of ?SetSDRBoost@CDeviceTextureTarget@@UEAAXM@Z @ 0x1800DF328
 * Callers:
 *     ?SetSDRBoost@CDeviceTextureTarget@@$4PPPPPPPM@A@EAAXM@Z @ 0x1800F25B0 (-SetSDRBoost@CDeviceTextureTarget@@$4PPPPPPPM@A@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetSDRBoost(CDeviceTextureTarget *this, float a2)
{
  *((float *)this - 33) = a2;
}

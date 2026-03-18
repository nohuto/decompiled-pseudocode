/*
 * XREFs of sub_180017508 @ 0x180017508
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_180017508(CDeviceTextureTarget *a1, __int64 a2)
{
  char v2; // cf
  char v3; // of
  char v4; // bh

  if ( !v3 )
    JUMPOUT(0x180017543LL);
  *(_BYTE *)(a2 - 82) -= v2 + v4;
  __debugbreak();
  CDeviceTextureTarget::SetAlphaMode(a1, (enum DXGI_ALPHA_MODE)a2);
}

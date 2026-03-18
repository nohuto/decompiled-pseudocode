/*
 * XREFs of ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180065F4C
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180067D24 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::GetCompatibleTextureFormat(CD3DDevice *this, enum DXGI_FORMAT a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v2 = a2 - 2;
  if ( !v2 )
    return *((unsigned int *)this + 269);
  v3 = v2 - 8;
  if ( !v3 )
    return *((unsigned int *)this + 267);
  v4 = v3 - 14;
  if ( !v4 )
    return *((unsigned int *)this + 266);
  v5 = v4 - 4;
  if ( v5 )
  {
    v6 = v5 - 33;
    if ( !v6 )
      return *((unsigned int *)this + 260);
    v7 = v6 - 4;
    if ( !v7 )
      return *((unsigned int *)this + 261);
    v8 = v7 - 22;
    if ( !v8 )
      return *((unsigned int *)this + 264);
    if ( v8 == 1 )
      return *((unsigned int *)this + 265);
  }
  return *((unsigned int *)this + 262);
}

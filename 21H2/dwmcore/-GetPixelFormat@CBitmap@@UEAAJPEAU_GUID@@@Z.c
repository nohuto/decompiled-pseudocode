/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1802710B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18026F64C (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmap::GetPixelFormat(CBitmap *this, struct _GUID *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8

  v2 = DXGIFormatToPixelFormat(*((_DWORD *)this + 18), *((_DWORD *)this + 19) == 1);
  return MilPfToWic(v2, v3);
}

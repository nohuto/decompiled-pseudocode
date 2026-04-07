/*
 * XREFs of ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x1800504CC
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004EB1C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18004F6D0 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x1800504C0 (-Release@CWICBitmapWrapper@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalRelease(CMILCOMBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CMILCOMBase *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}

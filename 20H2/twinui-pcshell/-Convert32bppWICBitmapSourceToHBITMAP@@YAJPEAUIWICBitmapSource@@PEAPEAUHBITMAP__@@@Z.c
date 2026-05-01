/*
 * XREFs of ?Convert32bppWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1800D567C
 * Callers:
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1800D57BC (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Convert32bppWICBitmapSourceToHBITMAP(struct IWICBitmapSource *a1, HBITMAP *a2)
{
  int v4; // ebx
  HBITMAP v5; // rdi
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *CopyPixels)(IWICBitmapSource *, const WICRect *, UINT, UINT, BYTE *); // rax
  LONG v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  void *ppvBits; // [rsp+38h] [rbp-11h] BYREF
  _DWORD v12[4]; // [rsp+40h] [rbp-9h] BYREF
  BITMAPINFO pbmi; // [rsp+50h] [rbp+7h] BYREF

  *a2 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, LONG *, int *))a1->lpVtbl->GetSize)(a1, &v9, &v10);
  if ( v4 >= 0 )
  {
    pbmi.bmiHeader.biSize = 40;
    memset(&pbmi.bmiHeader.biCompression, 0, 28);
    pbmi.bmiHeader.biWidth = v9;
    *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
    pbmi.bmiHeader.biHeight = -v10;
    v5 = CreateDIBSection(0LL, &pbmi, 0, &ppvBits, 0LL, 0);
    if ( v5 )
    {
      lpVtbl = a1->lpVtbl;
      v12[0] = 0;
      v12[1] = 0;
      CopyPixels = lpVtbl->CopyPixels;
      v12[3] = v10;
      v12[2] = v9;
      v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _DWORD *, _QWORD, _QWORD, void *))CopyPixels)(
             a1,
             v12,
             (unsigned int)(4 * v9),
             (unsigned int)(4 * v10 * v9),
             ppvBits);
      if ( v4 < 0 )
        DeleteObject(v5);
      else
        *a2 = v5;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v4;
}

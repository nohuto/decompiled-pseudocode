/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x18024A9F0
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x18024A78C (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800063D8 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003CC84 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18024A974 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDevice *a2, UINT32 a3)
{
  __int64 v3; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  char *v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  _DWORD v14[4]; // [rsp+40h] [rbp-40h] BYREF
  const char *v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+74h] [rbp-Ch]
  struct IRenderTargetBitmap *v22; // [rsp+A8h] [rbp+28h] BYREF
  struct D2D_SIZE_U v23; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 117);
  v22 = 0LL;
  v14[2] = 0;
  v19 = 0;
  v17 = v3;
  v18 = DisplayId::None;
  v20 = 0;
  v14[0] = 87;
  v14[1] = 1;
  v23.width = 2048;
  v23.height = a3;
  v21 = 0;
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v22);
  v16 = 17;
  v15 = "DWM Atlas surface";
  v7 = CD3DDevice::CreateRenderTargetBitmap(
         a2,
         (const struct CResourceTag *)&v15,
         &v23,
         (const struct PixelFormatInfo *)v14,
         (struct RenderTargetInfo *)&v17,
         0,
         &v22);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x47u, 0LL);
  }
  else
  {
    v10 = (char *)v22 + *(int *)(*((_QWORD *)v22 + 1) + 8LL) + 8;
    (*(void (__fastcall **)(char *, CAtlasTexture *))(*(_QWORD *)v10 + 40LL))(v10, this);
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((__int64 *)this + 1, (__int64 *)&v22);
    *((_DWORD *)this + 6) = a3 - 1;
    *((_DWORD *)this + 7) = a3 - 1;
    v11 = DefaultHeap::Alloc(saturated_mul(a3 - 1, 8uLL));
    v12 = (void *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v11;
    if ( v12 )
    {
      operator delete(v12);
      v11 = (void *)*((_QWORD *)this + 2);
    }
    if ( v11 )
    {
      memset_0(v11, 0, 8LL * *((unsigned int *)this + 6));
      CAtlasTexture::GenerateWhitePixel(this);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, -2147024882, 0x58u, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v22);
  return v9;
}

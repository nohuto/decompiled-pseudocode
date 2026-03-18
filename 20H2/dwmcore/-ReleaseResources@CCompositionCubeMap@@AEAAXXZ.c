/*
 * XREFs of ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801B8F74
 * Callers:
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801B85B0 (--1CCompositionCubeMap@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18005252C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B8B90 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionCubeMap::ReleaseResources(CCompositionCubeMap *this)
{
  unsigned int i; // edi
  __int64 v3; // r14
  __int64 v4; // rsi
  struct CResource *v5; // rdx

  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v3 = *((_QWORD *)this + 10);
    v4 = 32LL * i;
    v5 = *(struct CResource **)(v3 + v4);
    if ( v5 )
    {
      CResource::UnRegisterNotifierInternal(this, v5);
      *(_QWORD *)(v3 + 32LL * i) = 0LL;
      Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease((CRenderTargetBitmap **)(v4
                                                                                                + *((_QWORD *)this + 10)
                                                                                                + 8LL));
    }
  }
  *((_DWORD *)this + 26) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 80, 0x20u);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
}

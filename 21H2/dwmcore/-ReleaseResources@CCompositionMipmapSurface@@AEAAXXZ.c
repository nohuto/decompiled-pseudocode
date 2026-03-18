/*
 * XREFs of ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x18020D67C
 * Callers:
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x18020CE38 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800198A8 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032CF0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCompositionMipmapSurface::ReleaseResources(CCompositionMipmapSurface *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebp
  __int64 v4; // rsi
  __int64 v5; // rsi
  struct CResource *v6; // rdx
  CD3DResource *v7; // rcx

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( (*((_QWORD *)this + 13) - v1) >> 5 )
  {
    v4 = 0LL;
    do
    {
      v5 = 32 * v4;
      v6 = *(struct CResource **)(v5 + v1);
      if ( v6 )
      {
        CResource::UnRegisterNotifierInternal(this, v6);
        *(_QWORD *)(v5 + v1) = 0LL;
      }
      v1 = *((_QWORD *)this + 12);
      v4 = ++v2;
    }
    while ( v2 < (unsigned __int64)((*((_QWORD *)this + 13) - v1) >> 5) );
  }
  *((_QWORD *)this + 13) = v1;
  v7 = (CD3DResource *)*((_QWORD *)this + 21);
  if ( v7 )
  {
    CD3DResource::RemoveResourceNotifier(v7, (CCompositionMipmapSurface *)((char *)this + 80));
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 21);
  }
}

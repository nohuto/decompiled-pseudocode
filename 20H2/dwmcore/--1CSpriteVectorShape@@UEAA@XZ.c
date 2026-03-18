/*
 * XREFs of ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801EC284
 * Callers:
 *     ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x18016DAA0 (--_GCSpriteVectorShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180173A14 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CSpriteVectorShape::~CSpriteVectorShape(CSpriteVectorShape *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CSpriteVectorShape::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CSpriteVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CSpriteVectorShape::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 160;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL)
                                                                         - 176;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  std::vector<float>::_Tidy((__int64)this + 152);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  CResource::~CResource(this);
}

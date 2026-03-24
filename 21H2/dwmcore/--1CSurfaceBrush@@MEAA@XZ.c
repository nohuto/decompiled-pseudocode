/*
 * XREFs of ??1CSurfaceBrush@@MEAA@XZ @ 0x180061B74
 * Callers:
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x180061B30 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CSurfaceBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CSurfaceBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 112;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL)
                                                                         - 128;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  CBrush::~CBrush(this);
}

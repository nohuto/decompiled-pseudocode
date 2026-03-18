/*
 * XREFs of ??1CMaskBrush@@MEAA@XZ @ 0x180093E74
 * Callers:
 *     ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x180093E30 (--_ECMaskBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CMaskBrush::~CMaskBrush(CMaskBrush *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &CMaskBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CMaskBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CMaskBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 48;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) - 64;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  CBrush::~CBrush(this);
}

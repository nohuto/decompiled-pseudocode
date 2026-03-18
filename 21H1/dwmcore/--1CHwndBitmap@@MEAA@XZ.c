/*
 * XREFs of ??1CHwndBitmap@@MEAA@XZ @ 0x1801C7FA8
 * Callers:
 *     ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1801C8070 (--_ECHwndBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017D83C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

void __fastcall CHwndBitmap::~CHwndBitmap(CHwndBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CRenderTargetBitmap *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHwndBitmap::`vftable';
  *((_QWORD *)this + 8) = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CHwndBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CHwndBitmap::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 64;
  v3 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 80;
  if ( *((_QWORD *)this + 10) )
    CWindowManager::RemoveHwndBitmap(*(CWindowManager **)(*((_QWORD *)this + 2) + 1192LL), this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 13);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CResource::~CResource(this);
}

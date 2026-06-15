/*
 * XREFs of ??1CAudioSessionStore@@EEAA@XZ @ 0x1800036BC
 * Callers:
 *     ??_GCAudioSessionStore@@EEAAPEAXI@Z @ 0x180003130 (--_GCAudioSessionStore@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180003A70 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(CAudioSessionStore *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rcx
  HKEY v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CAudioSessionStore::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore,IAudioSessionStore>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IPropertyStore,IAudioSessionStore>'};
  *((_QWORD *)this + 2) = &CAudioSessionStore::`vftable'{for `IPropertyStore'};
  *((_QWORD *)this + 3) = &CAudioSessionStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionStore>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  CAudioSessionStore::Commit((CAudioSessionStore *)((char *)this + 16));
  while ( *((_QWORD *)this + 7) )
  {
    PropVariantClear((PROPVARIANT *)(*((_QWORD *)this + 7) + 24LL));
    v3 = (_QWORD *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v3[6];
    operator delete(v3, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  DeleteCriticalSection(v2);
  v4 = (HKEY)*((_QWORD *)this + 8);
  if ( v4 )
    RegCloseKey(v4);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
    CoTaskMemFree(v5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>((__int64)this);
}

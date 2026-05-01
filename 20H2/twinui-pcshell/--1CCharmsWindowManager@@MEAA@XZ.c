/*
 * XREFs of ??1CCharmsWindowManager@@MEAA@XZ @ 0x18016589C
 * Callers:
 *     ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x1801659F0 (--_ECCharmsWindowManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCharmsWindowManager::~CCharmsWindowManager(CCharmsWindowManager *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  *(_QWORD *)this = &CCharmsWindowManager::`vftable';
  *((_QWORD *)this + 3) = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
  *((_QWORD *)this + 4) = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  *((_QWORD *)this + 6) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 8) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 7) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 8) );
      v2 = (void *)*((_QWORD *)this + 7);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}

/*
 * XREFs of ??1VirtualDesktopItem@@UEAA@XZ @ 0x18037E7FC
 * Callers:
 *     ??_GVirtualDesktopItem@@UEAAPEAXI@Z @ 0x18037E9D0 (--_GVirtualDesktopItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800706F0 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall VirtualDesktopItem::~VirtualDesktopItem(VirtualDesktopItem *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // rdi

  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 19) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 20) );
      v2 = (void *)*((_QWORD *)this + 19);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 15) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 14) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 15) );
      v4 = (void *)*((_QWORD *)this + 14);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  *((_DWORD *)this + 21) = -1073741823;
  v6 = (void *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 6) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 5) + 8 * v7++));
      while ( v7 < *((_QWORD *)this + 6) );
      v6 = (void *)*((_QWORD *)this + 5);
    }
    CoTaskMemFree(v6);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 16);
}

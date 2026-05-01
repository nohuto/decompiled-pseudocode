/*
 * XREFs of ??1ViewPresentationMediator@@UEAA@XZ @ 0x1802E1918
 * Callers:
 *     ??_EViewPresentationMediator@@UEAAPEAXI@Z @ 0x1802E1A94 (--_EViewPresentationMediator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18013FF9C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall ViewPresentationMediator::~ViewPresentationMediator(ViewPresentationMediator *this)
{
  __int64 *v1; // rbx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  void *v5; // rcx
  unsigned __int64 v6; // rsi

  v1 = (__int64 *)((char *)this + 256);
  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    v4 = 0LL;
    if ( v1[3] )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v1[2] + 8 * v4++));
      while ( v4 < v1[3] );
      v3 = (void *)v1[2];
    }
    CoTaskMemFree(v3);
    v1[2] = 0LL;
  }
  v1[3] = 0LL;
  v1[5] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 29) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 28) + 8 * v6++));
      while ( v6 < *((_QWORD *)this + 29) );
      v5 = (void *)*((_QWORD *)this + 28);
    }
    CoTaskMemFree(v5);
    *((_QWORD *)this + 28) = 0LL;
  }
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  *((_DWORD *)this + 45) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  CImmersiveShellComponent::~CImmersiveShellComponent((ViewPresentationMediator *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}

/*
 * XREFs of ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x180398D24
 * Callers:
 *     ??_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z @ 0x180398F90 (--_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036C844 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

void __fastcall ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(ItemAnimationCoordinatorBase *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  void *v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  void *v14; // rcx
  unsigned __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 *v17; // rbx
  void *v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx

  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((ItemAnimationCoordinatorBase *)((char *)this + 216));
  v2 = (void *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 24) )
    {
      v4 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v4 + *((_QWORD *)this + 23)));
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *((_QWORD *)this + 24) );
      v2 = (void *)*((_QWORD *)this + 23);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v5 = (void *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      v7 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v7 + *((_QWORD *)this + 19)));
        ++v6;
        v7 += 48LL;
      }
      while ( v6 < *((_QWORD *)this + 20) );
      v5 = (void *)*((_QWORD *)this + 19);
    }
    CoTaskMemFree(v5);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v8 = (void *)*((_QWORD *)this + 15);
  if ( v8 )
  {
    v9 = 0LL;
    if ( *((_QWORD *)this + 16) )
    {
      v10 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v10 + *((_QWORD *)this + 15) + 8LL));
        ++v9;
        v10 += 32LL;
      }
      while ( v9 < *((_QWORD *)this + 16) );
      v8 = (void *)*((_QWORD *)this + 15);
    }
    CoTaskMemFree(v8);
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v11 = (void *)*((_QWORD *)this + 11);
  if ( v11 )
  {
    v12 = 0LL;
    if ( *((_QWORD *)this + 12) )
    {
      v13 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v13 + *((_QWORD *)this + 11) + 8LL));
        ++v12;
        v13 += 32LL;
      }
      while ( v12 < *((_QWORD *)this + 12) );
      v11 = (void *)*((_QWORD *)this + 11);
    }
    CoTaskMemFree(v11);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v14 = (void *)*((_QWORD *)this + 7);
  if ( v14 )
  {
    v15 = 0LL;
    if ( *((_QWORD *)this + 8) )
    {
      v16 = 0LL;
      do
      {
        v17 = (__int64 *)(v16 + *((_QWORD *)this + 7));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17 + 1);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
        ++v15;
        v16 += 16LL;
      }
      while ( v15 < *((_QWORD *)this + 8) );
      v14 = (void *)*((_QWORD *)this + 7);
    }
    CoTaskMemFree(v14);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v18 = (void *)*((_QWORD *)this + 3);
  if ( v18 )
  {
    v19 = 0LL;
    if ( *((_QWORD *)this + 4) )
    {
      v20 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v20 + *((_QWORD *)this + 3) + 8LL));
        ++v19;
        v20 += 32LL;
      }
      while ( v19 < *((_QWORD *)this + 4) );
      v18 = (void *)*((_QWORD *)this + 3);
    }
    CoTaskMemFree(v18);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}

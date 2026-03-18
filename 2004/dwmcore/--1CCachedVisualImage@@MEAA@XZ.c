/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x18003623C
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180036130 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180036174 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x1800361A0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x180093B80 (-UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009955C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r8
  _QWORD ***v8; // rdi
  __int64 v9; // rsi

  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 8) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 10) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CCachedVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 12LL) + 56) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 1760;
  v3 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 1776;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 12LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL)
                                                                          - 1800;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v6 = *(_DWORD *)(v5 + 592);
  v7 = *(_QWORD *)(v5 + 568);
  if ( v6 )
  {
    do
    {
      if ( this == *(CCachedVisualImage **)(v7 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v6 );
  }
  if ( (unsigned int)v4 < v6 )
  {
    while ( (unsigned int)v4 < v6 - 1 )
    {
      *(_QWORD *)(v7 + 8 * v4) = *(_QWORD *)(v7 + 8LL * (unsigned int)(v4 + 1));
      v4 = (unsigned int)(v4 + 1);
      v6 = *(_DWORD *)(v5 + 592);
    }
    *(_DWORD *)(v5 + 592) = v6 - 1;
  }
  operator delete(*((void **)this + 20), 0x44uLL);
  v8 = (_QWORD ***)((char *)this + 184);
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((_QWORD *)this + 23);
  CCachedVisualImage::UnRegisterNotifiers(this);
  COcclusionContext::~COcclusionContext((CCachedVisualImage *)((char *)this + 208));
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(
      *v8,
      *((_QWORD ***)this + 24));
    std::_Deallocate<16,0>(v9, (*((_QWORD *)this + 25) - v9) & 0xFFFFFFFFFFFFFFF8uLL);
    *v8 = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((char *)this + 176);
  CResource::~CResource(this);
}

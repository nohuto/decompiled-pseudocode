/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x18024FB14
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x18024FC2C (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180168CA8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180198D04 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802513D4 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  CRenderTargetBitmap *v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rdi

  *(_QWORD *)this = &CHolographicManager::`vftable'{for `IHolographicManager'};
  *((_QWORD *)this + 1) = &CHolographicManager::`vftable'{for `CMILRefCountBase'};
  v2 = (CRenderTargetBitmap *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CRenderTargetBitmap::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
    ReleaseInterface<CPolygon>((__int64 *)this + 6);
    ReleaseInterface<CPolygon>((__int64 *)this + 7);
    v3 = DisplayId::None;
    *(_QWORD *)((char *)this + 68) = 0LL;
    *((_DWORD *)this + 16) = v3;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    CloseHandle(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  v5 = (void *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 20) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  v6 = (void *)*((_QWORD *)this + 10);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      *((CRenderTargetBitmap ***)this + 10),
      *((CRenderTargetBitmap ***)this + 11));
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 12) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}

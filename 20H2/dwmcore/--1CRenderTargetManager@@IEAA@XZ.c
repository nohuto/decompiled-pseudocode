/*
 * XREFs of ??1CRenderTargetManager@@IEAA@XZ @ 0x180154D04
 * Callers:
 *     ??_GCRenderTargetManager@@IEAAPEAXI@Z @ 0x180154E7C (--_GCRenderTargetManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180154340 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(CRenderTargetManager *this)
{
  char *v2; // rcx
  CRenderTargetBitmap *v3; // rcx
  void *v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  v2 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (CRenderTargetBitmap *)*((_QWORD *)this + 10);
  if ( v3 )
    CRenderTargetBitmap::Release(v3);
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>>(
      *((_QWORD **)this + 7),
      *((_QWORD **)this + 8));
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 9) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 6) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 3) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}

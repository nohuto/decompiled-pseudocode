/*
 * XREFs of ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180157D14
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$0 @ 0x18015701B (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDriverHandleWrappe.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1801580D8 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180159060 (--_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x180157C3C (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015A220 (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  void *v2; // rdi
  char *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::Close(this);
  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext(*((struct _RTL_CRITICAL_SECTION **)this + 19));
    operator delete(v2, (const struct std::nothrow_t *)0x40);
  }
  v3 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 10) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}

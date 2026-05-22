/*
 * XREFs of ??1CachedInputInfo@@QEAA@XZ @ 0x1800AECBC
 * Callers:
 *     _Win32kInterop::MakeRoutingDecisionsForAllFrames_::_1_::dtor$4 @ 0x1800B108F (_Win32kInterop--MakeRoutingDecisionsForAllFrames_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CachedInputInfo::~CachedInputInfo(CachedInputInfo *this)
{
  const struct std::nothrow_t *v2; // rdx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    operator delete(*(void **)this, v2);
}

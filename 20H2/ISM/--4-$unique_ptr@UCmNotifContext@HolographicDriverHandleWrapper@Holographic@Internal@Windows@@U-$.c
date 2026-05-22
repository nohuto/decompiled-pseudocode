/*
 * XREFs of ??4?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180157F18
 * Callers:
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x180161354 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ.c)
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x180166650 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x18015774C (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator=(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x40);
    }
  }
  return a1;
}

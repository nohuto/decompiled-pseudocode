/*
 * XREFs of ?UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180166620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x18015774C (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::UnregisterAsyncCallback(
        PTP_CALLBACK_INSTANCE Instance,
        struct _RTL_CRITICAL_SECTION *Context,
        PTP_WORK Work)
{
  if ( Context )
  {
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext(Context);
    operator delete(Context, (const struct std::nothrow_t *)0x40);
  }
}

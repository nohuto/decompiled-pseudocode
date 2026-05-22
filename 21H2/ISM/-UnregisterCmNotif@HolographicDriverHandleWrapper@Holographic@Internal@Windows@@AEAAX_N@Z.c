/*
 * XREFs of ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x180166B00
 * Callers:
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015A220 (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18015B618 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x180157C3C (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??4?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180158408 (--4-$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U-$.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rdi
  LPCRITICAL_SECTION v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  LPCRITICAL_SECTION v7; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  lpCriticalSection = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 144);
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator=(
    &lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION **)this + 19);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v5 = lpCriticalSection;
  if ( lpCriticalSection )
  {
    v6 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    v5[1].DebugInfo = 0LL;
    v7 = v5;
    if ( a2 )
    {
      SubmitThreadpoolWork(*(PTP_WORK *)&v5[1].LockCount);
      v5 = 0LL;
      v7 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    if ( v7 )
    {
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x40);
    }
  }
}

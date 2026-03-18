/*
 * XREFs of ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C000BA28
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000AEDC (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C000BB18 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C0034A40 (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C000BAC0 (CreateKernelSemaphore.c)
 */

__int64 __fastcall CInpLockGuard::Initialize(CInpLockGuard *this)
{
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 KernelSemaphore; // rax

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  *(_QWORD *)this = PoolWithTag;
  if ( PoolWithTag && ExInitializeResourceLite(PoolWithTag) >= 0 )
  {
    KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
    *((_QWORD *)this + 1) = KernelSemaphore;
    if ( KernelSemaphore )
      return 1LL;
    ExDeleteResourceLite(*(PERESOURCE *)this);
  }
  if ( *(_QWORD *)this )
  {
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}

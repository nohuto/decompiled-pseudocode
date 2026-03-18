/*
 * XREFs of ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0076DF4
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0075F50 (NtUserGetAsyncKeyState.c)
 *     AllocQueue @ 0x1C00768D0 (AllocQueue.c)
 *     PostUpdateKeyStateEvent @ 0x1C0076CF0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

void **__fastcall CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *a1 = GetDomainLockRef(16LL, a2, a3, a4);
  return a1;
}

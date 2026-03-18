/*
 * XREFs of ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C000F894
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C000F3B0 (NtUserGetAsyncKeyState.c)
 *     PostUpdateKeyStateEvent @ 0x1C000F790 (PostUpdateKeyStateEvent.c)
 *     AllocQueue @ 0x1C00742A0 (AllocQueue.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

_QWORD *__fastcall CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(_QWORD *a1)
{
  *a1 = GetDomainLockRef(16LL);
  return a1;
}

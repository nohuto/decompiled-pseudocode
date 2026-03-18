/*
 * XREFs of HMLockObject @ 0x1C00445C0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0089370 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMLockObject(__int64 a1)
{
  __int64 result; // rax

  result = GetDomainLockRef(14LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}

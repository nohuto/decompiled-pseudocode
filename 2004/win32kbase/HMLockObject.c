/*
 * XREFs of HMLockObject @ 0x1C008B310
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0018B70 (xxxInternalActivateKeyboardLayout.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMLockObject(__int64 a1)
{
  __int64 result; // rax

  result = GetDomainLockRef(14LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}

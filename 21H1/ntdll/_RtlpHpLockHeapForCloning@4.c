/*
 * XREFs of _RtlpHpLockHeapForCloning@4 @ 0x4B379304
 * Callers:
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpHpLfhContextLockUnlock@8 @ 0x4B3766A8 (_RtlpHpLfhContextLockUnlock@8.c)
 *     _RtlpHpHeapLock@8 @ 0x4B378F59 (_RtlpHpHeapLock@8.c)
 */

int __thiscall RtlpHpLockHeapForCloning(_RTL_SRWLOCK *this)
{
  char v3; // [esp+7h] [ebp-1h] BYREF

  RtlpHpHeapLock((int)this, &v3);
  RtlAcquireSRWLockExclusive(this + 86);
  RtlAcquireSRWLockExclusive(this + 118);
  RtlAcquireSRWLockExclusive(this + 45);
  return RtlpHpLfhContextLockUnlock((int)&this[176], 0);
}

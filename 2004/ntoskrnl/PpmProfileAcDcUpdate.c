/*
 * XREFs of PpmProfileAcDcUpdate @ 0x1408F2C5C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408ED3B0 (PpmCompareAndApplyPolicySettings.c)
 */

char PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140C238AC;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = PpmCurrentProfile + 5;
  do
  {
    v4 = *v3 | v3[342];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v6 = v1 & 0x1CFFFFD8030FC0LL;
  return PpmCompareAndApplyPolicySettings(
           &v6,
           (__int64)PpmCurrentProfile + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFF550uLL) + 2776,
           (__int64)&PpmCurrentProfile[342 * v0 + 5]);
}

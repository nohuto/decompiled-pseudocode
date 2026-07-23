/*
 * XREFs of ExpTryAcquireFannedOutPushLockShared @ 0x140390C10
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390B50 (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140208080 (ExfTryAcquirePushLockShared.c)
 */

unsigned __int64 __fastcall ExpTryAcquireFannedOutPushLockShared(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // r9
  unsigned int v3; // ecx
  unsigned __int64 v4; // rbx

  v1 = (a1 >> 13) & 0x3FFFF;
  v2 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v3, v1);
  v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * (v1 ^ (1 << v3)) + 8)
     + 8 * (v2 & 0x1FF);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    v4 &= -(__int64)(ExfTryAcquirePushLockShared((unsigned __int64 *)v4) != 0);
  return v4;
}

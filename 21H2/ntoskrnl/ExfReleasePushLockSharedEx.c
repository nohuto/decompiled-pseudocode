/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x14020E460
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x14020E2E0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpAeStopMeasurement @ 0x14020E55C (ExpAeStopMeasurement.c)
 *     ExpWakePushLock @ 0x1402FC2F0 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, _QWORD *a2)
{
  signed __int64 result; // rax
  signed __int64 v5; // r8
  signed __int64 v6; // rtt
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int64 v9; // rcx
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  unsigned __int64 i; // rcx
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  CurrentThread = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    DWORD2(v14) = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    *(_QWORD *)&v14 = __rdtsc();
  }
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 2) == 0 )
  {
    v5 = 0LL;
    if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v5 = result - 16;
    v6 = result;
    result = _InterlockedCompareExchange64(a1, v5, result);
    if ( v6 == result )
    {
      if ( a2 )
        return ExpAeStopMeasurement(&v14, a2);
      return result;
    }
  }
  if ( (result & 8) != 0 )
  {
    for ( i = result & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v13 = *(_QWORD *)(i + 32);
      if ( v13 )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v13 + 48)) > 0 )
      return result;
    v7 = -9LL;
  }
  else
  {
    v7 = -1LL;
  }
  do
  {
    v8 = v7 + 4;
    v9 = result & 6;
    if ( v9 != 2 )
      v8 = v7;
    v10 = result + v8;
    v11 = result;
    result = _InterlockedCompareExchange64(a1, v10, result);
  }
  while ( v11 != result );
  if ( v9 == 2 )
    return ExpWakePushLock(a1, v10, v7, a2, v14, *((_QWORD *)&v14 + 1), CurrentThread);
  return result;
}

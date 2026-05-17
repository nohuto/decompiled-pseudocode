/*
 * XREFs of TppBarrierAdjust @ 0x18005299C
 * Callers:
 *     TppWaitCompletion @ 0x180010D20 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x1800127E0 (TpStartAsyncIoOperation.c)
 *     TppWorkPost @ 0x1800129B8 (TppWorkPost.c)
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800526D0 (TpReleaseCleanupGroupMembers.c)
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     TpCancelAsyncIoOperation @ 0x180078BD0 (TpCancelAsyncIoOperation.c)
 *     TpWaitForAlpcCompletion @ 0x180079640 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x18007F310 (TpWaitForJobNotification.c)
 *     TppJobpExecuteCallback @ 0x18007FE90 (TppJobpExecuteCallback.c)
 *     TpDisassociateCallback @ 0x1800801B0 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180084E50 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180085350 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180111DB0 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180112270 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180052AEC (TppItePush.c)
 *     TppIteWakeWaiters @ 0x1800549DC (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0AA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = v11 & 0xFFFFFFFFFFFFFFFLL;
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 1), v12, a3, a4);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, a3, a4);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return TppIteWakeWaiters(v14);
  }
  else if ( v4 )
  {
    TppItePush(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}

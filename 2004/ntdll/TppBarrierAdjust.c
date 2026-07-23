/*
 * XREFs of TppBarrierAdjust @ 0x18005294C
 * Callers:
 *     TppWaitCompletion @ 0x180010D20 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x1800127E0 (TpStartAsyncIoOperation.c)
 *     TppWorkPost @ 0x1800129B8 (TppWorkPost.c)
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TpReleaseCleanupGroupMembers @ 0x180052680 (TpReleaseCleanupGroupMembers.c)
 *     TppCallbackEpilog @ 0x1800536F0 (TppCallbackEpilog.c)
 *     TpCancelAsyncIoOperation @ 0x180078AD0 (TpCancelAsyncIoOperation.c)
 *     TpWaitForAlpcCompletion @ 0x180079540 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x18007F210 (TpWaitForJobNotification.c)
 *     TppJobpExecuteCallback @ 0x18007FD90 (TppJobpExecuteCallback.c)
 *     TpDisassociateCallback @ 0x1800800B0 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180084D50 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180085250 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x1801118A0 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180111D60 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180052A9C (TppItePush.c)
 *     TppIteWakeWaiters @ 0x18005498C (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0800 (NtWaitForAlertByThreadId.c)
 */

int __fastcall TppBarrierAdjust(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // bp
  char v5; // r14
  unsigned __int64 Value; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v5 = 0;
  _m_prefetchw(a1);
  Value = a1->Value;
  v8 = a2;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v5 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v9 = Value;
    v10 = (Value ^ (v8 + Value)) & 0xFFFFFFFFFFFFFFFLL ^ Value;
    if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
    {
      v10 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( a3 && (v10 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v9);
    Value = v11;
  }
  while ( v9 != v11 );
  if ( v5 )
  {
    v12 = a1[2].Value;
    a1[2].Value = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    LODWORD(v11) = TppIteWakeWaiters(v12);
  }
  else if ( v3 )
  {
    TppItePush(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = NtWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}

/*
 * XREFs of PopHandleSystemIdleReset @ 0x140571B94
 * Callers:
 *     PopResetIdleTime @ 0x140320350 (PopResetIdleTime.c)
 * Callees:
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall PopHandleSystemIdleReset(int a1)
{
  __int64 result; // rax

  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x102uLL, 0LL, 0LL);
  if ( a1 == 2 )
  {
    _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
    PopGetPolicyWorker(128);
    return PopCheckForWork();
  }
  return result;
}

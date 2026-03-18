/*
 * XREFs of PopHandleSystemIdleReset @ 0x1405721E4
 * Callers:
 *     PopResetIdleTime @ 0x14035DF70 (PopResetIdleTime.c)
 * Callees:
 *     PopCheckForWork @ 0x1402DEAA0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1402DF330 (PopGetPolicyWorker.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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

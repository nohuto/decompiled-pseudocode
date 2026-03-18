/*
 * XREFs of CmFcpInitializeChangeSubscription @ 0x140880ACC
 * Callers:
 *     CmFcpManagerAllocateChangeSubscription @ 0x140880B40 (CmFcpManagerAllocateChangeSubscription.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmFcpWorkItemInitialize @ 0x1407CE530 (CmFcpWorkItemInitialize.c)
 */

__int64 __fastcall CmFcpInitializeChangeSubscription(__int64 a1, unsigned __int64 a2, KSPIN_LOCK a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  _KPROCESS *CurrentProcess; // rax

  memset((void *)a1, 0, 0x60uLL);
  CmFcpWorkItemInitialize((KSPIN_LOCK *)(a1 + 16), v6, (KSPIN_LOCK)CmFcpChangeSubscriptionWrapper, a3);
  result = MmIsSessionAddress(a2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 88) |= 1u;
    CurrentProcess = PsGetCurrentProcess();
    result = MmGetSessionIdEx((__int64)CurrentProcess);
    *(_DWORD *)(a1 + 92) = result;
  }
  *(_QWORD *)(a1 + 80) = a2;
  return result;
}

/*
 * XREFs of CmFcpInitializeChangeSubscription @ 0x14087E5CC
 * Callers:
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087E640 (CmFcpManagerAllocateChangeSubscription.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmFcpWorkItemInitialize @ 0x1407D2950 (CmFcpWorkItemInitialize.c)
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

/*
 * XREFs of CmFcpInitializeChangeSubscription @ 0x140879C6C
 * Callers:
 *     CmFcpManagerAllocateChangeSubscription @ 0x140879CE0 (CmFcpManagerAllocateChangeSubscription.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmFcpWorkItemInitialize @ 0x1407BCB30 (CmFcpWorkItemInitialize.c)
 */

char __fastcall CmFcpInitializeChangeSubscription(__int64 a1, unsigned __int64 a2, KSPIN_LOCK a3)
{
  __int64 v6; // rdx
  int SessionId; // eax
  _KPROCESS *CurrentProcess; // rax

  memset((void *)a1, 0, 0x60uLL);
  CmFcpWorkItemInitialize((KSPIN_LOCK *)(a1 + 16), v6, (KSPIN_LOCK)CmFcpChangeSubscriptionWrapper, a3);
  LOBYTE(SessionId) = MmIsSessionAddress(a2);
  if ( SessionId )
  {
    *(_DWORD *)(a1 + 88) |= 1u;
    CurrentProcess = PsGetCurrentProcess();
    SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
    *(_DWORD *)(a1 + 92) = SessionId;
  }
  *(_QWORD *)(a1 + 80) = a2;
  return SessionId;
}

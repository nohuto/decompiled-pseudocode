/*
 * XREFs of CmFcpInitializeChangeSubscription @ 0x14087AF5C
 * Callers:
 *     CmFcpManagerAllocateChangeSubscription @ 0x14087AFD0 (CmFcpManagerAllocateChangeSubscription.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmFcpWorkItemInitialize @ 0x1407BFCA0 (CmFcpWorkItemInitialize.c)
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

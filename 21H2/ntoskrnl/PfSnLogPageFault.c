/*
 * XREFs of PfSnLogPageFault @ 0x140365C94
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1407E5148 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     PfSnReferenceProcessTrace @ 0x1402CD7F0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140366094 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x140366BE8 (PfSnCheckLoggingForThread.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection(v8 + 45);
    }
  }
}

/*
 * XREFs of PfSnLogPageFault @ 0x14032428C
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1406EED64 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x1402B6100 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1402B632C (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x140324330 (PfSnCheckLoggingForThread.c)
 */

void __fastcall PfSnLogPageFault(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !a1[4] )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((__int64)v8, a1, a1[3], a2, a3);
      ExReleaseRundownProtection_0(v8 + 45);
    }
  }
}

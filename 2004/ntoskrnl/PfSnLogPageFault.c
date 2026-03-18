/*
 * XREFs of PfSnLogPageFault @ 0x1403293AC
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1406D6974 (MiLogRelocationRva.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x14025D0D0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x14025D2FC (PfSnLogPageFaultCommon.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     PfSnCheckLoggingForThread @ 0x140329450 (PfSnCheckLoggingForThread.c)
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

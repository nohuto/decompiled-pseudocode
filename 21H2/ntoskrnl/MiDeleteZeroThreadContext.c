/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14054FE54
 * Callers:
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 *     MiZeroPageThread @ 0x1403CAD40 (MiZeroPageThread.c)
 *     MiInitializePartitionThreads @ 0x1408C7DB4 (MiInitializePartitionThreads.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403B41BC (MiSignalZeroingPassComplete.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054FEA0 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P)
{
  __int64 v2; // rcx

  MiDereferenceAnyActiveHugeContext();
  MiDeleteUltraThreadContext((__int64)(P + 11));
  MiSignalZeroingPassComplete((__int64)P);
  v2 = P[30];
  if ( v2 )
    MiDereferencePageRunsEx(v2, 1);
  ExFreePoolWithTag(P, 0);
}

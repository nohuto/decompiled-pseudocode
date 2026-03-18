/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14054A124
 * Callers:
 *     MiZeroNodePages @ 0x1403ADD50 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 *     MiZeroPageThread @ 0x1403C67B0 (MiZeroPageThread.c)
 *     MiInitializePartitionThreads @ 0x1408C3304 (MiInitializePartitionThreads.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140313848 (MiDereferencePageRunsEx.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403B1FAC (MiSignalZeroingPassComplete.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054A170 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // rcx

  MiDereferenceAnyActiveHugeContext();
  MiDeleteUltraThreadContext((__int64)(P + 11));
  MiSignalZeroingPassComplete((__int64)P, v2, v3, v4);
  v5 = P[30];
  if ( v5 )
    MiDereferencePageRunsEx(v5, 1);
  ExFreePoolWithTag(P, 0);
}

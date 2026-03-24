/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14054FC14
 * Callers:
 *     MiZeroNodePages @ 0x1403B0220 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 *     MiZeroPageThread @ 0x1403CABA0 (MiZeroPageThread.c)
 *     MiInitializePartitionThreads @ 0x1408C7C54 (MiInitializePartitionThreads.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1402C34F8 (MiDereferencePageRunsEx.c)
 *     MiDeleteUltraThreadContext @ 0x1402E65FC (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403B404C (MiSignalZeroingPassComplete.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054FC60 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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

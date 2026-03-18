/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14054A774
 * Callers:
 *     MiZeroNodePages @ 0x1403A7930 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 *     MiZeroPageThread @ 0x1403C75C0 (MiZeroPageThread.c)
 *     MiInitializePartitionThreads @ 0x1408C4654 (MiInitializePartitionThreads.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRunsEx @ 0x1403516F8 (MiDereferencePageRunsEx.c)
 *     MiSignalZeroingPassComplete @ 0x1403AB75C (MiSignalZeroingPassComplete.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054A7C0 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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

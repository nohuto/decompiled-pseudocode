/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14054E144
 * Callers:
 *     MiZeroNodePages @ 0x1403AA320 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 *     MiZeroPageThread @ 0x1403CA200 (MiZeroPageThread.c)
 *     MiInitializePartitionThreads @ 0x1408CA494 (MiInitializePartitionThreads.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1403221F0 (MiDereferencePageRunsEx.c)
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403B2C2C (MiSignalZeroingPassComplete.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x14054E190 (MiDereferenceAnyActiveHugeContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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

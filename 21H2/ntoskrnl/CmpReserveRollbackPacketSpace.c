/*
 * XREFs of CmpReserveRollbackPacketSpace @ 0x1408750EC
 * Callers:
 *     CmSnapshotRMTxArray @ 0x1405E1668 (CmSnapshotRMTxArray.c)
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1408752AC (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall CmpReserveRollbackPacketSpace(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v5; // rbp
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // r14d
  char *TransientPoolWithTag; // rax
  char *v10; // rsi
  struct _PRIVILEGE_SET *v11; // rcx

  v5 = a2;
  v6 = *a1;
  v7 = 0;
  if ( a1[1] - v6 < a2 )
  {
    v8 = v6 + a2;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, 8LL * (v6 + a2), 0x36344D43u, a4);
    v10 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memmove(TransientPoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
      memset(&v10[8 * *a1], 0, 8 * v5);
      v11 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      if ( v11 )
        CmSiFreeMemory(v11);
      *((_QWORD *)a1 + 1) = v10;
      a1[1] = v8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}

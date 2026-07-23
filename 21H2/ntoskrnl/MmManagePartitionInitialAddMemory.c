/*
 * XREFs of MmManagePartitionInitialAddMemory @ 0x1408DBB24
 * Callers:
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     MiHotAddPartitionMemory @ 0x1408DB3DC (MiHotAddPartitionMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManagePartitionInitialAddMemory(unsigned __int64 *a1, int *a2, __int64 a3, __int64 a4)
{
  char *v5; // rsi
  char *Pool; // rdi
  unsigned __int64 v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // eax
  SIZE_T v12; // rbx

  v5 = 0LL;
  Pool = 0LL;
  v7 = *a1;
  v8 = *a2;
  if ( (*a2 & 0xFFFFFFF8) == 0 )
  {
    if ( (v8 & 4) != 0 )
      return 3221225659LL;
    if ( (v8 & 7) != 0 )
    {
      v11 = a2[1];
      if ( v11 )
      {
        v5 = (char *)(a3 + 16);
        if ( (_BYTE)a4 )
        {
          v12 = 16LL * v11;
          Pool = (char *)MiAllocatePool(64, v12, 0x6148694Du);
          if ( !Pool )
          {
            v9 = -1073741670;
            goto LABEL_19;
          }
          if ( v12 )
          {
            if ( ((unsigned __int8)v5 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v5[v12] > 0x7FFFFFFF0000LL || &v5[v12] < v5 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(Pool, v5, v12);
        }
        else
        {
          Pool = (char *)(a3 + 16);
        }
        v9 = MiHotAddPartitionMemory(v7, (unsigned __int64 *)Pool, a2, a4);
        goto LABEL_19;
      }
    }
  }
  v9 = -1073741811;
LABEL_19:
  if ( Pool )
  {
    if ( Pool != v5 )
      ExFreePoolWithTag(Pool, 0);
  }
  return v9;
}

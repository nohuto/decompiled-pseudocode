/*
 * XREFs of ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z @ 0x180070868
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003E500 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPartitionTableRemovePartition(struct _RM_PARTITION_TABLE *a1, HANDLE *a2, unsigned int **a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax

  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  *a3 = (unsigned int *)((char *)a1 + 84);
  _InterlockedIncrement((volatile signed __int32 *)a1 + 21);
  NtClose(a2[4]);
  a2[4] = 0LL;
  *((_DWORD *)a2 + 56) |= 3u;
  v6 = a2 + 1;
  v7 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *(_OWORD *)v6 = 0LL;
  --*((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  RtlWakeAllConditionVariable((char *)a1 + 32);
}

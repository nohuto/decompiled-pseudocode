/*
 * XREFs of EtwpReceiveNotification @ 0x1406BBA6C
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x1406BBBFC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  struct _LIST_ENTRY *Flink; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  char *p_Blink; // r14
  char *i; // rdi
  char *v14; // rax
  void **v15; // rcx
  __int64 v16; // rbp
  char *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  signed __int32 v21; // ebx
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9

  v4 = 0;
  Flink = KeGetCurrentThread()->ApcState.Process[1].ReadyListHead.Flink;
  if ( !Flink )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (ULONG_PTR)&Flink[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Flink[1], 0LL);
  p_Blink = (char *)&Flink[1].Blink;
  for ( i = *(char **)p_Blink; i != p_Blink && a3 != (*(_BYTE *)(*((_QWORD *)i + 3) + 99LL) & 1); i = *(char **)i )
    ;
  if ( i == p_Blink )
  {
    ExReleasePushLockEx(v11, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
    return (unsigned int)-2147483622;
  }
  v14 = *(char **)i;
  if ( *(char **)(*(_QWORD *)i + 8LL) != i )
    goto LABEL_20;
  v15 = (void **)*((_QWORD *)i + 1);
  if ( *v15 != i )
    goto LABEL_20;
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  v16 = *((_QWORD *)i + 2);
  if ( *(_DWORD *)(v16 + 4) <= a2 )
    goto LABEL_9;
  v23 = *(char **)p_Blink;
  if ( *(char **)(*(_QWORD *)p_Blink + 8LL) != p_Blink )
LABEL_20:
    __fastfail(3u);
  *(_QWORD *)i = v23;
  v4 = -1073741789;
  *((_QWORD *)i + 1) = p_Blink;
  *((_QWORD *)v23 + 1) = i;
  *(_QWORD *)p_Blink = i;
LABEL_9:
  v17 = *(char **)p_Blink;
  *a4 = *(_DWORD *)(v16 + 4);
  ExReleasePushLockEx(v11, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  if ( v4 >= 0 )
  {
    v21 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
    memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 5) = v21;
    *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
    if ( *(_BYTE *)(v16 + 12) )
      *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
    EtwpUnreferenceDataBlock(v16);
    EtwpReleaseQueueEntry(i);
    if ( v17 != p_Blink )
      return 261;
  }
  return (unsigned int)v4;
}

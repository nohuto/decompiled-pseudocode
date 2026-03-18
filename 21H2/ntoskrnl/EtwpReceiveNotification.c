/*
 * XREFs of EtwpReceiveNotification @ 0x14078EF08
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x14078F094 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14078F0FC (EtwpUnreferenceDataBlock.c)
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
  signed __int32 v18; // ebx
  char *v20; // rax

  v4 = 0;
  Flink = KeGetCurrentThread()->ApcState.Process[1].ReadyListHead.Flink;
  if ( !Flink )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (ULONG_PTR)&Flink[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Flink[1], 0LL);
  p_Blink = (char *)&Flink[1].Blink;
  for ( i = *(char **)p_Blink; ; i = *(char **)i )
  {
    if ( i == p_Blink )
    {
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)-2147483622;
    }
    if ( a3 == (*(_BYTE *)(*((_QWORD *)i + 3) + 99LL) & 1) )
      break;
  }
  v14 = *(char **)i;
  if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v15 = (void **)*((_QWORD *)i + 1), *v15 != i) )
LABEL_18:
    __fastfail(3u);
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  v16 = *((_QWORD *)i + 2);
  if ( *(_DWORD *)(v16 + 4) > a2 )
  {
    v20 = *(char **)p_Blink;
    if ( *(char **)(*(_QWORD *)p_Blink + 8LL) == p_Blink )
    {
      *(_QWORD *)i = v20;
      v4 = -1073741789;
      *((_QWORD *)i + 1) = p_Blink;
      *((_QWORD *)v20 + 1) = i;
      *(_QWORD *)p_Blink = i;
      goto LABEL_8;
    }
    goto LABEL_18;
  }
LABEL_8:
  v17 = *(char **)p_Blink;
  *a4 = *(_DWORD *)(v16 + 4);
  ExReleasePushLockEx(v11, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v18 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
    memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 5) = v18;
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

/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1406F9808
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 * Callees:
 *     MiMakePartitionActive @ 0x14036C978 (MiMakePartitionActive.c)
 *     MiAllocateMappedWriterMdls @ 0x1403DB228 (MiAllocateMappedWriterMdls.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403DEEAC (MiUnlockPartitionSystemThreads.c)
 *     MiLockPartitionSystemThreads @ 0x1403DF504 (MiLockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x14058DC5C (MiDeleteMappedMdls.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *StartContext)
{
  int *v1; // rdx
  unsigned int v3; // ecx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rax
  int MappedWriterMdls; // edi
  unsigned int v8; // ebp
  PKSTART_ROUTINE *v9; // r15
  int *v10; // r14
  __int64 v11; // rsi
  _QWORD v12[9]; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+9Ch] [rbp+14h]
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE ProcessHandle; // [rsp+A8h] [rbp+20h]

  v13 = 3;
  v12[0] = MiDereferenceSegmentThread;
  v1 = &v13;
  v14 = 5;
  v12[1] = MiMappedPageWriter;
  v3 = 0;
  while ( StartContext[(unsigned int)*v1 + 16] )
  {
    ++v3;
    ++v1;
    if ( v3 >= 2 )
    {
      if ( v3 == 2 )
        return 0LL;
      break;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v6 = StartContext[22];
  ThreadHandle = 0LL;
  MappedWriterMdls = 0;
  ProcessHandle = *(HANDLE *)(v6 + 112);
  MiLockPartitionSystemThreads((__int64)StartContext, (__int64)CurrentThread);
  v8 = 0;
  v9 = (PKSTART_ROUTINE *)v12;
  v10 = &v13;
  while ( 1 )
  {
    v11 = (unsigned int)*v10;
    if ( StartContext[v11 + 16] )
      goto LABEL_13;
    if ( (_DWORD)v11 == 5 )
    {
      MappedWriterMdls = MiAllocateMappedWriterMdls(StartContext);
      if ( MappedWriterMdls < 0 )
        goto LABEL_14;
    }
    if ( !(unsigned int)MiMakePartitionActive((__int64)StartContext) )
      break;
    MappedWriterMdls = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, ProcessHandle, 0LL, *v9, StartContext);
    if ( MappedWriterMdls < 0 )
      goto LABEL_16;
    StartContext[v11 + 16] = ThreadHandle;
LABEL_13:
    ++v8;
    ++v10;
    ++v9;
    if ( v8 >= 2 )
      goto LABEL_14;
  }
  MappedWriterMdls = -1073741523;
LABEL_16:
  if ( (_DWORD)v11 == 5 )
    MiDeleteMappedMdls((__int64)StartContext);
LABEL_14:
  MiUnlockPartitionSystemThreads((__int64)StartContext, (__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}

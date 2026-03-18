/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x140643794
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 * Callees:
 *     MiMakePartitionActive @ 0x140328410 (MiMakePartitionActive.c)
 *     MiAllocateMappedWriterMdls @ 0x1403C7F30 (MiAllocateMappedWriterMdls.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CAF0C (MiUnlockPartitionSystemThreads.c)
 *     MiLockPartitionSystemThreads @ 0x1403CBBF4 (MiLockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x14052FA5C (MiDeleteMappedMdls.c)
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *a1)
{
  int *v1; // rdx
  unsigned int i; // ecx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rax
  int MappedWriterMdls; // edi
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  int *v10; // r14
  __int64 v11; // rsi
  _QWORD v12[9]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+A8h] [rbp+10h] BYREF
  int v14; // [rsp+ACh] [rbp+14h]
  __int64 v15; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+20h]

  v13 = 3;
  v12[0] = MiDereferenceSegmentThread;
  v1 = &v13;
  v14 = 5;
  v12[1] = MiMappedPageWriter;
  for ( i = 0; i < 2; ++i )
  {
    if ( !a1[(unsigned int)*v1 + 16] )
      break;
    ++v1;
  }
  if ( i == 2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a1[22];
  v15 = 0LL;
  MappedWriterMdls = 0;
  v16 = *(_QWORD *)(v6 + 112);
  MiLockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  v8 = 0;
  v9 = v12;
  v10 = &v13;
  while ( 1 )
  {
    v11 = (unsigned int)*v10;
    if ( a1[v11 + 16] )
      goto LABEL_13;
    if ( (_DWORD)v11 == 5 )
    {
      MappedWriterMdls = MiAllocateMappedWriterMdls(a1);
      if ( MappedWriterMdls < 0 )
        goto LABEL_14;
    }
    if ( !(unsigned int)MiMakePartitionActive((__int64)a1) )
      break;
    MappedWriterMdls = PsCreateSystemThreadEx(&v15, 0x1FFFFFLL, 0LL, v16, 0LL, *v9, a1, 0LL, 0LL);
    if ( MappedWriterMdls < 0 )
      goto LABEL_16;
    a1[v11 + 16] = v15;
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
    MiDeleteMappedMdls((__int64)a1);
LABEL_14:
  MiUnlockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}

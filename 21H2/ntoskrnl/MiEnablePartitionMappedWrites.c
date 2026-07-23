/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1406AA564
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 * Callees:
 *     MiMakePartitionActive @ 0x1402970F8 (MiMakePartitionActive.c)
 *     MiAllocateMappedWriterMdls @ 0x1403CC4C0 (MiAllocateMappedWriterMdls.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CF44C (MiUnlockPartitionSystemThreads.c)
 *     MiLockPartitionSystemThreads @ 0x1403D0184 (MiLockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x1405357BC (MiDeleteMappedMdls.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *a1)
{
  int *v1; // rdx
  unsigned int i; // ecx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rax
  int MappedWriterMdls; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 *v12; // r15
  int *v13; // r14
  __int64 v14; // rsi
  _QWORD v15[9]; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+A8h] [rbp+10h] BYREF
  int v17; // [rsp+ACh] [rbp+14h]
  __int64 v18; // [rsp+B0h] [rbp+18h] BYREF
  ULONG_PTR v19; // [rsp+B8h] [rbp+20h]

  v16 = 3;
  v15[0] = MiDereferenceSegmentThread;
  v1 = &v16;
  v17 = 5;
  v15[1] = MiMappedPageWriter;
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
  v18 = 0LL;
  MappedWriterMdls = 0;
  v19 = *(_QWORD *)(v6 + 112);
  MiLockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  v11 = 0;
  v12 = v15;
  v13 = &v16;
  while ( 1 )
  {
    v14 = (unsigned int)*v13;
    if ( a1[v14 + 16] )
      goto LABEL_13;
    if ( (_DWORD)v14 == 5 )
    {
      MappedWriterMdls = MiAllocateMappedWriterMdls(a1, v8, v9, v10);
      if ( MappedWriterMdls < 0 )
        goto LABEL_14;
    }
    if ( !(unsigned int)MiMakePartitionActive((__int64)a1) )
      break;
    MappedWriterMdls = PsCreateSystemThreadEx((__int64)&v18, 0x1FFFFF, 0LL, v19, 0LL, *v12, (__int64)a1, 0LL, 0LL);
    if ( MappedWriterMdls < 0 )
      goto LABEL_16;
    a1[v14 + 16] = v18;
LABEL_13:
    ++v11;
    ++v13;
    ++v12;
    if ( v11 >= 2 )
      goto LABEL_14;
  }
  MappedWriterMdls = -1073741523;
LABEL_16:
  if ( (_DWORD)v14 == 5 )
    MiDeleteMappedMdls((__int64)a1);
LABEL_14:
  MiUnlockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}

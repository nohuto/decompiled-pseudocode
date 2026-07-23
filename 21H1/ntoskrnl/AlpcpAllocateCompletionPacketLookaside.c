/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x140643F5C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140676454 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140676D04 (AlpcpAssociateIoCompletionPort.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     IopFreeMiniCompletionPacket @ 0x14062CC50 (IopFreeMiniCompletionPacket.c)
 *     IoAllocateMiniCompletionPacket @ 0x140644030 (IoAllocateMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char *PoolWithTag; // rax
  char *v7; // rbx
  __int64 v8; // rdi
  _QWORD *i; // rsi
  __int64 MiniCompletionPacket; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v14; // rsi
  __int64 v15; // rcx

  v3 = a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * a1 + 56, 0x6E496C41u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24 * v3 + 56);
    *(_QWORD *)v7 = 0LL;
    v8 = 0LL;
    *((_DWORD *)v7 + 2) = v3;
    *((_QWORD *)v7 + 5) = a2;
    *((_QWORD *)v7 + 6) = a3;
    if ( !(_DWORD)v3 )
      return v7;
    for ( i = v7 + 56; ; i += 3 )
    {
      i[2] = v7;
      MiniCompletionPacket = IoAllocateMiniCompletionPacket(AlpcpLookasidePacketCallbackRoutine, i);
      i[1] = MiniCompletionPacket;
      if ( !MiniCompletionPacket )
        break;
      v8 = (unsigned int)(v8 + 1);
      *i = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = i;
      if ( (unsigned int)v8 >= (unsigned int)v3 )
        return v7;
    }
    if ( (_DWORD)v8 )
    {
      v14 = &v7[16 * v8 + 64 + 8 * v8];
      do
      {
        v14 -= 24;
        v15 = *(_QWORD *)v14;
        *(_QWORD *)(v15 + 56) = 0LL;
        IopFreeMiniCompletionPacket((_SLIST_ENTRY *)v15, v11, v12);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}

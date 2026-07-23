/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x1406ABE0C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1405D96A0 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406A92A4 (AlpcpAssociateIoCompletionPort.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IoAllocateMiniCompletionPacket @ 0x1406ABEE0 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x1406D3AE0 (IopFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char *PoolWithTag; // rax
  char *v7; // rbx
  __int64 v8; // rdi
  _QWORD *i; // rsi
  __int64 MiniCompletionPacket; // rax
  char *v12; // rsi
  _QWORD *v13; // rcx

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
      v12 = &v7[16 * v8 + 64 + 8 * v8];
      do
      {
        v12 -= 24;
        v13 = *(_QWORD **)v12;
        v13[7] = 0LL;
        IopFreeMiniCompletionPacket(v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}

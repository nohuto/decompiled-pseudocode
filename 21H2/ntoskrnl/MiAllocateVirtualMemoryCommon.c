/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x1405F3A38
 * Callers:
 *     MmAllocateUserStack @ 0x1405F3970 (MmAllocateUserStack.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406E9150 (MiAllocateVirtualMemoryPrepare.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        int a1,
        _QWORD *a2,
        int a3,
        _QWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v13; // rsi
  int VirtualMemoryPrepare; // ebx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  int v19; // eax
  unsigned __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v23[22]; // [rsp+98h] [rbp-70h] BYREF

  memset(v23, 0, 0x80uLL);
  v13 = 0LL;
  v21 = 0LL;
  Object[0] = 0LL;
  v20 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           a1,
                           *a2,
                           a3,
                           *a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)v23,
                           (__int64)Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_19;
  v16 = *(_QWORD *)(a7 + 24);
  if ( v16 )
  {
    if ( v16 == -3 )
    {
      v13 = 1LL;
    }
    else
    {
      LOBYTE(v15) = a8;
      v19 = PsReferencePartitionByHandle(v16, 2LL, v15, 1633054029LL, &v20);
      v13 = v20;
      VirtualMemoryPrepare = v19;
      if ( v19 < 0 )
        goto LABEL_19;
    }
  }
  if ( *(_BYTE *)(a7 + 48) != 1 || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 >= 0 )
    {
      VirtualMemoryPrepare = MiAllocateVirtualMemory(v23, v13, &v21);
    }
    else
    {
      v20 = 0LL;
      if ( (v23[7] & 0x4000000000000000LL) != 0 )
      {
        HIDWORD(v23[9]) = 536870913;
        v23[10] = &v20;
      }
      v17 = MiAllocateVirtualMemory(v23, 0LL, &v21);
      v23[10] = 0LL;
      VirtualMemoryPrepare = v17;
      HIDWORD(v23[9]) = 0;
      if ( v17 >= 0 )
        VirtualMemoryPrepare = 0;
    }
    if ( VirtualMemoryPrepare >= 0 )
    {
      *a2 = v21;
      *a4 = v23[3];
      goto LABEL_11;
    }
  }
  else
  {
    VirtualMemoryPrepare = -1073741811;
  }
LABEL_19:
  if ( v23[0] )
    ++dword_140C4E82C;
  else
    ++dword_140C4E828;
LABEL_11:
  if ( v13 >= 2 )
    PsDereferencePartition(v13);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}

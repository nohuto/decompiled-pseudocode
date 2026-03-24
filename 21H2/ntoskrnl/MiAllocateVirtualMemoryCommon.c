/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x1406944E8
 * Callers:
 *     MmAllocateUserStack @ 0x140694420 (MmAllocateUserStack.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405F99F0 (MiAllocateVirtualMemoryPrepare.c)
 *     PsReferencePartitionByHandle @ 0x140692204 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        signed int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v13; // rsi
  int v14; // ebx
  __int64 v15; // r8
  ULONG_PTR v16; // rcx
  int v17; // eax
  int v19; // eax
  unsigned __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v23[22]; // [rsp+98h] [rbp-70h] BYREF

  memset(v23, 0, 0x80uLL);
  v13 = 0LL;
  v21 = 0LL;
  Object = 0LL;
  v20 = 0LL;
  v14 = MiAllocateVirtualMemoryPrepare(a1, *a2, a3, *a4, a5, a6, a7, a8, a9, a10, a11, (__int64)v23, &Object);
  if ( v14 < 0 )
    goto LABEL_19;
  v16 = *(_QWORD *)(a7 + 24);
  if ( v16 )
  {
    if ( v16 == -3LL )
    {
      v13 = 1LL;
    }
    else
    {
      LOBYTE(v15) = a8;
      v19 = PsReferencePartitionByHandle(v16, 2LL, v15, 0x61566D4Du, &v20);
      v13 = v20;
      v14 = v19;
      if ( v19 < 0 )
        goto LABEL_19;
    }
  }
  if ( *(_BYTE *)(a7 + 48) != 1 || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 >= 0 )
    {
      v14 = MiAllocateVirtualMemory((__int64)v23, (_QWORD *)v13, &v21);
    }
    else
    {
      v20 = 0LL;
      if ( (v23[7] & 0x4000000000000000LL) != 0 )
      {
        HIDWORD(v23[9]) = 536870913;
        v23[10] = &v20;
      }
      v17 = MiAllocateVirtualMemory((__int64)v23, 0LL, &v21);
      v23[10] = 0LL;
      v14 = v17;
      HIDWORD(v23[9]) = 0;
      if ( v17 >= 0 )
        v14 = 0;
    }
    if ( v14 >= 0 )
    {
      *a2 = v21;
      *a4 = v23[3];
      goto LABEL_11;
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_19:
  if ( v23[0] )
    ++dword_140C4E7EC;
  else
    ++dword_140C4E7E8;
LABEL_11:
  if ( v13 >= 2 )
    PsDereferencePartition(v13);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v14;
}

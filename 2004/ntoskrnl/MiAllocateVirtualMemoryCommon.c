/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x1406B66C4
 * Callers:
 *     MmAllocateUserStack @ 0x1406B65FC (MmAllocateUserStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PsReferencePartitionByHandle @ 0x14061CDA4 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406B7010 (MiAllocateVirtualMemoryPrepare.c)
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
  ULONG_PTR v15; // rcx
  int v16; // eax
  int v18; // eax
  unsigned __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v22[22]; // [rsp+98h] [rbp-70h] BYREF

  memset(v22, 0, 0x80uLL);
  v13 = 0LL;
  v20 = 0LL;
  Object[0] = 0LL;
  v19 = 0LL;
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
                           (__int64)v22,
                           (__int64)Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_19;
  v15 = *(_QWORD *)(a7 + 24);
  if ( v15 )
  {
    if ( v15 == -3LL )
    {
      v13 = 1LL;
    }
    else
    {
      v18 = PsReferencePartitionByHandle(v15, 2, a8, 0x61566D4Du, &v19);
      v13 = v19;
      VirtualMemoryPrepare = v18;
      if ( v18 < 0 )
        goto LABEL_19;
    }
  }
  if ( *(_BYTE *)(a7 + 48) != 1 || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 >= 0 )
    {
      VirtualMemoryPrepare = MiAllocateVirtualMemory(v22, (__int64 *)v13, &v20);
    }
    else
    {
      v19 = 0LL;
      if ( (v22[7] & 0x4000000000000000LL) != 0 )
      {
        HIDWORD(v22[9]) = 536870913;
        v22[10] = (__int64)&v19;
      }
      v16 = MiAllocateVirtualMemory(v22, 0LL, &v20);
      v22[10] = 0LL;
      VirtualMemoryPrepare = v16;
      HIDWORD(v22[9]) = 0;
      if ( v16 >= 0 )
        VirtualMemoryPrepare = 0;
    }
    if ( VirtualMemoryPrepare >= 0 )
    {
      *a2 = v20;
      *a4 = v22[3];
      goto LABEL_11;
    }
  }
  else
  {
    VirtualMemoryPrepare = -1073741811;
  }
LABEL_19:
  if ( v22[0] )
    ++dword_140C4E5EC;
  else
    ++dword_140C4E5E8;
LABEL_11:
  if ( v13 >= 2 )
    PsDereferencePartition(v13);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}

/*
 * XREFs of MmAllocateVirtualMemory @ 0x1406E8C40
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     WbAllocateMemoryBlock @ 0x1405E5A24 (WbAllocateMemoryBlock.c)
 *     NtAllocateVirtualMemoryEx @ 0x1406E8BE0 (NtAllocateVirtualMemoryEx.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1406E8E98 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406E9150 (MiAllocateVirtualMemoryPrepare.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(
        int a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        int a5,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        unsigned __int8 a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int MapExtendedParameters; // ebx
  unsigned __int64 v20; // [rsp+78h] [rbp-130h] BYREF
  __int64 v21; // [rsp+80h] [rbp-128h] BYREF
  __int64 v22; // [rsp+88h] [rbp-120h]
  __int64 v23; // [rsp+90h] [rbp-118h]
  PVOID Object; // [rsp+98h] [rbp-110h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD v26[16]; // [rsp+B0h] [rbp-F8h] BYREF
  ULONG_PTR v27[10]; // [rsp+130h] [rbp-78h] BYREF

  memset(v27, 0, 0x48uLL);
  v13 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a8 )
  {
    v14 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  v16 = *a2;
  v22 = *a2;
  v17 = *a3;
  v23 = *a3;
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, (unsigned int)ullMultiplicand, v27);
  if ( MapExtendedParameters >= 0 )
  {
    memset(v26, 0, sizeof(v26));
    v21 = 0LL;
    Object = 0LL;
    v20 = 0LL;
    MapExtendedParameters = MiAllocateVirtualMemoryPrepare(
                              a1,
                              v16,
                              0,
                              v17,
                              a4,
                              a5,
                              (__int64)v27,
                              a8,
                              a9,
                              a10,
                              a11,
                              (__int64)v26,
                              (__int64)&Object);
    if ( MapExtendedParameters < 0 )
      goto LABEL_15;
    if ( v27[3] )
    {
      if ( v27[3] == -3LL )
      {
        v13 = 1LL;
      }
      else
      {
        MapExtendedParameters = PsReferencePartitionByHandle(v27[3], 2LL, a8, 0x61566D4Du, &v20);
        v13 = v20;
        if ( MapExtendedParameters < 0 )
          goto LABEL_15;
      }
    }
    if ( LOBYTE(v27[6]) == 1 && (a4 & 0x20400000) != 0x400000 )
    {
      MapExtendedParameters = -1073741811;
      goto LABEL_29;
    }
    if ( a9 < 0 )
    {
      v25 = 0LL;
      if ( (v26[7] & 0x4000000000000000LL) != 0 )
      {
        v26[10] = &v25;
        HIDWORD(v26[9]) = 536870913;
      }
      MapExtendedParameters = MiAllocateVirtualMemory((__int64)v26, 0LL, &v21);
      v26[10] = 0LL;
      HIDWORD(v26[9]) = 0;
      if ( MapExtendedParameters >= 0 )
        MapExtendedParameters = 0;
    }
    else
    {
      MapExtendedParameters = MiAllocateVirtualMemory((__int64)v26, (_QWORD *)v13, &v21);
    }
    if ( MapExtendedParameters < 0 )
      goto LABEL_29;
    v16 = v21;
    v22 = v21;
    v17 = v26[3];
    v23 = v26[3];
LABEL_15:
    if ( MapExtendedParameters >= 0 )
    {
LABEL_16:
      if ( v13 >= 2 )
        PsDereferencePartition(v13);
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      LODWORD(v20) = MapExtendedParameters;
      if ( MapExtendedParameters >= 0 )
      {
        *a2 = v16;
        *a3 = v17;
      }
      return (unsigned int)MapExtendedParameters;
    }
LABEL_29:
    if ( v26[0] )
      ++dword_140C4E82C;
    else
      ++dword_140C4E828;
    goto LABEL_16;
  }
  return (unsigned int)MapExtendedParameters;
}

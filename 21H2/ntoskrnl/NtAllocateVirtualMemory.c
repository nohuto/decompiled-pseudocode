/*
 * XREFs of NtAllocateVirtualMemory @ 0x1406E9EA0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406E9150 (MiAllocateVirtualMemoryPrepare.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  unsigned __int64 v8; // r14
  char PreviousMode; // bl
  __int64 v10; // rcx
  __int64 v11; // rcx
  PVOID v12; // rdi
  ULONG_PTR v13; // rsi
  NTSTATUS v14; // ebx
  unsigned __int8 v16; // [rsp+70h] [rbp-138h]
  __int64 v17; // [rsp+78h] [rbp-130h] BYREF
  void *v18; // [rsp+80h] [rbp-128h] BYREF
  PVOID v19; // [rsp+88h] [rbp-120h]
  ULONG_PTR v20; // [rsp+90h] [rbp-118h]
  PVOID Object; // [rsp+98h] [rbp-110h] BYREF
  ULONG_PTR v22[10]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v23[16]; // [rsp+100h] [rbp-A8h] BYREF

  v8 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v22, 0, 0x48uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  v12 = *BaseAddress;
  v19 = *BaseAddress;
  v13 = *RegionSize;
  v20 = *RegionSize;
  LODWORD(v22[4]) = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  memset(v23, 0, sizeof(v23));
  v18 = 0LL;
  Object = 0LL;
  v17 = 0LL;
  v14 = MiAllocateVirtualMemoryPrepare(
          (ULONG_PTR)ProcessHandle,
          (unsigned __int64)v12,
          ZeroBits,
          v13,
          AllocationType & 0xFFFFFF80,
          Protect,
          (__int64)v22,
          PreviousMode,
          0,
          0,
          0LL,
          (__int64)v23,
          &Object);
  if ( v14 >= 0 )
  {
    if ( v22[3] )
    {
      if ( v22[3] == -3LL )
      {
        v8 = 1LL;
        v17 = 1LL;
      }
      else
      {
        v14 = PsReferencePartitionByHandle(v22[3], 2LL, v16, 0x61566D4Du, &v17);
        v8 = v17;
        if ( v14 < 0 )
          goto LABEL_13;
      }
    }
    if ( LOBYTE(v22[6]) == 1 && (AllocationType & 0x20400000) != 0x400000 )
    {
      v14 = -1073741811;
LABEL_21:
      if ( v23[0] )
        ++dword_140C4E82C;
      else
        ++dword_140C4E828;
      goto LABEL_14;
    }
    v14 = MiAllocateVirtualMemory((__int64)v23, (_QWORD *)v8, &v18);
    if ( v14 >= 0 )
    {
      v12 = v18;
      v19 = v18;
      v13 = v23[3];
      v20 = v23[3];
    }
  }
LABEL_13:
  if ( v14 < 0 )
    goto LABEL_21;
LABEL_14:
  if ( v8 >= 2 )
    PsDereferencePartition(v8);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v14 >= 0 )
  {
    *BaseAddress = v12;
    *RegionSize = v13;
  }
  return v14;
}

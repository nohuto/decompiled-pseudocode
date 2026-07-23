/*
 * XREFs of IopSetFileMemoryPartitionInformation @ 0x14089444C
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 * Callees:
 *     IopSetTypeSpecificFoExtension @ 0x140236194 (IopSetTypeSpecificFoExtension.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateFileObjectExtension @ 0x1402D0A50 (IopAllocateFileObjectExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopSetFileMemoryPartitionInformation(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  _OWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  PVOID v9; // rbp
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __m128i v12; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0LL;
  Object = 0LL;
  if ( a3 < 0x10 )
    return (unsigned int)-1073741811;
  v12 = *(__m128i *)a2;
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) > 1u )
    return (unsigned int)-1073741811;
  v12.m128i_i8[8] = 0;
  if ( v12.m128i_i32[2] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x66506F49u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v8 = PsReferencePartitionByHandle(*(_QWORD *)a2, 2LL, 0LL, 0x66506F49u, &Object);
      v9 = Object;
      v5 = v8;
      if ( v8 >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x6F466F49u);
        PsDereferencePartition((__int64)v9);
        *(_QWORD *)v7 = v9;
        v7[2] ^= (v7[2] ^ *(unsigned __int8 *)(a2 + 8)) & 1;
        v5 = IopAllocateFileObjectExtension(a1, &v11);
        if ( v5 >= 0 )
        {
          if ( (int)IopSetTypeSpecificFoExtension(v11, 8u, (signed __int64)v7) >= 0 )
          {
            v7 = 0LL;
            v5 = 0;
          }
          else
          {
            v5 = -1073741791;
          }
        }
      }
      if ( v7 )
      {
        if ( *(_QWORD *)v7 )
          ObfDereferenceObjectWithTag(v9, 0x6F466F49u);
        ExFreePoolWithTag(v7, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}

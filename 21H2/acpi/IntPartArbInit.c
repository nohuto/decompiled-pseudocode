/*
 * XREFs of IntPartArbInit @ 0x1C009D7C4
 * Callers:
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C009C294 (ProcessorpSelectProcessorSetFromPartitions.c)
 * Callees:
 *     IntPartAllocateAndZeroMemory @ 0x1C0023F90 (IntPartAllocateAndZeroMemory.c)
 *     IntpReconstructPartitionGroupFromKernel @ 0x1C0024090 (IntpReconstructPartitionGroupFromKernel.c)
 *     IntPartFree @ 0x1C002E8BC (IntPartFree.c)
 *     IntpAdvanceProcessorInPartition @ 0x1C009FBF0 (IntpAdvanceProcessorInPartition.c)
 */

__int64 __fastcall IntPartArbInit(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edi
  _BYTE *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int8 v8; // r10
  char v9; // r10
  _BYTE *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v1 = IntpReconstructPartitionGroupFromKernel(a1, &v10);
  v2 = v1;
  if ( v1 == 259 )
    return v2;
  v3 = v10;
  if ( v1 < 0 )
    goto LABEL_5;
  v4 = (_QWORD *)IntPartAllocateAndZeroMemory((unsigned __int8)v10[2] + 8LL);
  v6 = (__int64)v4;
  if ( !v4 )
  {
    v2 = -1073741670;
LABEL_5:
    if ( v3 )
      IntPartFree(v3);
    return v2;
  }
  v8 = 1;
  for ( *v4 = v3; v8 < v3[2]; v8 = v9 + 1 )
  {
    LOBYTE(v5) = v8;
    IntpAdvanceProcessorInPartition(&v3[16 * v8 + 8], v5, v8 + v6 + 8);
  }
  ProcessorpDefaultIntPartitionArtiber = v6;
  return v2;
}

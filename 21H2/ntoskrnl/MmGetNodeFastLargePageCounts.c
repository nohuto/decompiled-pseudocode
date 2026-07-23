/*
 * XREFs of MmGetNodeFastLargePageCounts @ 0x140547F40
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x14092F428 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1402972D0 (MiPartitionObjectToPartition.c)
 */

unsigned __int64 __fastcall MmGetNodeFastLargePageCounts(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  ULONG_PTR *v5; // rax
  _QWORD *v6; // r9
  __int64 *v7; // r8
  unsigned __int64 i; // rdi
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v10 = 0;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v3 = (KeFeatureBits & 0x2000000000LL) == 0;
  v4 = &MiLargePageSizes[v3];
  do
  {
    if ( *v4 == 512 )
      break;
    v3 = (unsigned int)(v3 + 1);
    ++v4;
  }
  while ( (unsigned int)v3 < 3 );
  if ( (_DWORD)v3 == 3 )
    return 0LL;
  v5 = MiPartitionObjectToPartition((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, 0, &v10);
  if ( !v5 )
    return 0LL;
  v6 = (_QWORD *)(v5[2] + 4544 * v2 + 1072LL * (unsigned int)v3);
  v7 = &MiLargePageSizes[v3];
  for ( i = ((unsigned __int64)*v7 >> 9) * (*v6 + v6[1]); (_DWORD)v3; LODWORD(v3) = v3 - 1 )
  {
    v6 -= 134;
    i += ((unsigned __int64)*--v7 >> 9) * (*v6 + v6[1]);
  }
  if ( v10 )
    PsDereferencePartition(v5[22]);
  return i;
}

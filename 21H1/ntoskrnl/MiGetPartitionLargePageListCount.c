/*
 * XREFs of MiGetPartitionLargePageListCount @ 0x1403EFA88
 * Callers:
 *     MmCreatePartition @ 0x1403C6584 (MmCreatePartition.c)
 *     MiAddPartitionToCrashDump @ 0x140532030 (MiAddPartitionToCrashDump.c)
 *     MiCreatePfnDatabase @ 0x140A446C4 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 MiGetPartitionLargePageListCount()
{
  unsigned int v0; // ecx
  int *v1; // rdx
  __int64 v2; // r8
  int v3; // eax

  v0 = dword_140C4E520;
  if ( !dword_140C4E520 )
  {
    v1 = dword_140C4DEC0;
    v2 = 3LL;
    do
    {
      v3 = *v1++;
      v0 += v3 << 6;
      --v2;
    }
    while ( v2 );
    v0 *= (unsigned __int16)KeNumberNodes;
    dword_140C4E520 = v0;
  }
  return v0;
}

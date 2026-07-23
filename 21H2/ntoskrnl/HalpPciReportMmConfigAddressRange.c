/*
 * XREFs of HalpPciReportMmConfigAddressRange @ 0x140A6D94C
 * Callers:
 *     HalpPciInitSystem @ 0x1409A2410 (HalpPciInitSystem.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ArbInitializeMmConfigRange @ 0x140A6DA28 (ArbInitializeMmConfigRange.c)
 *     ArbDeleteMmConfigRange @ 0x140A6DB54 (ArbDeleteMmConfigRange.c)
 */

__int64 HalpPciReportMmConfigAddressRange()
{
  unsigned int v0; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v2; // rdi
  unsigned int v3; // ecx
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx

  ArbDeleteMmConfigRange();
  v0 = 32 * (HalpPciMcfgTableCount - 1) + 72;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x206C6148u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v0);
  v3 = HalpPciMcfgTableCount;
  *v2 = v0;
  v2[7] = 1;
  v2[9] = v3;
  if ( v3 )
  {
    v4 = v2 + 14;
    v5 = HalpPciMcfgTable + 44;
    v6 = v3;
    do
    {
      *((_BYTE *)v4 - 15) = 3;
      *v4 = *(_QWORD *)v5 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 10) << 20);
      v4 += 4;
      v7 = *(_QWORD *)v5 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 11) << 20) + 0xFFFFF;
      v5 += 16LL;
      *(v4 - 3) = v7;
      --v6;
    }
    while ( v6 );
  }
  v8 = ArbInitializeMmConfigRange(v2);
  ExFreePoolWithTag(v2, 0);
  return v8;
}

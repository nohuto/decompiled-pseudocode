/*
 * XREFs of HalpAuditAllocateRsdtArrayTable @ 0x140A668DC
 * Callers:
 *     HalpAuditEnumerateRsdts @ 0x140A66638 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A666CC (HalpAuditEnumerateRsdtsInRange.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpAuditAllocateRsdtArrayTable(int **a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  int *PoolWithTag; // rax
  int *v5; // rsi
  int *v6; // rdi

  v1 = 0;
  if ( *a1 )
    v3 = 2 * **a1;
  else
    v3 = 4;
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v3 + 8), 0x206C6148u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(32 * v3 + 8));
    *v5 = v3;
    v6 = *a1;
    if ( *a1 )
    {
      v5[1] = v6[1];
      memmove(v5 + 2, v6 + 2, 32LL * (unsigned int)v6[1]);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v5[1] = 0;
    }
    *a1 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}

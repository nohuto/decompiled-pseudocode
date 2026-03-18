/*
 * XREFs of ACPIInternalGrowBuffer @ 0x1C0098CDC
 * Callers:
 *     PnpiGrowResourceList @ 0x1C0098040 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0098224 (PnpiGrowResourceDescriptor.c)
 * Callees:
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIInternalGrowBuffer(const void **a1, unsigned int a2, unsigned int a3)
{
  void *Pool2; // rax
  void *v6; // rcx
  const void *v7; // rdi

  Pool2 = (void *)ExAllocatePool2(256LL, a3, 1383097153LL);
  v6 = (void *)*a1;
  v7 = Pool2;
  if ( Pool2 )
  {
    if ( v6 )
    {
      memmove(Pool2, *a1, a2);
      ExFreePoolWithTag((PVOID)*a1, 0);
    }
    *a1 = v7;
    return 0LL;
  }
  else
  {
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *a1 = 0LL;
    }
    return 3221225626LL;
  }
}

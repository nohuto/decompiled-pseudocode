/*
 * XREFs of MiStoreChargeReservedPages @ 0x1403B7568
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
    return 0LL;
  dword_140C50DC4 |= 4u;
  return 1LL;
}

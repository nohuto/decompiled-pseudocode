/*
 * XREFs of MiStoreChargeReservedPages @ 0x1403B73F8
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x1402E5C90 (MiAcquireNonPagedResources.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
    return 0LL;
  dword_140C50D84 |= 4u;
  return 1LL;
}

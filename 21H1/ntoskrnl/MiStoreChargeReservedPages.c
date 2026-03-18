/*
 * XREFs of MiStoreChargeReservedPages @ 0x1403B2600
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
    return 0LL;
  dword_140C50C84 |= 4u;
  return 1LL;
}

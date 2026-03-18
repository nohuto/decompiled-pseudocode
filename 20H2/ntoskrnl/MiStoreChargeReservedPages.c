/*
 * XREFs of MiStoreChargeReservedPages @ 0x1403B5DB8
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (int)MiAcquireNonPagedResources((unsigned __int64)&MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
    return 0LL;
  dword_140C50C04 |= 4u;
  return 1LL;
}

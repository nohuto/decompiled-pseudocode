/*
 * XREFs of RaidAdapterClearCryptoKeyTable @ 0x1C002A5EC
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000F8FC (RaidAdapterDevicePowerstopAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterClearCryptoKeyTable(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned int i; // r8d
  __int64 v4; // rdx

  v1 = (volatile LONG *)(a1 + 5760);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5760));
  for ( i = 0; i < *(_DWORD *)(a1 + 5744); *(_DWORD *)((v4 << 6) + *(_QWORD *)(a1 + 5752) + 44) = 0 )
    v4 = i++;
  *(_BYTE *)(a1 + 5748) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  return 0LL;
}

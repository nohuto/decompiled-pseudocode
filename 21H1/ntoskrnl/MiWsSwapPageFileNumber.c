/*
 * XREFs of MiWsSwapPageFileNumber @ 0x1402CCF98
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x1402CCEF8 (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405569C0 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x140655F58 (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWsSwapPageFileNumber(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 i; // r8

  v1 = *(_DWORD *)(a1 + 6936);
  v2 = 0;
  if ( !v1 )
    return 16LL;
  for ( i = a1 + 6944; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x10) == 0; i += 8LL )
  {
    if ( ++v2 >= v1 )
      return 16LL;
  }
  return v2;
}

/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1C017CCA4
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C017CB90 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(int *)(a1 + 2328) >= 9216 && (*(_DWORD *)(a1 + 2060) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 2600) >= 0;
  return v1;
}

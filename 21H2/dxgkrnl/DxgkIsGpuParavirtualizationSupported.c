/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1C01F8400
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7F8C (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(int *)(a1 + 2424) >= 9216 && (*(_DWORD *)(a1 + 2156) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 2696) >= 0;
  return v1;
}

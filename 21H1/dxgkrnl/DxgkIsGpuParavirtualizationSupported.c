/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1C0172C30
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0172B1C (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(int *)(a1 + 2304) >= 9216 && (*(_DWORD *)(a1 + 2036) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 2576) >= 0;
  return v1;
}

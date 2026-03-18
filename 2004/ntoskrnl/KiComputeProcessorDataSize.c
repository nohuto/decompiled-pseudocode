/*
 * XREFs of KiComputeProcessorDataSize @ 0x14099B7D0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeProcessorDataSize(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ecx

  v3 = ((a1 << 6) + 51903) & 0xFFFFF000;
  *a3 = v3 + 4096;
  *a2 = v3 + 16304;
  return v3 + 28672;
}

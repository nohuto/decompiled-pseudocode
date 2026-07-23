/*
 * XREFs of KiPublishProcessorFeatures @ 0x140A41A08
 * Callers:
 *     KiSetProcessorSignature @ 0x14099F964 (KiSetProcessorSignature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPublishProcessorFeatures(__int64 a1)
{
  __int64 result; // rax

  MEMORY[0xFFFFF78000000295] = (KeFeatureBits2 & 2) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x2000) == 0 )
    MEMORY[0xFFFFF78000000297] = (KeFeatureBits2 & 0x2000) != 0;
  result = KeLoaderBlock_0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x8000) == 0 )
  {
    result = (*(_QWORD *)(a1 + 34208) >> 33) & 1LL;
    KeSmapEnabled = (*(_QWORD *)(a1 + 34208) >> 33) & 1;
  }
  return result;
}

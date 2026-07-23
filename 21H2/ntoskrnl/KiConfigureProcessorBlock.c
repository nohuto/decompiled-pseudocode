/*
 * XREFs of KiConfigureProcessorBlock @ 0x1409A0554
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B02C0 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  __int16 v7; // bx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // r10

  v1 = *(_QWORD *)(a1 + 192);
  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = *(_QWORD *)(v1 + 136) | (1LL << (v2 & 0x3F));
  _BitScanForward64(&v4, v3);
  v5 = v2 >> 6 << 6;
  *(_QWORD *)(v1 + 136) = v3;
  _BitScanReverse64(&v6, v3);
  *(_DWORD *)(v1 + 172) = KiProcessorNumberToIndexMappingTable[v5 + (unsigned int)v4];
  v7 = *(_WORD *)(v1 + 146);
  *(_DWORD *)(v1 + 176) = KiProcessorNumberToIndexMappingTable[v5 + (unsigned int)v6];
  LOWORD(v4) = *(_WORD *)(v1 + 172);
  *(_WORD *)(v1 + 108) = v4;
  *(_WORD *)(v1 + 110) = v4;
  result = v3 - 1;
  if ( ((v3 - 1) & v3) == 0 )
  {
    result = (unsigned __int16)KeNumberNodes;
    v9 = 0LL;
    if ( KeNumberNodes )
    {
      v10 = KeNodeBlock;
      v11 = (unsigned __int16)KeNumberNodes;
      do
      {
        result = *(unsigned __int16 *)(*v10 + 144);
        if ( (_DWORD)result == v2 >> 6 )
        {
          result = *v10;
          if ( v9 )
            result = v9;
          v9 = result;
          *(_DWORD *)(*v10 + 128) = *(_DWORD *)(result + 128) | (1 << v7);
        }
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  return result;
}

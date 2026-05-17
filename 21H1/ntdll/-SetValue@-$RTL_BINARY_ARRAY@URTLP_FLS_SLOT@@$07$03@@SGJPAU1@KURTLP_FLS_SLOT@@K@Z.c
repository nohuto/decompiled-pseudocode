/*
 * XREFs of ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGJPAU1@KURTLP_FLS_SLOT@@K@Z @ 0x4B2E8936
 * Callers:
 *     ?RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B2E87A1 (-RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z.c)
 * Callees:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z @ 0x4B2DBF63 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z.c)
 */

int __fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // edi
  int v5; // edi
  int v6; // edx
  _DWORD *v7; // esi

  v4 = a2;
  _BitScanReverse(&a2, a2);
  v5 = v4 ^ (1 << a2);
  v6 = a2 - 4;
  v7 = *(_DWORD **)(a1 + 4 * v6);
  if ( !v7 )
  {
    v7 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(a1, v6);
    if ( !v7 )
      return -1073741801;
  }
  v7[v5 + 1] = a3;
  return 0;
}

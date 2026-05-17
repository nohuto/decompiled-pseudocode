/*
 * XREFs of ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x180073838
 * Callers:
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180073680 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 * Callees:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004CF34 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _OWORD *v10; // rax

  v5 = 0;
  _BitScanReverse(&v6, a2);
  v7 = 1 << v6;
  v8 = v6 - 4;
  v9 = a2 ^ v7;
  v10 = *(_OWORD **)(a1 + 8 * v8);
  if ( v10 || (v10 = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(a1, v8)) != 0LL )
    *((_QWORD *)v10 + v9 + 1) = a3;
  else
    return (unsigned int)-1073741801;
  return v5;
}

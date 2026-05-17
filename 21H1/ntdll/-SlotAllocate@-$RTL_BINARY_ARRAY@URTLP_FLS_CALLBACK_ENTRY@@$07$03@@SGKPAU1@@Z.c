/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGKPAU1@@Z @ 0x4B2E55C5
 * Callers:
 *     ?RtlpFlsAlloc@@YGJPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_THREAD_CONTEXT@@P6GXPAX@ZPAK@Z @ 0x4B2E54FB (-RtlpFlsAlloc@@YGJPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_THREAD_CONTEXT@@P6GXPAX@ZPAK@Z.c)
 * Callees:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z @ 0x4B2E5624 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@.c)
 */

int __thiscall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(_DWORD *this)
{
  int v2; // esi
  int *v3; // edi
  unsigned int v4; // eax
  int v5; // edx
  unsigned int v8; // [esp+Ch] [ebp-4h]

  v2 = 0;
  while ( 1 )
  {
    v3 = (int *)this[v2];
    if ( !v3 )
    {
      v3 = (int *)RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::ChunkAllocate(this, v2);
      if ( !v3 )
        return -1;
    }
    v4 = 1 << (v2 + 4);
    v8 = v4;
    if ( *v3 < v4 )
      break;
    if ( (unsigned int)++v2 >= 8 )
      return -1;
  }
  v5 = *v3;
  while ( v3[2 * v5 + 2] )
  {
    v5 = (v4 - 1) & (v5 + 1);
    v4 = v8;
  }
  ++*v3;
  return v5 | (1 << (v2 + 4));
}
